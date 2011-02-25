/*!
	\file ExtractedDeviceState.h
	\author Andrew Kerr <arkerr@gatech.edu>
	\date 31 Jan 2011
	\brief Data structure describing device state with serialization and deserialization procedures
*/

// C++ includes
#include <iomanip>
#include <sstream>
#include <assert.h>
#include <iostream>

// Boost includes
#include  <boost/lexical_cast.hpp>

// Hydrazine includes
#include <hydrazine/implementation/Exception.h>
#include <hydrazine/implementation/debug.h>
#include <hydrazine/interface/Casts.h>

// Ocelot includes
#include <ocelot/util/interface/ExtractedDeviceState.h>

#ifdef REPORT_BASE
#undef REPORT_BASE
#endif

/////////////////////////////////////////////////////////////////////////////////////////////////

// whether debugging messages are printed
#define REPORT_BASE 1

/////////////////////////////////////////////////////////////////////////////////////////////////

template <typename ElemT>
struct HexTo {
	ElemT value;
	operator ElemT() const {return value;}
	friend std::istream& operator>>(std::istream& in, HexTo& out) {
		  in >> std::hex >> out.value;
		  return in;
	}
};

/////////////////////////////////////////////////////////////////////////////////////////////////

static void emitEscapedString(std::ostream &out, const std::string &str) {
	for (std::string::const_iterator c_it = str.begin(); c_it != str.end(); ++c_it) {
		if (*c_it == '"') {
			out << "\\\"";
		}
		else {
			out << *c_it;
		}
	}
}

static std::ostream & serialize(std::ostream &out, const ir::Dim3 &dim) {
	out << "[" << dim.x << ", " << dim.y << ", " << dim.z << "]";
	return out;
}

static void deserialize(ir::Dim3 &dim, const hydrazine::json::Visitor &array) {
	dim.x = array[0];
	dim.y = array[1];
	dim.z = array[2];
}

/*
static void deserialize(std::vector<int> &ints, const hydrazine::json::Visitor &array) {
	hydrazine::json::Array *arrayPtr = static_cast<hydrazine::json::Array *>(array.value);
	for (hydrazine::json::Array::ValueVector::const_iterator it = arrayPtr->begin();
		it != arrayPtr->end(); ++it) {
		
		ints.push_back((*it)->as_integer());
	}
}
*/

static std::ostream & serialize(std::ostream &out, const std::vector<int> &ints) {
	out << "[";
	int n=0;
	for (std::vector<int>::const_iterator i_it = ints.begin(); i_it != ints.end(); ++i_it) {
		out << (n++ ? "," : "") << *i_it;
	}
	out << "]";
	return out;
}

static void serializeBinary(std::ostream &out, const size_t size, const char *bytes, bool raw) {
	const size_t wordSize = 4;
	out << std::setbase(16);
	for (size_t n = 0; n < size; n += wordSize) {
		unsigned int word = 0;
		for (size_t j = 0; j < wordSize; j++) {
			if (j+n < size) {
				word |= (((unsigned int)bytes[j+n]) << (j * 8));
			}
		}
		if (n) {
			out << (raw ? " " : ", ");
		}
		
		out << (raw ? "" : "\"0x") << std::setw(2*wordSize) << std::setfill('0') << word << (raw ? "" : "\"");
		if (!(n + wordSize - 1) % (4 * wordSize)) {
			out << "\n";
		}
	}	
	out << std::setbase(10);
}

static void serializeBinary(std::ostream &out, const size_t size, const char *bytes) {
	out << "{ \"bytes\": " << std::setbase(10) << size << ", \"image\": [\n";
	serializeBinary(out, size, bytes, false);
	out << std::setbase(10) << "\n] }";
}

static void deserializeBinary(util::ByteVector &bytes, const hydrazine::json::Array *arrayPtr, size_t size) {
	size_t wordSize = 4;
	bytes.clear();
	bytes.reserve(size);
	for (hydrazine::json::Array::ValueVector::const_iterator it = arrayPtr->begin(); it != arrayPtr->end(); ++it) {
		std::string wordString = (*it)->as_string();		
		unsigned int word = boost::lexical_cast<HexTo<unsigned int> >(wordString);
		for (size_t i = 0; i < wordSize; i++) {
			bytes.push_back(word & 0x0ff);
			word >>= 8;
		}
	}
	bytes.resize(size, 0);
}

static void deserializeBinary(util::ByteVector &bytes, const hydrazine::json::Visitor &object) {
	size_t size = object.parse<int>("bytes", 0);
	if (hydrazine::json::Value *arrayValue = object.find("image")) {
		deserializeBinary(bytes, static_cast<hydrazine::json::Array *>(arrayValue), size);
	}
}

static void serializeBinary(std::ostream &out, const util::ByteVector &data) {
	serializeBinary(out, data.size(), &data[0]);
}

static void deserializeImage(util::ByteVector &bytes, std::istream &in, size_t size) {
	size_t wordSize = 4;
	bytes.clear();
	bytes.reserve(size);
	while (in.good()) {
		std::string wordString;
		in >> wordString;
		unsigned int word = boost::lexical_cast<HexTo<unsigned int> >(wordString);
		for (size_t i = 0; i < wordSize; i++) {
			bytes.push_back(word & 0x0ff);
			word >>= 8;
		}
	}
	bytes.resize(size, 0);
}

/////////////////////////////////////////////////////////////////////////////////////////////////

util::ExtractedDeviceState::MemoryAllocation::MemoryAllocation(void *ptr, size_t _size, ir::PTXOperand::DataType _dt, char c): 
	devicePointer(ptr), dataType(_dt), data(_size, c) {
}
util::ExtractedDeviceState::MemoryAllocation::MemoryAllocation(): devicePointer(0) {

}

util::ExtractedDeviceState::MemoryAllocation::~MemoryAllocation() {

}

size_t util::ExtractedDeviceState::MemoryAllocation::size() const {
	return data.size();
}

void util::ExtractedDeviceState::MemoryAllocation::serialize(std::ostream &out, const std::string & prefix) const {
	out << "{";
	out << "  \"device\": \"" << (void *)devicePointer << "\",\n";
	out << "  \"type\": \"" << ir::PTXOperand::toString(dataType) << "\",\n";
	
	std::stringstream ss;
	ss << prefix << "_global-" 
		<< ir::PTXOperand::toString(dataType) 
		<< "-" << data.size() 
		<< "-bytes-" << (void *)devicePointer;
	
	out << "  \"size\": " << data.size() << ",\n";
	out << "  \"file\": \"" << ss.str() << "\"";
	out << "}";
	
	std::ofstream file(ss.str());
	::serializeBinary(file, data.size(), &data[0], true);
}

void util::ExtractedDeviceState::MemoryAllocation::deserialize(const hydrazine::json::Visitor &object) {
	devicePointer = hydrazine::bit_cast<void *>(boost::lexical_cast<HexTo<size_t> >(object.parse<std::string>("device", "0x00")));
	dataType = ir::PTXOperand::u64;//type = ir::PTXOperand::fromString(object.parse<std::string>("type", "u64"));
	size_t bytes = object.parse<int>("size", 0);
	
	std::string filename = object.parse<std::string>("file", "");
	if (filename != "") {
		std::ifstream file(filename.c_str());
		deserializeImage(data, file, bytes);
	}
}

/////////////////////////////////////////////////////////////////////////////////////////////////

void util::ExtractedDeviceState::KernelLaunch::serialize(std::ostream &out) const {
	out << "{ \"module\": \"" << moduleName << "\", \"kernel\": \"" << kernelName << "\",\n";
	out << "  \"gridDim\": "; ::serialize(out, gridDim); out << ",\n";
	out << "  \"blockDim\": "; ::serialize(out, blockDim); out << ",\n";
	out << "  \"sharedMemorySize\": " << sharedMemorySize << ",\n";
	out << "  \"parameterMemory\": ";
	serializeBinary(out, parameterMemory);
	out << "}";
}

void util::ExtractedDeviceState::KernelLaunch::deserialize(const hydrazine::json::Visitor &object) {
	moduleName = object.parse<std::string>("module", "unknown-module");
	kernelName = object.parse<std::string>("kernel", "unknown-kernel");
	
	::deserialize(gridDim, object["gridDim"]);
	::deserialize(blockDim, object["blockDim"]);
	sharedMemorySize = object.parse<int>("sharedMemorySize", 0);
	
	if (hydrazine::json::Value *parameterMemory = object.find("parameterMemory")) {
		deserializeBinary(this->parameterMemory, hydrazine::json::Visitor(parameterMemory));
	}
}

/////////////////////////////////////////////////////////////////////////////////////////////////

util::ExtractedDeviceState::Module::Module() {

}

util::ExtractedDeviceState::Module::~Module() {
	clear();
}

void util::ExtractedDeviceState::Module::clear() {
	for (GlobalVariableMap::iterator v_it = globalVariables.begin(); 
		v_it != globalVariables.end(); ++v_it ) {
		delete v_it->second;
	}
	globalVariables.clear();
}

void util::ExtractedDeviceState::Module::serializeTexture(
	ir::Texture &texture, 
	std::ostream &out, 
	const std::string & prefix) const {

	std::vector<int> bits;
	bits.push_back(texture.x);
	bits.push_back(texture.y);
	bits.push_back(texture.z);
	bits.push_back(texture.w);

	out << "{\n";
	out << "  \"name\": \"" << texture.name << "\",\n";
	out << "  \"bits\": " << ::serialize(out, bits) << ",\n";
	out << "  \"normalize\": " << (texture.normalize ? "true" : "false") << ",\n";
	out << "  \"normalizedFloat\": " << (texture.normalizedFloat ? "true" : "false") << ",\n";
	out << "  \"size\": " << ::serialize(out, texture.size) << ",\n";
	out << "  \"type\": \"" << ir::Texture::toString(texture.type) << "\",\n";
	out << "  \"addressMode\": [ ";
	for (int i = 0; i < 3; i++) {
		out << (i ? ", " : "") << ir::Texture::toString(texture.addressMode[i]);
	}
	out << "  ],\n";
	out << "  \"interpolation\": \"" << ir::Texture::toString(texture.interpolation) << "\",\n";
	out << "  \"data\": \"" << (const void *)texture.data << "\"\n";
	out << "}\n";
}

void util::ExtractedDeviceState::Module::serialize(std::ostream &out, const std::string & prefix) const {
	out << "{\n";
	out << "  \"name\": \"" << name << "\",\n";
	out << "  \"ptxFile\": \"";
	emitEscapedString(out, ptxFile);
	out << "\"";
	if (globalVariables.size()) {
		out << ",\n  \"globals\": {\n";
		int n = 0;
		for (GlobalVariableMap::const_iterator v_it = globalVariables.begin(); 
			v_it != globalVariables.end(); ++v_it ) {
			if (!n++) { out << ",\n"; }
			out << "    \"" << v_it->first << "\": ";
			v_it->second->serialize(out, prefix);
		}
		out << "}\n";
	}
	if (textures.size()) {
		out << ",\n  \"textures\": {\n";
		int n = 0;
		for (TextureMap::const_iterator t_it = textures.begin();
			t_it != textures.end(); ++t_it) {
				if (!n++) { out << ",\n"; }
			out << "   \"" << t_it->first << "\": ";
			serializeTexture(*(t_it->second), out, prefix);
		}
		out << "}\n";
	}
	out << "}\n";
}

void util::ExtractedDeviceState::Module::deserialize(const hydrazine::json::Visitor &object) {
	name = object.parse<std::string>("name", "module");
	ptxFile = object.parse<std::string>("ptxFile", "module.ptx");
	if (hydrazine::json::Value *globalsValue = object.find("globals")) {
		hydrazine::json::Object *globals = static_cast<hydrazine::json::Object *>(globalsValue);
		for (hydrazine::json::Object::Dictionary::const_iterator glb_it = globals->begin();
			glb_it != globals->end(); ++glb_it) {
			
			MemoryAllocation *allocation = new MemoryAllocation;
			globalVariables[glb_it->first] = allocation;
			
			allocation->deserialize(hydrazine::json::Visitor(glb_it->second));
		}
	}
	if (hydrazine::json::Value *texturesValue = object.find("textures")) {
		hydrazine::json::Object *textures = static_cast<hydrazine::json::Object *>(texturesValue);
		for (hydrazine::json::Object::Dictionary::const_iterator tex_it = textures->begin();
			tex_it != textures->end(); ++tex_it) {
			
			ir::Texture *texture = new ir::Texture;
			this->textures[tex_it->first] = texture;
			
			deserializeTexture(*texture, hydrazine::json::Visitor(tex_it->second));
		}
	}
}

void util::ExtractedDeviceState::Module::deserializeTexture(
	ir::Texture &texture, 
	const hydrazine::json::Visitor &visitor) {

	// TODO
	assert(0 && "unimplemented yet");
}

/////////////////////////////////////////////////////////////////////////////////////////////////

util::ExtractedDeviceState::Application::Application() {
	name = "cudaApp";
}

void util::ExtractedDeviceState::Application::serialize(std::ostream &out) const {
	out << "{\n\"name\": \"";
	emitEscapedString(out, name);
	out << "\",\n\"cudaDevice\":\""; 
	emitEscapedString(out, cudaDevice);
	out << "\"}";
}

void util::ExtractedDeviceState::Application::deserialize(const hydrazine::json::Visitor &object) {
	name = object.parse<std::string>("name", "cudaApp");
	cudaDevice = object.parse<std::string>("cudaDevice", "gpu");
}

/////////////////////////////////////////////////////////////////////////////////////////////////

//! \brief constructs from an istream - input must be JSON document
util::ExtractedDeviceState::ExtractedDeviceState(std::istream &in) {
	deserialize(in);
}

util::ExtractedDeviceState::ExtractedDeviceState() {

}

util::ExtractedDeviceState::~ExtractedDeviceState() {
	clear();
}

//! \brief store data in host memory to file
void util::ExtractedDeviceState::serialize(std::ostream &out) const {
	// only serialize the module containing the executed kernel

	size_t n = 0;
	
	out << "{\n";
	out << "\"application\":";
	
	application.serialize(out);
	
	out << ",\n\"allocations\": [";
	n = 0;
	for (GlobalAllocationMap::const_iterator alloc_it = globalAllocations.begin(); 
		alloc_it != globalAllocations.end(); ++alloc_it) {
	
		out << (n++ ? ",\n":"");
		alloc_it->second->serialize(out, application.name);
	}
	
	out << "],\n";
	
	out <<" \"kernelLaunch\": ";
	launch.serialize(out);
	out << ",\n";
	
	out << "\"modules\": [";
	
	ModuleMap::const_iterator mod_it = modules.find(launch.moduleName);
	if (mod_it == modules.end()) {
		n = 0;
		for (ModuleMap::const_iterator mod_it = modules.begin(); 
			mod_it != modules.end(); ++mod_it) {
		
			out << (n++ ? ",":"");
			mod_it->second.serialize(out, application.name);
		}
	}
	else {
		mod_it->second.serialize(out);
	}
	out << "]\n";
	out << "}\n";
}

//! \brief load data from JSON file to host memory
void util::ExtractedDeviceState::deserialize(std::istream &in) {
	hydrazine::json::Parser parser;
	hydrazine::json::Object *stateObject = 0;

	{
		stateObject = parser.parse_object(in);
		hydrazine::json::Visitor object(stateObject);
		
		application.deserialize(object["application"]);
		launch.deserialize(object["kernelLaunch"]);
		
		hydrazine::json::Visitor allocationsArray(object["allocations"]);
		for (hydrazine::json::Array::const_iterator alloc_it = allocationsArray.begin_array();
			alloc_it != allocationsArray.end_array(); ++alloc_it) {
			
			MemoryAllocation *allocation = new MemoryAllocation;
			allocation->deserialize(hydrazine::json::Visitor(*alloc_it));
			globalAllocations[allocation->devicePointer] = allocation;
		}
		
		hydrazine::json::Visitor modulesArray(object["modules"]);
		for (hydrazine::json::Array::const_iterator mod_it = modulesArray.begin_array();
			mod_it != modulesArray.end_array(); ++mod_it) {
			
			Module module;
			module.deserialize(hydrazine::json::Visitor(*mod_it));
			modules[module.name] = module;
		}
	}
	
	if (stateObject) delete stateObject;
}

//! \brief clear all data structures
void util::ExtractedDeviceState::clear() {
	for (ModuleMap::iterator mod_it = modules.begin(); mod_it != modules.end(); ++mod_it) {
		mod_it->second.clear();
	}
	modules.clear();
	
	for (GlobalAllocationMap::iterator ga_it = globalAllocations.begin();
		ga_it != globalAllocations.end(); ++ga_it) {
		
		delete ga_it->second;
	}
	globalAllocations.clear();
}
