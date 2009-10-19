# 1 "/tmp/tmpxft_00005f60_00000000-1_dct8x8.cudafe1.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/tmp/tmpxft_00005f60_00000000-1_dct8x8.cudafe1.cpp"
# 1 "dct8x8.cu"
# 233 "/usr/include/c++/4.3/x86_64-linux-gnu/bits/c++config.h" 3
namespace std __attribute__((visibility("default"))) {
# 245 "/usr/include/c++/4.3/x86_64-linux-gnu/bits/c++config.h" 3
}
# 46 "/home/normal/cuda/bin/../include/device_types.h"
# 152 "/usr/lib/gcc/x86_64-linux-gnu/4.3.3/include/stddef.h" 3
typedef long ptrdiff_t;
# 214 "/usr/lib/gcc/x86_64-linux-gnu/4.3.3/include/stddef.h" 3
typedef unsigned long size_t;
# 1 "/home/normal/cuda/bin/../include/crt/host_runtime.h" 1 3
# 80 "/home/normal/cuda/bin/../include/crt/host_runtime.h" 3
# 1 "/home/normal/cuda/bin/../include/cuda_runtime_api.h" 1 3
# 53 "/home/normal/cuda/bin/../include/cuda_runtime_api.h" 3
# 1 "/home/normal/cuda/bin/../include/host_defines.h" 1 3
# 54 "/home/normal/cuda/bin/../include/cuda_runtime_api.h" 2 3
# 1 "/home/normal/cuda/bin/../include/builtin_types.h" 1 3
# 42 "/home/normal/cuda/bin/../include/builtin_types.h" 3
# 1 "/home/normal/cuda/bin/../include/device_types.h" 1 3
# 46 "/home/normal/cuda/bin/../include/device_types.h" 3
enum cudaRoundMode
{
  cudaRoundNearest,
  cudaRoundZero,
  cudaRoundPosInf,
  cudaRoundMinInf
};
# 43 "/home/normal/cuda/bin/../include/builtin_types.h" 2 3
# 1 "/home/normal/cuda/bin/../include/driver_types.h" 1 3
# 90 "/home/normal/cuda/bin/../include/driver_types.h" 3
enum cudaError
{
  cudaSuccess = 0,
  cudaErrorMissingConfiguration = 1,
  cudaErrorMemoryAllocation = 2,
  cudaErrorInitializationError = 3,
  cudaErrorLaunchFailure = 4,
  cudaErrorPriorLaunchFailure = 5,
  cudaErrorLaunchTimeout = 6,
  cudaErrorLaunchOutOfResources = 7,
  cudaErrorInvalidDeviceFunction = 8,
  cudaErrorInvalidConfiguration = 9,
  cudaErrorInvalidDevice = 10,
  cudaErrorInvalidValue = 11,
  cudaErrorInvalidPitchValue = 12,
  cudaErrorInvalidSymbol = 13,
  cudaErrorMapBufferObjectFailed = 14,
  cudaErrorUnmapBufferObjectFailed = 15,
  cudaErrorInvalidHostPointer = 16,
  cudaErrorInvalidDevicePointer = 17,
  cudaErrorInvalidTexture = 18,
  cudaErrorInvalidTextureBinding = 19,
  cudaErrorInvalidChannelDescriptor = 20,
  cudaErrorInvalidMemcpyDirection = 21,
  cudaErrorAddressOfConstant = 22,
  cudaErrorTextureFetchFailed = 23,
  cudaErrorTextureNotBound = 24,
  cudaErrorSynchronizationError = 25,
  cudaErrorInvalidFilterSetting = 26,
  cudaErrorInvalidNormSetting = 27,
  cudaErrorMixedDeviceExecution = 28,
  cudaErrorCudartUnloading = 29,
  cudaErrorUnknown = 30,
  cudaErrorNotYetImplemented = 31,
  cudaErrorMemoryValueTooLarge = 32,
  cudaErrorInvalidResourceHandle = 33,
  cudaErrorNotReady = 34,
  cudaErrorInsufficientDriver = 35,
  cudaErrorSetOnActiveProcess = 36,
  cudaErrorNoDevice = 38,
  cudaErrorStartupFailure = 0x7f,
  cudaErrorApiFailureBase = 10000
};





enum cudaChannelFormatKind
{
  cudaChannelFormatKindSigned = 0,
  cudaChannelFormatKindUnsigned = 1,
  cudaChannelFormatKindFloat = 2,
  cudaChannelFormatKindNone = 3
};





struct cudaChannelFormatDesc
{
  int x;
  int y;
  int z;
  int w;
  enum cudaChannelFormatKind f;
};





struct cudaArray;





enum cudaMemcpyKind
{
  cudaMemcpyHostToHost = 0,
  cudaMemcpyHostToDevice = 1,
  cudaMemcpyDeviceToHost = 2,
  cudaMemcpyDeviceToDevice = 3
};





struct cudaPitchedPtr
{
  void *ptr;
  size_t pitch;
  size_t xsize;
  size_t ysize;
};





struct cudaExtent
{
  size_t width;
  size_t height;
  size_t depth;
};





struct cudaPos
{
  size_t x;
  size_t y;
  size_t z;
};





struct cudaMemcpy3DParms
{
  struct cudaArray *srcArray;
  struct cudaPos srcPos;
  struct cudaPitchedPtr srcPtr;

  struct cudaArray *dstArray;
  struct cudaPos dstPos;
  struct cudaPitchedPtr dstPtr;

  struct cudaExtent extent;
  enum cudaMemcpyKind kind;
};





struct cudaFuncAttributes
{
   size_t sharedSizeBytes;
   size_t constSizeBytes;
   size_t localSizeBytes;
   int maxThreadsPerBlock;
   int numRegs;
   int __cudaReserved[8];
};





enum cudaComputeMode
{
  cudaComputeModeDefault = 0,
  cudaComputeModeExclusive = 1,
  cudaComputeModeProhibited = 2
};






struct cudaDeviceProp
{
  char name[256];
  size_t totalGlobalMem;
  size_t sharedMemPerBlock;
  int regsPerBlock;
  int warpSize;
  size_t memPitch;
  int maxThreadsPerBlock;
  int maxThreadsDim[3];
  int maxGridSize[3];
  int clockRate;
  size_t totalConstMem;
  int major;
  int minor;
  size_t textureAlignment;
  int deviceOverlap;
  int multiProcessorCount;
  int kernelExecTimeoutEnabled;
  int integrated;
  int canMapHostMemory;
  int computeMode;
  int __cudaReserved[36];
};
# 318 "/home/normal/cuda/bin/../include/driver_types.h" 3
typedef enum cudaError cudaError_t;





typedef int cudaStream_t;





typedef int cudaEvent_t;
# 44 "/home/normal/cuda/bin/../include/builtin_types.h" 2 3
# 1 "/home/normal/cuda/bin/../include/texture_types.h" 1 3
# 54 "/home/normal/cuda/bin/../include/texture_types.h" 3
enum cudaTextureAddressMode
{
  cudaAddressModeWrap,
  cudaAddressModeClamp
};


enum cudaTextureFilterMode
{
  cudaFilterModePoint,
  cudaFilterModeLinear
};


enum cudaTextureReadMode
{
  cudaReadModeElementType,
  cudaReadModeNormalizedFloat
};


struct textureReference
{
  int normalized;
  enum cudaTextureFilterMode filterMode;
  enum cudaTextureAddressMode addressMode[3];
  struct cudaChannelFormatDesc channelDesc;
  int __cudaReserved[16];
};
# 45 "/home/normal/cuda/bin/../include/builtin_types.h" 2 3
# 1 "/home/normal/cuda/bin/../include/vector_types.h" 1 3
# 54 "/home/normal/cuda/bin/../include/vector_types.h" 3
struct char1
{
  signed char x;
};


struct uchar1
{
  unsigned char x;
};


struct char2
{
  signed char x, y;
};


struct uchar2
{
  unsigned char x, y;
};


struct char3
{
  signed char x, y, z;
};


struct uchar3
{
  unsigned char x, y, z;
};


struct char4
{
  signed char x, y, z, w;
};


struct uchar4
{
  unsigned char x, y, z, w;
};


struct short1
{
  short x;
};


struct ushort1
{
  unsigned short x;
};


struct short2
{
  short x, y;
};


struct ushort2
{
  unsigned short x, y;
};


struct short3
{
  short x, y, z;
};


struct ushort3
{
  unsigned short x, y, z;
};


struct short4
{
  short x, y, z, w;
};


struct ushort4
{
  unsigned short x, y, z, w;
};


struct int1
{
  int x;
};


struct uint1
{
  unsigned int x;
};


struct int2
{
  int x, y;
};


struct uint2
{
  unsigned int x, y;
};


struct int3
{
  int x, y, z;
};


struct uint3
{
  unsigned int x, y, z;
};


struct int4
{
  int x, y, z, w;
};


struct uint4
{
  unsigned int x, y, z, w;
};


struct long1
{
  long int x;
};


struct ulong1
{
  unsigned long x;
};


struct



      

                                             long2
{
  long int x, y;
};


struct



      

                                                      ulong2
{
  unsigned long int x, y;
};
# 262 "/home/normal/cuda/bin/../include/vector_types.h" 3
struct float1
{
  float x;
};


struct float2
{
  float x, y;
};


struct float3
{
  float x, y, z;
};


struct float4
{
  float x, y, z, w;
};


struct longlong1
{
  long long int x;
};


struct ulonglong1
{
  unsigned long long int x;
};


struct longlong2
{
  long long int x, y;
};


struct ulonglong2
{
  unsigned long long int x, y;
};


struct double1
{
  double x;
};


struct double2
{
  double x, y;
};
# 328 "/home/normal/cuda/bin/../include/vector_types.h" 3
typedef struct char1 char1;

typedef struct uchar1 uchar1;

typedef struct char2 char2;

typedef struct uchar2 uchar2;

typedef struct char3 char3;

typedef struct uchar3 uchar3;

typedef struct char4 char4;

typedef struct uchar4 uchar4;

typedef struct short1 short1;

typedef struct ushort1 ushort1;

typedef struct short2 short2;

typedef struct ushort2 ushort2;

typedef struct short3 short3;

typedef struct ushort3 ushort3;

typedef struct short4 short4;

typedef struct ushort4 ushort4;

typedef struct int1 int1;

typedef struct uint1 uint1;

typedef struct int2 int2;

typedef struct uint2 uint2;

typedef struct int3 int3;

typedef struct uint3 uint3;

typedef struct int4 int4;

typedef struct uint4 uint4;

typedef struct long1 long1;

typedef struct ulong1 ulong1;

typedef struct long2 long2;

typedef struct ulong2 ulong2;

typedef struct long3 long3;

typedef struct ulong3 ulong3;

typedef struct long4 long4;

typedef struct ulong4 ulong4;

typedef struct float1 float1;

typedef struct float2 float2;

typedef struct float3 float3;

typedef struct float4 float4;

typedef struct longlong1 longlong1;

typedef struct ulonglong1 ulonglong1;

typedef struct longlong2 longlong2;

typedef struct ulonglong2 ulonglong2;

typedef struct double1 double1;

typedef struct double2 double2;
# 419 "/home/normal/cuda/bin/../include/vector_types.h" 3
typedef struct dim3 dim3;


struct dim3
{
    unsigned int x, y, z;

    dim3(unsigned int x = 1, unsigned int y = 1, unsigned int z = 1) : x(x), y(y), z(z) {}
    dim3(uint3 v) : x(v.x), y(v.y), z(v.z) {}
    operator uint3(void) { uint3 t; t.x = x; t.y = y; t.z = z; return t; }

};
# 45 "/home/normal/cuda/bin/../include/builtin_types.h" 2 3
# 55 "/home/normal/cuda/bin/../include/cuda_runtime_api.h" 2 3
# 80 "/home/normal/cuda/bin/../include/cuda_runtime_api.h" 3
extern "C" {
# 89 "/home/normal/cuda/bin/../include/cuda_runtime_api.h" 3
extern cudaError_t cudaMalloc3D(struct cudaPitchedPtr* pitchedDevPtr, struct cudaExtent extent);
extern cudaError_t cudaMalloc3DArray(struct cudaArray** arrayPtr, const struct cudaChannelFormatDesc* desc, struct cudaExtent extent);
extern cudaError_t cudaMemset3D(struct cudaPitchedPtr pitchedDevPtr, int value, struct cudaExtent extent);
extern cudaError_t cudaMemcpy3D(const struct cudaMemcpy3DParms *p);
extern cudaError_t cudaMemcpy3DAsync(const struct cudaMemcpy3DParms *p, cudaStream_t stream);
# 102 "/home/normal/cuda/bin/../include/cuda_runtime_api.h" 3
extern cudaError_t cudaMalloc(void **devPtr, size_t size);
extern cudaError_t cudaMallocHost(void **ptr, size_t size);
extern cudaError_t cudaMallocPitch(void **devPtr, size_t *pitch, size_t width, size_t height);
extern cudaError_t cudaMallocArray(struct cudaArray **array, const struct cudaChannelFormatDesc *desc, size_t width, size_t height );
extern cudaError_t cudaFree(void *devPtr);
extern cudaError_t cudaFreeHost(void *ptr);
extern cudaError_t cudaFreeArray(struct cudaArray *array);

extern cudaError_t cudaHostAlloc(void **pHost, size_t bytes, unsigned int flags);
extern cudaError_t cudaHostGetDevicePointer(void **pDevice, void *pHost, unsigned int flags);
# 120 "/home/normal/cuda/bin/../include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemcpy(void *dst, const void *src, size_t count, enum cudaMemcpyKind kind);
extern cudaError_t cudaMemcpyToArray(struct cudaArray *dst, size_t wOffset, size_t hOffset, const void *src, size_t count, enum cudaMemcpyKind kind);
extern cudaError_t cudaMemcpyFromArray(void *dst, const struct cudaArray *src, size_t wOffset, size_t hOffset, size_t count, enum cudaMemcpyKind kind);
extern cudaError_t cudaMemcpyArrayToArray(struct cudaArray *dst, size_t wOffsetDst, size_t hOffsetDst, const struct cudaArray *src, size_t wOffsetSrc, size_t hOffsetSrc, size_t count, enum cudaMemcpyKind kind );
extern cudaError_t cudaMemcpy2D(void *dst, size_t dpitch, const void *src, size_t spitch, size_t width, size_t height, enum cudaMemcpyKind kind);
extern cudaError_t cudaMemcpy2DToArray(struct cudaArray *dst, size_t wOffset, size_t hOffset, const void *src, size_t spitch, size_t width, size_t height, enum cudaMemcpyKind kind);
extern cudaError_t cudaMemcpy2DFromArray(void *dst, size_t dpitch, const struct cudaArray *src, size_t wOffset, size_t hOffset, size_t width, size_t height, enum cudaMemcpyKind kind);
extern cudaError_t cudaMemcpy2DArrayToArray(struct cudaArray *dst, size_t wOffsetDst, size_t hOffsetDst, const struct cudaArray *src, size_t wOffsetSrc, size_t hOffsetSrc, size_t width, size_t height, enum cudaMemcpyKind kind );
extern cudaError_t cudaMemcpyToSymbol(const char *symbol, const void *src, size_t count, size_t offset , enum cudaMemcpyKind kind );
extern cudaError_t cudaMemcpyFromSymbol(void *dst, const char *symbol, size_t count, size_t offset , enum cudaMemcpyKind kind );







extern cudaError_t cudaMemcpyAsync(void *dst, const void *src, size_t count, enum cudaMemcpyKind kind, cudaStream_t stream);
extern cudaError_t cudaMemcpyToArrayAsync(struct cudaArray *dst, size_t wOffset, size_t hOffset, const void *src, size_t count, enum cudaMemcpyKind kind, cudaStream_t stream);
extern cudaError_t cudaMemcpyFromArrayAsync(void *dst, const struct cudaArray *src, size_t wOffset, size_t hOffset, size_t count, enum cudaMemcpyKind kind, cudaStream_t stream);
extern cudaError_t cudaMemcpy2DAsync(void *dst, size_t dpitch, const void *src, size_t spitch, size_t width, size_t height, enum cudaMemcpyKind kind, cudaStream_t stream);
extern cudaError_t cudaMemcpy2DToArrayAsync(struct cudaArray *dst, size_t wOffset, size_t hOffset, const void *src, size_t spitch, size_t width, size_t height, enum cudaMemcpyKind kind, cudaStream_t stream);
extern cudaError_t cudaMemcpy2DFromArrayAsync(void *dst, size_t dpitch, const struct cudaArray *src, size_t wOffset, size_t hOffset, size_t width, size_t height, enum cudaMemcpyKind kind, cudaStream_t stream);
extern cudaError_t cudaMemcpyToSymbolAsync(const char *symbol, const void *src, size_t count, size_t offset, enum cudaMemcpyKind kind, cudaStream_t stream);
extern cudaError_t cudaMemcpyFromSymbolAsync(void *dst, const char *symbol, size_t count, size_t offset, enum cudaMemcpyKind kind, cudaStream_t stream);







extern cudaError_t cudaMemset(void *devPtr, int value, size_t count);
extern cudaError_t cudaMemset2D(void *devPtr, size_t pitch, int value, size_t width, size_t height);







extern cudaError_t cudaGetSymbolAddress(void **devPtr, const char *symbol);
extern cudaError_t cudaGetSymbolSize(size_t *size, const char *symbol);







extern cudaError_t cudaGetDeviceCount(int *count);
extern cudaError_t cudaGetDeviceProperties(struct cudaDeviceProp *prop, int device);
extern cudaError_t cudaChooseDevice(int *device, const struct cudaDeviceProp *prop);
extern cudaError_t cudaSetDevice(int device);
extern cudaError_t cudaGetDevice(int *device);
extern cudaError_t cudaSetValidDevices(int *device_arr, int len);
extern cudaError_t cudaSetDeviceFlags( int flags );







extern cudaError_t cudaBindTexture(size_t *offset, const struct textureReference *texref, const void *devPtr, const struct cudaChannelFormatDesc *desc, size_t size );
extern cudaError_t cudaBindTexture2D(size_t *offset,const struct textureReference *texref,const void *devPtr, const struct cudaChannelFormatDesc *desc,size_t width, size_t height, size_t pitch);
extern cudaError_t cudaBindTextureToArray(const struct textureReference *texref, const struct cudaArray *array, const struct cudaChannelFormatDesc *desc);
extern cudaError_t cudaUnbindTexture(const struct textureReference *texref);
extern cudaError_t cudaGetTextureAlignmentOffset(size_t *offset, const struct textureReference *texref);
extern cudaError_t cudaGetTextureReference(const struct textureReference **texref, const char *symbol);







extern cudaError_t cudaGetChannelDesc(struct cudaChannelFormatDesc *desc, const struct cudaArray *array);
extern struct cudaChannelFormatDesc cudaCreateChannelDesc(int x, int y, int z, int w, enum cudaChannelFormatKind f);







extern cudaError_t cudaGetLastError(void);
extern const char* cudaGetErrorString(cudaError_t error);







extern cudaError_t cudaConfigureCall(dim3 gridDim, dim3 blockDim, size_t sharedMem , cudaStream_t stream );
extern cudaError_t cudaSetupArgument(const void *arg, size_t size, size_t offset);
extern cudaError_t cudaLaunch(const char *entry);
extern cudaError_t cudaFuncGetAttributes(struct cudaFuncAttributes *attr, const char *func);







extern cudaError_t cudaStreamCreate(cudaStream_t *pStream);
extern cudaError_t cudaStreamDestroy(cudaStream_t stream);
extern cudaError_t cudaStreamSynchronize(cudaStream_t stream);
extern cudaError_t cudaStreamQuery(cudaStream_t stream);







extern cudaError_t cudaEventCreate(cudaEvent_t *event);
extern cudaError_t cudaEventCreateWithFlags(cudaEvent_t *event, int flags);
extern cudaError_t cudaEventRecord(cudaEvent_t event, cudaStream_t stream);
extern cudaError_t cudaEventQuery(cudaEvent_t event);
extern cudaError_t cudaEventSynchronize(cudaEvent_t event);
extern cudaError_t cudaEventDestroy(cudaEvent_t event);
extern cudaError_t cudaEventElapsedTime(float *ms, cudaEvent_t start, cudaEvent_t end);







extern cudaError_t cudaSetDoubleForDevice(double *d);
extern cudaError_t cudaSetDoubleForHost(double *d);







extern cudaError_t cudaThreadExit(void);
extern cudaError_t cudaThreadSynchronize(void);







extern cudaError_t cudaDriverGetVersion(int *driverVersion);
extern cudaError_t cudaRuntimeGetVersion(int *runtimeVersion);


}
# 81 "/home/normal/cuda/bin/../include/crt/host_runtime.h" 2 3
# 1 "/home/normal/cuda/bin/../include/crt/storage_class.h" 1 3
# 82 "/home/normal/cuda/bin/../include/crt/host_runtime.h" 2 3
# 216 "/usr/lib/gcc/x86_64-linux-gnu/4.3.3/include/stddef.h" 2 3
# 90 "/home/normal/cuda/bin/../include/driver_types.h"
# 138 "/home/normal/cuda/bin/../include/driver_types.h"
# 150 "/home/normal/cuda/bin/../include/driver_types.h"
# 163 "/home/normal/cuda/bin/../include/driver_types.h"
# 169 "/home/normal/cuda/bin/../include/driver_types.h"
# 181 "/home/normal/cuda/bin/../include/driver_types.h"
# 193 "/home/normal/cuda/bin/../include/driver_types.h"
# 204 "/home/normal/cuda/bin/../include/driver_types.h"
# 215 "/home/normal/cuda/bin/../include/driver_types.h"
# 233 "/home/normal/cuda/bin/../include/driver_types.h"
# 247 "/home/normal/cuda/bin/../include/driver_types.h"
# 259 "/home/normal/cuda/bin/../include/driver_types.h"
# 318 "/home/normal/cuda/bin/../include/driver_types.h"
# 324 "/home/normal/cuda/bin/../include/driver_types.h"
# 330 "/home/normal/cuda/bin/../include/driver_types.h"
# 54 "/home/normal/cuda/bin/../include/texture_types.h"
# 61 "/home/normal/cuda/bin/../include/texture_types.h"
# 68 "/home/normal/cuda/bin/../include/texture_types.h"
# 75 "/home/normal/cuda/bin/../include/texture_types.h"
# 54 "/home/normal/cuda/bin/../include/vector_types.h"
# 60 "/home/normal/cuda/bin/../include/vector_types.h"
# 66 "/home/normal/cuda/bin/../include/vector_types.h"
# 72 "/home/normal/cuda/bin/../include/vector_types.h"
# 78 "/home/normal/cuda/bin/../include/vector_types.h"
# 84 "/home/normal/cuda/bin/../include/vector_types.h"
# 90 "/home/normal/cuda/bin/../include/vector_types.h"
# 96 "/home/normal/cuda/bin/../include/vector_types.h"
# 102 "/home/normal/cuda/bin/../include/vector_types.h"
# 108 "/home/normal/cuda/bin/../include/vector_types.h"
# 114 "/home/normal/cuda/bin/../include/vector_types.h"
# 120 "/home/normal/cuda/bin/../include/vector_types.h"
# 126 "/home/normal/cuda/bin/../include/vector_types.h"
# 132 "/home/normal/cuda/bin/../include/vector_types.h"
# 138 "/home/normal/cuda/bin/../include/vector_types.h"
# 144 "/home/normal/cuda/bin/../include/vector_types.h"
# 150 "/home/normal/cuda/bin/../include/vector_types.h"
# 156 "/home/normal/cuda/bin/../include/vector_types.h"
# 162 "/home/normal/cuda/bin/../include/vector_types.h"
# 168 "/home/normal/cuda/bin/../include/vector_types.h"
# 174 "/home/normal/cuda/bin/../include/vector_types.h"
# 180 "/home/normal/cuda/bin/../include/vector_types.h"
# 186 "/home/normal/cuda/bin/../include/vector_types.h"
# 192 "/home/normal/cuda/bin/../include/vector_types.h"
# 198 "/home/normal/cuda/bin/../include/vector_types.h"
# 204 "/home/normal/cuda/bin/../include/vector_types.h"
# 216 "/home/normal/cuda/bin/../include/vector_types.h"
# 228 "/home/normal/cuda/bin/../include/vector_types.h"
# 262 "/home/normal/cuda/bin/../include/vector_types.h"
# 268 "/home/normal/cuda/bin/../include/vector_types.h"
# 274 "/home/normal/cuda/bin/../include/vector_types.h"
# 280 "/home/normal/cuda/bin/../include/vector_types.h"
# 286 "/home/normal/cuda/bin/../include/vector_types.h"
# 292 "/home/normal/cuda/bin/../include/vector_types.h"
# 298 "/home/normal/cuda/bin/../include/vector_types.h"
# 304 "/home/normal/cuda/bin/../include/vector_types.h"
# 310 "/home/normal/cuda/bin/../include/vector_types.h"
# 316 "/home/normal/cuda/bin/../include/vector_types.h"
# 328 "/home/normal/cuda/bin/../include/vector_types.h"
# 330 "/home/normal/cuda/bin/../include/vector_types.h"
# 332 "/home/normal/cuda/bin/../include/vector_types.h"
# 334 "/home/normal/cuda/bin/../include/vector_types.h"
# 336 "/home/normal/cuda/bin/../include/vector_types.h"
# 338 "/home/normal/cuda/bin/../include/vector_types.h"
# 340 "/home/normal/cuda/bin/../include/vector_types.h"
# 342 "/home/normal/cuda/bin/../include/vector_types.h"
# 344 "/home/normal/cuda/bin/../include/vector_types.h"
# 346 "/home/normal/cuda/bin/../include/vector_types.h"
# 348 "/home/normal/cuda/bin/../include/vector_types.h"
# 350 "/home/normal/cuda/bin/../include/vector_types.h"
# 352 "/home/normal/cuda/bin/../include/vector_types.h"
# 354 "/home/normal/cuda/bin/../include/vector_types.h"
# 356 "/home/normal/cuda/bin/../include/vector_types.h"
# 358 "/home/normal/cuda/bin/../include/vector_types.h"
# 360 "/home/normal/cuda/bin/../include/vector_types.h"
# 362 "/home/normal/cuda/bin/../include/vector_types.h"
# 364 "/home/normal/cuda/bin/../include/vector_types.h"
# 366 "/home/normal/cuda/bin/../include/vector_types.h"
# 368 "/home/normal/cuda/bin/../include/vector_types.h"
# 370 "/home/normal/cuda/bin/../include/vector_types.h"
# 372 "/home/normal/cuda/bin/../include/vector_types.h"
# 374 "/home/normal/cuda/bin/../include/vector_types.h"
# 376 "/home/normal/cuda/bin/../include/vector_types.h"
# 378 "/home/normal/cuda/bin/../include/vector_types.h"
# 380 "/home/normal/cuda/bin/../include/vector_types.h"
# 382 "/home/normal/cuda/bin/../include/vector_types.h"
# 384 "/home/normal/cuda/bin/../include/vector_types.h"
# 386 "/home/normal/cuda/bin/../include/vector_types.h"
# 388 "/home/normal/cuda/bin/../include/vector_types.h"
# 390 "/home/normal/cuda/bin/../include/vector_types.h"
# 392 "/home/normal/cuda/bin/../include/vector_types.h"
# 394 "/home/normal/cuda/bin/../include/vector_types.h"
# 396 "/home/normal/cuda/bin/../include/vector_types.h"
# 398 "/home/normal/cuda/bin/../include/vector_types.h"
# 400 "/home/normal/cuda/bin/../include/vector_types.h"
# 402 "/home/normal/cuda/bin/../include/vector_types.h"
# 404 "/home/normal/cuda/bin/../include/vector_types.h"
# 406 "/home/normal/cuda/bin/../include/vector_types.h"
# 408 "/home/normal/cuda/bin/../include/vector_types.h"
# 410 "/home/normal/cuda/bin/../include/vector_types.h"
# 419 "/home/normal/cuda/bin/../include/vector_types.h"
# 422 "/home/normal/cuda/bin/../include/vector_types.h"
# 89 "/home/normal/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMalloc3D(cudaPitchedPtr *, cudaExtent);
extern "C" cudaError_t cudaMalloc3DArray(cudaArray **, const cudaChannelFormatDesc *, cudaExtent);
extern "C" cudaError_t cudaMemset3D(cudaPitchedPtr, int, cudaExtent);
extern "C" cudaError_t cudaMemcpy3D(const cudaMemcpy3DParms *);
extern "C" cudaError_t cudaMemcpy3DAsync(const cudaMemcpy3DParms *, cudaStream_t);
# 102 "/home/normal/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMalloc(void **, size_t);
extern "C" cudaError_t cudaMallocHost(void **, size_t);
extern "C" cudaError_t cudaMallocPitch(void **, size_t *, size_t, size_t);
extern "C" cudaError_t cudaMallocArray(cudaArray **, const cudaChannelFormatDesc *, size_t, size_t = (1));
extern "C" cudaError_t cudaFree(void *);
extern "C" cudaError_t cudaFreeHost(void *);
extern "C" cudaError_t cudaFreeArray(cudaArray *);

extern "C" cudaError_t cudaHostAlloc(void **, size_t, unsigned);
extern "C" cudaError_t cudaHostGetDevicePointer(void **, void *, unsigned);
# 120 "/home/normal/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy(void *, const void *, size_t, cudaMemcpyKind);
extern "C" cudaError_t cudaMemcpyToArray(cudaArray *, size_t, size_t, const void *, size_t, cudaMemcpyKind);
extern "C" cudaError_t cudaMemcpyFromArray(void *, const cudaArray *, size_t, size_t, size_t, cudaMemcpyKind);
extern "C" cudaError_t cudaMemcpyArrayToArray(cudaArray *, size_t, size_t, const cudaArray *, size_t, size_t, size_t, cudaMemcpyKind = cudaMemcpyDeviceToDevice);
extern "C" cudaError_t cudaMemcpy2D(void *, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind);
extern "C" cudaError_t cudaMemcpy2DToArray(cudaArray *, size_t, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind);
extern "C" cudaError_t cudaMemcpy2DFromArray(void *, size_t, const cudaArray *, size_t, size_t, size_t, size_t, cudaMemcpyKind);
extern "C" cudaError_t cudaMemcpy2DArrayToArray(cudaArray *, size_t, size_t, const cudaArray *, size_t, size_t, size_t, size_t, cudaMemcpyKind = cudaMemcpyDeviceToDevice);
extern "C" cudaError_t cudaMemcpyToSymbol(const char *, const void *, size_t, size_t = (0), cudaMemcpyKind = cudaMemcpyHostToDevice);
extern "C" cudaError_t cudaMemcpyFromSymbol(void *, const char *, size_t, size_t = (0), cudaMemcpyKind = cudaMemcpyDeviceToHost);
# 137 "/home/normal/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyAsync(void *, const void *, size_t, cudaMemcpyKind, cudaStream_t);
extern "C" cudaError_t cudaMemcpyToArrayAsync(cudaArray *, size_t, size_t, const void *, size_t, cudaMemcpyKind, cudaStream_t);
extern "C" cudaError_t cudaMemcpyFromArrayAsync(void *, const cudaArray *, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t);
extern "C" cudaError_t cudaMemcpy2DAsync(void *, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t);
extern "C" cudaError_t cudaMemcpy2DToArrayAsync(cudaArray *, size_t, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t);
extern "C" cudaError_t cudaMemcpy2DFromArrayAsync(void *, size_t, const cudaArray *, size_t, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t);
extern "C" cudaError_t cudaMemcpyToSymbolAsync(const char *, const void *, size_t, size_t, cudaMemcpyKind, cudaStream_t);
extern "C" cudaError_t cudaMemcpyFromSymbolAsync(void *, const char *, size_t, size_t, cudaMemcpyKind, cudaStream_t);
# 152 "/home/normal/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset(void *, int, size_t);
extern "C" cudaError_t cudaMemset2D(void *, size_t, int, size_t, size_t);
# 161 "/home/normal/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetSymbolAddress(void **, const char *);
extern "C" cudaError_t cudaGetSymbolSize(size_t *, const char *);
# 170 "/home/normal/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetDeviceCount(int *);
extern "C" cudaError_t cudaGetDeviceProperties(cudaDeviceProp *, int);
extern "C" cudaError_t cudaChooseDevice(int *, const cudaDeviceProp *);
extern "C" cudaError_t cudaSetDevice(int);
extern "C" cudaError_t cudaGetDevice(int *);
extern "C" cudaError_t cudaSetValidDevices(int *, int);
extern "C" cudaError_t cudaSetDeviceFlags(int);
# 184 "/home/normal/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaBindTexture(size_t *, const textureReference *, const void *, const cudaChannelFormatDesc *, size_t = (((2147483647) * 2U) + 1U));
extern "C" cudaError_t cudaBindTexture2D(size_t *, const textureReference *, const void *, const cudaChannelFormatDesc *, size_t, size_t, size_t);
extern "C" cudaError_t cudaBindTextureToArray(const textureReference *, const cudaArray *, const cudaChannelFormatDesc *);
extern "C" cudaError_t cudaUnbindTexture(const textureReference *);
extern "C" cudaError_t cudaGetTextureAlignmentOffset(size_t *, const textureReference *);
extern "C" cudaError_t cudaGetTextureReference(const textureReference **, const char *);
# 197 "/home/normal/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetChannelDesc(cudaChannelFormatDesc *, const cudaArray *);
extern "C" cudaChannelFormatDesc cudaCreateChannelDesc(int, int, int, int, cudaChannelFormatKind);
# 206 "/home/normal/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetLastError();
extern "C" const char *cudaGetErrorString(cudaError_t);
# 215 "/home/normal/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaConfigureCall(dim3, dim3, size_t = (0), cudaStream_t = (0));
extern "C" cudaError_t cudaSetupArgument(const void *, size_t, size_t);
extern "C" cudaError_t cudaLaunch(const char *);
extern "C" cudaError_t cudaFuncGetAttributes(cudaFuncAttributes *, const char *);
# 226 "/home/normal/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamCreate(cudaStream_t *);
extern "C" cudaError_t cudaStreamDestroy(cudaStream_t);
extern "C" cudaError_t cudaStreamSynchronize(cudaStream_t);
extern "C" cudaError_t cudaStreamQuery(cudaStream_t);
# 237 "/home/normal/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventCreate(cudaEvent_t *);
extern "C" cudaError_t cudaEventCreateWithFlags(cudaEvent_t *, int);
extern "C" cudaError_t cudaEventRecord(cudaEvent_t, cudaStream_t);
extern "C" cudaError_t cudaEventQuery(cudaEvent_t);
extern "C" cudaError_t cudaEventSynchronize(cudaEvent_t);
extern "C" cudaError_t cudaEventDestroy(cudaEvent_t);
extern "C" cudaError_t cudaEventElapsedTime(float *, cudaEvent_t, cudaEvent_t);
# 251 "/home/normal/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetDoubleForDevice(double *);
extern "C" cudaError_t cudaSetDoubleForHost(double *);
# 260 "/home/normal/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadExit();
extern "C" cudaError_t cudaThreadSynchronize();
# 269 "/home/normal/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaDriverGetVersion(int *);
extern "C" cudaError_t cudaRuntimeGetVersion(int *);
# 93 "/home/normal/cuda/bin/../include/channel_descriptor.h"
template<class T> inline cudaChannelFormatDesc cudaCreateChannelDesc()
{
return cudaCreateChannelDesc(0, 0, 0, 0, cudaChannelFormatKindNone);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char> ()
{
auto int e = (((int)sizeof(char)) * 8);




return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);

}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< signed char> ()
{
auto int e = (((int)sizeof(signed char)) * 8);

return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned char> ()
{
auto int e = (((int)sizeof(unsigned char)) * 8);

return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char1> ()
{
auto int e = (((int)sizeof(signed char)) * 8);

return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar1> ()
{
auto int e = (((int)sizeof(unsigned char)) * 8);

return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char2> ()
{
auto int e = (((int)sizeof(signed char)) * 8);

return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar2> ()
{
auto int e = (((int)sizeof(unsigned char)) * 8);

return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char4> ()
{
auto int e = (((int)sizeof(signed char)) * 8);

return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar4> ()
{
auto int e = (((int)sizeof(unsigned char)) * 8);

return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short> ()
{
auto int e = (((int)sizeof(short)) * 8);

return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned short> ()
{
auto int e = (((int)sizeof(unsigned short)) * 8);

return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short1> ()
{
auto int e = (((int)sizeof(short)) * 8);

return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort1> ()
{
auto int e = (((int)sizeof(unsigned short)) * 8);

return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short2> ()
{
auto int e = (((int)sizeof(short)) * 8);

return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort2> ()
{
auto int e = (((int)sizeof(unsigned short)) * 8);

return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short4> ()
{
auto int e = (((int)sizeof(short)) * 8);

return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort4> ()
{
auto int e = (((int)sizeof(unsigned short)) * 8);

return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int> ()
{
auto int e = (((int)sizeof(int)) * 8);

return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned> ()
{
auto int e = (((int)sizeof(unsigned)) * 8);

return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int1> ()
{
auto int e = (((int)sizeof(int)) * 8);

return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint1> ()
{
auto int e = (((int)sizeof(unsigned)) * 8);

return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int2> ()
{
auto int e = (((int)sizeof(int)) * 8);

return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint2> ()
{
auto int e = (((int)sizeof(unsigned)) * 8);

return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int4> ()
{
auto int e = (((int)sizeof(int)) * 8);

return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint4> ()
{
auto int e = (((int)sizeof(unsigned)) * 8);

return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned);
}
# 337 "/home/normal/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float> ()
{
auto int e = (((int)sizeof(float)) * 8);

return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float1> ()
{
auto int e = (((int)sizeof(float)) * 8);

return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float2> ()
{
auto int e = (((int)sizeof(float)) * 8);

return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindFloat);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float4> ()
{
auto int e = (((int)sizeof(float)) * 8);

return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindFloat);
}
# 54 "/home/normal/cuda/bin/../include/driver_functions.h"
static inline cudaPitchedPtr make_cudaPitchedPtr(void *d, size_t p, size_t xsz, size_t ysz)
{
auto cudaPitchedPtr s;

(s.ptr) = d;
(s.pitch) = p;
(s.xsize) = xsz;
(s.ysize) = ysz;

return s;
}

static inline cudaPos make_cudaPos(size_t x, size_t y, size_t z)
{
auto cudaPos p;

(p.x) = x;
(p.y) = y;
(p.z) = z;

return p;
}

static inline cudaExtent make_cudaExtent(size_t w, size_t h, size_t d)
{
auto cudaExtent e;

(e.width) = w;
(e.height) = h;
(e.depth) = d;

return e;
}
# 54 "/home/normal/cuda/bin/../include/vector_functions.h"
static inline char1 make_char1(signed char x)
{
auto char1 t; (t.x) = x; return t;
}

static inline uchar1 make_uchar1(unsigned char x)
{
auto uchar1 t; (t.x) = x; return t;
}

static inline char2 make_char2(signed char x, signed char y)
{
auto char2 t; (t.x) = x; (t.y) = y; return t;
}

static inline uchar2 make_uchar2(unsigned char x, unsigned char y)
{
auto uchar2 t; (t.x) = x; (t.y) = y; return t;
}

static inline char3 make_char3(signed char x, signed char y, signed char z)
{
auto char3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
}

static inline uchar3 make_uchar3(unsigned char x, unsigned char y, unsigned char z)
{
auto uchar3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
}

static inline char4 make_char4(signed char x, signed char y, signed char z, signed char w)
{
auto char4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
}

static inline uchar4 make_uchar4(unsigned char x, unsigned char y, unsigned char z, unsigned char w)
{
auto uchar4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
}

static inline short1 make_short1(short x)
{
auto short1 t; (t.x) = x; return t;
}

static inline ushort1 make_ushort1(unsigned short x)
{
auto ushort1 t; (t.x) = x; return t;
}

static inline short2 make_short2(short x, short y)
{
auto short2 t; (t.x) = x; (t.y) = y; return t;
}

static inline ushort2 make_ushort2(unsigned short x, unsigned short y)
{
auto ushort2 t; (t.x) = x; (t.y) = y; return t;
}

static inline short3 make_short3(short x, short y, short z)
{
auto short3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
}

static inline ushort3 make_ushort3(unsigned short x, unsigned short y, unsigned short z)
{
auto ushort3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
}

static inline short4 make_short4(short x, short y, short z, short w)
{
auto short4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
}

static inline ushort4 make_ushort4(unsigned short x, unsigned short y, unsigned short z, unsigned short w)
{
auto ushort4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
}

static inline int1 make_int1(int x)
{
auto int1 t; (t.x) = x; return t;
}

static inline uint1 make_uint1(unsigned x)
{
auto uint1 t; (t.x) = x; return t;
}

static inline int2 make_int2(int x, int y)
{
auto int2 t; (t.x) = x; (t.y) = y; return t;
}

static inline uint2 make_uint2(unsigned x, unsigned y)
{
auto uint2 t; (t.x) = x; (t.y) = y; return t;
}

static inline int3 make_int3(int x, int y, int z)
{
auto int3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
}

static inline uint3 make_uint3(unsigned x, unsigned y, unsigned z)
{
auto uint3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
}

static inline int4 make_int4(int x, int y, int z, int w)
{
auto int4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
}

static inline uint4 make_uint4(unsigned x, unsigned y, unsigned z, unsigned w)
{
auto uint4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
}

static inline long1 make_long1(long x)
{
auto long1 t; (t.x) = x; return t;
}

static inline ulong1 make_ulong1(unsigned long x)
{
auto ulong1 t; (t.x) = x; return t;
}

static inline long2 make_long2(long x, long y)
{
auto long2 t; (t.x) = x; (t.y) = y; return t;
}

static inline ulong2 make_ulong2(unsigned long x, unsigned long y)
{
auto ulong2 t; (t.x) = x; (t.y) = y; return t;
}
# 218 "/home/normal/cuda/bin/../include/vector_functions.h"
static inline float1 make_float1(float x)
{
auto float1 t; (t.x) = x; return t;
}

static inline float2 make_float2(float x, float y)
{
auto float2 t; (t.x) = x; (t.y) = y; return t;
}

static inline float3 make_float3(float x, float y, float z)
{
auto float3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
}

static inline float4 make_float4(float x, float y, float z, float w)
{
auto float4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
}

static inline longlong1 make_longlong1(long long x)
{
auto longlong1 t; (t.x) = x; return t;
}

static inline ulonglong1 make_ulonglong1(unsigned long long x)
{
auto ulonglong1 t; (t.x) = x; return t;
}

static inline longlong2 make_longlong2(long long x, long long y)
{
auto longlong2 t; (t.x) = x; (t.y) = y; return t;
}

static inline ulonglong2 make_ulonglong2(unsigned long long x, unsigned long long y)
{
auto ulonglong2 t; (t.x) = x; (t.y) = y; return t;
}

static inline double1 make_double1(double x)
{
auto double1 t; (t.x) = x; return t;
}

static inline double2 make_double2(double x, double y)
{
auto double2 t; (t.x) = x; (t.y) = y; return t;
}
# 31 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned char __u_char; }
extern "C" { typedef unsigned short __u_short; }
extern "C" { typedef unsigned __u_int; }
extern "C" { typedef unsigned long __u_long; }


extern "C" { typedef signed char __int8_t; }
extern "C" { typedef unsigned char __uint8_t; }
extern "C" { typedef signed short __int16_t; }
extern "C" { typedef unsigned short __uint16_t; }
extern "C" { typedef signed int __int32_t; }
extern "C" { typedef unsigned __uint32_t; }

extern "C" { typedef signed long __int64_t; }
extern "C" { typedef unsigned long __uint64_t; }
# 53 "/usr/include/bits/types.h" 3
extern "C" { typedef long __quad_t; }
extern "C" { typedef unsigned long __u_quad_t; }
# 134 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __dev_t; }
extern "C" { typedef unsigned __uid_t; }
extern "C" { typedef unsigned __gid_t; }
extern "C" { typedef unsigned long __ino_t; }
extern "C" { typedef unsigned long __ino64_t; }
extern "C" { typedef unsigned __mode_t; }
extern "C" { typedef unsigned long __nlink_t; }
extern "C" { typedef long __off_t; }
extern "C" { typedef long __off64_t; }
extern "C" { typedef int __pid_t; }
extern "C" { typedef struct __fsid_t { int __val[2]; } __fsid_t; }
extern "C" { typedef long __clock_t; }
extern "C" { typedef unsigned long __rlim_t; }
extern "C" { typedef unsigned long __rlim64_t; }
extern "C" { typedef unsigned __id_t; }
extern "C" { typedef long __time_t; }
extern "C" { typedef unsigned __useconds_t; }
extern "C" { typedef long __suseconds_t; }

extern "C" { typedef int __daddr_t; }
extern "C" { typedef long __swblk_t; }
extern "C" { typedef int __key_t; }


extern "C" { typedef int __clockid_t; }


extern "C" { typedef void *__timer_t; }


extern "C" { typedef long __blksize_t; }




extern "C" { typedef long __blkcnt_t; }
extern "C" { typedef long __blkcnt64_t; }


extern "C" { typedef unsigned long __fsblkcnt_t; }
extern "C" { typedef unsigned long __fsblkcnt64_t; }


extern "C" { typedef unsigned long __fsfilcnt_t; }
extern "C" { typedef unsigned long __fsfilcnt64_t; }

extern "C" { typedef long __ssize_t; }



extern "C" { typedef __off64_t __loff_t; }
extern "C" { typedef __quad_t *__qaddr_t; }
extern "C" { typedef char *__caddr_t; }


extern "C" { typedef long __intptr_t; }


extern "C" { typedef unsigned __socklen_t; }
# 61 "/usr/include/time.h" 3
extern "C" { typedef __clock_t clock_t; }
# 77 "/usr/include/time.h" 3
extern "C" { typedef __time_t time_t; }
# 93 "/usr/include/time.h" 3
extern "C" { typedef __clockid_t clockid_t; }
# 105 "/usr/include/time.h" 3
extern "C" { typedef __timer_t timer_t; }
# 121 "/usr/include/time.h" 3
extern "C" { struct timespec {

__time_t tv_sec;
long tv_nsec;
}; }
# 134 "/usr/include/time.h" 3
extern "C" { struct tm {

int tm_sec;
int tm_min;
int tm_hour;
int tm_mday;
int tm_mon;
int tm_year;
int tm_wday;
int tm_yday;
int tm_isdst;


long tm_gmtoff;
const char *tm_zone;




}; }
# 162 "/usr/include/time.h" 3
extern "C" { struct itimerspec {

timespec it_interval;
timespec it_value;
}; }


struct sigevent;
# 175 "/usr/include/time.h" 3
extern "C" { typedef __pid_t pid_t; }
# 184 "/usr/include/time.h" 3
extern "C" __attribute__((__weak__)) clock_t clock() throw();


extern "C" time_t time(time_t *) throw();


extern "C" double difftime(time_t, time_t) throw() __attribute__((__const__));



extern "C" time_t mktime(tm *) throw();
# 200 "/usr/include/time.h" 3
extern "C" size_t strftime(char *__restrict__, size_t, const char *__restrict__, const tm *__restrict__) throw();
# 208 "/usr/include/time.h" 3
extern "C" char *strptime(const char *__restrict__, const char *__restrict__, tm *) throw();
# 40 "/usr/include/xlocale.h" 3
extern "C" { typedef
# 28 "/usr/include/xlocale.h" 3
struct __locale_struct {


struct locale_data *__locales[13];


const unsigned short *__ctype_b;
const int *__ctype_tolower;
const int *__ctype_toupper;


const char *__names[13];
} *__locale_t; }
# 218 "/usr/include/time.h" 3
extern "C" size_t strftime_l(char *__restrict__, size_t, const char *__restrict__, const tm *__restrict__, __locale_t) throw();




extern "C" char *strptime_l(const char *__restrict__, const char *__restrict__, tm *, __locale_t) throw();
# 232 "/usr/include/time.h" 3
extern "C" tm *gmtime(const time_t *) throw();



extern "C" tm *localtime(const time_t *) throw();
# 242 "/usr/include/time.h" 3
extern "C" tm *gmtime_r(const time_t *__restrict__, tm *__restrict__) throw();




extern "C" tm *localtime_r(const time_t *__restrict__, tm *__restrict__) throw();
# 254 "/usr/include/time.h" 3
extern "C" char *asctime(const tm *) throw();


extern "C" char *ctime(const time_t *) throw();
# 265 "/usr/include/time.h" 3
extern "C" char *asctime_r(const tm *__restrict__, char *__restrict__) throw();



extern "C" char *ctime_r(const time_t *__restrict__, char *__restrict__) throw();
# 275 "/usr/include/time.h" 3
extern "C" { extern char *__tzname[2]; }
extern "C" { extern int __daylight; }
extern "C" { extern long __timezone; }




extern "C" { extern char *tzname[2]; }



extern "C" void tzset() throw();



extern "C" { extern int daylight; }
extern "C" { extern long timezone; }
# 297 "/usr/include/time.h" 3
extern "C" int stime(const time_t *) throw();
# 312 "/usr/include/time.h" 3
extern "C" time_t timegm(tm *) throw();


extern "C" time_t timelocal(tm *) throw();


extern "C" int dysize(int) throw() __attribute__((__const__));
# 327 "/usr/include/time.h" 3
extern "C" int nanosleep(const timespec *, timespec *);




extern "C" int clock_getres(clockid_t, timespec *) throw();


extern "C" int clock_gettime(clockid_t, timespec *) throw();


extern "C" int clock_settime(clockid_t, const timespec *) throw();
# 346 "/usr/include/time.h" 3
extern "C" int clock_nanosleep(clockid_t, int, const timespec *, timespec *);




extern "C" int clock_getcpuclockid(pid_t, clockid_t *) throw();




extern "C" int timer_create(clockid_t, sigevent *__restrict__, timer_t *__restrict__) throw();




extern "C" int timer_delete(timer_t) throw();


extern "C" int timer_settime(timer_t, int, const itimerspec *__restrict__, itimerspec *__restrict__) throw();




extern "C" int timer_gettime(timer_t, itimerspec *) throw();



extern "C" int timer_getoverrun(timer_t) throw();
# 389 "/usr/include/time.h" 3
extern "C" { extern int getdate_err; }
# 398 "/usr/include/time.h" 3
extern "C" tm *getdate(const char *);
# 412 "/usr/include/time.h" 3
extern "C" int getdate_r(const char *__restrict__, tm *__restrict__);
# 38 "/usr/include/string.h" 3
extern "C" __attribute__((__weak__)) void *memcpy(void *__restrict__, const void *__restrict__, size_t) throw();




extern "C" void *memmove(void *, const void *, size_t) throw();
# 51 "/usr/include/string.h" 3
extern "C" void *memccpy(void *__restrict__, const void *__restrict__, int, size_t) throw();
# 59 "/usr/include/string.h" 3
extern "C" __attribute__((__weak__)) void *memset(void *, int, size_t) throw();


extern "C" int memcmp(const void *, const void *, size_t) throw() __attribute__((__pure__));



extern "C" void *memchr(const void *, int, size_t) throw() __attribute__((__pure__));
# 73 "/usr/include/string.h" 3
extern "C" void *rawmemchr(const void *, int) throw() __attribute__((__pure__));



extern "C" void *memrchr(const void *, int, size_t) throw() __attribute__((__pure__));
# 84 "/usr/include/string.h" 3
extern "C" char *strcpy(char *__restrict__, const char *__restrict__) throw();


extern "C" char *strncpy(char *__restrict__, const char *__restrict__, size_t) throw();




extern "C" char *strcat(char *__restrict__, const char *__restrict__) throw();


extern "C" char *strncat(char *__restrict__, const char *__restrict__, size_t) throw();



extern "C" int strcmp(const char *, const char *) throw() __attribute__((__pure__));


extern "C" int strncmp(const char *, const char *, size_t) throw() __attribute__((__pure__));



extern "C" int strcoll(const char *, const char *) throw() __attribute__((__pure__));


extern "C" size_t strxfrm(char *__restrict__, const char *__restrict__, size_t) throw();
# 121 "/usr/include/string.h" 3
extern "C" int strcoll_l(const char *, const char *, __locale_t) throw() __attribute__((__pure__));


extern "C" size_t strxfrm_l(char *, const char *, size_t, __locale_t) throw();
# 130 "/usr/include/string.h" 3
extern "C" char *strdup(const char *) throw() __attribute__((__malloc__));
# 138 "/usr/include/string.h" 3
extern "C" char *strndup(const char *, size_t) throw() __attribute__((__malloc__));
# 167 "/usr/include/string.h" 3
extern "C" char *strchr(const char *, int) throw() __attribute__((__pure__));


extern "C" char *strrchr(const char *, int) throw() __attribute__((__pure__));
# 177 "/usr/include/string.h" 3
extern "C" char *strchrnul(const char *, int) throw() __attribute__((__pure__));
# 184 "/usr/include/string.h" 3
extern "C" size_t strcspn(const char *, const char *) throw() __attribute__((__pure__));



extern "C" size_t strspn(const char *, const char *) throw() __attribute__((__pure__));


extern "C" char *strpbrk(const char *, const char *) throw() __attribute__((__pure__));


extern "C" char *strstr(const char *, const char *) throw() __attribute__((__pure__));




extern "C" char *strtok(char *__restrict__, const char *__restrict__) throw();
# 205 "/usr/include/string.h" 3
extern "C" char *__strtok_r(char *__restrict__, const char *__restrict__, char **__restrict__) throw();




extern "C" char *strtok_r(char *__restrict__, const char *__restrict__, char **__restrict__) throw();
# 217 "/usr/include/string.h" 3
extern "C" char *strcasestr(const char *, const char *) throw() __attribute__((__pure__));
# 225 "/usr/include/string.h" 3
extern "C" void *memmem(const void *, size_t, const void *, size_t) throw() __attribute__((__pure__));
# 231 "/usr/include/string.h" 3
extern "C" void *__mempcpy(void *__restrict__, const void *__restrict__, size_t) throw();


extern "C" void *mempcpy(void *__restrict__, const void *__restrict__, size_t) throw();
# 242 "/usr/include/string.h" 3
extern "C" size_t strlen(const char *) throw() __attribute__((__pure__));
# 249 "/usr/include/string.h" 3
extern "C" size_t strnlen(const char *, size_t) throw() __attribute__((__pure__));
# 256 "/usr/include/string.h" 3
extern "C" char *strerror(int) throw();
# 281 "/usr/include/string.h" 3
extern "C" char *strerror_r(int, char *, size_t) throw();
# 288 "/usr/include/string.h" 3
extern "C" char *strerror_l(int, __locale_t) throw();
# 294 "/usr/include/string.h" 3
extern "C" void __bzero(void *, size_t) throw();



extern "C" void bcopy(const void *, void *, size_t) throw();



extern "C" void bzero(void *, size_t) throw();


extern "C" int bcmp(const void *, const void *, size_t) throw() __attribute__((__pure__));



extern "C" char *index(const char *, int) throw() __attribute__((__pure__));



extern "C" char *rindex(const char *, int) throw() __attribute__((__pure__));




extern "C" int ffs(int) throw() __attribute__((__const__));




extern "C" int ffsl(long) throw() __attribute__((__const__));

extern "C" int ffsll(long long) throw() __attribute__((__const__));
# 331 "/usr/include/string.h" 3
extern "C" int strcasecmp(const char *, const char *) throw() __attribute__((__pure__));



extern "C" int strncasecmp(const char *, const char *, size_t) throw() __attribute__((__pure__));
# 342 "/usr/include/string.h" 3
extern "C" int strcasecmp_l(const char *, const char *, __locale_t) throw() __attribute__((__pure__));



extern "C" int strncasecmp_l(const char *, const char *, size_t, __locale_t) throw() __attribute__((__pure__));
# 354 "/usr/include/string.h" 3
extern "C" char *strsep(char **__restrict__, const char *__restrict__) throw();
# 361 "/usr/include/string.h" 3
extern "C" int strverscmp(const char *, const char *) throw() __attribute__((__pure__));



extern "C" char *strsignal(int) throw();


extern "C" char *__stpcpy(char *__restrict__, const char *__restrict__) throw();

extern "C" char *stpcpy(char *__restrict__, const char *__restrict__) throw();




extern "C" char *__stpncpy(char *__restrict__, const char *__restrict__, size_t) throw();


extern "C" char *stpncpy(char *__restrict__, const char *__restrict__, size_t) throw();




extern "C" char *strfry(char *) throw();


extern "C" void *memfrob(void *, size_t) throw();
# 393 "/usr/include/string.h" 3
extern "C" char *basename(const char *) throw();
# 56 "/home/normal/cuda/bin/../include/common_functions.h"
extern "C" __attribute__((__weak__)) clock_t clock() throw();


extern "C" __attribute__((__weak__)) void *memset(void *, int, size_t) throw();


extern "C" __attribute__((__weak__)) void *memcpy(void *, const void *, size_t) throw();
# 65 "/home/normal/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) int abs(int) throw() __attribute__((__const__));

extern "C" __attribute__((__weak__)) long labs(long) throw() __attribute__((__const__));

extern "C" __attribute__((__weak__)) long long llabs(long long) throw() __attribute__((__const__));

extern "C" __attribute__((__weak__)) double fabs(double) throw() __attribute__((__const__));

extern "C" __attribute__((__weak__)) float fabsf(float) throw() __attribute__((__const__));


extern "C" __attribute__((__weak__)) int min(int, int);

extern "C" __attribute__((__weak__)) unsigned umin(unsigned, unsigned);

extern "C" __attribute__((__weak__)) float fminf(float, float) throw();

extern "C" __attribute__((__weak__)) double fmin(double, double) throw();


extern "C" __attribute__((__weak__)) int max(int, int);

extern "C" __attribute__((__weak__)) unsigned umax(unsigned, unsigned);

extern "C" __attribute__((__weak__)) float fmaxf(float, float) throw();

extern "C" __attribute__((__weak__)) double fmax(double, double) throw();


extern "C" __attribute__((__weak__)) double sin(double) throw();

extern "C" __attribute__((__weak__)) float sinf(float) throw();


extern "C" __attribute__((__weak__)) double cos(double) throw();

extern "C" __attribute__((__weak__)) float cosf(float) throw();


extern "C" __attribute__((__weak__)) void sincos(double, double *, double *) throw();

extern "C" __attribute__((__weak__)) void sincosf(float, float *, float *) throw();


extern "C" __attribute__((__weak__)) double tan(double) throw();

extern "C" __attribute__((__weak__)) float tanf(float) throw();


extern "C" __attribute__((__weak__)) double sqrt(double) throw();

extern "C" __attribute__((__weak__)) float sqrtf(float) throw();


extern "C" __attribute__((__weak__)) double rsqrt(double);

extern "C" __attribute__((__weak__)) float rsqrtf(float);


extern "C" __attribute__((__weak__)) double exp2(double) throw();

extern "C" __attribute__((__weak__)) float exp2f(float) throw();


extern "C" __attribute__((__weak__)) double exp10(double) throw();

extern "C" __attribute__((__weak__)) float exp10f(float) throw();


extern "C" __attribute__((__weak__)) double expm1(double) throw();

extern "C" __attribute__((__weak__)) float expm1f(float) throw();


extern "C" __attribute__((__weak__)) double log2(double) throw();

extern "C" __attribute__((__weak__)) float log2f(float) throw();


extern "C" __attribute__((__weak__)) double log10(double) throw();

extern "C" __attribute__((__weak__)) float log10f(float) throw();


extern "C" __attribute__((__weak__)) double log(double) throw();

extern "C" __attribute__((__weak__)) float logf(float) throw();


extern "C" __attribute__((__weak__)) double log1p(double) throw();

extern "C" __attribute__((__weak__)) float log1pf(float) throw();


extern "C" __attribute__((__weak__)) double floor(double) throw() __attribute__((__const__));

extern "C" __attribute__((__weak__)) float floorf(float) throw() __attribute__((__const__));


extern "C" __attribute__((__weak__)) double exp(double) throw();

extern "C" __attribute__((__weak__)) float expf(float) throw();


extern "C" __attribute__((__weak__)) double cosh(double) throw();

extern "C" __attribute__((__weak__)) float coshf(float) throw();


extern "C" __attribute__((__weak__)) double sinh(double) throw();

extern "C" __attribute__((__weak__)) float sinhf(float) throw();


extern "C" __attribute__((__weak__)) double tanh(double) throw();

extern "C" __attribute__((__weak__)) float tanhf(float) throw();


extern "C" __attribute__((__weak__)) double acosh(double) throw();

extern "C" __attribute__((__weak__)) float acoshf(float) throw();


extern "C" __attribute__((__weak__)) double asinh(double) throw();

extern "C" __attribute__((__weak__)) float asinhf(float) throw();


extern "C" __attribute__((__weak__)) double atanh(double) throw();

extern "C" __attribute__((__weak__)) float atanhf(float) throw();


extern "C" __attribute__((__weak__)) double ldexp(double, int) throw();

extern "C" __attribute__((__weak__)) float ldexpf(float, int) throw();


extern "C" __attribute__((__weak__)) double logb(double) throw();

extern "C" __attribute__((__weak__)) float logbf(float) throw();


extern "C" __attribute__((__weak__)) int ilogb(double) throw();

extern "C" __attribute__((__weak__)) int ilogbf(float) throw();


extern "C" __attribute__((__weak__)) double scalbn(double, int) throw();

extern "C" __attribute__((__weak__)) float scalbnf(float, int) throw();


extern "C" __attribute__((__weak__)) double scalbln(double, long) throw();

extern "C" __attribute__((__weak__)) float scalblnf(float, long) throw();


extern "C" __attribute__((__weak__)) double frexp(double, int *) throw();

extern "C" __attribute__((__weak__)) float frexpf(float, int *) throw();


extern "C" __attribute__((__weak__)) double round(double) throw() __attribute__((__const__));

extern "C" __attribute__((__weak__)) float roundf(float) throw() __attribute__((__const__));


extern "C" __attribute__((__weak__)) long lround(double) throw();

extern "C" __attribute__((__weak__)) long lroundf(float) throw();


extern "C" __attribute__((__weak__)) long long llround(double) throw();

extern "C" __attribute__((__weak__)) long long llroundf(float) throw();


extern "C" __attribute__((__weak__)) double rint(double) throw();

extern "C" __attribute__((__weak__)) float rintf(float) throw();


extern "C" __attribute__((__weak__)) long lrint(double) throw();

extern "C" __attribute__((__weak__)) long lrintf(float) throw();


extern "C" __attribute__((__weak__)) long long llrint(double) throw();

extern "C" __attribute__((__weak__)) long long llrintf(float) throw();


extern "C" __attribute__((__weak__)) double nearbyint(double) throw();

extern "C" __attribute__((__weak__)) float nearbyintf(float) throw();


extern "C" __attribute__((__weak__)) double ceil(double) throw() __attribute__((__const__));

extern "C" __attribute__((__weak__)) float ceilf(float) throw() __attribute__((__const__));


extern "C" __attribute__((__weak__)) double trunc(double) throw() __attribute__((__const__));

extern "C" __attribute__((__weak__)) float truncf(float) throw() __attribute__((__const__));


extern "C" __attribute__((__weak__)) double fdim(double, double) throw();

extern "C" __attribute__((__weak__)) float fdimf(float, float) throw();


extern "C" __attribute__((__weak__)) double atan2(double, double) throw();

extern "C" __attribute__((__weak__)) float atan2f(float, float) throw();


extern "C" __attribute__((__weak__)) double atan(double) throw();

extern "C" __attribute__((__weak__)) float atanf(float) throw();


extern "C" __attribute__((__weak__)) double asin(double) throw();

extern "C" __attribute__((__weak__)) float asinf(float) throw();


extern "C" __attribute__((__weak__)) double acos(double) throw();

extern "C" __attribute__((__weak__)) float acosf(float) throw();


extern "C" __attribute__((__weak__)) double hypot(double, double) throw();

extern "C" __attribute__((__weak__)) float hypotf(float, float) throw();


extern "C" __attribute__((__weak__)) double cbrt(double) throw();

extern "C" __attribute__((__weak__)) float cbrtf(float) throw();


extern "C" __attribute__((__weak__)) double pow(double, double) throw();

extern "C" __attribute__((__weak__)) float powf(float, float) throw();


extern "C" __attribute__((__weak__)) double modf(double, double *) throw();

extern "C" __attribute__((__weak__)) float modff(float, float *) throw();


extern "C" __attribute__((__weak__)) double fmod(double, double) throw();

extern "C" __attribute__((__weak__)) float fmodf(float, float) throw();


extern "C" __attribute__((__weak__)) double remainder(double, double) throw();

extern "C" __attribute__((__weak__)) float remainderf(float, float) throw();


extern "C" __attribute__((__weak__)) double remquo(double, double, int *) throw();

extern "C" __attribute__((__weak__)) float remquof(float, float, int *) throw();


extern "C" __attribute__((__weak__)) double erf(double) throw();

extern "C" __attribute__((__weak__)) float erff(float) throw();


extern "C" __attribute__((__weak__)) double erfinv(double) throw();

extern "C" __attribute__((__weak__)) float erfinvf(float) throw();


extern "C" __attribute__((__weak__)) double erfc(double) throw();

extern "C" __attribute__((__weak__)) float erfcf(float) throw();


extern "C" __attribute__((__weak__)) double erfcinv(double) throw();

extern "C" __attribute__((__weak__)) float erfcinvf(float) throw();


extern "C" __attribute__((__weak__)) double lgamma(double) throw();

extern "C" __attribute__((__weak__)) float lgammaf(float) throw();


extern "C" __attribute__((__weak__)) double tgamma(double) throw();

extern "C" __attribute__((__weak__)) float tgammaf(float) throw();


extern "C" __attribute__((__weak__)) double copysign(double, double) throw() __attribute__((__const__));

extern "C" __attribute__((__weak__)) float copysignf(float, float) throw() __attribute__((__const__));


extern "C" __attribute__((__weak__)) double nextafter(double, double) throw() __attribute__((__const__));

extern "C" __attribute__((__weak__)) float nextafterf(float, float) throw() __attribute__((__const__));


extern "C" __attribute__((__weak__)) double nan(const char *) throw() __attribute__((__const__));

extern "C" __attribute__((__weak__)) float nanf(const char *) throw() __attribute__((__const__));


extern "C" __attribute__((__weak__)) int __isinf(double) throw() __attribute__((__const__));

extern "C" __attribute__((__weak__)) int __isinff(float) throw() __attribute__((__const__));


extern "C" __attribute__((__weak__)) int __isnan(double) throw() __attribute__((__const__));

extern "C" __attribute__((__weak__)) int __isnanf(float) throw() __attribute__((__const__));
# 400 "/home/normal/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) int __finite(double) throw() __attribute__((__const__));

extern "C" __attribute__((__weak__)) int __finitef(float) throw() __attribute__((__const__));

extern "C" __attribute__((__weak__)) int __signbit(double) throw() __attribute__((__const__));




extern "C" __attribute__((__weak__)) int __signbitf(float) throw() __attribute__((__const__));


extern "C" __attribute__((__weak__)) double fma(double, double, double) throw();

extern "C" __attribute__((__weak__)) float fmaf(float, float, float) throw();
# 31 "/usr/include/bits/mathdef.h" 3
extern "C" { typedef float float_t; }
extern "C" { typedef double double_t; }
# 55 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double acos(double) throw(); extern "C" double __acos(double) throw();

extern "C" __attribute__((__weak__)) double asin(double) throw(); extern "C" double __asin(double) throw();

extern "C" __attribute__((__weak__)) double atan(double) throw(); extern "C" double __atan(double) throw();

extern "C" __attribute__((__weak__)) double atan2(double, double) throw(); extern "C" double __atan2(double, double) throw();


extern "C" __attribute__((__weak__)) double cos(double) throw(); extern "C" double __cos(double) throw();

extern "C" __attribute__((__weak__)) double sin(double) throw(); extern "C" double __sin(double) throw();

extern "C" __attribute__((__weak__)) double tan(double) throw(); extern "C" double __tan(double) throw();




extern "C" __attribute__((__weak__)) double cosh(double) throw(); extern "C" double __cosh(double) throw();

extern "C" __attribute__((__weak__)) double sinh(double) throw(); extern "C" double __sinh(double) throw();

extern "C" __attribute__((__weak__)) double tanh(double) throw(); extern "C" double __tanh(double) throw();




extern "C" __attribute__((__weak__)) void sincos(double, double *, double *) throw(); extern "C" void __sincos(double, double *, double *) throw();
# 89 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double acosh(double) throw(); extern "C" double __acosh(double) throw();

extern "C" __attribute__((__weak__)) double asinh(double) throw(); extern "C" double __asinh(double) throw();

extern "C" __attribute__((__weak__)) double atanh(double) throw(); extern "C" double __atanh(double) throw();
# 101 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double exp(double) throw(); extern "C" double __exp(double) throw();


extern "C" __attribute__((__weak__)) double frexp(double, int *) throw(); extern "C" double __frexp(double, int *) throw();


extern "C" __attribute__((__weak__)) double ldexp(double, int) throw(); extern "C" double __ldexp(double, int) throw();


extern "C" __attribute__((__weak__)) double log(double) throw(); extern "C" double __log(double) throw();


extern "C" __attribute__((__weak__)) double log10(double) throw(); extern "C" double __log10(double) throw();


extern "C" __attribute__((__weak__)) double modf(double, double *) throw(); extern "C" double __modf(double, double *) throw();




extern "C" __attribute__((__weak__)) double exp10(double) throw(); extern "C" double __exp10(double) throw();

extern "C" double pow10(double) throw(); extern "C" double __pow10(double) throw();
# 129 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double expm1(double) throw(); extern "C" double __expm1(double) throw();


extern "C" __attribute__((__weak__)) double log1p(double) throw(); extern "C" double __log1p(double) throw();


extern "C" __attribute__((__weak__)) double logb(double) throw(); extern "C" double __logb(double) throw();
# 142 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double exp2(double) throw(); extern "C" double __exp2(double) throw();


extern "C" __attribute__((__weak__)) double log2(double) throw(); extern "C" double __log2(double) throw();
# 154 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double pow(double, double) throw(); extern "C" double __pow(double, double) throw();


extern "C" __attribute__((__weak__)) double sqrt(double) throw(); extern "C" double __sqrt(double) throw();
# 163 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double hypot(double, double) throw(); extern "C" double __hypot(double, double) throw();
# 170 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double cbrt(double) throw(); extern "C" double __cbrt(double) throw();
# 179 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double ceil(double) throw() __attribute__((__const__)); extern "C" double __ceil(double) throw() __attribute__((__const__));


extern "C" __attribute__((__weak__)) double fabs(double) throw() __attribute__((__const__)); extern "C" double __fabs(double) throw() __attribute__((__const__));


extern "C" __attribute__((__weak__)) double floor(double) throw() __attribute__((__const__)); extern "C" double __floor(double) throw() __attribute__((__const__));


extern "C" __attribute__((__weak__)) double fmod(double, double) throw(); extern "C" double __fmod(double, double) throw();




extern "C" __attribute__((__weak__)) int __isinf(double) throw() __attribute__((__const__));


extern "C" __attribute__((__weak__)) int __finite(double) throw() __attribute__((__const__));
# 202 "/usr/include/bits/mathcalls.h" 3
extern "C" int isinf(double) throw() __attribute__((__const__));


extern "C" int finite(double) throw() __attribute__((__const__));


extern "C" double drem(double, double) throw(); extern "C" double __drem(double, double) throw();



extern "C" double significand(double) throw(); extern "C" double __significand(double) throw();
# 218 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double copysign(double, double) throw() __attribute__((__const__)); extern "C" double __copysign(double, double) throw() __attribute__((__const__));
# 225 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double nan(const char *) throw() __attribute__((__const__)); extern "C" double __nan(const char *) throw() __attribute__((__const__));
# 231 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) int __isnan(double) throw() __attribute__((__const__));



extern "C" int isnan(double) throw() __attribute__((__const__));


extern "C" double j0(double) throw(); extern "C" double __j0(double) throw();
extern "C" double j1(double) throw(); extern "C" double __j1(double) throw();
extern "C" double jn(int, double) throw(); extern "C" double __jn(int, double) throw();
extern "C" double y0(double) throw(); extern "C" double __y0(double) throw();
extern "C" double y1(double) throw(); extern "C" double __y1(double) throw();
extern "C" double yn(int, double) throw(); extern "C" double __yn(int, double) throw();
# 250 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double erf(double) throw(); extern "C" double __erf(double) throw();
extern "C" __attribute__((__weak__)) double erfc(double) throw(); extern "C" double __erfc(double) throw();
extern "C" __attribute__((__weak__)) double lgamma(double) throw(); extern "C" double __lgamma(double) throw();
# 259 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double tgamma(double) throw(); extern "C" double __tgamma(double) throw();
# 265 "/usr/include/bits/mathcalls.h" 3
extern "C" double gamma(double) throw(); extern "C" double __gamma(double) throw();
# 272 "/usr/include/bits/mathcalls.h" 3
extern "C" double lgamma_r(double, int *) throw(); extern "C" double __lgamma_r(double, int *) throw();
# 280 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double rint(double) throw(); extern "C" double __rint(double) throw();


extern "C" __attribute__((__weak__)) double nextafter(double, double) throw() __attribute__((__const__)); extern "C" double __nextafter(double, double) throw() __attribute__((__const__));

extern "C" double nexttoward(double, long double) throw() __attribute__((__const__)); extern "C" double __nexttoward(double, long double) throw() __attribute__((__const__));



extern "C" __attribute__((__weak__)) double remainder(double, double) throw(); extern "C" double __remainder(double, double) throw();



extern "C" __attribute__((__weak__)) double scalbn(double, int) throw(); extern "C" double __scalbn(double, int) throw();



extern "C" __attribute__((__weak__)) int ilogb(double) throw(); extern "C" int __ilogb(double) throw();




extern "C" __attribute__((__weak__)) double scalbln(double, long) throw(); extern "C" double __scalbln(double, long) throw();



extern "C" __attribute__((__weak__)) double nearbyint(double) throw(); extern "C" double __nearbyint(double) throw();



extern "C" __attribute__((__weak__)) double round(double) throw() __attribute__((__const__)); extern "C" double __round(double) throw() __attribute__((__const__));



extern "C" __attribute__((__weak__)) double trunc(double) throw() __attribute__((__const__)); extern "C" double __trunc(double) throw() __attribute__((__const__));




extern "C" __attribute__((__weak__)) double remquo(double, double, int *) throw(); extern "C" double __remquo(double, double, int *) throw();
# 326 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) long lrint(double) throw(); extern "C" long __lrint(double) throw();
extern "C" __attribute__((__weak__)) long long llrint(double) throw(); extern "C" long long __llrint(double) throw();



extern "C" __attribute__((__weak__)) long lround(double) throw(); extern "C" long __lround(double) throw();
extern "C" __attribute__((__weak__)) long long llround(double) throw(); extern "C" long long __llround(double) throw();



extern "C" __attribute__((__weak__)) double fdim(double, double) throw(); extern "C" double __fdim(double, double) throw();


extern "C" __attribute__((__weak__)) double fmax(double, double) throw(); extern "C" double __fmax(double, double) throw();


extern "C" __attribute__((__weak__)) double fmin(double, double) throw(); extern "C" double __fmin(double, double) throw();



extern "C" int __fpclassify(double) throw() __attribute__((__const__));



extern "C" __attribute__((__weak__)) int __signbit(double) throw() __attribute__((__const__));




extern "C" __attribute__((__weak__)) double fma(double, double, double) throw(); extern "C" double __fma(double, double, double) throw();
# 364 "/usr/include/bits/mathcalls.h" 3
extern "C" double scalb(double, double) throw(); extern "C" double __scalb(double, double) throw();
# 55 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float acosf(float) throw(); extern "C" float __acosf(float) throw();

extern "C" __attribute__((__weak__)) float asinf(float) throw(); extern "C" float __asinf(float) throw();

extern "C" __attribute__((__weak__)) float atanf(float) throw(); extern "C" float __atanf(float) throw();

extern "C" __attribute__((__weak__)) float atan2f(float, float) throw(); extern "C" float __atan2f(float, float) throw();


extern "C" __attribute__((__weak__)) float cosf(float) throw();

extern "C" __attribute__((__weak__)) float sinf(float) throw();

extern "C" __attribute__((__weak__)) float tanf(float) throw();




extern "C" __attribute__((__weak__)) float coshf(float) throw(); extern "C" float __coshf(float) throw();

extern "C" __attribute__((__weak__)) float sinhf(float) throw(); extern "C" float __sinhf(float) throw();

extern "C" __attribute__((__weak__)) float tanhf(float) throw(); extern "C" float __tanhf(float) throw();




extern "C" __attribute__((__weak__)) void sincosf(float, float *, float *) throw();
# 89 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float acoshf(float) throw(); extern "C" float __acoshf(float) throw();

extern "C" __attribute__((__weak__)) float asinhf(float) throw(); extern "C" float __asinhf(float) throw();

extern "C" __attribute__((__weak__)) float atanhf(float) throw(); extern "C" float __atanhf(float) throw();
# 101 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float expf(float) throw();


extern "C" __attribute__((__weak__)) float frexpf(float, int *) throw(); extern "C" float __frexpf(float, int *) throw();


extern "C" __attribute__((__weak__)) float ldexpf(float, int) throw(); extern "C" float __ldexpf(float, int) throw();


extern "C" __attribute__((__weak__)) float logf(float) throw();


extern "C" __attribute__((__weak__)) float log10f(float) throw();


extern "C" __attribute__((__weak__)) float modff(float, float *) throw(); extern "C" float __modff(float, float *) throw();




extern "C" __attribute__((__weak__)) float exp10f(float) throw();

extern "C" float pow10f(float) throw(); extern "C" float __pow10f(float) throw();
# 129 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float expm1f(float) throw(); extern "C" float __expm1f(float) throw();


extern "C" __attribute__((__weak__)) float log1pf(float) throw(); extern "C" float __log1pf(float) throw();


extern "C" __attribute__((__weak__)) float logbf(float) throw(); extern "C" float __logbf(float) throw();
# 142 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float exp2f(float) throw(); extern "C" float __exp2f(float) throw();


extern "C" __attribute__((__weak__)) float log2f(float) throw();
# 154 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float powf(float, float) throw();


extern "C" __attribute__((__weak__)) float sqrtf(float) throw(); extern "C" float __sqrtf(float) throw();
# 163 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float hypotf(float, float) throw(); extern "C" float __hypotf(float, float) throw();
# 170 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float cbrtf(float) throw(); extern "C" float __cbrtf(float) throw();
# 179 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float ceilf(float) throw() __attribute__((__const__)); extern "C" float __ceilf(float) throw() __attribute__((__const__));


extern "C" __attribute__((__weak__)) float fabsf(float) throw() __attribute__((__const__)); extern "C" float __fabsf(float) throw() __attribute__((__const__));


extern "C" __attribute__((__weak__)) float floorf(float) throw() __attribute__((__const__)); extern "C" float __floorf(float) throw() __attribute__((__const__));


extern "C" __attribute__((__weak__)) float fmodf(float, float) throw(); extern "C" float __fmodf(float, float) throw();




extern "C" __attribute__((__weak__)) int __isinff(float) throw() __attribute__((__const__));


extern "C" __attribute__((__weak__)) int __finitef(float) throw() __attribute__((__const__));
# 202 "/usr/include/bits/mathcalls.h" 3
extern "C" int isinff(float) throw() __attribute__((__const__));


extern "C" int finitef(float) throw() __attribute__((__const__));


extern "C" float dremf(float, float) throw(); extern "C" float __dremf(float, float) throw();



extern "C" float significandf(float) throw(); extern "C" float __significandf(float) throw();
# 218 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float copysignf(float, float) throw() __attribute__((__const__)); extern "C" float __copysignf(float, float) throw() __attribute__((__const__));
# 225 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float nanf(const char *) throw() __attribute__((__const__)); extern "C" float __nanf(const char *) throw() __attribute__((__const__));
# 231 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) int __isnanf(float) throw() __attribute__((__const__));



extern "C" int isnanf(float) throw() __attribute__((__const__));


extern "C" float j0f(float) throw(); extern "C" float __j0f(float) throw();
extern "C" float j1f(float) throw(); extern "C" float __j1f(float) throw();
extern "C" float jnf(int, float) throw(); extern "C" float __jnf(int, float) throw();
extern "C" float y0f(float) throw(); extern "C" float __y0f(float) throw();
extern "C" float y1f(float) throw(); extern "C" float __y1f(float) throw();
extern "C" float ynf(int, float) throw(); extern "C" float __ynf(int, float) throw();
# 250 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float erff(float) throw(); extern "C" float __erff(float) throw();
extern "C" __attribute__((__weak__)) float erfcf(float) throw(); extern "C" float __erfcf(float) throw();
extern "C" __attribute__((__weak__)) float lgammaf(float) throw(); extern "C" float __lgammaf(float) throw();
# 259 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float tgammaf(float) throw(); extern "C" float __tgammaf(float) throw();
# 265 "/usr/include/bits/mathcalls.h" 3
extern "C" float gammaf(float) throw(); extern "C" float __gammaf(float) throw();
# 272 "/usr/include/bits/mathcalls.h" 3
extern "C" float lgammaf_r(float, int *) throw(); extern "C" float __lgammaf_r(float, int *) throw();
# 280 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float rintf(float) throw(); extern "C" float __rintf(float) throw();


extern "C" __attribute__((__weak__)) float nextafterf(float, float) throw() __attribute__((__const__)); extern "C" float __nextafterf(float, float) throw() __attribute__((__const__));

extern "C" float nexttowardf(float, long double) throw() __attribute__((__const__)); extern "C" float __nexttowardf(float, long double) throw() __attribute__((__const__));



extern "C" __attribute__((__weak__)) float remainderf(float, float) throw(); extern "C" float __remainderf(float, float) throw();



extern "C" __attribute__((__weak__)) float scalbnf(float, int) throw(); extern "C" float __scalbnf(float, int) throw();



extern "C" __attribute__((__weak__)) int ilogbf(float) throw(); extern "C" int __ilogbf(float) throw();




extern "C" __attribute__((__weak__)) float scalblnf(float, long) throw(); extern "C" float __scalblnf(float, long) throw();



extern "C" __attribute__((__weak__)) float nearbyintf(float) throw(); extern "C" float __nearbyintf(float) throw();



extern "C" __attribute__((__weak__)) float roundf(float) throw() __attribute__((__const__)); extern "C" float __roundf(float) throw() __attribute__((__const__));



extern "C" __attribute__((__weak__)) float truncf(float) throw() __attribute__((__const__)); extern "C" float __truncf(float) throw() __attribute__((__const__));




extern "C" __attribute__((__weak__)) float remquof(float, float, int *) throw(); extern "C" float __remquof(float, float, int *) throw();
# 326 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) long lrintf(float) throw(); extern "C" long __lrintf(float) throw();
extern "C" __attribute__((__weak__)) long long llrintf(float) throw(); extern "C" long long __llrintf(float) throw();



extern "C" __attribute__((__weak__)) long lroundf(float) throw(); extern "C" long __lroundf(float) throw();
extern "C" __attribute__((__weak__)) long long llroundf(float) throw(); extern "C" long long __llroundf(float) throw();



extern "C" __attribute__((__weak__)) float fdimf(float, float) throw(); extern "C" float __fdimf(float, float) throw();


extern "C" __attribute__((__weak__)) float fmaxf(float, float) throw(); extern "C" float __fmaxf(float, float) throw();


extern "C" __attribute__((__weak__)) float fminf(float, float) throw(); extern "C" float __fminf(float, float) throw();



extern "C" int __fpclassifyf(float) throw() __attribute__((__const__));



extern "C" __attribute__((__weak__)) int __signbitf(float) throw() __attribute__((__const__));




extern "C" __attribute__((__weak__)) float fmaf(float, float, float) throw(); extern "C" float __fmaf(float, float, float) throw();
# 364 "/usr/include/bits/mathcalls.h" 3
extern "C" float scalbf(float, float) throw(); extern "C" float __scalbf(float, float) throw();
# 55 "/usr/include/bits/mathcalls.h" 3
extern "C" long double acosl(long double) throw(); extern "C" long double __acosl(long double) throw();

extern "C" long double asinl(long double) throw(); extern "C" long double __asinl(long double) throw();

extern "C" long double atanl(long double) throw(); extern "C" long double __atanl(long double) throw();

extern "C" long double atan2l(long double, long double) throw(); extern "C" long double __atan2l(long double, long double) throw();


extern "C" long double cosl(long double) throw(); extern "C" long double __cosl(long double) throw();

extern "C" long double sinl(long double) throw(); extern "C" long double __sinl(long double) throw();

extern "C" long double tanl(long double) throw(); extern "C" long double __tanl(long double) throw();




extern "C" long double coshl(long double) throw(); extern "C" long double __coshl(long double) throw();

extern "C" long double sinhl(long double) throw(); extern "C" long double __sinhl(long double) throw();

extern "C" long double tanhl(long double) throw(); extern "C" long double __tanhl(long double) throw();




extern "C" void sincosl(long double, long double *, long double *) throw(); extern "C" void __sincosl(long double, long double *, long double *) throw();
# 89 "/usr/include/bits/mathcalls.h" 3
extern "C" long double acoshl(long double) throw(); extern "C" long double __acoshl(long double) throw();

extern "C" long double asinhl(long double) throw(); extern "C" long double __asinhl(long double) throw();

extern "C" long double atanhl(long double) throw(); extern "C" long double __atanhl(long double) throw();
# 101 "/usr/include/bits/mathcalls.h" 3
extern "C" long double expl(long double) throw(); extern "C" long double __expl(long double) throw();


extern "C" long double frexpl(long double, int *) throw(); extern "C" long double __frexpl(long double, int *) throw();


extern "C" long double ldexpl(long double, int) throw(); extern "C" long double __ldexpl(long double, int) throw();


extern "C" long double logl(long double) throw(); extern "C" long double __logl(long double) throw();


extern "C" long double log10l(long double) throw(); extern "C" long double __log10l(long double) throw();


extern "C" long double modfl(long double, long double *) throw(); extern "C" long double __modfl(long double, long double *) throw();




extern "C" long double exp10l(long double) throw(); extern "C" long double __exp10l(long double) throw();

extern "C" long double pow10l(long double) throw(); extern "C" long double __pow10l(long double) throw();
# 129 "/usr/include/bits/mathcalls.h" 3
extern "C" long double expm1l(long double) throw(); extern "C" long double __expm1l(long double) throw();


extern "C" long double log1pl(long double) throw(); extern "C" long double __log1pl(long double) throw();


extern "C" long double logbl(long double) throw(); extern "C" long double __logbl(long double) throw();
# 142 "/usr/include/bits/mathcalls.h" 3
extern "C" long double exp2l(long double) throw(); extern "C" long double __exp2l(long double) throw();


extern "C" long double log2l(long double) throw(); extern "C" long double __log2l(long double) throw();
# 154 "/usr/include/bits/mathcalls.h" 3
extern "C" long double powl(long double, long double) throw(); extern "C" long double __powl(long double, long double) throw();


extern "C" long double sqrtl(long double) throw(); extern "C" long double __sqrtl(long double) throw();
# 163 "/usr/include/bits/mathcalls.h" 3
extern "C" long double hypotl(long double, long double) throw(); extern "C" long double __hypotl(long double, long double) throw();
# 170 "/usr/include/bits/mathcalls.h" 3
extern "C" long double cbrtl(long double) throw(); extern "C" long double __cbrtl(long double) throw();
# 179 "/usr/include/bits/mathcalls.h" 3
extern "C" long double ceill(long double) throw() __attribute__((__const__)); extern "C" long double __ceill(long double) throw() __attribute__((__const__));


extern "C" long double fabsl(long double) throw() __attribute__((__const__)); extern "C" long double __fabsl(long double) throw() __attribute__((__const__));


extern "C" long double floorl(long double) throw() __attribute__((__const__)); extern "C" long double __floorl(long double) throw() __attribute__((__const__));


extern "C" long double fmodl(long double, long double) throw(); extern "C" long double __fmodl(long double, long double) throw();




extern "C" __attribute__((__weak__)) int __isinfl(long double) throw() __attribute__((__const__));


extern "C" __attribute__((__weak__)) int __finitel(long double) throw() __attribute__((__const__));
# 202 "/usr/include/bits/mathcalls.h" 3
extern "C" int isinfl(long double) throw() __attribute__((__const__));


extern "C" int finitel(long double) throw() __attribute__((__const__));


extern "C" long double dreml(long double, long double) throw(); extern "C" long double __dreml(long double, long double) throw();



extern "C" long double significandl(long double) throw(); extern "C" long double __significandl(long double) throw();
# 218 "/usr/include/bits/mathcalls.h" 3
extern "C" long double copysignl(long double, long double) throw() __attribute__((__const__)); extern "C" long double __copysignl(long double, long double) throw() __attribute__((__const__));
# 225 "/usr/include/bits/mathcalls.h" 3
extern "C" long double nanl(const char *) throw() __attribute__((__const__)); extern "C" long double __nanl(const char *) throw() __attribute__((__const__));
# 231 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) int __isnanl(long double) throw() __attribute__((__const__));



extern "C" int isnanl(long double) throw() __attribute__((__const__));


extern "C" long double j0l(long double) throw(); extern "C" long double __j0l(long double) throw();
extern "C" long double j1l(long double) throw(); extern "C" long double __j1l(long double) throw();
extern "C" long double jnl(int, long double) throw(); extern "C" long double __jnl(int, long double) throw();
extern "C" long double y0l(long double) throw(); extern "C" long double __y0l(long double) throw();
extern "C" long double y1l(long double) throw(); extern "C" long double __y1l(long double) throw();
extern "C" long double ynl(int, long double) throw(); extern "C" long double __ynl(int, long double) throw();
# 250 "/usr/include/bits/mathcalls.h" 3
extern "C" long double erfl(long double) throw(); extern "C" long double __erfl(long double) throw();
extern "C" long double erfcl(long double) throw(); extern "C" long double __erfcl(long double) throw();
extern "C" long double lgammal(long double) throw(); extern "C" long double __lgammal(long double) throw();
# 259 "/usr/include/bits/mathcalls.h" 3
extern "C" long double tgammal(long double) throw(); extern "C" long double __tgammal(long double) throw();
# 265 "/usr/include/bits/mathcalls.h" 3
extern "C" long double gammal(long double) throw(); extern "C" long double __gammal(long double) throw();
# 272 "/usr/include/bits/mathcalls.h" 3
extern "C" long double lgammal_r(long double, int *) throw(); extern "C" long double __lgammal_r(long double, int *) throw();
# 280 "/usr/include/bits/mathcalls.h" 3
extern "C" long double rintl(long double) throw(); extern "C" long double __rintl(long double) throw();


extern "C" long double nextafterl(long double, long double) throw() __attribute__((__const__)); extern "C" long double __nextafterl(long double, long double) throw() __attribute__((__const__));

extern "C" long double nexttowardl(long double, long double) throw() __attribute__((__const__)); extern "C" long double __nexttowardl(long double, long double) throw() __attribute__((__const__));



extern "C" long double remainderl(long double, long double) throw(); extern "C" long double __remainderl(long double, long double) throw();



extern "C" long double scalbnl(long double, int) throw(); extern "C" long double __scalbnl(long double, int) throw();



extern "C" int ilogbl(long double) throw(); extern "C" int __ilogbl(long double) throw();




extern "C" long double scalblnl(long double, long) throw(); extern "C" long double __scalblnl(long double, long) throw();



extern "C" long double nearbyintl(long double) throw(); extern "C" long double __nearbyintl(long double) throw();



extern "C" long double roundl(long double) throw() __attribute__((__const__)); extern "C" long double __roundl(long double) throw() __attribute__((__const__));



extern "C" long double truncl(long double) throw() __attribute__((__const__)); extern "C" long double __truncl(long double) throw() __attribute__((__const__));




extern "C" long double remquol(long double, long double, int *) throw(); extern "C" long double __remquol(long double, long double, int *) throw();
# 326 "/usr/include/bits/mathcalls.h" 3
extern "C" long lrintl(long double) throw(); extern "C" long __lrintl(long double) throw();
extern "C" long long llrintl(long double) throw(); extern "C" long long __llrintl(long double) throw();



extern "C" long lroundl(long double) throw(); extern "C" long __lroundl(long double) throw();
extern "C" long long llroundl(long double) throw(); extern "C" long long __llroundl(long double) throw();



extern "C" long double fdiml(long double, long double) throw(); extern "C" long double __fdiml(long double, long double) throw();


extern "C" long double fmaxl(long double, long double) throw(); extern "C" long double __fmaxl(long double, long double) throw();


extern "C" long double fminl(long double, long double) throw(); extern "C" long double __fminl(long double, long double) throw();



extern "C" int __fpclassifyl(long double) throw() __attribute__((__const__));



extern "C" __attribute__((__weak__)) int __signbitl(long double) throw() __attribute__((__const__));




extern "C" long double fmal(long double, long double, long double) throw(); extern "C" long double __fmal(long double, long double, long double) throw();
# 364 "/usr/include/bits/mathcalls.h" 3
extern "C" long double scalbl(long double, long double) throw(); extern "C" long double __scalbl(long double, long double) throw();
# 157 "/usr/include/math.h" 3
extern "C" { extern int signgam; }
# 199 "/usr/include/math.h" 3
enum __cuda_FP_NAN {
FP_NAN,

FP_INFINITE,

FP_ZERO,

FP_SUBNORMAL,

FP_NORMAL

};
# 291 "/usr/include/math.h" 3
extern "C" { typedef
# 285 "/usr/include/math.h" 3
enum {
_IEEE_ = (-1),
_SVID_,
_XOPEN_,
_POSIX_,
_ISOC_
} _LIB_VERSION_TYPE; }




extern "C" { extern _LIB_VERSION_TYPE _LIB_VERSION; }
# 307 "/usr/include/math.h" 3
extern "C" { struct __exception {




int type;
char *name;
double arg1;
double arg2;
double retval;
}; }


extern "C" int matherr(__exception *) throw();
# 67 "/usr/include/bits/waitstatus.h" 3
extern "C" { union wait {

int w_status;

struct {

unsigned __w_termsig:7;
unsigned __w_coredump:1;
unsigned __w_retcode:8;
unsigned:16;
# 84 "/usr/include/bits/waitstatus.h" 3
} __wait_terminated;

struct {

unsigned __w_stopval:8;
unsigned __w_stopsig:8;
unsigned:16;
# 97 "/usr/include/bits/waitstatus.h" 3
} __wait_stopped;
}; }
# 102 "/usr/include/stdlib.h" 3
extern "C" { typedef
# 99 "/usr/include/stdlib.h" 3
struct div_t {
int quot;
int rem;
} div_t; }
# 110 "/usr/include/stdlib.h" 3
extern "C" { typedef
# 107 "/usr/include/stdlib.h" 3
struct ldiv_t {
long quot;
long rem;
} ldiv_t; }
# 122 "/usr/include/stdlib.h" 3
extern "C" { typedef
# 119 "/usr/include/stdlib.h" 3
struct lldiv_t {
long long quot;
long long rem;
} lldiv_t; }
# 140 "/usr/include/stdlib.h" 3
extern "C" size_t __ctype_get_mb_cur_max() throw();




extern "C" double atof(const char *) throw() __attribute__((__pure__));


extern "C" int atoi(const char *) throw() __attribute__((__pure__));


extern "C" long atol(const char *) throw() __attribute__((__pure__));
# 158 "/usr/include/stdlib.h" 3
extern "C" long long atoll(const char *) throw() __attribute__((__pure__));
# 165 "/usr/include/stdlib.h" 3
extern "C" double strtod(const char *__restrict__, char **__restrict__) throw();
# 173 "/usr/include/stdlib.h" 3
extern "C" float strtof(const char *__restrict__, char **__restrict__) throw();


extern "C" long double strtold(const char *__restrict__, char **__restrict__) throw();
# 184 "/usr/include/stdlib.h" 3
extern "C" long strtol(const char *__restrict__, char **__restrict__, int) throw();



extern "C" unsigned long strtoul(const char *__restrict__, char **__restrict__, int) throw();
# 196 "/usr/include/stdlib.h" 3
extern "C" long long strtoq(const char *__restrict__, char **__restrict__, int) throw();




extern "C" unsigned long long strtouq(const char *__restrict__, char **__restrict__, int) throw();
# 210 "/usr/include/stdlib.h" 3
extern "C" long long strtoll(const char *__restrict__, char **__restrict__, int) throw();




extern "C" unsigned long long strtoull(const char *__restrict__, char **__restrict__, int) throw();
# 240 "/usr/include/stdlib.h" 3
extern "C" long strtol_l(const char *__restrict__, char **__restrict__, int, __locale_t) throw();



extern "C" unsigned long strtoul_l(const char *__restrict__, char **__restrict__, int, __locale_t) throw();
# 250 "/usr/include/stdlib.h" 3
extern "C" long long strtoll_l(const char *__restrict__, char **__restrict__, int, __locale_t) throw();
# 256 "/usr/include/stdlib.h" 3
extern "C" unsigned long long strtoull_l(const char *__restrict__, char **__restrict__, int, __locale_t) throw();




extern "C" double strtod_l(const char *__restrict__, char **__restrict__, __locale_t) throw();



extern "C" float strtof_l(const char *__restrict__, char **__restrict__, __locale_t) throw();



extern "C" long double strtold_l(const char *__restrict__, char **__restrict__, __locale_t) throw();
# 311 "/usr/include/stdlib.h" 3
extern "C" char *l64a(long) throw();


extern "C" long a64l(const char *) throw() __attribute__((__pure__));
# 35 "/usr/include/sys/types.h" 3
extern "C" { typedef __u_char u_char; }
extern "C" { typedef __u_short u_short; }
extern "C" { typedef __u_int u_int; }
extern "C" { typedef __u_long u_long; }
extern "C" { typedef __quad_t quad_t; }
extern "C" { typedef __u_quad_t u_quad_t; }
extern "C" { typedef __fsid_t fsid_t; }




extern "C" { typedef __loff_t loff_t; }



extern "C" { typedef __ino_t ino_t; }
# 57 "/usr/include/sys/types.h" 3
extern "C" { typedef __ino64_t ino64_t; }




extern "C" { typedef __dev_t dev_t; }




extern "C" { typedef __gid_t gid_t; }




extern "C" { typedef __mode_t mode_t; }




extern "C" { typedef __nlink_t nlink_t; }




extern "C" { typedef __uid_t uid_t; }
# 88 "/usr/include/sys/types.h" 3
extern "C" { typedef __off_t off_t; }
# 95 "/usr/include/sys/types.h" 3
extern "C" { typedef __off64_t off64_t; }
# 105 "/usr/include/sys/types.h" 3
extern "C" { typedef __id_t id_t; }




extern "C" { typedef __ssize_t ssize_t; }
# 116 "/usr/include/sys/types.h" 3
extern "C" { typedef __daddr_t daddr_t; }
extern "C" { typedef __caddr_t caddr_t; }
# 123 "/usr/include/sys/types.h" 3
extern "C" { typedef __key_t key_t; }
# 137 "/usr/include/sys/types.h" 3
extern "C" { typedef __useconds_t useconds_t; }



extern "C" { typedef __suseconds_t suseconds_t; }
# 151 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned long ulong; }
extern "C" { typedef unsigned short ushort; }
extern "C" { typedef unsigned uint; }
# 195 "/usr/include/sys/types.h" 3
extern "C" { typedef signed char int8_t; }
extern "C" { typedef short int16_t; }
extern "C" { typedef int int32_t; }
extern "C" { typedef long int64_t; }


extern "C" { typedef unsigned char u_int8_t; }
extern "C" { typedef unsigned short u_int16_t; }
extern "C" { typedef unsigned u_int32_t; }
extern "C" { typedef unsigned long u_int64_t; }

extern "C" { typedef int register_t; }
# 24 "/usr/include/bits/sigset.h" 3
extern "C" { typedef int __sig_atomic_t; }
# 32 "/usr/include/bits/sigset.h" 3
extern "C" { typedef
# 30 "/usr/include/bits/sigset.h" 3
struct __sigset_t {
unsigned long __val[((1024) / ((8) * sizeof(unsigned long)))];
} __sigset_t; }
# 38 "/usr/include/sys/select.h" 3
extern "C" { typedef __sigset_t sigset_t; }
# 69 "/usr/include/bits/time.h" 3
extern "C" { struct timeval {

__time_t tv_sec;
__suseconds_t tv_usec;
}; }
# 55 "/usr/include/sys/select.h" 3
extern "C" { typedef long __fd_mask; }
# 78 "/usr/include/sys/select.h" 3
extern "C" { typedef
# 68 "/usr/include/sys/select.h" 3
struct fd_set {



__fd_mask fds_bits[((1024) / ((8) * sizeof(__fd_mask)))];
# 78 "/usr/include/sys/select.h" 3
} fd_set; }
# 85 "/usr/include/sys/select.h" 3
extern "C" { typedef __fd_mask fd_mask; }
# 109 "/usr/include/sys/select.h" 3
extern "C" int select(int, fd_set *__restrict__, fd_set *__restrict__, fd_set *__restrict__, timeval *__restrict__);
# 121 "/usr/include/sys/select.h" 3
extern "C" int pselect(int, fd_set *__restrict__, fd_set *__restrict__, fd_set *__restrict__, const timespec *__restrict__, const __sigset_t *__restrict__);
# 31 "/usr/include/sys/sysmacros.h" 3
extern "C" unsigned gnu_dev_major(unsigned long long) throw();


extern "C" unsigned gnu_dev_minor(unsigned long long) throw();


extern "C" unsigned long long gnu_dev_makedev(unsigned, unsigned) throw();
# 228 "/usr/include/sys/types.h" 3
extern "C" { typedef __blksize_t blksize_t; }
# 235 "/usr/include/sys/types.h" 3
extern "C" { typedef __blkcnt_t blkcnt_t; }



extern "C" { typedef __fsblkcnt_t fsblkcnt_t; }



extern "C" { typedef __fsfilcnt_t fsfilcnt_t; }
# 262 "/usr/include/sys/types.h" 3
extern "C" { typedef __blkcnt64_t blkcnt64_t; }
extern "C" { typedef __fsblkcnt64_t fsblkcnt64_t; }
extern "C" { typedef __fsfilcnt64_t fsfilcnt64_t; }
# 50 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef unsigned long pthread_t; }
# 57 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 54 "/usr/include/bits/pthreadtypes.h" 3
union pthread_attr_t {
char __size[56];
long __align;
} pthread_attr_t; }
# 65 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 61 "/usr/include/bits/pthreadtypes.h" 3
struct __pthread_internal_list {

__pthread_internal_list *__prev;
__pthread_internal_list *__next;
} __pthread_list_t; }
# 104 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 77 "/usr/include/bits/pthreadtypes.h" 3
union pthread_mutex_t {
struct __pthread_mutex_s {

int __lock;
unsigned __count;
int __owner;

unsigned __nusers;



int __kind;

int __spins;
__pthread_list_t __list;
# 101 "/usr/include/bits/pthreadtypes.h" 3
} __data;
char __size[40];
long __align;
} pthread_mutex_t; }
# 110 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 107 "/usr/include/bits/pthreadtypes.h" 3
union pthread_mutexattr_t {
char __size[4];
int __align;
} pthread_mutexattr_t; }
# 130 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 116 "/usr/include/bits/pthreadtypes.h" 3
union pthread_cond_t {

struct {
int __lock;
unsigned __futex;
unsigned long long __total_seq;
unsigned long long __wakeup_seq;
unsigned long long __woken_seq;
void *__mutex;
unsigned __nwaiters;
unsigned __broadcast_seq;
} __data;
char __size[48];
long long __align;
} pthread_cond_t; }
# 136 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 133 "/usr/include/bits/pthreadtypes.h" 3
union pthread_condattr_t {
char __size[4];
int __align;
} pthread_condattr_t; }



extern "C" { typedef unsigned pthread_key_t; }



extern "C" { typedef int pthread_once_t; }
# 189 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 151 "/usr/include/bits/pthreadtypes.h" 3
union pthread_rwlock_t {


struct {
int __lock;
unsigned __nr_readers;
unsigned __readers_wakeup;
unsigned __writer_wakeup;
unsigned __nr_readers_queued;
unsigned __nr_writers_queued;
int __writer;
int __shared;
unsigned long __pad1;
unsigned long __pad2;


unsigned __flags;
} __data;
# 187 "/usr/include/bits/pthreadtypes.h" 3
char __size[56];
long __align;
} pthread_rwlock_t; }
# 195 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 192 "/usr/include/bits/pthreadtypes.h" 3
union pthread_rwlockattr_t {
char __size[8];
long __align;
} pthread_rwlockattr_t; }
# 201 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef volatile int pthread_spinlock_t; }
# 210 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 207 "/usr/include/bits/pthreadtypes.h" 3
union pthread_barrier_t {
char __size[32];
long __align;
} pthread_barrier_t; }
# 216 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 213 "/usr/include/bits/pthreadtypes.h" 3
union pthread_barrierattr_t {
char __size[4];
int __align;
} pthread_barrierattr_t; }
# 327 "/usr/include/stdlib.h" 3
extern "C" long random() throw();


extern "C" void srandom(unsigned) throw();
# 336 "/usr/include/stdlib.h" 3
extern "C" char *initstate(unsigned, char *, size_t) throw();




extern "C" char *setstate(char *) throw();
# 349 "/usr/include/stdlib.h" 3
extern "C" { struct random_data {

int32_t *fptr;
int32_t *rptr;
int32_t *state;
int rand_type;
int rand_deg;
int rand_sep;
int32_t *end_ptr;
}; }

extern "C" int random_r(random_data *__restrict__, int32_t *__restrict__) throw();


extern "C" int srandom_r(unsigned, random_data *) throw();


extern "C" int initstate_r(unsigned, char *__restrict__, size_t, random_data *__restrict__) throw();




extern "C" int setstate_r(char *__restrict__, random_data *__restrict__) throw();
# 380 "/usr/include/stdlib.h" 3
extern "C" int rand() throw();

extern "C" void srand(unsigned) throw();




extern "C" int rand_r(unsigned *) throw();
# 395 "/usr/include/stdlib.h" 3
extern "C" double drand48() throw();
extern "C" double erand48(unsigned short [3]) throw();


extern "C" long lrand48() throw();
extern "C" long nrand48(unsigned short [3]) throw();



extern "C" long mrand48() throw();
extern "C" long jrand48(unsigned short [3]) throw();



extern "C" void srand48(long) throw();
extern "C" unsigned short *seed48(unsigned short [3]) throw();

extern "C" void lcong48(unsigned short [7]) throw();
# 418 "/usr/include/stdlib.h" 3
extern "C" { struct drand48_data {

unsigned short __x[3];
unsigned short __old_x[3];
unsigned short __c;
unsigned short __init;
unsigned long long __a;
}; }


extern "C" int drand48_r(drand48_data *__restrict__, double *__restrict__) throw();

extern "C" int erand48_r(unsigned short [3], drand48_data *__restrict__, double *__restrict__) throw();




extern "C" int lrand48_r(drand48_data *__restrict__, long *__restrict__) throw();


extern "C" int nrand48_r(unsigned short [3], drand48_data *__restrict__, long *__restrict__) throw();
# 444 "/usr/include/stdlib.h" 3
extern "C" int mrand48_r(drand48_data *__restrict__, long *__restrict__) throw();


extern "C" int jrand48_r(unsigned short [3], drand48_data *__restrict__, long *__restrict__) throw();
# 453 "/usr/include/stdlib.h" 3
extern "C" int srand48_r(long, drand48_data *) throw();


extern "C" int seed48_r(unsigned short [3], drand48_data *) throw();


extern "C" int lcong48_r(unsigned short [7], drand48_data *) throw();
# 471 "/usr/include/stdlib.h" 3
extern "C" void *malloc(size_t) throw() __attribute__((__malloc__));

extern "C" void *calloc(size_t, size_t) throw() __attribute__((__malloc__));
# 485 "/usr/include/stdlib.h" 3
extern "C" void *realloc(void *, size_t) throw();


extern "C" void free(void *) throw();




extern "C" void cfree(void *) throw();
# 33 "/usr/include/alloca.h" 3
extern "C" void *alloca(size_t) throw();
# 502 "/usr/include/stdlib.h" 3
extern "C" void *valloc(size_t) throw() __attribute__((__malloc__));




extern "C" int posix_memalign(void **, size_t, size_t) throw();
# 513 "/usr/include/stdlib.h" 3
extern "C" void abort() throw() __attribute__((__noreturn__));



extern "C" int atexit(void (*)(void)) throw();
# 523 "/usr/include/stdlib.h" 3
extern "C" int on_exit(void (*)(int, void *), void *) throw();
# 531 "/usr/include/stdlib.h" 3
extern "C" void exit(int) throw() __attribute__((__noreturn__));
# 538 "/usr/include/stdlib.h" 3
extern "C" void _Exit(int) throw() __attribute__((__noreturn__));
# 545 "/usr/include/stdlib.h" 3
extern "C" char *getenv(const char *) throw();




extern "C" char *__secure_getenv(const char *) throw();
# 557 "/usr/include/stdlib.h" 3
extern "C" int putenv(char *) throw();
# 563 "/usr/include/stdlib.h" 3
extern "C" int setenv(const char *, const char *, int) throw();



extern "C" int unsetenv(const char *) throw();
# 574 "/usr/include/stdlib.h" 3
extern "C" int clearenv() throw();
# 583 "/usr/include/stdlib.h" 3
extern "C" char *mktemp(char *) throw();
# 594 "/usr/include/stdlib.h" 3
extern "C" int mkstemp(char *);
# 604 "/usr/include/stdlib.h" 3
extern "C" int mkstemp64(char *);
# 614 "/usr/include/stdlib.h" 3
extern "C" char *mkdtemp(char *) throw();
# 625 "/usr/include/stdlib.h" 3
extern "C" int mkostemp(char *, int);
# 635 "/usr/include/stdlib.h" 3
extern "C" int mkostemp64(char *, int);
# 645 "/usr/include/stdlib.h" 3
extern "C" int system(const char *);
# 652 "/usr/include/stdlib.h" 3
extern "C" char *canonicalize_file_name(const char *) throw();
# 662 "/usr/include/stdlib.h" 3
extern "C" char *realpath(const char *__restrict__, char *__restrict__) throw();
# 670 "/usr/include/stdlib.h" 3
extern "C" { typedef int (*__compar_fn_t)(const void *, const void *); }


extern "C" { typedef __compar_fn_t comparison_fn_t; }



extern "C" { typedef int (*__compar_d_fn_t)(const void *, const void *, void *); }
# 683 "/usr/include/stdlib.h" 3
extern "C" void *bsearch(const void *, const void *, size_t, size_t, __compar_fn_t);
# 689 "/usr/include/stdlib.h" 3
extern "C" void qsort(void *, size_t, size_t, __compar_fn_t);


extern "C" void qsort_r(void *, size_t, size_t, __compar_d_fn_t, void *);
# 699 "/usr/include/stdlib.h" 3
extern "C" __attribute__((__weak__)) int abs(int) throw() __attribute__((__const__));
extern "C" __attribute__((__weak__)) long labs(long) throw() __attribute__((__const__));



extern "C" __attribute__((__weak__)) long long llabs(long long) throw() __attribute__((__const__));
# 713 "/usr/include/stdlib.h" 3
extern "C" div_t div(int, int) throw() __attribute__((__const__));

extern "C" ldiv_t ldiv(long, long) throw() __attribute__((__const__));
# 721 "/usr/include/stdlib.h" 3
extern "C" lldiv_t lldiv(long long, long long) throw() __attribute__((__const__));
# 735 "/usr/include/stdlib.h" 3
extern "C" char *ecvt(double, int, int *__restrict__, int *__restrict__) throw();
# 741 "/usr/include/stdlib.h" 3
extern "C" char *fcvt(double, int, int *__restrict__, int *__restrict__) throw();
# 747 "/usr/include/stdlib.h" 3
extern "C" char *gcvt(double, int, char *) throw();
# 753 "/usr/include/stdlib.h" 3
extern "C" char *qecvt(long double, int, int *__restrict__, int *__restrict__) throw();


extern "C" char *qfcvt(long double, int, int *__restrict__, int *__restrict__) throw();


extern "C" char *qgcvt(long double, int, char *) throw();
# 765 "/usr/include/stdlib.h" 3
extern "C" int ecvt_r(double, int, int *__restrict__, int *__restrict__, char *__restrict__, size_t) throw();


extern "C" int fcvt_r(double, int, int *__restrict__, int *__restrict__, char *__restrict__, size_t) throw();



extern "C" int qecvt_r(long double, int, int *__restrict__, int *__restrict__, char *__restrict__, size_t) throw();



extern "C" int qfcvt_r(long double, int, int *__restrict__, int *__restrict__, char *__restrict__, size_t) throw();
# 787 "/usr/include/stdlib.h" 3
extern "C" int mblen(const char *, size_t) throw();


extern "C" int mbtowc(wchar_t *__restrict__, const char *__restrict__, size_t) throw();



extern "C" int wctomb(char *, wchar_t) throw();



extern "C" size_t mbstowcs(wchar_t *__restrict__, const char *__restrict__, size_t) throw();


extern "C" size_t wcstombs(char *__restrict__, const wchar_t *__restrict__, size_t) throw();
# 812 "/usr/include/stdlib.h" 3
extern "C" int rpmatch(const char *) throw();
# 823 "/usr/include/stdlib.h" 3
extern "C" int getsubopt(char **__restrict__, char *const *__restrict__, char **__restrict__) throw();
# 832 "/usr/include/stdlib.h" 3
extern "C" void setkey(const char *) throw();
# 840 "/usr/include/stdlib.h" 3
extern "C" int posix_openpt(int);
# 848 "/usr/include/stdlib.h" 3
extern "C" int grantpt(int) throw();



extern "C" int unlockpt(int) throw();




extern "C" char *ptsname(int) throw();
# 864 "/usr/include/stdlib.h" 3
extern "C" int ptsname_r(int, char *, size_t) throw();



extern "C" int getpt();
# 875 "/usr/include/stdlib.h" 3
extern "C" int getloadavg(double [], int) throw();
# 74 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
namespace __gnu_cxx __attribute__((visibility("default"))) {

template<class _Iterator, class _Container> class __normal_iterator;


}

namespace std __attribute__((visibility("default"))) {

struct __true_type { };
struct __false_type { };

template<bool __T0>
struct __truth_type {
typedef __false_type __type; };


template<> struct __truth_type< true> {
typedef __true_type __type; };



template<class _Sp, class _Tp>
struct __traitor {

enum __cuda___value { __value = (((bool)_Sp::__value) || ((bool)_Tp::__value))};
typedef typename __truth_type< (((bool)_Sp::__value) || ((bool)_Tp::__value))> ::__type __type;
};



template<class _Sp, class _Tp>
struct __traitand {

enum __cuda___value { __value = (((bool)_Sp::__value) && ((bool)_Tp::__value))};
typedef typename __truth_type< (((bool)_Sp::__value) && ((bool)_Tp::__value))> ::__type __type;
};


template<class , class >
struct __are_same {

enum __cuda___value { __value};
typedef __false_type __type;
};

template<class _Tp>
struct __are_same< _Tp, _Tp> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};


template<class _Tp>
struct __is_void {

enum __cuda___value { __value};
typedef __false_type __type;
};


template<> struct __is_void< void> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};




template<class _Tp>
struct __is_integer {

enum __cuda___value { __value};
typedef __false_type __type;
};
# 156 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<> struct __is_integer< bool> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};


template<> struct __is_integer< char> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};


template<> struct __is_integer< signed char> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};


template<> struct __is_integer< unsigned char> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};



template<> struct __is_integer< wchar_t> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};



template<> struct __is_integer< short> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};


template<> struct __is_integer< unsigned short> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};


template<> struct __is_integer< int> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};


template<> struct __is_integer< unsigned> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};


template<> struct __is_integer< long> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};


template<> struct __is_integer< unsigned long> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};


template<> struct __is_integer< long long> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};


template<> struct __is_integer< unsigned long long> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};




template<class _Tp>
struct __is_floating {

enum __cuda___value { __value};
typedef __false_type __type;
};



template<> struct __is_floating< float> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};


template<> struct __is_floating< double> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};


template<> struct __is_floating< long double> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};




template<class _Tp>
struct __is_pointer {

enum __cuda___value { __value};
typedef __false_type __type;
};

template<class _Tp>
struct __is_pointer< _Tp *> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};




template<class _Tp>
struct __is_normal_iterator {

enum __cuda___value { __value};
typedef __false_type __type;
};

template<class _Iterator, class _Container>
struct __is_normal_iterator< __gnu_cxx::__normal_iterator< _Iterator, _Container> > {


enum __cuda___value { __value = 1};
typedef __true_type __type;
};




template<class _Tp>
struct __is_arithmetic : public __traitor< __is_integer< _Tp> , __is_floating< _Tp> > {

};




template<class _Tp>
struct __is_fundamental : public __traitor< __is_void< _Tp> , __is_arithmetic< _Tp> > {

};




template<class _Tp>
struct __is_scalar : public __traitor< __is_arithmetic< _Tp> , __is_pointer< _Tp> > {

};




template<class _Tp>
struct __is_char {

enum __cuda___value { __value};
typedef __false_type __type;
};


template<> struct __is_char< char> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};



template<> struct __is_char< wchar_t> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};


template<class _Tp>
struct __is_byte {

enum __cuda___value { __value};
typedef __false_type __type;
};


template<> struct __is_byte< char> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};


template<> struct __is_byte< signed char> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};


template<> struct __is_byte< unsigned char> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};




template<class _Tp>
struct __is_move_iterator {

enum __cuda___value { __value};
typedef __false_type __type;
};
# 415 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
}
# 43 "/usr/include/c++/4.3/ext/type_traits.h" 3
namespace __gnu_cxx __attribute__((visibility("default"))) {


template<bool __T1, class >
struct __enable_if {
};

template<class _Tp>
struct __enable_if< true, _Tp> {
typedef _Tp __type; };



template<bool _Cond, class _Iftrue, class _Iffalse>
struct __conditional_type {
typedef _Iftrue __type; };

template<class _Iftrue, class _Iffalse>
struct __conditional_type< false, _Iftrue, _Iffalse> {
typedef _Iffalse __type; };



template<class _Tp>
struct __add_unsigned {


private: typedef __enable_if< std::__is_integer< _Tp> ::__value, _Tp> __if_type;


public: typedef typename __enable_if< std::__is_integer< _Tp> ::__value, _Tp> ::__type __type;
};


template<> struct __add_unsigned< char> {
typedef unsigned char __type; };


template<> struct __add_unsigned< signed char> {
typedef unsigned char __type; };


template<> struct __add_unsigned< short> {
typedef unsigned short __type; };


template<> struct __add_unsigned< int> {
typedef unsigned __type; };


template<> struct __add_unsigned< long> {
typedef unsigned long __type; };


template<> struct __add_unsigned< long long> {
typedef unsigned long long __type; };



template<> struct __add_unsigned< bool> ;


template<> struct __add_unsigned< wchar_t> ;



template<class _Tp>
struct __remove_unsigned {


private: typedef __enable_if< std::__is_integer< _Tp> ::__value, _Tp> __if_type;


public: typedef typename __enable_if< std::__is_integer< _Tp> ::__value, _Tp> ::__type __type;
};


template<> struct __remove_unsigned< char> {
typedef signed char __type; };


template<> struct __remove_unsigned< unsigned char> {
typedef signed char __type; };


template<> struct __remove_unsigned< unsigned short> {
typedef short __type; };


template<> struct __remove_unsigned< unsigned> {
typedef int __type; };


template<> struct __remove_unsigned< unsigned long> {
typedef long __type; };


template<> struct __remove_unsigned< unsigned long long> {
typedef long long __type; };



template<> struct __remove_unsigned< bool> ;


template<> struct __remove_unsigned< wchar_t> ;



template < typename _Type >
    inline bool
    __is_null_pointer ( _Type * __ptr )
    { return __ptr == 0; }

template < typename _Type >
    inline bool
    __is_null_pointer ( _Type )
    { return false; }



template<class _Tp, bool __T2 = std::__is_integer< _Tp> ::__value>
struct __promote {
typedef double __type; };

template<class _Tp>
struct __promote< _Tp, false> {
typedef _Tp __type; };

template<class _Tp, class _Up>
struct __promote_2 {


private: typedef typename __promote< _Tp, std::__is_integer< _Tp> ::__value> ::__type __type1;
typedef typename __promote< _Up, std::__is_integer< _Up> ::__value> ::__type __type2;


public: typedef __typeof__((__type1() + __type2())) __type;
};

template<class _Tp, class _Up, class _Vp>
struct __promote_3 {


private: typedef typename __promote< _Tp, std::__is_integer< _Tp> ::__value> ::__type __type1;
typedef typename __promote< _Up, std::__is_integer< _Up> ::__value> ::__type __type2;
typedef typename __promote< _Vp, std::__is_integer< _Vp> ::__value> ::__type __type3;


public: typedef __typeof__(((__type1() + __type2()) + __type3())) __type;
};

template<class _Tp, class _Up, class _Vp, class _Wp>
struct __promote_4 {


private: typedef typename __promote< _Tp, std::__is_integer< _Tp> ::__value> ::__type __type1;
typedef typename __promote< _Up, std::__is_integer< _Up> ::__value> ::__type __type2;
typedef typename __promote< _Vp, std::__is_integer< _Vp> ::__value> ::__type __type3;
typedef typename __promote< _Wp, std::__is_integer< _Wp> ::__value> ::__type __type4;


public: typedef __typeof__((((__type1() + __type2()) + __type3()) + __type4())) __type;
};

}
# 82 "/usr/include/c++/4.3/cmath" 3
namespace std __attribute__((visibility("default"))) {



template < typename _Tp >
    _Tp __cmath_power ( _Tp, unsigned int );

template < typename _Tp >
    inline _Tp
    __pow_helper ( _Tp __x, int __n )
    {
      return __n < 0
        ? _Tp ( 1 ) / __cmath_power ( __x, - __n )
        : __cmath_power ( __x, __n );
    }


inline double abs(double __x)
{ return __builtin_fabs(__x); }


inline float abs(float __x)
{ return __builtin_fabsf(__x); }


inline long double abs(long double __x)
{ return __builtin_fabsl(__x); }

using ::acos;


inline float acos(float __x)
{ return __builtin_acosf(__x); }


inline long double acos(long double __x)
{ return __builtin_acosl(__x); }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    acos ( _Tp __x )
    { return __builtin_acos ( __x ); }

using ::asin;


inline float asin(float __x)
{ return __builtin_asinf(__x); }


inline long double asin(long double __x)
{ return __builtin_asinl(__x); }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    asin ( _Tp __x )
    { return __builtin_asin ( __x ); }

using ::atan;


inline float atan(float __x)
{ return __builtin_atanf(__x); }


inline long double atan(long double __x)
{ return __builtin_atanl(__x); }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    atan ( _Tp __x )
    { return __builtin_atan ( __x ); }

using ::atan2;


inline float atan2(float __y, float __x)
{ return __builtin_atan2f(__y, __x); }


inline long double atan2(long double __y, long double __x)
{ return __builtin_atan2l(__y, __x); }

template < typename _Tp, typename _Up >
    inline
    typename __gnu_cxx :: __promote_2 <
    typename __gnu_cxx :: __enable_if < __traitand < __is_arithmetic < _Tp >,
            __is_arithmetic < _Up > > :: __value,
        _Tp > :: __type, _Up > :: __type
    atan2 ( _Tp __y, _Up __x )
    {
      typedef typename __gnu_cxx :: __promote_2 < _Tp, _Up > :: __type __type;
      return atan2 ( __type ( __y ), __type ( __x ) );
    }

using ::ceil;


inline float ceil(float __x)
{ return __builtin_ceilf(__x); }


inline long double ceil(long double __x)
{ return __builtin_ceill(__x); }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    ceil ( _Tp __x )
    { return __builtin_ceil ( __x ); }

using ::cos;


inline float cos(float __x)
{ return __builtin_cosf(__x); }


inline long double cos(long double __x)
{ return __builtin_cosl(__x); }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    cos ( _Tp __x )
    { return __builtin_cos ( __x ); }

using ::cosh;


inline float cosh(float __x)
{ return __builtin_coshf(__x); }


inline long double cosh(long double __x)
{ return __builtin_coshl(__x); }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    cosh ( _Tp __x )
    { return __builtin_cosh ( __x ); }

using ::exp;


inline float exp(float __x)
{ return __builtin_expf(__x); }


inline long double exp(long double __x)
{ return __builtin_expl(__x); }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    exp ( _Tp __x )
    { return __builtin_exp ( __x ); }

using ::fabs;


inline float fabs(float __x)
{ return __builtin_fabsf(__x); }


inline long double fabs(long double __x)
{ return __builtin_fabsl(__x); }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    fabs ( _Tp __x )
    { return __builtin_fabs ( __x ); }

using ::floor;


inline float floor(float __x)
{ return __builtin_floorf(__x); }


inline long double floor(long double __x)
{ return __builtin_floorl(__x); }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    floor ( _Tp __x )
    { return __builtin_floor ( __x ); }

using ::fmod;


inline float fmod(float __x, float __y)
{ return __builtin_fmodf(__x, __y); }


inline long double fmod(long double __x, long double __y)
{ return __builtin_fmodl(__x, __y); }

using ::frexp;


inline float frexp(float __x, int *__exp)
{ return __builtin_frexpf(__x, __exp); }


inline long double frexp(long double __x, int *__exp)
{ return __builtin_frexpl(__x, __exp); }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    frexp ( _Tp __x, int * __exp )
    { return __builtin_frexp ( __x, __exp ); }

using ::ldexp;


inline float ldexp(float __x, int __exp)
{ return __builtin_ldexpf(__x, __exp); }


inline long double ldexp(long double __x, int __exp)
{ return __builtin_ldexpl(__x, __exp); }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
  ldexp ( _Tp __x, int __exp )
  { return __builtin_ldexp ( __x, __exp ); }

using ::log;


inline float log(float __x)
{ return __builtin_logf(__x); }


inline long double log(long double __x)
{ return __builtin_logl(__x); }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    log ( _Tp __x )
    { return __builtin_log ( __x ); }

using ::log10;


inline float log10(float __x)
{ return __builtin_log10f(__x); }


inline long double log10(long double __x)
{ return __builtin_log10l(__x); }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    log10 ( _Tp __x )
    { return __builtin_log10 ( __x ); }

using ::modf;


inline float modf(float __x, float *__iptr)
{ return __builtin_modff(__x, __iptr); }


inline long double modf(long double __x, long double *__iptr)
{ return __builtin_modfl(__x, __iptr); }

using ::pow;


inline float pow(float __x, float __y)
{ return __builtin_powf(__x, __y); }


inline long double pow(long double __x, long double __y)
{ return __builtin_powl(__x, __y); }



inline double pow(double __x, int __i)
{ return __builtin_powi(__x, __i); }


inline float pow(float __x, int __n)
{ return __builtin_powif(__x, __n); }


inline long double pow(long double __x, int __n)
{ return __builtin_powil(__x, __n); }

template < typename _Tp, typename _Up >
    inline
    typename __gnu_cxx :: __promote_2 <
    typename __gnu_cxx :: __enable_if < __traitand < __is_arithmetic < _Tp >,
            __is_arithmetic < _Up > > :: __value,
        _Tp > :: __type, _Up > :: __type
    pow ( _Tp __x, _Up __y )
    {
      typedef typename __gnu_cxx :: __promote_2 < _Tp, _Up > :: __type __type;
      return pow ( __type ( __x ), __type ( __y ) );
    }

using ::sin;


inline float sin(float __x)
{ return __builtin_sinf(__x); }


inline long double sin(long double __x)
{ return __builtin_sinl(__x); }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    sin ( _Tp __x )
    { return __builtin_sin ( __x ); }

using ::sinh;


inline float sinh(float __x)
{ return __builtin_sinhf(__x); }


inline long double sinh(long double __x)
{ return __builtin_sinhl(__x); }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    sinh ( _Tp __x )
    { return __builtin_sinh ( __x ); }

using ::sqrt;


inline float sqrt(float __x)
{ return __builtin_sqrtf(__x); }


inline long double sqrt(long double __x)
{ return __builtin_sqrtl(__x); }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    sqrt ( _Tp __x )
    { return __builtin_sqrt ( __x ); }

using ::tan;


inline float tan(float __x)
{ return __builtin_tanf(__x); }


inline long double tan(long double __x)
{ return __builtin_tanl(__x); }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    tan ( _Tp __x )
    { return __builtin_tan ( __x ); }

using ::tanh;


inline float tanh(float __x)
{ return __builtin_tanhf(__x); }


inline long double tanh(long double __x)
{ return __builtin_tanhl(__x); }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    tanh ( _Tp __x )
    { return __builtin_tanh ( __x ); }

}
# 483 "/usr/include/c++/4.3/cmath" 3
namespace __gnu_cxx __attribute__((visibility("default"))) {

template < typename _Tp >
    inline int
    __capture_fpclassify ( _Tp __f ) { return ( sizeof ( __f ) == sizeof ( float ) ? __fpclassifyf ( __f ) : sizeof ( __f ) == sizeof ( double ) ? __fpclassify ( __f ) : __fpclassifyl ( __f ) ); }

}
# 505 "/usr/include/c++/4.3/cmath" 3
namespace std __attribute__((visibility("default"))) {

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    fpclassify ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return :: __gnu_cxx :: __capture_fpclassify ( __type ( __f ) );
    }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isfinite ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isfinite ( __type ( __f ) );
    }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isinf ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isinf ( __type ( __f ) );
    }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isnan ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isnan ( __type ( __f ) );
    }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isnormal ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isnormal ( __type ( __f ) );
    }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    signbit ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_signbit ( __type ( __f ) );
    }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isgreater ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isgreater ( __type ( __f1 ), __type ( __f2 ) );
    }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isgreaterequal ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isgreaterequal ( __type ( __f1 ), __type ( __f2 ) );
    }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isless ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isless ( __type ( __f1 ), __type ( __f2 ) );
    }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    islessequal ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_islessequal ( __type ( __f1 ), __type ( __f2 ) );
    }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    islessgreater ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_islessgreater ( __type ( __f1 ), __type ( __f2 ) );
    }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isunordered ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isunordered ( __type ( __f1 ), __type ( __f2 ) );
    }

}
# 40 "/usr/include/c++/4.3/bits/cmath.tcc" 3
namespace std __attribute__((visibility("default"))) {

template < typename _Tp >
    inline _Tp
    __cmath_power ( _Tp __x, unsigned int __n )
    {
      _Tp __y = __n % 2 ? __x : _Tp ( 1 );

      while ( __n >>= 1 )
        {
          __x = __x * __x;
          if ( __n % 2 )
            __y = __y * __x;
        }

      return __y;
    }

}
# 54 "/usr/include/c++/4.3/cstddef" 3
namespace std __attribute__((visibility("default"))) {

using ::ptrdiff_t;
using ::size_t;

}
# 105 "/usr/include/c++/4.3/cstdlib" 3
namespace std __attribute__((visibility("default"))) {

using ::div_t;
using ::ldiv_t;

using ::abort;
using ::abs;
using ::atexit;
using ::atof;
using ::atoi;
using ::atol;
using ::bsearch;
using ::calloc;
using ::div;
using ::exit;
using ::free;
using ::getenv;
using ::labs;
using ::ldiv;
using ::malloc;

using ::mblen;
using ::mbstowcs;
using ::mbtowc;

using ::qsort;
using ::rand;
using ::realloc;
using ::srand;
using ::strtod;
using ::strtol;
using ::strtoul;
using ::system;

using ::wcstombs;
using ::wctomb;



inline long abs(long __i) { return labs(__i); }


inline ldiv_t div(long __i, long __j) { return ldiv(__i, __j); }

}
# 162 "/usr/include/c++/4.3/cstdlib" 3
namespace __gnu_cxx __attribute__((visibility("default"))) {


using ::lldiv_t;
# 171 "/usr/include/c++/4.3/cstdlib" 3
using ::_Exit;



inline long long abs(long long __x) { return (__x >= (0)) ? __x : (-__x); }


using ::llabs;


inline lldiv_t div(long long __n, long long __d)
{ auto lldiv_t __q; (__q.quot) = __n / __d; (__q.rem) = __n % __d; return __q; }

using ::lldiv;
# 195 "/usr/include/c++/4.3/cstdlib" 3
using ::atoll;
using ::strtoll;
using ::strtoull;

using ::strtof;
using ::strtold;

}

namespace std __attribute__((visibility("default"))) {


using __gnu_cxx::lldiv_t;

using __gnu_cxx::_Exit;
using __gnu_cxx::abs;

using __gnu_cxx::llabs;
using __gnu_cxx::div;
using __gnu_cxx::lldiv;

using __gnu_cxx::atoll;
using __gnu_cxx::strtof;
using __gnu_cxx::strtoll;
using __gnu_cxx::strtoull;
using __gnu_cxx::strtold;

}
# 434 "/home/normal/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) int __signbitl(long double) throw() __attribute__((__const__));

extern "C" __attribute__((__weak__)) int __isinfl(long double) throw() __attribute__((__const__));

extern "C" __attribute__((__weak__)) int __isnanl(long double) throw() __attribute__((__const__));
# 448 "/home/normal/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) int __finitel(long double) throw() __attribute__((__const__));
# 473 "/home/normal/cuda/bin/../include/math_functions.h"
namespace __gnu_cxx {

extern inline long long abs(long long) __attribute__((visibility("default")));
}

namespace std {

template<class T> extern inline T __pow_helper(T, int);
template<class T> extern inline T __cmath_power(T, unsigned);
}

using std::abs;
using std::fabs;
using std::ceil;
using std::floor;
using std::sqrt;
using std::pow;
using std::log;
using std::log10;
using std::fmod;
using std::modf;
using std::exp;
using std::frexp;
using std::ldexp;
using std::asin;
using std::sin;
using std::sinh;
using std::acos;
using std::cos;
using std::cosh;
using std::atan;
using std::atan2;
using std::tan;
using std::tanh;
# 560 "/home/normal/cuda/bin/../include/math_functions.h"
namespace std {


extern inline long abs(long) __attribute__((visibility("default")));
extern inline float abs(float) __attribute__((visibility("default")));
extern inline double abs(double) __attribute__((visibility("default")));
extern inline float fabs(float) __attribute__((visibility("default")));
extern inline float ceil(float) __attribute__((visibility("default")));
extern inline float floor(float) __attribute__((visibility("default")));
extern inline float sqrt(float) __attribute__((visibility("default")));
extern inline float pow(float, float) __attribute__((visibility("default")));
extern inline float pow(float, int) __attribute__((visibility("default")));
extern inline double pow(double, int) __attribute__((visibility("default")));
extern inline float log(float) __attribute__((visibility("default")));
extern inline float log10(float) __attribute__((visibility("default")));
extern inline float fmod(float, float) __attribute__((visibility("default")));
extern inline float modf(float, float *) __attribute__((visibility("default")));
extern inline float exp(float) __attribute__((visibility("default")));
extern inline float frexp(float, int *) __attribute__((visibility("default")));
extern inline float ldexp(float, int) __attribute__((visibility("default")));
extern inline float asin(float) __attribute__((visibility("default")));
extern inline float sin(float) __attribute__((visibility("default")));
extern inline float sinh(float) __attribute__((visibility("default")));
extern inline float acos(float) __attribute__((visibility("default")));
extern inline float cos(float) __attribute__((visibility("default")));
extern inline float cosh(float) __attribute__((visibility("default")));
extern inline float atan(float) __attribute__((visibility("default")));
extern inline float atan2(float, float) __attribute__((visibility("default")));
extern inline float tan(float) __attribute__((visibility("default")));
extern inline float tanh(float) __attribute__((visibility("default")));


}


static inline float logb(float a)
{
return logbf(a);
}

static inline int ilogb(float a)
{
return ilogbf(a);
}

static inline float scalbn(float a, int b)
{
return scalbnf(a, b);
}

static inline float scalbln(float a, long b)
{
return scalblnf(a, b);
}

static inline float exp2(float a)
{
return exp2f(a);
}

static inline float exp10(float a)
{
return exp10f(a);
}

static inline float expm1(float a)
{
return expm1f(a);
}

static inline float log2(float a)
{
return log2f(a);
}

static inline float log1p(float a)
{
return log1pf(a);
}

static inline float rsqrt(float a)
{
return rsqrtf(a);
}

static inline float acosh(float a)
{
return acoshf(a);
}

static inline float asinh(float a)
{
return asinhf(a);
}

static inline float atanh(float a)
{
return atanhf(a);
}

static inline float hypot(float a, float b)
{
return hypotf(a, b);
}

static inline float cbrt(float a)
{
return cbrtf(a);
}

static inline void sincos(float a, float *sptr, float *cptr)
{
sincosf(a, sptr, cptr);
}

static inline float erf(float a)
{
return erff(a);
}

static inline float erfinv(float a)
{
return erfinvf(a);
}

static inline float erfc(float a)
{
return erfcf(a);
}

static inline float erfcinv(float a)
{
return erfcinvf(a);
}

static inline float lgamma(float a)
{
return lgammaf(a);
}

static inline float tgamma(float a)
{
return tgammaf(a);
}

static inline float copysign(float a, float b)
{
return copysignf(a, b);
}

static inline double copysign(double a, float b)
{
return copysign(a, (double)b);
}

static inline float copysign(float a, double b)
{
return copysignf(a, (float)b);
}

static inline float nextafter(float a, float b)
{
return nextafterf(a, b);
}

static inline float remainder(float a, float b)
{
return remainderf(a, b);
}

static inline float remquo(float a, float b, int *quo)
{
return remquof(a, b, quo);
}

static inline float round(float a)
{
return roundf(a);
}

static inline long lround(float a)
{
return lroundf(a);
}

static inline long long llround(float a)
{
return llroundf(a);
}

static inline float trunc(float a)
{
return truncf(a);
}

static inline float rint(float a)
{
return rintf(a);
}

static inline long lrint(float a)
{
return lrintf(a);
}

static inline long long llrint(float a)
{
return llrintf(a);
}

static inline float nearbyint(float a)
{
return nearbyintf(a);
}

static inline float fdim(float a, float b)
{
return fdimf(a, b);
}

static inline float fma(float a, float b, float c)
{
return fmaf(a, b, c);
}

static inline unsigned min(unsigned a, unsigned b)
{
return umin(a, b);
}

static inline unsigned min(int a, unsigned b)
{
return umin((unsigned)a, b);
}

static inline unsigned min(unsigned a, int b)
{
return umin(a, (unsigned)b);
}

static inline float min(float a, float b)
{
return fminf(a, b);
}

static inline double min(double a, double b)
{
return fmin(a, b);
}

static inline double min(float a, double b)
{
return fmin((double)a, b);
}

static inline double min(double a, float b)
{
return fmin(a, (double)b);
}

static inline unsigned max(unsigned a, unsigned b)
{
return umax(a, b);
}

static inline unsigned max(int a, unsigned b)
{
return umax((unsigned)a, b);
}

static inline unsigned max(unsigned a, int b)
{
return umax(a, (unsigned)b);
}

static inline float max(float a, float b)
{
return fmaxf(a, b);
}

static inline double max(double a, double b)
{
return fmax(a, b);
}

static inline double max(float a, double b)
{
return fmax((double)a, b);
}

static inline double max(double a, float b)
{
return fmax(a, (double)b);
}
# 59 "/home/normal/cuda/bin/../include/cuda_texture_types.h"
template<class T, int dim = 1, cudaTextureReadMode mode = cudaReadModeElementType>
struct texture : public textureReference {

texture(int norm = 0, cudaTextureFilterMode
fMode = cudaFilterModePoint, cudaTextureAddressMode
aMode = cudaAddressModeClamp)
{
(this->normalized) = norm;
(this->filterMode) = fMode;
((this->addressMode)[0]) = aMode;
((this->addressMode)[1]) = aMode;
((this->addressMode)[2]) = aMode;
(this->channelDesc) = cudaCreateChannelDesc< T> ();
}

texture(int norm, cudaTextureFilterMode
fMode, cudaTextureAddressMode
aMode, cudaChannelFormatDesc
desc)
{
(this->normalized) = norm;
(this->filterMode) = fMode;
((this->addressMode)[0]) = aMode;
((this->addressMode)[1]) = aMode;
((this->addressMode)[2]) = aMode;
(this->channelDesc) = desc;
}
};
# 53 "/home/normal/cuda/bin/../include/device_launch_parameters.h"
# 55 "/home/normal/cuda/bin/../include/device_launch_parameters.h"
# 57 "/home/normal/cuda/bin/../include/device_launch_parameters.h"
# 59 "/home/normal/cuda/bin/../include/device_launch_parameters.h"
# 61 "/home/normal/cuda/bin/../include/device_launch_parameters.h"
# 98 "/home/normal/cuda/bin/../include/cuda_runtime.h"
template<class T> inline cudaError_t
cudaSetupArgument(T
arg, size_t
offset)

{
return cudaSetupArgument((const void *)(&arg), sizeof(T), offset);
}
# 120 "/home/normal/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaMemcpyToSymbol(char *
symbol, const void *
src, size_t
count, size_t
offset = (0), cudaMemcpyKind
kind = cudaMemcpyHostToDevice)

{
return cudaMemcpyToSymbol((const char *)symbol, src, count, offset, kind);
}

template<class T> inline cudaError_t
cudaMemcpyToSymbol(const T &
symbol, const void *
src, size_t
count, size_t
offset = (0), cudaMemcpyKind
kind = cudaMemcpyHostToDevice)

{
return cudaMemcpyToSymbol((const char *)(&symbol), src, count, offset, kind);
}

static inline cudaError_t cudaMemcpyToSymbolAsync(char *
symbol, const void *
src, size_t
count, size_t
offset, cudaMemcpyKind
kind, cudaStream_t
stream)

{
return cudaMemcpyToSymbolAsync((const char *)symbol, src, count, offset, kind, stream);
}

template<class T> inline cudaError_t
cudaMemcpyToSymbolAsync(const T &
symbol, const void *
src, size_t
count, size_t
offset, cudaMemcpyKind
kind, cudaStream_t
stream)

{
return cudaMemcpyToSymbolAsync((const char *)(&symbol), src, count, offset, kind, stream);
}
# 174 "/home/normal/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaMemcpyFromSymbol(void *
dst, char *
symbol, size_t
count, size_t
offset = (0), cudaMemcpyKind
kind = cudaMemcpyDeviceToHost)

{
return cudaMemcpyFromSymbol(dst, (const char *)symbol, count, offset, kind);
}

template<class T> inline cudaError_t
cudaMemcpyFromSymbol(void *
dst, const T &
symbol, size_t
count, size_t
offset = (0), cudaMemcpyKind
kind = cudaMemcpyDeviceToHost)

{
return cudaMemcpyFromSymbol(dst, (const char *)(&symbol), count, offset, kind);
}

static inline cudaError_t cudaMemcpyFromSymbolAsync(void *
dst, char *
symbol, size_t
count, size_t
offset, cudaMemcpyKind
kind, cudaStream_t
stream)

{
return cudaMemcpyFromSymbolAsync(dst, (const char *)symbol, count, offset, kind, stream);
}

template<class T> inline cudaError_t
cudaMemcpyFromSymbolAsync(void *
dst, const T &
symbol, size_t
count, size_t
offset, cudaMemcpyKind
kind, cudaStream_t
stream)

{
return cudaMemcpyFromSymbolAsync(dst, (const char *)(&symbol), count, offset, kind, stream);
}

static inline cudaError_t cudaGetSymbolAddress(void **
devPtr, char *
symbol)

{
return cudaGetSymbolAddress(devPtr, (const char *)symbol);
}
# 252 "/home/normal/cuda/bin/../include/cuda_runtime.h"
template<class T> inline cudaError_t
cudaGetSymbolAddress(void **
devPtr, const T &
symbol)

{
return cudaGetSymbolAddress(devPtr, (const char *)(&symbol));
}
# 267 "/home/normal/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaGetSymbolSize(size_t *
size, char *
symbol)

{
return cudaGetSymbolSize(size, (const char *)symbol);
}
# 296 "/home/normal/cuda/bin/../include/cuda_runtime.h"
template<class T> inline cudaError_t
cudaGetSymbolSize(size_t *
size, const T &
symbol)

{
return cudaGetSymbolSize(size, (const char *)(&symbol));
}
# 352 "/home/normal/cuda/bin/../include/cuda_runtime.h"
template<class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
cudaBindTexture(size_t *
offset, const texture< T, dim, readMode> &
tex, const void *
devPtr, const cudaChannelFormatDesc &
desc, size_t
size = (((2147483647) * 2U) + 1U))

{
return cudaBindTexture(offset, &tex, devPtr, (&desc), size);
}
# 396 "/home/normal/cuda/bin/../include/cuda_runtime.h"
template<class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
cudaBindTexture(size_t *
offset, const texture< T, dim, readMode> &
tex, const void *
devPtr, size_t
size = (((2147483647) * 2U) + 1U))

{
return cudaBindTexture(offset, tex, devPtr, (tex.channelDesc), size);
}
# 451 "/home/normal/cuda/bin/../include/cuda_runtime.h"
template<class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
cudaBindTexture2D(size_t *
offset, const texture< T, dim, readMode> &
tex, const void *
devPtr, const cudaChannelFormatDesc &
desc, size_t
width, size_t
height, size_t
pitch)

{
return cudaBindTexture2D(offset, &tex, devPtr, (&desc), width, height, pitch);
}
# 493 "/home/normal/cuda/bin/../include/cuda_runtime.h"
template<class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
cudaBindTextureToArray(const texture< T, dim, readMode> &
tex, const cudaArray *
array, const cudaChannelFormatDesc &
desc)

{
return cudaBindTextureToArray(&tex, array, (&desc));
}
# 530 "/home/normal/cuda/bin/../include/cuda_runtime.h"
template<class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
cudaBindTextureToArray(const texture< T, dim, readMode> &
tex, const cudaArray *
array)

{
auto cudaChannelFormatDesc desc;
auto cudaError_t err = cudaGetChannelDesc(&desc, array);

return (err == (cudaSuccess)) ? (cudaBindTextureToArray(tex, array, desc)) : err;
}
# 568 "/home/normal/cuda/bin/../include/cuda_runtime.h"
template<class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
cudaUnbindTexture(const texture< T, dim, readMode> &
tex)

{
return cudaUnbindTexture(&tex);
}
# 607 "/home/normal/cuda/bin/../include/cuda_runtime.h"
template<class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
cudaGetTextureAlignmentOffset(size_t *
offset, const texture< T, dim, readMode> &
tex)

{
return cudaGetTextureAlignmentOffset(offset, &tex);
}
# 649 "/home/normal/cuda/bin/../include/cuda_runtime.h"
template<class T> inline cudaError_t
cudaLaunch(T *
entry)

{
return cudaLaunch((const char *)entry);
}
# 45 "/usr/include/stdio.h" 3
struct _IO_FILE;



extern "C" { typedef _IO_FILE FILE; }
# 65 "/usr/include/stdio.h" 3
extern "C" { typedef _IO_FILE __FILE; }
# 90 "/usr/include/wchar.h" 3
extern "C" { typedef
# 79 "/usr/include/wchar.h" 3
struct __mbstate_t {
int __count;

union {

unsigned __wch;



char __wchb[4];
} __value;
} __mbstate_t; }
# 26 "/usr/include/_G_config.h" 3
extern "C" { typedef
# 23 "/usr/include/_G_config.h" 3
struct _G_fpos_t {
__off_t __pos;
__mbstate_t __state;
} _G_fpos_t; }




extern "C" { typedef
# 28 "/usr/include/_G_config.h" 3
struct _G_fpos64_t {
__off64_t __pos;
__mbstate_t __state;
} _G_fpos64_t; }
# 53 "/usr/include/_G_config.h" 3
extern "C" { typedef short _G_int16_t; }
extern "C" { typedef int _G_int32_t; }
extern "C" { typedef unsigned short _G_uint16_t; }
extern "C" { typedef unsigned _G_uint32_t; }
# 43 "/usr/lib/gcc/x86_64-linux-gnu/4.3.3/include/stdarg.h" 3
extern "C" { typedef __builtin_va_list __gnuc_va_list; }
# 170 "/usr/include/libio.h" 3
struct _IO_jump_t; struct _IO_FILE;
# 180 "/usr/include/libio.h" 3
extern "C" { typedef void _IO_lock_t; }
# 186 "/usr/include/libio.h" 3
extern "C" { struct _IO_marker {
_IO_marker *_next;
_IO_FILE *_sbuf;



int _pos;
# 203 "/usr/include/libio.h" 3
}; }


enum __codecvt_result {

__codecvt_ok,
__codecvt_partial,
__codecvt_error,
__codecvt_noconv
};
# 271 "/usr/include/libio.h" 3
extern "C" { struct _IO_FILE {
int _flags;




char *_IO_read_ptr;
char *_IO_read_end;
char *_IO_read_base;
char *_IO_write_base;
char *_IO_write_ptr;
char *_IO_write_end;
char *_IO_buf_base;
char *_IO_buf_end;

char *_IO_save_base;
char *_IO_backup_base;
char *_IO_save_end;

_IO_marker *_markers;

_IO_FILE *_chain;

int _fileno;



int _flags2;

__off_t _old_offset;



unsigned short _cur_column;
signed char _vtable_offset;
char _shortbuf[1];



_IO_lock_t *_lock;
# 319 "/usr/include/libio.h" 3
__off64_t _offset;
# 328 "/usr/include/libio.h" 3
void *__pad1;
void *__pad2;
void *__pad3;
void *__pad4;
size_t __pad5;

int _mode;

char _unused2[((((15) * sizeof(int)) - ((4) * sizeof(void *))) - sizeof(size_t))];

}; }
# 344 "/usr/include/libio.h" 3
struct _IO_FILE_plus;

extern "C" { extern _IO_FILE_plus _IO_2_1_stdin_; }
extern "C" { extern _IO_FILE_plus _IO_2_1_stdout_; }
extern "C" { extern _IO_FILE_plus _IO_2_1_stderr_; }
# 364 "/usr/include/libio.h" 3
extern "C" { typedef __ssize_t __io_read_fn(void *, char *, size_t); }
# 372 "/usr/include/libio.h" 3
extern "C" { typedef __ssize_t __io_write_fn(void *, const char *, size_t); }
# 381 "/usr/include/libio.h" 3
extern "C" { typedef int __io_seek_fn(void *, __off64_t *, int); }


extern "C" { typedef int __io_close_fn(void *); }




extern "C" { typedef __io_read_fn cookie_read_function_t; }
extern "C" { typedef __io_write_fn cookie_write_function_t; }
extern "C" { typedef __io_seek_fn cookie_seek_function_t; }
extern "C" { typedef __io_close_fn cookie_close_function_t; }
# 401 "/usr/include/libio.h" 3
extern "C" { typedef
# 396 "/usr/include/libio.h" 3
struct _IO_cookie_io_functions_t {
__io_read_fn *read;
__io_write_fn *write;
__io_seek_fn *seek;
__io_close_fn *close;
} _IO_cookie_io_functions_t; }
extern "C" { typedef _IO_cookie_io_functions_t cookie_io_functions_t; }

struct _IO_cookie_file;


extern "C" void _IO_cookie_init(_IO_cookie_file *, int, void *, _IO_cookie_io_functions_t);
# 416 "/usr/include/libio.h" 3
extern "C" int __underflow(_IO_FILE *);
extern "C" int __uflow(_IO_FILE *);
extern "C" int __overflow(_IO_FILE *, int);
# 458 "/usr/include/libio.h" 3
extern "C" int _IO_getc(_IO_FILE *);
extern "C" int _IO_putc(int, _IO_FILE *);
extern "C" int _IO_feof(_IO_FILE *) throw();
extern "C" int _IO_ferror(_IO_FILE *) throw();

extern "C" int _IO_peekc_locked(_IO_FILE *);
# 469 "/usr/include/libio.h" 3
extern "C" void _IO_flockfile(_IO_FILE *) throw();
extern "C" void _IO_funlockfile(_IO_FILE *) throw();
extern "C" int _IO_ftrylockfile(_IO_FILE *) throw();
# 488 "/usr/include/libio.h" 3
extern "C" int _IO_vfscanf(_IO_FILE *__restrict__, const char *__restrict__, __gnuc_va_list, int *__restrict__);

extern "C" int _IO_vfprintf(_IO_FILE *__restrict__, const char *__restrict__, __gnuc_va_list);

extern "C" __ssize_t _IO_padn(_IO_FILE *, int, __ssize_t);
extern "C" size_t _IO_sgetn(_IO_FILE *, void *, size_t);

extern "C" __off64_t _IO_seekoff(_IO_FILE *, __off64_t, int, int);
extern "C" __off64_t _IO_seekpos(_IO_FILE *, __off64_t, int);

extern "C" void _IO_free_backup_area(_IO_FILE *) throw();
# 80 "/usr/include/stdio.h" 3
extern "C" { typedef __gnuc_va_list va_list; }
# 91 "/usr/include/stdio.h" 3
extern "C" { typedef _G_fpos_t fpos_t; }
# 97 "/usr/include/stdio.h" 3
extern "C" { typedef _G_fpos64_t fpos64_t; }
# 145 "/usr/include/stdio.h" 3
extern "C" { extern _IO_FILE *stdin; }
extern "C" { extern _IO_FILE *stdout; }
extern "C" { extern _IO_FILE *stderr; }
# 155 "/usr/include/stdio.h" 3
extern "C" int remove(const char *) throw();

extern "C" int rename(const char *, const char *) throw();




extern "C" int renameat(int, const char *, int, const char *) throw();
# 172 "/usr/include/stdio.h" 3
extern "C" FILE *tmpfile();
# 182 "/usr/include/stdio.h" 3
extern "C" FILE *tmpfile64();



extern "C" char *tmpnam(char *) throw();
# 192 "/usr/include/stdio.h" 3
extern "C" char *tmpnam_r(char *) throw();
# 204 "/usr/include/stdio.h" 3
extern "C" char *tempnam(const char *, const char *) throw() __attribute__((__malloc__));
# 214 "/usr/include/stdio.h" 3
extern "C" int fclose(FILE *);




extern "C" int fflush(FILE *);
# 229 "/usr/include/stdio.h" 3
extern "C" int fflush_unlocked(FILE *);
# 239 "/usr/include/stdio.h" 3
extern "C" int fcloseall();
# 249 "/usr/include/stdio.h" 3
extern "C" FILE *fopen(const char *__restrict__, const char *__restrict__);
# 255 "/usr/include/stdio.h" 3
extern "C" FILE *freopen(const char *__restrict__, const char *__restrict__, FILE *__restrict__);
# 274 "/usr/include/stdio.h" 3
extern "C" FILE *fopen64(const char *__restrict__, const char *__restrict__);

extern "C" FILE *freopen64(const char *__restrict__, const char *__restrict__, FILE *__restrict__);
# 283 "/usr/include/stdio.h" 3
extern "C" FILE *fdopen(int, const char *) throw();
# 289 "/usr/include/stdio.h" 3
extern "C" FILE *fopencookie(void *__restrict__, const char *__restrict__, _IO_cookie_io_functions_t) throw();




extern "C" FILE *fmemopen(void *, size_t, const char *) throw();
# 300 "/usr/include/stdio.h" 3
extern "C" FILE *open_memstream(char **, size_t *) throw();
# 307 "/usr/include/stdio.h" 3
extern "C" void setbuf(FILE *__restrict__, char *__restrict__) throw();



extern "C" int setvbuf(FILE *__restrict__, char *__restrict__, int, size_t) throw();
# 318 "/usr/include/stdio.h" 3
extern "C" void setbuffer(FILE *__restrict__, char *__restrict__, size_t) throw();



extern "C" void setlinebuf(FILE *) throw();
# 331 "/usr/include/stdio.h" 3
extern "C" int fprintf(FILE *__restrict__, const char *__restrict__, ...);
# 337 "/usr/include/stdio.h" 3
extern "C" int printf(const char *__restrict__, ...);

extern "C" int sprintf(char *__restrict__, const char *__restrict__, ...) throw();
# 346 "/usr/include/stdio.h" 3
extern "C" int vfprintf(FILE *__restrict__, const char *__restrict__, __gnuc_va_list);
# 352 "/usr/include/stdio.h" 3
extern "C" int vprintf(const char *__restrict__, __gnuc_va_list);

extern "C" int vsprintf(char *__restrict__, const char *__restrict__, __gnuc_va_list) throw();
# 361 "/usr/include/stdio.h" 3
extern "C" int snprintf(char *__restrict__, size_t, const char *__restrict__, ...) throw();



extern "C" int vsnprintf(char *__restrict__, size_t, const char *__restrict__, __gnuc_va_list) throw();
# 374 "/usr/include/stdio.h" 3
extern "C" int vasprintf(char **__restrict__, const char *__restrict__, __gnuc_va_list) throw();


extern "C" int __asprintf(char **__restrict__, const char *__restrict__, ...) throw();


extern "C" int asprintf(char **__restrict__, const char *__restrict__, ...) throw();
# 390 "/usr/include/stdio.h" 3
extern "C" int vdprintf(int, const char *__restrict__, __gnuc_va_list);


extern "C" int dprintf(int, const char *__restrict__, ...);
# 403 "/usr/include/stdio.h" 3
extern "C" int fscanf(FILE *__restrict__, const char *__restrict__, ...);
# 409 "/usr/include/stdio.h" 3
extern "C" int scanf(const char *__restrict__, ...);

extern "C" int sscanf(const char *__restrict__, const char *__restrict__, ...) throw();
# 449 "/usr/include/stdio.h" 3
extern "C" int vfscanf(FILE *__restrict__, const char *__restrict__, __gnuc_va_list);
# 457 "/usr/include/stdio.h" 3
extern "C" int vscanf(const char *__restrict__, __gnuc_va_list);



extern "C" int vsscanf(const char *__restrict__, const char *__restrict__, __gnuc_va_list) throw();
# 509 "/usr/include/stdio.h" 3
extern "C" int fgetc(FILE *);
extern "C" int getc(FILE *);
# 516 "/usr/include/stdio.h" 3
extern "C" int getchar();
# 528 "/usr/include/stdio.h" 3
extern "C" int getc_unlocked(FILE *);
extern "C" int getchar_unlocked();
# 539 "/usr/include/stdio.h" 3
extern "C" int fgetc_unlocked(FILE *);
# 551 "/usr/include/stdio.h" 3
extern "C" int fputc(int, FILE *);
extern "C" int putc(int, FILE *);
# 558 "/usr/include/stdio.h" 3
extern "C" int putchar(int);
# 572 "/usr/include/stdio.h" 3
extern "C" int fputc_unlocked(int, FILE *);
# 580 "/usr/include/stdio.h" 3
extern "C" int putc_unlocked(int, FILE *);
extern "C" int putchar_unlocked(int);
# 588 "/usr/include/stdio.h" 3
extern "C" int getw(FILE *);


extern "C" int putw(int, FILE *);
# 600 "/usr/include/stdio.h" 3
extern "C" char *fgets(char *__restrict__, int, FILE *__restrict__);
# 608 "/usr/include/stdio.h" 3
extern "C" char *gets(char *);
# 618 "/usr/include/stdio.h" 3
extern "C" char *fgets_unlocked(char *__restrict__, int, FILE *__restrict__);
# 634 "/usr/include/stdio.h" 3
extern "C" __ssize_t __getdelim(char **__restrict__, size_t *__restrict__, int, FILE *__restrict__);


extern "C" __ssize_t getdelim(char **__restrict__, size_t *__restrict__, int, FILE *__restrict__);
# 647 "/usr/include/stdio.h" 3
extern "C" __ssize_t getline(char **__restrict__, size_t *__restrict__, FILE *__restrict__);
# 658 "/usr/include/stdio.h" 3
extern "C" int fputs(const char *__restrict__, FILE *__restrict__);
# 664 "/usr/include/stdio.h" 3
extern "C" int puts(const char *);
# 671 "/usr/include/stdio.h" 3
extern "C" int ungetc(int, FILE *);
# 678 "/usr/include/stdio.h" 3
extern "C" size_t fread(void *__restrict__, size_t, size_t, FILE *__restrict__);
# 684 "/usr/include/stdio.h" 3
extern "C" size_t fwrite(const void *__restrict__, size_t, size_t, FILE *__restrict__);
# 695 "/usr/include/stdio.h" 3
extern "C" int fputs_unlocked(const char *__restrict__, FILE *__restrict__);
# 706 "/usr/include/stdio.h" 3
extern "C" size_t fread_unlocked(void *__restrict__, size_t, size_t, FILE *__restrict__);

extern "C" size_t fwrite_unlocked(const void *__restrict__, size_t, size_t, FILE *__restrict__);
# 718 "/usr/include/stdio.h" 3
extern "C" int fseek(FILE *, long, int);




extern "C" long ftell(FILE *);




extern "C" void rewind(FILE *);
# 742 "/usr/include/stdio.h" 3
extern "C" int fseeko(FILE *, __off_t, int);




extern "C" __off_t ftello(FILE *);
# 767 "/usr/include/stdio.h" 3
extern "C" int fgetpos(FILE *__restrict__, fpos_t *__restrict__);




extern "C" int fsetpos(FILE *, const fpos_t *);
# 787 "/usr/include/stdio.h" 3
extern "C" int fseeko64(FILE *, __off64_t, int);
extern "C" __off64_t ftello64(FILE *);
extern "C" int fgetpos64(FILE *__restrict__, fpos64_t *__restrict__);
extern "C" int fsetpos64(FILE *, const fpos64_t *);




extern "C" void clearerr(FILE *) throw();

extern "C" int feof(FILE *) throw();

extern "C" int ferror(FILE *) throw();




extern "C" void clearerr_unlocked(FILE *) throw();
extern "C" int feof_unlocked(FILE *) throw();
extern "C" int ferror_unlocked(FILE *) throw();
# 815 "/usr/include/stdio.h" 3
extern "C" void perror(const char *);
# 27 "/usr/include/bits/sys_errlist.h" 3
extern "C" { extern int sys_nerr; }
extern "C" { extern const char *const sys_errlist[]; }


extern "C" { extern int _sys_nerr; }
extern "C" { extern const char *const _sys_errlist[]; }
# 827 "/usr/include/stdio.h" 3
extern "C" int fileno(FILE *) throw();




extern "C" int fileno_unlocked(FILE *) throw();
# 842 "/usr/include/stdio.h" 3
extern "C" FILE *popen(const char *, const char *);
# 848 "/usr/include/stdio.h" 3
extern "C" int pclose(FILE *);
# 854 "/usr/include/stdio.h" 3
extern "C" char *ctermid(char *) throw();
# 860 "/usr/include/stdio.h" 3
extern "C" char *cuserid(char *);




struct obstack;


extern "C" int obstack_printf(obstack *__restrict__, const char *__restrict__, ...) throw();


extern "C" int obstack_vprintf(obstack *__restrict__, const char *__restrict__, __gnuc_va_list) throw();
# 882 "/usr/include/stdio.h" 3
extern "C" void flockfile(FILE *) throw();



extern "C" int ftrylockfile(FILE *) throw();


extern "C" void funlockfile(FILE *) throw();
# 62 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" { typedef unsigned CUdeviceptr; }

extern "C" { typedef int CUdevice; }
extern "C" { typedef struct CUctx_st *CUcontext; }
extern "C" { typedef struct CUmod_st *CUmodule; }
extern "C" { typedef struct CUfunc_st *CUfunction; }
extern "C" { typedef struct CUarray_st *CUarray; }
extern "C" { typedef struct CUtexref_st *CUtexref; }
extern "C" { typedef struct CUevent_st *CUevent; }
extern "C" { typedef struct CUstream_st *CUstream; }
# 90 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 82 "/home/normal/cuda/bin/../include/cuda.h"
enum CUctx_flags_enum {
CU_CTX_SCHED_AUTO,
CU_CTX_SCHED_SPIN,
CU_CTX_SCHED_YIELD,
CU_CTX_SCHED_MASK,
CU_CTX_BLOCKING_SYNC,
CU_CTX_MAP_HOST = 8,
CU_CTX_FLAGS_MASK = 15
} CUctx_flags; }
# 98 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 95 "/home/normal/cuda/bin/../include/cuda.h"
enum CUevent_flags_enum {
CU_EVENT_DEFAULT,
CU_EVENT_BLOCKING_SYNC
} CUevent_flags; }
# 112 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 103 "/home/normal/cuda/bin/../include/cuda.h"
enum CUarray_format_enum {
CU_AD_FORMAT_UNSIGNED_INT8 = 1,
CU_AD_FORMAT_UNSIGNED_INT16,
CU_AD_FORMAT_UNSIGNED_INT32,
CU_AD_FORMAT_SIGNED_INT8 = 8,
CU_AD_FORMAT_SIGNED_INT16,
CU_AD_FORMAT_SIGNED_INT32,
CU_AD_FORMAT_HALF = 16,
CU_AD_FORMAT_FLOAT = 32
} CUarray_format; }
# 121 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 117 "/home/normal/cuda/bin/../include/cuda.h"
enum CUaddress_mode_enum {
CU_TR_ADDRESS_MODE_WRAP,
CU_TR_ADDRESS_MODE_CLAMP,
CU_TR_ADDRESS_MODE_MIRROR
} CUaddress_mode; }
# 129 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 126 "/home/normal/cuda/bin/../include/cuda.h"
enum CUfilter_mode_enum {
CU_TR_FILTER_MODE_POINT,
CU_TR_FILTER_MODE_LINEAR
} CUfilter_mode; }
# 158 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 134 "/home/normal/cuda/bin/../include/cuda.h"
enum CUdevice_attribute_enum {
CU_DEVICE_ATTRIBUTE_MAX_THREADS_PER_BLOCK = 1,
CU_DEVICE_ATTRIBUTE_MAX_BLOCK_DIM_X,
CU_DEVICE_ATTRIBUTE_MAX_BLOCK_DIM_Y,
CU_DEVICE_ATTRIBUTE_MAX_BLOCK_DIM_Z,
CU_DEVICE_ATTRIBUTE_MAX_GRID_DIM_X,
CU_DEVICE_ATTRIBUTE_MAX_GRID_DIM_Y,
CU_DEVICE_ATTRIBUTE_MAX_GRID_DIM_Z,
CU_DEVICE_ATTRIBUTE_MAX_SHARED_MEMORY_PER_BLOCK,
CU_DEVICE_ATTRIBUTE_SHARED_MEMORY_PER_BLOCK = 8,
CU_DEVICE_ATTRIBUTE_TOTAL_CONSTANT_MEMORY,
CU_DEVICE_ATTRIBUTE_WARP_SIZE,
CU_DEVICE_ATTRIBUTE_MAX_PITCH,
CU_DEVICE_ATTRIBUTE_MAX_REGISTERS_PER_BLOCK,
CU_DEVICE_ATTRIBUTE_REGISTERS_PER_BLOCK = 12,
CU_DEVICE_ATTRIBUTE_CLOCK_RATE,
CU_DEVICE_ATTRIBUTE_TEXTURE_ALIGNMENT,

CU_DEVICE_ATTRIBUTE_GPU_OVERLAP,
CU_DEVICE_ATTRIBUTE_MULTIPROCESSOR_COUNT,
CU_DEVICE_ATTRIBUTE_KERNEL_EXEC_TIMEOUT,
CU_DEVICE_ATTRIBUTE_INTEGRATED,
CU_DEVICE_ATTRIBUTE_CAN_MAP_HOST_MEMORY,
CU_DEVICE_ATTRIBUTE_COMPUTE_MODE
} CUdevice_attribute; }
# 174 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 163 "/home/normal/cuda/bin/../include/cuda.h"
struct CUdevprop_st {
int maxThreadsPerBlock;
int maxThreadsDim[3];
int maxGridSize[3];
int sharedMemPerBlock;
int totalConstantMemory;
int SIMDWidth;
int memPitch;
int regsPerBlock;
int clockRate;
int textureAlign;
} CUdevprop; }
# 211 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 179 "/home/normal/cuda/bin/../include/cuda.h"
enum CUfunction_attribute_enum {
# 185 "/home/normal/cuda/bin/../include/cuda.h"
CU_FUNC_ATTRIBUTE_MAX_THREADS_PER_BLOCK,
# 192 "/home/normal/cuda/bin/../include/cuda.h"
CU_FUNC_ATTRIBUTE_SHARED_SIZE_BYTES,
# 198 "/home/normal/cuda/bin/../include/cuda.h"
CU_FUNC_ATTRIBUTE_CONST_SIZE_BYTES,




CU_FUNC_ATTRIBUTE_LOCAL_SIZE_BYTES,




CU_FUNC_ATTRIBUTE_NUM_REGS,

CU_FUNC_ATTRIBUTE_MAX
} CUfunction_attribute; }
# 220 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 216 "/home/normal/cuda/bin/../include/cuda.h"
enum CUmemorytype_enum {
CU_MEMORYTYPE_HOST = 1,
CU_MEMORYTYPE_DEVICE,
CU_MEMORYTYPE_ARRAY
} CUmemorytype; }
# 229 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 225 "/home/normal/cuda/bin/../include/cuda.h"
enum CUcomputemode_enum {
CU_COMPUTEMODE_DEFAULT,
CU_COMPUTEMODE_EXCLUSIVE,
CU_COMPUTEMODE_PROHIBITED
} CUcomputemode; }
# 308 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 234 "/home/normal/cuda/bin/../include/cuda.h"
enum CUjit_option_enum {




CU_JIT_MAX_REGISTERS,
# 251 "/home/normal/cuda/bin/../include/cuda.h"
CU_JIT_THREADS_PER_BLOCK,
# 257 "/home/normal/cuda/bin/../include/cuda.h"
CU_JIT_WALL_TIME,
# 263 "/home/normal/cuda/bin/../include/cuda.h"
CU_JIT_INFO_LOG_BUFFER,
# 270 "/home/normal/cuda/bin/../include/cuda.h"
CU_JIT_INFO_LOG_BUFFER_SIZE_BYTES,
# 276 "/home/normal/cuda/bin/../include/cuda.h"
CU_JIT_ERROR_LOG_BUFFER,
# 283 "/home/normal/cuda/bin/../include/cuda.h"
CU_JIT_ERROR_LOG_BUFFER_SIZE_BYTES,
# 289 "/home/normal/cuda/bin/../include/cuda.h"
CU_JIT_OPTIMIZATION_LEVEL,
# 295 "/home/normal/cuda/bin/../include/cuda.h"
CU_JIT_TARGET_FROM_CUCONTEXT,




CU_JIT_TARGET,
# 306 "/home/normal/cuda/bin/../include/cuda.h"
CU_JIT_FALLBACK_STRATEGY

} CUjit_option; }
# 319 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 313 "/home/normal/cuda/bin/../include/cuda.h"
enum CUjit_target_enum {

CU_TARGET_COMPUTE_10,
CU_TARGET_COMPUTE_11,
CU_TARGET_COMPUTE_12,
CU_TARGET_COMPUTE_13
} CUjit_target; }
# 332 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 324 "/home/normal/cuda/bin/../include/cuda.h"
enum CUjit_fallback_enum {


CU_PREFER_PTX,


CU_PREFER_BINARY

} CUjit_fallback; }
# 380 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 343 "/home/normal/cuda/bin/../include/cuda.h"
enum cudaError_enum {

CUDA_SUCCESS,
CUDA_ERROR_INVALID_VALUE,
CUDA_ERROR_OUT_OF_MEMORY,
CUDA_ERROR_NOT_INITIALIZED,
CUDA_ERROR_DEINITIALIZED,

CUDA_ERROR_NO_DEVICE = 100,
CUDA_ERROR_INVALID_DEVICE,

CUDA_ERROR_INVALID_IMAGE = 200,
CUDA_ERROR_INVALID_CONTEXT,
CUDA_ERROR_CONTEXT_ALREADY_CURRENT,
CUDA_ERROR_MAP_FAILED = 205,
CUDA_ERROR_UNMAP_FAILED,
CUDA_ERROR_ARRAY_IS_MAPPED,
CUDA_ERROR_ALREADY_MAPPED,
CUDA_ERROR_NO_BINARY_FOR_GPU,
CUDA_ERROR_ALREADY_ACQUIRED,
CUDA_ERROR_NOT_MAPPED,

CUDA_ERROR_INVALID_SOURCE = 300,
CUDA_ERROR_FILE_NOT_FOUND,

CUDA_ERROR_INVALID_HANDLE = 400,

CUDA_ERROR_NOT_FOUND = 500,

CUDA_ERROR_NOT_READY = 600,

CUDA_ERROR_LAUNCH_FAILED = 700,
CUDA_ERROR_LAUNCH_OUT_OF_RESOURCES,
CUDA_ERROR_LAUNCH_TIMEOUT,
CUDA_ERROR_LAUNCH_INCOMPATIBLE_TEXTURING,

CUDA_ERROR_UNKNOWN = 999
} CUresult; }
# 426 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 406 "/home/normal/cuda/bin/../include/cuda.h"
struct CUDA_MEMCPY2D_st {

unsigned srcXInBytes;
unsigned srcY;
CUmemorytype srcMemoryType;
const void *srcHost;
CUdeviceptr srcDevice;
CUarray srcArray;
unsigned srcPitch;

unsigned dstXInBytes;
unsigned dstY;
CUmemorytype dstMemoryType;
void *dstHost;
CUdeviceptr dstDevice;
CUarray dstArray;
unsigned dstPitch;

unsigned WidthInBytes;
unsigned Height;
} CUDA_MEMCPY2D; }
# 460 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 431 "/home/normal/cuda/bin/../include/cuda.h"
struct CUDA_MEMCPY3D_st {

unsigned srcXInBytes;
unsigned srcY;
unsigned srcZ;
unsigned srcLOD;
CUmemorytype srcMemoryType;
const void *srcHost;
CUdeviceptr srcDevice;
CUarray srcArray;
void *reserved0;
unsigned srcPitch;
unsigned srcHeight;

unsigned dstXInBytes;
unsigned dstY;
unsigned dstZ;
unsigned dstLOD;
CUmemorytype dstMemoryType;
void *dstHost;
CUdeviceptr dstDevice;
CUarray dstArray;
void *reserved1;
unsigned dstPitch;
unsigned dstHeight;

unsigned WidthInBytes;
unsigned Height;
unsigned Depth;
} CUDA_MEMCPY3D; }
# 473 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 466 "/home/normal/cuda/bin/../include/cuda.h"
struct CUDA_ARRAY_DESCRIPTOR {
unsigned Width;
unsigned Height;

CUarray_format Format;

unsigned NumChannels;
} CUDA_ARRAY_DESCRIPTOR; }
# 489 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 479 "/home/normal/cuda/bin/../include/cuda.h"
struct CUDA_ARRAY3D_DESCRIPTOR {
unsigned Width;
unsigned Height;
unsigned Depth;

CUarray_format Format;

unsigned NumChannels;

unsigned Flags;
} CUDA_ARRAY3D_DESCRIPTOR; }
# 528 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" CUresult cuInit(unsigned);




extern "C" CUresult cuDriverGetVersion(int *);
# 541 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" CUresult cuDeviceGet(CUdevice *, int);
extern "C" CUresult cuDeviceGetCount(int *);
extern "C" CUresult cuDeviceGetName(char *, int, CUdevice);
extern "C" CUresult cuDeviceComputeCapability(int *, int *, CUdevice);
extern "C" CUresult cuDeviceTotalMem(unsigned *, CUdevice);
extern "C" CUresult cuDeviceGetProperties(CUdevprop *, CUdevice);
extern "C" CUresult cuDeviceGetAttribute(int *, CUdevice_attribute, CUdevice);
# 555 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" CUresult cuCtxCreate(CUcontext *, unsigned, CUdevice);
extern "C" CUresult cuCtxDestroy(CUcontext);
extern "C" CUresult cuCtxAttach(CUcontext *, unsigned);
extern "C" CUresult cuCtxDetach(CUcontext);
extern "C" CUresult cuCtxPushCurrent(CUcontext);
extern "C" CUresult cuCtxPopCurrent(CUcontext *);
extern "C" CUresult cuCtxGetDevice(CUdevice *);
extern "C" CUresult cuCtxSynchronize();
# 571 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" CUresult cuModuleLoad(CUmodule *, const char *);
extern "C" CUresult cuModuleLoadData(CUmodule *, const void *);
extern "C" CUresult cuModuleLoadDataEx(CUmodule *, const void *, unsigned, CUjit_option *, void **);
extern "C" CUresult cuModuleLoadFatBinary(CUmodule *, const void *);
extern "C" CUresult cuModuleUnload(CUmodule);
extern "C" CUresult cuModuleGetFunction(CUfunction *, CUmodule, const char *);
extern "C" CUresult cuModuleGetGlobal(CUdeviceptr *, unsigned *, CUmodule, const char *);
extern "C" CUresult cuModuleGetTexRef(CUtexref *, CUmodule, const char *);
# 586 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemGetInfo(unsigned *, unsigned *);

extern "C" CUresult cuMemAlloc(CUdeviceptr *, unsigned);
extern "C" CUresult cuMemAllocPitch(CUdeviceptr *, unsigned *, unsigned, unsigned, unsigned);
# 597 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemFree(CUdeviceptr);
extern "C" CUresult cuMemGetAddressRange(CUdeviceptr *, unsigned *, CUdeviceptr);

extern "C" CUresult cuMemAllocHost(void **, unsigned);
extern "C" CUresult cuMemFreeHost(void *);

extern "C" CUresult cuMemHostAlloc(void **, size_t, unsigned);

extern "C" CUresult cuMemHostGetDevicePointer(CUdeviceptr *, void *, unsigned);
# 618 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyHtoD(CUdeviceptr, const void *, unsigned);
extern "C" CUresult cuMemcpyDtoH(void *, CUdeviceptr, unsigned);


extern "C" CUresult cuMemcpyDtoD(CUdeviceptr, CUdeviceptr, unsigned);


extern "C" CUresult cuMemcpyDtoA(CUarray, unsigned, CUdeviceptr, unsigned);
extern "C" CUresult cuMemcpyAtoD(CUdeviceptr, CUarray, unsigned, unsigned);


extern "C" CUresult cuMemcpyHtoA(CUarray, unsigned, const void *, unsigned);
extern "C" CUresult cuMemcpyAtoH(void *, CUarray, unsigned, unsigned);


extern "C" CUresult cuMemcpyAtoA(CUarray, unsigned, CUarray, unsigned, unsigned);



extern "C" CUresult cuMemcpy2D(const CUDA_MEMCPY2D *);
extern "C" CUresult cuMemcpy2DUnaligned(const CUDA_MEMCPY2D *);



extern "C" CUresult cuMemcpy3D(const CUDA_MEMCPY3D *);
# 657 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyHtoDAsync(CUdeviceptr, const void *, unsigned, CUstream);

extern "C" CUresult cuMemcpyDtoHAsync(void *, CUdeviceptr, unsigned, CUstream);



extern "C" CUresult cuMemcpyHtoAAsync(CUarray, unsigned, const void *, unsigned, CUstream);

extern "C" CUresult cuMemcpyAtoHAsync(void *, CUarray, unsigned, unsigned, CUstream);



extern "C" CUresult cuMemcpy2DAsync(const CUDA_MEMCPY2D *, CUstream);


extern "C" CUresult cuMemcpy3DAsync(const CUDA_MEMCPY3D *, CUstream);
# 679 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemsetD8(CUdeviceptr, unsigned char, unsigned);
extern "C" CUresult cuMemsetD16(CUdeviceptr, unsigned short, unsigned);
extern "C" CUresult cuMemsetD32(CUdeviceptr, unsigned, unsigned);

extern "C" CUresult cuMemsetD2D8(CUdeviceptr, unsigned, unsigned char, unsigned, unsigned);
extern "C" CUresult cuMemsetD2D16(CUdeviceptr, unsigned, unsigned short, unsigned, unsigned);
extern "C" CUresult cuMemsetD2D32(CUdeviceptr, unsigned, unsigned, unsigned, unsigned);
# 694 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" CUresult cuFuncSetBlockShape(CUfunction, int, int, int);
extern "C" CUresult cuFuncSetSharedSize(CUfunction, unsigned);
extern "C" CUresult cuFuncGetAttribute(int *, CUfunction_attribute, CUfunction);
# 704 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" CUresult cuArrayCreate(CUarray *, const CUDA_ARRAY_DESCRIPTOR *);
extern "C" CUresult cuArrayGetDescriptor(CUDA_ARRAY_DESCRIPTOR *, CUarray);
extern "C" CUresult cuArrayDestroy(CUarray);

extern "C" CUresult cuArray3DCreate(CUarray *, const CUDA_ARRAY3D_DESCRIPTOR *);
extern "C" CUresult cuArray3DGetDescriptor(CUDA_ARRAY3D_DESCRIPTOR *, CUarray);
# 717 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefCreate(CUtexref *);
extern "C" CUresult cuTexRefDestroy(CUtexref);

extern "C" CUresult cuTexRefSetArray(CUtexref, CUarray, unsigned);
extern "C" CUresult cuTexRefSetAddress(unsigned *, CUtexref, CUdeviceptr, unsigned);
extern "C" CUresult cuTexRefSetAddress2D(CUtexref, const CUDA_ARRAY_DESCRIPTOR *, CUdeviceptr, unsigned);
extern "C" CUresult cuTexRefSetFormat(CUtexref, CUarray_format, int);
extern "C" CUresult cuTexRefSetAddressMode(CUtexref, int, CUaddress_mode);
extern "C" CUresult cuTexRefSetFilterMode(CUtexref, CUfilter_mode);
extern "C" CUresult cuTexRefSetFlags(CUtexref, unsigned);

extern "C" CUresult cuTexRefGetAddress(CUdeviceptr *, CUtexref);
extern "C" CUresult cuTexRefGetArray(CUarray *, CUtexref);
extern "C" CUresult cuTexRefGetAddressMode(CUaddress_mode *, CUtexref, int);
extern "C" CUresult cuTexRefGetFilterMode(CUfilter_mode *, CUtexref);
extern "C" CUresult cuTexRefGetFormat(CUarray_format *, int *, CUtexref);
extern "C" CUresult cuTexRefGetFlags(unsigned *, CUtexref);
# 741 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" CUresult cuParamSetSize(CUfunction, unsigned);
extern "C" CUresult cuParamSeti(CUfunction, int, unsigned);
extern "C" CUresult cuParamSetf(CUfunction, int, float);
extern "C" CUresult cuParamSetv(CUfunction, int, void *, unsigned);
extern "C" CUresult cuParamSetTexRef(CUfunction, int, CUtexref);
# 753 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" CUresult cuLaunch(CUfunction);
extern "C" CUresult cuLaunchGrid(CUfunction, int, int);
extern "C" CUresult cuLaunchGridAsync(CUfunction, int, int, CUstream);
# 762 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" CUresult cuEventCreate(CUevent *, unsigned);
extern "C" CUresult cuEventRecord(CUevent, CUstream);
extern "C" CUresult cuEventQuery(CUevent);
extern "C" CUresult cuEventSynchronize(CUevent);
extern "C" CUresult cuEventDestroy(CUevent);
extern "C" CUresult cuEventElapsedTime(float *, CUevent, CUevent);
# 774 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" CUresult cuStreamCreate(CUstream *, unsigned);
extern "C" CUresult cuStreamQuery(CUstream);
extern "C" CUresult cuStreamSynchronize(CUstream);
extern "C" CUresult cuStreamDestroy(CUstream);
# 65 "../../sdk/cutil.h"
enum CUTBoolean {

CUTFalse,
CUTTrue
};
# 77 "../../sdk/cutil.h"
extern "C" void cutFree(void *);
# 95 "../../sdk/cutil.h"
extern "C" void cutCheckBankAccess(unsigned, unsigned, unsigned, unsigned, unsigned, unsigned, const char *, const int, const char *, const int);
# 108 "../../sdk/cutil.h"
extern "C" char *cutFindFilePath(const char *, const char *);
# 123 "../../sdk/cutil.h"
extern "C" CUTBoolean cutReadFilef(const char *, float **, unsigned *, bool = false);
# 139 "../../sdk/cutil.h"
extern "C" CUTBoolean cutReadFiled(const char *, double **, unsigned *, bool = false);
# 155 "../../sdk/cutil.h"
extern "C" CUTBoolean cutReadFilei(const char *, int **, unsigned *, bool = false);
# 170 "../../sdk/cutil.h"
extern "C" CUTBoolean cutReadFileui(const char *, unsigned **, unsigned *, bool = false);
# 186 "../../sdk/cutil.h"
extern "C" CUTBoolean cutReadFileb(const char *, char **, unsigned *, bool = false);
# 202 "../../sdk/cutil.h"
extern "C" CUTBoolean cutReadFileub(const char *, unsigned char **, unsigned *, bool = false);
# 216 "../../sdk/cutil.h"
extern "C" CUTBoolean cutWriteFilef(const char *, const float *, unsigned, const float, bool = false);
# 230 "../../sdk/cutil.h"
extern "C" CUTBoolean cutWriteFiled(const char *, const float *, unsigned, const double, bool = false);
# 242 "../../sdk/cutil.h"
extern "C" CUTBoolean cutWriteFilei(const char *, const int *, unsigned, bool = false);
# 254 "../../sdk/cutil.h"
extern "C" CUTBoolean cutWriteFileui(const char *, const unsigned *, unsigned, bool = false);
# 266 "../../sdk/cutil.h"
extern "C" CUTBoolean cutWriteFileb(const char *, const char *, unsigned, bool = false);
# 278 "../../sdk/cutil.h"
extern "C" CUTBoolean cutWriteFileub(const char *, const unsigned char *, unsigned, bool = false);
# 294 "../../sdk/cutil.h"
extern "C" CUTBoolean cutLoadPGMub(const char *, unsigned char **, unsigned *, unsigned *);
# 307 "../../sdk/cutil.h"
extern "C" CUTBoolean cutLoadPPMub(const char *, unsigned char **, unsigned *, unsigned *);
# 321 "../../sdk/cutil.h"
extern "C" CUTBoolean cutLoadPPM4ub(const char *, unsigned char **, unsigned *, unsigned *);
# 337 "../../sdk/cutil.h"
extern "C" CUTBoolean cutLoadPGMi(const char *, unsigned **, unsigned *, unsigned *);
# 353 "../../sdk/cutil.h"
extern "C" CUTBoolean cutLoadPGMs(const char *, unsigned short **, unsigned *, unsigned *);
# 368 "../../sdk/cutil.h"
extern "C" CUTBoolean cutLoadPGMf(const char *, float **, unsigned *, unsigned *);
# 380 "../../sdk/cutil.h"
extern "C" CUTBoolean cutSavePGMub(const char *, unsigned char *, unsigned, unsigned);
# 392 "../../sdk/cutil.h"
extern "C" CUTBoolean cutSavePPMub(const char *, unsigned char *, unsigned, unsigned);
# 405 "../../sdk/cutil.h"
extern "C" CUTBoolean cutSavePPM4ub(const char *, unsigned char *, unsigned, unsigned);
# 417 "../../sdk/cutil.h"
extern "C" CUTBoolean cutSavePGMi(const char *, unsigned *, unsigned, unsigned);
# 429 "../../sdk/cutil.h"
extern "C" CUTBoolean cutSavePGMs(const char *, unsigned short *, unsigned, unsigned);
# 441 "../../sdk/cutil.h"
extern "C" CUTBoolean cutSavePGMf(const char *, float *, unsigned, unsigned);
# 462 "../../sdk/cutil.h"
extern "C" CUTBoolean cutCheckCmdLineFlag(const int, const char **, const char *);
# 476 "../../sdk/cutil.h"
extern "C" CUTBoolean cutGetCmdLineArgumenti(const int, const char **, const char *, int *);
# 490 "../../sdk/cutil.h"
extern "C" CUTBoolean cutGetCmdLineArgumentf(const int, const char **, const char *, float *);
# 504 "../../sdk/cutil.h"
extern "C" CUTBoolean cutGetCmdLineArgumentstr(const int, const char **, const char *, char **);
# 519 "../../sdk/cutil.h"
extern "C" CUTBoolean cutGetCmdLineArgumentListstr(const int, const char **, const char *, char **, unsigned *);
# 533 "../../sdk/cutil.h"
extern "C" CUTBoolean cutCheckCondition(int, const char *, const int);
# 545 "../../sdk/cutil.h"
extern "C" CUTBoolean cutComparef(const float *, const float *, const unsigned);
# 558 "../../sdk/cutil.h"
extern "C" CUTBoolean cutComparei(const int *, const int *, const unsigned);
# 571 "../../sdk/cutil.h"
extern "C" CUTBoolean cutCompareub(const unsigned char *, const unsigned char *, const unsigned);
# 585 "../../sdk/cutil.h"
extern "C" CUTBoolean cutCompareube(const unsigned char *, const unsigned char *, const unsigned, const float);
# 599 "../../sdk/cutil.h"
extern "C" CUTBoolean cutComparefe(const float *, const float *, const unsigned, const float);
# 614 "../../sdk/cutil.h"
extern "C" CUTBoolean cutCompareL2fe(const float *, const float *, const unsigned, const float);
# 627 "../../sdk/cutil.h"
extern "C" CUTBoolean cutCreateTimer(unsigned *);
# 636 "../../sdk/cutil.h"
extern "C" CUTBoolean cutDeleteTimer(unsigned);
# 644 "../../sdk/cutil.h"
extern "C" CUTBoolean cutStartTimer(const unsigned);
# 652 "../../sdk/cutil.h"
extern "C" CUTBoolean cutStopTimer(const unsigned);
# 660 "../../sdk/cutil.h"
extern "C" CUTBoolean cutResetTimer(const unsigned);
# 669 "../../sdk/cutil.h"
extern "C" float cutGetTimerValue(const unsigned);
# 680 "../../sdk/cutil.h"
extern "C" float cutGetAverageTimerValue(const unsigned);
# 162 "/home/normal/cuda/bin/../include/cuComplex.h"
extern "C" { typedef float2 cuFloatComplex; }

extern "C" { static inline float cuCrealf(cuFloatComplex x)
{
return x.x;
} }

extern "C" { static inline float cuCimagf(cuFloatComplex x)
{
return x.y;
} }

extern "C" { static inline cuFloatComplex make_cuFloatComplex(float
r, float i)
{
auto cuFloatComplex res;
(res.x) = r;
(res.y) = i;
return res;
} }

extern "C" { static inline cuFloatComplex cuConjf(cuFloatComplex x)
{
return make_cuFloatComplex(cuCrealf(x), -cuCimagf(x));
} }
extern "C" { static inline cuFloatComplex cuCaddf(cuFloatComplex x, cuFloatComplex
y)
{
return make_cuFloatComplex(cuCrealf(x) + cuCrealf(y), cuCimagf(x) + cuCimagf(y));

} }

extern "C" { static inline cuFloatComplex cuCsubf(cuFloatComplex x, cuFloatComplex
y)
{
return make_cuFloatComplex(cuCrealf(x) - cuCrealf(y), cuCimagf(x) - cuCimagf(y));

} }
# 206 "/home/normal/cuda/bin/../include/cuComplex.h"
extern "C" { static inline cuFloatComplex cuCmulf(cuFloatComplex x, cuFloatComplex
y)
{
auto cuFloatComplex prod;
prod = make_cuFloatComplex(cuCrealf(x) * cuCrealf(y) - cuCimagf(x) * cuCimagf(y), cuCrealf(x) * cuCimagf(y) + cuCimagf(x) * cuCrealf(y));



return prod;
} }
# 222 "/home/normal/cuda/bin/../include/cuComplex.h"
extern "C" { static inline cuFloatComplex cuCdivf(cuFloatComplex x, cuFloatComplex
y)
{
auto cuFloatComplex quot;
auto float s = ((float)fabs((double)cuCrealf(y)) + (float)fabs((double)cuCimagf(y)));

auto float oos = ((1.0F) / s);
auto float ars = (cuCrealf(x) * oos);
auto float ais = (cuCimagf(x) * oos);
auto float brs = (cuCrealf(y) * oos);
auto float bis = (cuCimagf(y) * oos);
s = brs * brs + bis * bis;
oos = (1.0F) / s;
quot = make_cuFloatComplex((ars * brs + ais * bis) * oos, (ais * brs - ars * bis) * oos);

return quot;
} }
# 248 "/home/normal/cuda/bin/../include/cuComplex.h"
extern "C" { static inline float cuCabsf(cuFloatComplex x)
{
auto float a = cuCrealf(x);
auto float b = cuCimagf(x);
auto float v; auto float w; auto float t;
a = (float)fabs(a);
b = (float)fabs(b);
if (a > b) {
v = a;
w = b;
} else {
v = b;
w = a;
}
t = w / v;
t = (1.0F) + t * t;
t = v * (float)sqrt(t);
if (((v == (0.0F)) || (v > (3.402823466e+38F))) || (w > (3.402823466e+38F))) {
t = v + w;
}
return t;
} }


extern "C" { typedef double2 cuDoubleComplex; }

extern "C" { static inline double cuCreal(cuDoubleComplex x)
{
return x.x;
} }

extern "C" { static inline double cuCimag(cuDoubleComplex x)
{
return x.y;
} }

extern "C" { static inline cuDoubleComplex make_cuDoubleComplex(double
r, double i)
{
auto cuDoubleComplex res;
(res.x) = r;
(res.y) = i;
return res;
} }

extern "C" { static inline cuDoubleComplex cuConj(cuDoubleComplex x)
{
return make_cuDoubleComplex(cuCreal(x), -cuCimag(x));
} }

extern "C" { static inline cuDoubleComplex cuCadd(cuDoubleComplex x, cuDoubleComplex
y)
{
return make_cuDoubleComplex(cuCreal(x) + cuCreal(y), cuCimag(x) + cuCimag(y));

} }

extern "C" { static inline cuDoubleComplex cuCsub(cuDoubleComplex x, cuDoubleComplex
y)
{
return make_cuDoubleComplex(cuCreal(x) - cuCreal(y), cuCimag(x) - cuCimag(y));

} }
# 317 "/home/normal/cuda/bin/../include/cuComplex.h"
extern "C" { static inline cuDoubleComplex cuCmul(cuDoubleComplex x, cuDoubleComplex
y)
{
auto cuDoubleComplex prod;
prod = make_cuDoubleComplex(cuCreal(x) * cuCreal(y) - cuCimag(x) * cuCimag(y), cuCreal(x) * cuCimag(y) + cuCimag(x) * cuCreal(y));



return prod;
} }
# 333 "/home/normal/cuda/bin/../include/cuComplex.h"
extern "C" { static inline cuDoubleComplex cuCdiv(cuDoubleComplex x, cuDoubleComplex
y)
{
auto cuDoubleComplex quot;
auto double s = (fabs(cuCreal(y)) + fabs(cuCimag(y)));
auto double oos = ((1.0) / s);
auto double ars = (cuCreal(x) * oos);
auto double ais = (cuCimag(x) * oos);
auto double brs = (cuCreal(y) * oos);
auto double bis = (cuCimag(y) * oos);
s = brs * brs + bis * bis;
oos = (1.0) / s;
quot = make_cuDoubleComplex((ars * brs + ais * bis) * oos, (ais * brs - ars * bis) * oos);

return quot;
} }
# 356 "/home/normal/cuda/bin/../include/cuComplex.h"
extern "C" { static inline double cuCabs(cuDoubleComplex x)
{
auto double a = cuCreal(x);
auto double b = cuCimag(x);
auto double v; auto double w; auto double t;
a = fabs(a);
b = fabs(b);
if (a > b) {
v = a;
w = b;
} else {
v = b;
w = a;
}
t = w / v;
t = (1.0) + t * t;
t = v * sqrt(t);
if (((v == (0.0)) || (v > (1.797693134862315708e+308))) || (w > (1.797693134862315708e+308)))
{
t = v + w;
}
return t;
} }
# 387 "/home/normal/cuda/bin/../include/cuComplex.h"
typedef cuFloatComplex cuComplex;
static inline cuComplex make_cuComplex(float x, float
y)
{
return make_cuFloatComplex(x, y);
}


static inline cuDoubleComplex cuComplexFloatToDouble(cuFloatComplex
c)
{
return make_cuDoubleComplex((double)cuCrealf(c), (double)cuCimagf(c));
}

static inline cuFloatComplex cuComplexDoubleToFloat(cuDoubleComplex
c)
{
return make_cuFloatComplex((float)cuCreal(c), (float)cuCimag(c));
}
# 69 "/home/normal/cuda/bin/../include/cufft.h"
extern "C" { typedef
# 59 "/home/normal/cuda/bin/../include/cufft.h"
enum cufftResult_t {
CUFFT_SUCCESS,
CUFFT_INVALID_PLAN,
CUFFT_ALLOC_FAILED,
CUFFT_INVALID_TYPE,
CUFFT_INVALID_VALUE,
CUFFT_INTERNAL_ERROR,
CUFFT_EXEC_FAILED,
CUFFT_SETUP_FAILED,
CUFFT_INVALID_SIZE
} cufftResult; }




extern "C" { typedef unsigned cufftHandle; }


extern "C" { typedef float cufftReal; }




extern "C" { typedef cuComplex cufftComplex; }
# 93 "/home/normal/cuda/bin/../include/cufft.h"
extern "C" { typedef
# 89 "/home/normal/cuda/bin/../include/cufft.h"
enum cufftType_t {
CUFFT_R2C = 42,
CUFFT_C2R = 44,
CUFFT_C2C = 41
} cufftType; }

extern "C" cufftResult cufftPlan1d(cufftHandle *, int, cufftType, int);




extern "C" cufftResult cufftPlan2d(cufftHandle *, int, int, cufftType);



extern "C" cufftResult cufftPlan3d(cufftHandle *, int, int, int, cufftType);



extern "C" cufftResult cufftDestroy(cufftHandle);

extern "C" cufftResult cufftExecC2C(cufftHandle, cufftComplex *, cufftComplex *, int);




extern "C" cufftResult cufftExecR2C(cufftHandle, cufftReal *, cufftComplex *);



extern "C" cufftResult cufftExecC2R(cufftHandle, cufftComplex *, cufftReal *);
# 44 "../../sdk/cutil_inline.h"
inline void __cutilBankChecker(unsigned tidx, unsigned tidy, unsigned tidz, unsigned
bdimx, unsigned bdimy, unsigned bdimz, char *
aname, int index, char *file, int line)
{
cutCheckBankAccess(tidx, tidy, tidz, bdimx, bdimy, bdimz, file, line, aname, index);
}

inline void __cutilCondition(int val, char *file, int line)
{
if ((CUTFalse) == (cutCheckCondition(val, file, line))) {
exit(1);
}
}

inline void __cutilExit(int argc, char **argv)
{
if (!(cutCheckCmdLineFlag(argc, (const char **)argv, "noprompt"))) {
printf("\nPress ENTER to exit...\n");
fflush(stdout);
fflush(stderr);
getchar();
}
exit(0);
}




inline int cutGetMaxGflopsDeviceId()
{
auto int device_count = 0;
cudaGetDeviceCount(&device_count);

auto cudaDeviceProp device_properties;
auto int max_gflops_device = 0;
auto int max_gflops = 0;

auto int current_device = 0;
cudaGetDeviceProperties(&device_properties, current_device);
max_gflops = device_properties.multiProcessorCount * device_properties.clockRate;
++current_device;

while (current_device < device_count)
{
cudaGetDeviceProperties(&device_properties, current_device);
auto int gflops = (device_properties.multiProcessorCount * device_properties.clockRate);
if (gflops > max_gflops)
{
max_gflops = gflops;
max_gflops_device = current_device;
}
++current_device;
}

return max_gflops_device;
}


inline void __cuSafeCallNoSync(CUresult err, const char *file, const int line)
{
do {
if ((CUDA_SUCCESS) != err) {
fprintf(stderr, "cuSafeCallNoSync() Driver API error = %04d from file <%s>, line %i.\n", err, file, line);

exit(-1);
}
} while (0);
}
inline void __cuSafeCall(CUresult err, const char *file, const int line)
{
__cuSafeCallNoSync(err, file, line);
}

inline void __cuCtxSync(const char *file, const int line)
{
do {
auto CUresult err = cuCtxSynchronize();
if ((CUDA_SUCCESS) != err) {
fprintf(stderr, "cuCtxSynchronize() API error = %04d in file <%s>, line %i.\n", err, file, line);

exit(-1);
}
} while (0);
}

inline void __cudaSafeCallNoSync(cudaError err, const char *file, const int line)
{
do {
if ((cudaSuccess) != err) {
fprintf(stderr, "cudaSafeCallNoSync() Runtime API error in file <%s>, line %i : %s.\n", file, line, cudaGetErrorString(err));

exit(-1);
}
} while (0);
}

inline void __cudaSafeCall(cudaError err, const char *file, const int line)
{
do {
if ((cudaSuccess) != err) {
fprintf(stderr, "cudaSafeCall() Runtime API error in file <%s>, line %i : %s.\n", file, line, cudaGetErrorString(err));

exit(-1);
}
} while (0);
}

inline void __cudaSafeThreadSync(const char *file, const int line)
{
do {
auto cudaError err = cudaThreadSynchronize();
if ((cudaSuccess) != err) {
fprintf(stderr, "cudaThreadSynchronize() Driver API error in file \'%s\' in line %i : %s.\n", file, line, cudaGetErrorString(err));

exit(-1);
}
} while (0);
}

inline void __cufftSafeCall(cufftResult err, const char *file, const int line)
{
do {
if ((CUFFT_SUCCESS) != err) {
fprintf(stderr, "cufftSafeCall() CUFFT error in file <%s>, line %i.\n", file, line);

exit(-1);
}
} while (0);
}

inline void __cutilCheckError(CUTBoolean err, const char *file, const int line)
{
if ((CUTTrue) != err) {
fprintf(stderr, "CUTIL CUDA error in file <%s>, line %i.\n", file, line);

exit(-1);
}
}
inline void __cutilCheckMsg(const char *errorMessage, const char *file, const int line)
{
do {
auto cudaError_t err = cudaGetLastError();
if ((cudaSuccess) != err) {
fprintf(stderr, "cutilCheckMsg() CUTIL CUDA error: %s in file <%s>, line %i : %s.\n", errorMessage, file, line, cudaGetErrorString(err));

exit(-1);
}
err = cudaThreadSynchronize();
if ((cudaSuccess) != err) {
fprintf(stderr, "cutilCheckMsg cudaThreadSynchronize error: %s in file <%s>, line %i : %s.\n", errorMessage, file, line, cudaGetErrorString(err));

exit(-1);
}
} while (0);
}
inline void __cutilSafeMalloc(void *pointer, const char *file, const int line)
{
do {
if (!(pointer)) {
fprintf(stderr, "cutilSafeMalloc host malloc failure in file <%s>, line %i\n", file, line);

exit(-1);
}
} while (0);
}


inline void cutilDeviceInit(int ARGC, char **ARGV) { }
inline void cutilDeviceInitDrv(int cuDevice, int ARGC, char **ARGV) { }
# 262 "../../sdk/cutil_inline.h"
inline void cutilCudaCheckCtxLost(const char *errorMessage, const char *file, const int line)
{
do {
auto cudaError_t err = cudaGetLastError();
if ((cudaSuccess) != err) {
fprintf(stderr, "CUDA error: %s in file \'%s\' in line %i : %s.\n", errorMessage, file, line, cudaGetErrorString(err));

exit(-1);
}
err = cudaThreadSynchronize();
if ((cudaSuccess) != err) {
fprintf(stderr, "CCUDA error: %s in file \'%s\' in line %i : %s.\n", errorMessage, file, line, cudaGetErrorString(err));

exit(-1);
}
} while (0);
}



inline void cutilDrvCudaCheckCtxLost(const char *errorMessage, const char *file, const int line)
{
do {
auto CUresult err = cuCtxSynchronize();
if ((CUDA_ERROR_INVALID_CONTEXT) != err) {
fprintf(stderr, "Cuda error: %s in file \'%s\' in line %i\n", errorMessage, file, line);

exit(-1);
}
err = cuCtxSynchronize();
if ((CUDA_SUCCESS) != err) {
fprintf(stderr, "Cuda error: %s in file \'%s\' in line %i\n", errorMessage, file, line);

exit(-1);
}
} while (0);
}
# 51 "BmpUtil.h"
#pragma pack ( 1 )

typedef char int8;
typedef short int16;
typedef int int32;
typedef unsigned char uint8;
typedef unsigned short uint16;
typedef unsigned uint32;
# 71 "BmpUtil.h"
typedef
# 66 "BmpUtil.h"
struct BMPFileHeader {
uint16 _bm_signature;
uint32 _bm_file_size;
uint32 _bm_reserved;
uint32 _bm_bitmap_data;
} BMPFileHeader;
# 92 "BmpUtil.h"
typedef
# 80 "BmpUtil.h"
struct BMPInfoHeader {
uint32 _bm_info_header_size;
uint32 _bm_image_width;
uint32 _bm_image_height;
uint16 _bm_num_of_planes;
uint16 _bm_color_depth;
uint32 _bm_compressed;
uint32 _bm_bitmap_size;
uint32 _bm_hor_resolution;
uint32 _bm_ver_resolution;
uint32 _bm_num_colors_used;
uint32 _bm_num_important_colors;
} BMPInfoHeader;
# 109 "BmpUtil.h"
typedef
# 106 "BmpUtil.h"
struct ROI {
int width;
int height;
} ROI;
# 115 "BmpUtil.h"
typedef unsigned char byte;




extern "C" int clamp_0_255(int);
extern "C" float round_f(float);
extern "C" byte *MallocPlaneByte(int, int, int *);
extern "C" short *MallocPlaneShort(int, int, int *);
extern "C" float *MallocPlaneFloat(int, int, int *);
extern "C" void CopyByte2Float(byte *, int, float *, int, ROI);
extern "C" void CopyFloat2Byte(float *, int, byte *, int, ROI);
extern "C" void FreePlane(void *);
extern "C" void AddFloatPlane(float, float *, int, ROI);
extern "C" void MulFloatPlane(float, float *, int, ROI);
extern "C" int PreLoadBmp(char *, int *, int *);
extern "C" void LoadBmpAsGray(char *, int, ROI, byte *);
extern "C" void DumpBmpAsGray(char *, byte *, int, ROI);
extern "C" void DumpBlockF(float *, int, char *);
extern "C" void DumpBlock(byte *, int, char *);
extern "C" float CalculateMSE(byte *, byte *, int, ROI);
extern "C" float CalculatePSNR(byte *, byte *, int, ROI);
# 53 "DCT8x8_Gold.h"
extern "C" void computeDCT8x8Gold1(const float *, float *, int, ROI);
extern "C" void computeIDCT8x8Gold1(const float *, float *, int, ROI);
extern "C" void quantizeGoldFloat(float *, int, ROI);
extern "C" void quantizeGoldShort(short *, int, ROI);
extern "C" void computeDCT8x8Gold2(const float *, float *, int, ROI);
extern "C" void computeIDCT8x8Gold2(const float *, float *, int, ROI);
# 73 "dct8x8.cu"
static texture< float, 2, cudaReadModeElementType> TexSrc;
# 56 "dct8x8_kernel1.cu"
static float __shadow_DCTv8matrix[64];
# 69 "dct8x8_kernel1.cu"
# 70 "dct8x8_kernel1.cu"
# 85 "dct8x8_kernel1.cu"
void CUDAkernel1DCT__entry(float *Dst, int ImgWidth, int OffsetXBlocks, int OffsetYBlocks);
# 154 "dct8x8_kernel1.cu"
void CUDAkernel1IDCT__entry(float *Dst, int ImgWidth, int OffsetXBlocks, int OffsetYBlocks);
# 54 "dct8x8_kernel2.cu"
static float __shadow_C_a;
static float __shadow_C_b;
static float __shadow_C_c;
static float __shadow_C_d;
static float __shadow_C_e;
static float __shadow_C_f;
# 65 "dct8x8_kernel2.cu"
static float __shadow_C_norm;
# 204 "dct8x8_kernel2.cu"
void CUDAkernel2DCT__entry(float *SrcDst, int ImgStride);
# 328 "dct8x8_kernel2.cu"
void CUDAkernel2IDCT__entry(float *SrcDst, int ImgStride);
# 109 "dct8x8_kernel_short.cu"
union PackedShorts {


struct __attribute__((__aligned__(8))) {
short hShort1;
short hShort2;
};
unsigned hInt;
};
# 459 "dct8x8_kernel_short.cu"
void CUDAkernelShortDCT__entry(short *SrcDst, int ImgStride);
# 601 "dct8x8_kernel_short.cu"
void CUDAkernelShortIDCT__entry(short *SrcDst, int ImgStride);
# 53 "dct8x8_kernel_quantization.cu"
static short __shadow_Q[64];
# 75 "dct8x8_kernel_quantization.cu"
void CUDAkernelQuantizationFloat__entry(float *SrcDst, int Stride);
# 108 "dct8x8_kernel_quantization.cu"
void CUDAkernelQuantizationShort__entry(short *SrcDst, int Stride);
# 94 "dct8x8.cu"
float WrapperGold1(byte *ImgSrc, byte *ImgDst, int Stride, ROI Size)
{

auto int StrideF;
auto float *ImgF1 = MallocPlaneFloat(Size.width, Size.height, &StrideF);
auto float *ImgF2 = MallocPlaneFloat(Size.width, Size.height, &StrideF);


CopyByte2Float(ImgSrc, Stride, ImgF1, StrideF, Size);
AddFloatPlane(-(128.0F), ImgF1, StrideF, Size);


auto unsigned timerGold = (0);
__cutilCheckError(cutCreateTimer(&timerGold), "dct8x8.cu", 107);
__cutilCheckError(cutResetTimer(timerGold), "dct8x8.cu", 108);


for (int i = 0; i < 1; i++)
{
__cutilCheckError(cutStartTimer(timerGold), "dct8x8.cu", 113);
computeDCT8x8Gold1(ImgF1, ImgF2, StrideF, Size);
__cutilCheckError(cutStopTimer(timerGold), "dct8x8.cu", 115);
}


auto float TimerGoldSpan = cutGetAverageTimerValue(timerGold);
__cutilCheckError(cutDeleteTimer(timerGold), "dct8x8.cu", 120);


quantizeGoldFloat(ImgF2, StrideF, Size);


computeIDCT8x8Gold1(ImgF2, ImgF1, StrideF, Size);


AddFloatPlane((128.0F), ImgF1, StrideF, Size);
CopyFloat2Byte(ImgF1, StrideF, ImgDst, Stride, Size);


FreePlane(ImgF1);
FreePlane(ImgF2);


return TimerGoldSpan;
}
# 152 "dct8x8.cu"
float WrapperGold2(byte *ImgSrc, byte *ImgDst, int Stride, ROI Size)
{

auto int StrideF;
auto float *ImgF1 = MallocPlaneFloat(Size.width, Size.height, &StrideF);
auto float *ImgF2 = MallocPlaneFloat(Size.width, Size.height, &StrideF);


CopyByte2Float(ImgSrc, Stride, ImgF1, StrideF, Size);
AddFloatPlane(-(128.0F), ImgF1, StrideF, Size);


auto unsigned timerGold = (0);
__cutilCheckError(cutCreateTimer(&timerGold), "dct8x8.cu", 165);
__cutilCheckError(cutResetTimer(timerGold), "dct8x8.cu", 166);


for (int i = 0; i < 1; i++)
{
__cutilCheckError(cutStartTimer(timerGold), "dct8x8.cu", 171);
computeDCT8x8Gold2(ImgF1, ImgF2, StrideF, Size);
__cutilCheckError(cutStopTimer(timerGold), "dct8x8.cu", 173);
}


auto float TimerGoldSpan = cutGetAverageTimerValue(timerGold);
__cutilCheckError(cutDeleteTimer(timerGold), "dct8x8.cu", 178);


quantizeGoldFloat(ImgF2, StrideF, Size);


computeIDCT8x8Gold2(ImgF2, ImgF1, StrideF, Size);


AddFloatPlane((128.0F), ImgF1, StrideF, Size);
CopyFloat2Byte(ImgF1, StrideF, ImgDst, Stride, Size);


FreePlane(ImgF1);
FreePlane(ImgF2);


return TimerGoldSpan;
}
# 210 "dct8x8.cu"
float WrapperCUDA1(byte *ImgSrc, byte *ImgDst, int Stride, ROI Size)
{

auto cudaChannelFormatDesc floattex = cudaCreateChannelDesc< float> ();


auto cudaArray *Src;
auto float *Dst;
auto size_t DstStride;
__cudaSafeCall(cudaMallocArray(&Src, &floattex, Size.width, Size.height), "dct8x8.cu", 219);
__cudaSafeCall(cudaMallocPitch((void **)(&Dst), &DstStride, Size.width * sizeof(float), Size.height), "dct8x8.cu", 220);
DstStride /= sizeof(float);


auto int ImgSrcFStride;
auto float *ImgSrcF = MallocPlaneFloat(Size.width, Size.height, &ImgSrcFStride);
CopyByte2Float(ImgSrc, Stride, ImgSrcF, ImgSrcFStride, Size);
AddFloatPlane(-(128.0F), ImgSrcF, ImgSrcFStride, Size);


__cudaSafeCall(cudaMemcpy2DToArray(Src, 0, 0, ImgSrcF, ImgSrcFStride * sizeof(float), Size.width * sizeof(float), Size.height, cudaMemcpyHostToDevice), "dct8x8.cu", 233);
# 236 "dct8x8.cu"
auto dim3 threads(8, 8);
auto dim3 grid(Size.width / 8, Size.height / 8);


auto unsigned timerCUDA = (0);
__cutilCheckError(cutCreateTimer(&timerCUDA), "dct8x8.cu", 241);
__cutilCheckError(cutResetTimer(timerCUDA), "dct8x8.cu", 242);


__cudaSafeCall(cudaBindTextureToArray(TexSrc, Src), "dct8x8.cu", 245);
for (int i = 0; i < 1; i++)
{
__cutilCheckError(cutStartTimer(timerCUDA), "dct8x8.cu", 248);
cudaConfigureCall(grid, threads) ? ((void)0) : CUDAkernel1DCT__entry(Dst, (int)DstStride, 0, 0);
__cudaSafeCall(cudaThreadSynchronize(), "dct8x8.cu", 250);
__cutilCheckError(cutStopTimer(timerCUDA), "dct8x8.cu", 251);
}
__cudaSafeCall(cudaUnbindTexture(TexSrc), "dct8x8.cu", 253);
__cutilCheckMsg("Kernel execution failed", "dct8x8.cu", 254);


auto float TimerCUDASpan = cutGetAverageTimerValue(timerCUDA);
__cutilCheckError(cutDeleteTimer(timerCUDA), "dct8x8.cu", 258);


cudaConfigureCall(grid, threads) ? ((void)0) : CUDAkernelQuantizationFloat__entry(Dst, (int)DstStride);
__cutilCheckMsg("Kernel execution failed", "dct8x8.cu", 262);


__cudaSafeCall(cudaMemcpy2DToArray(Src, 0, 0, Dst, DstStride * sizeof(float), Size.width * sizeof(float), Size.height, cudaMemcpyDeviceToDevice), "dct8x8.cu", 268);
# 271 "dct8x8.cu"
__cudaSafeCall(cudaBindTextureToArray(TexSrc, Src), "dct8x8.cu", 271);
cudaConfigureCall(grid, threads) ? ((void)0) : CUDAkernel1IDCT__entry(Dst, (int)DstStride, 0, 0);
__cudaSafeCall(cudaUnbindTexture(TexSrc), "dct8x8.cu", 273);
__cutilCheckMsg("Kernel execution failed", "dct8x8.cu", 274);


__cudaSafeCall(cudaMemcpy2D(ImgSrcF, ImgSrcFStride * sizeof(float), Dst, DstStride * sizeof(float), Size.width * sizeof(float), Size.height, cudaMemcpyDeviceToHost), "dct8x8.cu", 280);
# 283 "dct8x8.cu"
AddFloatPlane((128.0F), ImgSrcF, ImgSrcFStride, Size);
CopyFloat2Byte(ImgSrcF, ImgSrcFStride, ImgDst, Stride, Size);


__cudaSafeCall(cudaFreeArray(Src), "dct8x8.cu", 287);
__cudaSafeCall(cudaFree(Dst), "dct8x8.cu", 288);
FreePlane(ImgSrcF);


return TimerCUDASpan;
}
# 307 "dct8x8.cu"
float WrapperCUDA2(byte *ImgSrc, byte *ImgDst, int Stride, ROI Size)
{

auto int StrideF;
auto float *ImgF1 = MallocPlaneFloat(Size.width, Size.height, &StrideF);


CopyByte2Float(ImgSrc, Stride, ImgF1, StrideF, Size);
AddFloatPlane(-(128.0F), ImgF1, StrideF, Size);


auto float *SrcDst;
auto size_t DeviceStride;
__cudaSafeCall(cudaMallocPitch((void **)(&SrcDst), &DeviceStride, Size.width * sizeof(float), Size.height), "dct8x8.cu", 320);
DeviceStride /= sizeof(float);


__cudaSafeCall(cudaMemcpy2D(SrcDst, DeviceStride * sizeof(float), ImgF1, StrideF * sizeof(float), Size.width * sizeof(float), Size.height, cudaMemcpyHostToDevice), "dct8x8.cu", 327);
# 330 "dct8x8.cu"
auto unsigned timerCUDA = (0);
__cutilCheckError(cutCreateTimer(&timerCUDA), "dct8x8.cu", 331);
__cutilCheckError(cutResetTimer(timerCUDA), "dct8x8.cu", 332);


auto dim3 GridFullWarps(Size.width / 32, Size.height / 16, 1);
auto dim3 ThreadsFullWarps(8, 32 / 8, 16 / 8);


__cutilCheckError(cutStartTimer(timerCUDA), "dct8x8.cu", 339);
cudaConfigureCall(GridFullWarps, ThreadsFullWarps) ? ((void)0) : CUDAkernel2DCT__entry(SrcDst, (int)DeviceStride);
__cudaSafeCall(cudaThreadSynchronize(), "dct8x8.cu", 341);
__cutilCheckError(cutStopTimer(timerCUDA), "dct8x8.cu", 342);
__cutilCheckMsg("Kernel execution failed", "dct8x8.cu", 343);


auto float TimerCUDASpan = cutGetAverageTimerValue(timerCUDA);
__cutilCheckError(cutDeleteTimer(timerCUDA), "dct8x8.cu", 347);


auto dim3 ThreadsSmallBlocks(8, 8);
auto dim3 GridSmallBlocks(Size.width / 8, Size.height / 8);


cudaConfigureCall(GridSmallBlocks, ThreadsSmallBlocks) ? ((void)0) : CUDAkernelQuantizationFloat__entry(SrcDst, (int)DeviceStride);
__cutilCheckMsg("Kernel execution failed", "dct8x8.cu", 355);


cudaConfigureCall(GridFullWarps, ThreadsFullWarps) ? ((void)0) : CUDAkernel2IDCT__entry(SrcDst, (int)DeviceStride);
__cudaSafeCall(cudaThreadSynchronize(), "dct8x8.cu", 359);
__cutilCheckMsg("Kernel execution failed", "dct8x8.cu", 360);


__cudaSafeCall(cudaMemcpy2D(ImgF1, StrideF * sizeof(float), SrcDst, DeviceStride * sizeof(float), Size.width * sizeof(float), Size.height, cudaMemcpyDeviceToHost), "dct8x8.cu", 366);
# 369 "dct8x8.cu"
AddFloatPlane((128.0F), ImgF1, StrideF, Size);
CopyFloat2Byte(ImgF1, StrideF, ImgDst, Stride, Size);


__cudaSafeCall(cudaFree(SrcDst), "dct8x8.cu", 373);
FreePlane(ImgF1);


return TimerCUDASpan;
}
# 392 "dct8x8.cu"
float WrapperCUDAshort(byte *ImgSrc, byte *ImgDst, int Stride, ROI Size)
{

auto int StrideS;
auto short *ImgS1 = MallocPlaneShort(Size.width, Size.height, &StrideS);


for (int i = 0; i < (Size.height); i++)
{
for (int j = 0; j < (Size.width); j++)
{
(ImgS1[i * StrideS + j]) = (short)(ImgSrc[i * Stride + j]) - 128;
}
}


auto short *SrcDst;
auto size_t DeviceStride;
__cudaSafeCall(cudaMallocPitch((void **)(&SrcDst), &DeviceStride, Size.width * sizeof(short), Size.height), "dct8x8.cu", 410);
DeviceStride /= sizeof(short);


__cudaSafeCall(cudaMemcpy2D(SrcDst, DeviceStride * sizeof(short), ImgS1, StrideS * sizeof(short), Size.width * sizeof(short), Size.height, cudaMemcpyHostToDevice), "dct8x8.cu", 417);
# 420 "dct8x8.cu"
auto unsigned timerLibJpeg = (0);
__cutilCheckError(cutCreateTimer(&timerLibJpeg), "dct8x8.cu", 421);
__cutilCheckError(cutResetTimer(timerLibJpeg), "dct8x8.cu", 422);


auto dim3 GridShort(Size.width / 32, Size.height / 32, 1);
auto dim3 ThreadsShort(8, 32 / 8, 32 / 8);


__cutilCheckError(cutStartTimer(timerLibJpeg), "dct8x8.cu", 429);
cudaConfigureCall(GridShort, ThreadsShort) ? ((void)0) : CUDAkernelShortDCT__entry(SrcDst, (int)DeviceStride);
__cudaSafeCall(cudaThreadSynchronize(), "dct8x8.cu", 431);
__cutilCheckError(cutStopTimer(timerLibJpeg), "dct8x8.cu", 432);
__cutilCheckMsg("Kernel execution failed", "dct8x8.cu", 433);


auto float TimerLibJpegSpan16b = cutGetAverageTimerValue(timerLibJpeg);
__cutilCheckError(cutDeleteTimer(timerLibJpeg), "dct8x8.cu", 437);


auto dim3 ThreadsSmallBlocks(8, 8);
auto dim3 GridSmallBlocks(Size.width / 8, Size.height / 8);


cudaConfigureCall(GridSmallBlocks, ThreadsSmallBlocks) ? ((void)0) : CUDAkernelQuantizationShort__entry(SrcDst, (int)DeviceStride);
__cutilCheckMsg("Kernel execution failed", "dct8x8.cu", 445);


cudaConfigureCall(GridShort, ThreadsShort) ? ((void)0) : CUDAkernelShortIDCT__entry(SrcDst, (int)DeviceStride);
__cudaSafeCall(cudaThreadSynchronize(), "dct8x8.cu", 449);
__cutilCheckMsg("Kernel execution failed", "dct8x8.cu", 450);


__cudaSafeCall(cudaMemcpy2D(ImgS1, StrideS * sizeof(short), SrcDst, DeviceStride * sizeof(short), Size.width * sizeof(short), Size.height, cudaMemcpyDeviceToHost), "dct8x8.cu", 456);
# 459 "dct8x8.cu"
for (int i = 0; i < (Size.height); i++)
{
for (int j = 0; j < (Size.width); j++)
{
(ImgDst[i * Stride + j]) = clamp_0_255(ImgS1[i * StrideS + j] + 128);
}
}


__cudaSafeCall(cudaFree(SrcDst), "dct8x8.cu", 468);
FreePlane(ImgS1);


return TimerLibJpegSpan16b;
}
# 485 "dct8x8.cu"
int main(int argc, char **argv)
{
# 492 "dct8x8.cu"
if (cutCheckCmdLineFlag(argc, (const char **)argv, "device")) {
cutilDeviceInit(argc, argv); } else {

cudaSetDevice(cutGetMaxGflopsDeviceId()); }


auto char SampleImageFname[] = "barbara.bmp";
auto char SampleImageFnameResGold1[] = "barbara_gold1.bmp";
auto char SampleImageFnameResGold2[] = "barbara_gold2.bmp";
auto char SampleImageFnameResCUDA1[] = "barbara_cuda1.bmp";
auto char SampleImageFnameResCUDA2[] = "barbara_cuda2.bmp";
auto char SampleImageFnameResCUDAshort[] = "barbara_cuda_short.bmp";

auto char *pSampleImageFpath = cutFindFilePath(SampleImageFname, argv[0]);


auto int ImgWidth; auto int ImgHeight;
auto ROI ImgSize;
auto int res = PreLoadBmp(pSampleImageFpath, &ImgWidth, &ImgHeight);
(ImgSize.width) = ImgWidth;
(ImgSize.height) = ImgHeight;


printf("CUDA sample DCT/IDCT implementation\n");
printf("===================================\n");
printf("Loading test image: %s... ", SampleImageFname);

if (res)
{
printf("\nError: Image file not found or invalid!\n");
printf("Press ENTER to exit...\n");
getchar();


__cutilExit(argc, argv);
return 1;
}


if (((ImgWidth % 8) != 0) || ((ImgHeight % 8) != 0))
{
printf("\nError: Input image dimensions must be multiples of 8!\n");
printf("Press ENTER to exit...\n");
getchar();


__cutilExit(argc, argv);
return 1;
}
printf("[%d x %d]... ", ImgWidth, ImgHeight);


auto int ImgStride;
auto byte *ImgSrc = MallocPlaneByte(ImgWidth, ImgHeight, &ImgStride);
auto byte *ImgDstGold1 = MallocPlaneByte(ImgWidth, ImgHeight, &ImgStride);
auto byte *ImgDstGold2 = MallocPlaneByte(ImgWidth, ImgHeight, &ImgStride);
auto byte *ImgDstCUDA1 = MallocPlaneByte(ImgWidth, ImgHeight, &ImgStride);
auto byte *ImgDstCUDA2 = MallocPlaneByte(ImgWidth, ImgHeight, &ImgStride);
auto byte *ImgDstCUDAshort = MallocPlaneByte(ImgWidth, ImgHeight, &ImgStride);


LoadBmpAsGray(pSampleImageFpath, ImgStride, ImgSize, ImgSrc);
# 560 "dct8x8.cu"
printf("Success\nRunning Gold 1 (CPU) version... ");
auto float TimeGold1 = WrapperGold1(ImgSrc, ImgDstGold1, ImgStride, ImgSize);


printf("Success\nRunning Gold 2 (CPU) version... ");
auto float TimeGold2 = WrapperGold2(ImgSrc, ImgDstGold2, ImgStride, ImgSize);


printf("Success\nRunning CUDA 1 (GPU) version... ");
auto float TimeCUDA1 = WrapperCUDA1(ImgSrc, ImgDstCUDA1, ImgStride, ImgSize);


printf("Success\nRunning CUDA 2 (GPU) version... ");
auto float TimeCUDA2 = WrapperCUDA2(ImgSrc, ImgDstCUDA2, ImgStride, ImgSize);


printf("Success\nRunning CUDA short (GPU) version... ");
auto float TimeCUDAshort = WrapperCUDAshort(ImgSrc, ImgDstCUDAshort, ImgStride, ImgSize);
# 583 "dct8x8.cu"
printf("Success\nDumping result to %s... ", SampleImageFnameResGold1);
DumpBmpAsGray(SampleImageFnameResGold1, ImgDstGold1, ImgStride, ImgSize);


printf("Success\nDumping result to %s... ", SampleImageFnameResGold2);
DumpBmpAsGray(SampleImageFnameResGold2, ImgDstGold2, ImgStride, ImgSize);


printf("Success\nDumping result to %s... ", SampleImageFnameResCUDA1);
DumpBmpAsGray(SampleImageFnameResCUDA1, ImgDstCUDA1, ImgStride, ImgSize);


printf("Success\nDumping result to %s... ", SampleImageFnameResCUDA2);
DumpBmpAsGray(SampleImageFnameResCUDA2, ImgDstCUDA2, ImgStride, ImgSize);


printf("Success\nDumping result to %s... ", SampleImageFnameResCUDAshort);
DumpBmpAsGray(SampleImageFnameResCUDAshort, ImgDstCUDAshort, ImgStride, ImgSize);

printf("Success\n");

printf("Processing time (CPU 1)     : %f ms \n", TimeGold1);
printf("Processing time (CPU 2)     : %f ms \n", TimeGold2);
printf("Processing time (CUDA 1)    : %f ms \n", TimeCUDA1);
printf("Processing time (CUDA 2)    : %f ms \n", TimeCUDA2);
printf("Processing time (CUDA short): %f ms \n", TimeCUDAshort);


auto float PSNR_Src_DstGold1 = CalculatePSNR(ImgSrc, ImgDstGold1, ImgStride, ImgSize);
auto float PSNR_Src_DstGold2 = CalculatePSNR(ImgSrc, ImgDstGold2, ImgStride, ImgSize);
auto float PSNR_Src_DstCUDA1 = CalculatePSNR(ImgSrc, ImgDstCUDA1, ImgStride, ImgSize);
auto float PSNR_Src_DstCUDA2 = CalculatePSNR(ImgSrc, ImgDstCUDA2, ImgStride, ImgSize);
auto float PSNR_Src_DstCUDAshort = CalculatePSNR(ImgSrc, ImgDstCUDAshort, ImgStride, ImgSize);
auto float PSNR_DstGold1_DstCUDA1 = CalculatePSNR(ImgDstGold1, ImgDstCUDA1, ImgStride, ImgSize);
auto float PSNR_DstGold2_DstCUDA2 = CalculatePSNR(ImgDstGold2, ImgDstCUDA2, ImgStride, ImgSize);
auto float PSNR_DstGold2_DstCUDA16b = CalculatePSNR(ImgDstGold2, ImgDstCUDAshort, ImgStride, ImgSize);

printf("PSNR Original    <---> CPU(Gold 1)    : %f\n", PSNR_Src_DstGold1);
printf("PSNR Original    <---> CPU(Gold 2)    : %f\n", PSNR_Src_DstGold2);
printf("PSNR Original    <---> GPU(CUDA 1)    : %f\n", PSNR_Src_DstCUDA1);
printf("PSNR Original    <---> GPU(CUDA 2)    : %f\n", PSNR_Src_DstCUDA2);
printf("PSNR Original    <---> GPU(CUDA short): %f\n", PSNR_Src_DstCUDAshort);
printf("PSNR CPU(Gold 1) <---> GPU(CUDA 1)    : %f\n", PSNR_DstGold1_DstCUDA1);
printf("PSNR CPU(Gold 2) <---> GPU(CUDA 2)    : %f\n", PSNR_DstGold2_DstCUDA2);
printf("PSNR CPU(Gold 2) <---> GPU(CUDA short): %f\n", PSNR_DstGold2_DstCUDA16b);

if (((PSNR_DstGold1_DstCUDA1 > (30)) && (PSNR_DstGold2_DstCUDA2 > (30))) && (PSNR_DstGold2_DstCUDA16b > (30)))
{
printf("\nTest PASSED!\n");
} else

{
printf("\nTest FAILED! (CPU and GPU results differ too much)\n");
}
# 643 "dct8x8.cu"
FreePlane(ImgSrc);
FreePlane(ImgDstGold1);
FreePlane(ImgDstGold2);
FreePlane(ImgDstCUDA1);
FreePlane(ImgDstCUDA2);
FreePlane(ImgDstCUDAshort);


cudaThreadExit();

__cutilExit(argc, argv);
return 0;
}

# 1 "/tmp/tmpxft_00005f60_00000000-1_dct8x8.cudafe1.stub.c" 1

extern "C" {

# 1 "/tmp/tmpxft_00005f60_00000000-3_dct8x8.fatbin.c" 1
# 1 "/home/normal/cuda/bin/../include/__cudaFatFormat.h" 1
# 83 "/home/normal/cuda/bin/../include/__cudaFatFormat.h"
extern "C" {
# 97 "/home/normal/cuda/bin/../include/__cudaFatFormat.h"
typedef struct {
    char* gpuProfileName;
    char* cubin;
} __cudaFatCubinEntry;
# 113 "/home/normal/cuda/bin/../include/__cudaFatFormat.h"
typedef struct {
    char* gpuProfileName;
    char* ptx;
} __cudaFatPtxEntry;
# 125 "/home/normal/cuda/bin/../include/__cudaFatFormat.h"
typedef struct {
    char* gpuProfileName;
    char* debug;
} __cudaFatDebugEntry;


typedef enum {
      __cudaFatDontSearchFlag = (1 << 0),
      __cudaFatDontCacheFlag = (1 << 1),
      __cudaFatSassDebugFlag = (1 << 2)
} __cudaFatCudaBinaryFlag;
# 144 "/home/normal/cuda/bin/../include/__cudaFatFormat.h"
typedef struct {
    char* name;
} __cudaFatSymbol;
# 158 "/home/normal/cuda/bin/../include/__cudaFatFormat.h"
typedef struct __cudaFatCudaBinaryRec {
    unsigned long magic;
    unsigned long version;
    unsigned long gpuInfoVersion;
    char* key;
    char* ident;
    char* usageMode;
    __cudaFatPtxEntry *ptx;
    __cudaFatCubinEntry *cubin;
    __cudaFatDebugEntry *debug;
    void* debugInfo;
    unsigned int flags;
    __cudaFatSymbol *exported;
    __cudaFatSymbol *imported;
    struct __cudaFatCudaBinaryRec *dependends;
    unsigned int characteristic;
} __cudaFatCudaBinary;
# 194 "/home/normal/cuda/bin/../include/__cudaFatFormat.h"
    typedef enum {
        __cudaFatAvoidPTX,
        __cudaFatPreferBestCode
    } __cudaFatCompilationPolicy;
# 217 "/home/normal/cuda/bin/../include/__cudaFatFormat.h"
void fatGetCubinForGpuWithPolicy( __cudaFatCudaBinary *binary, __cudaFatCompilationPolicy policy, char* gpuName, char* *cubin, char* *dbgInfoFile );
# 228 "/home/normal/cuda/bin/../include/__cudaFatFormat.h"
void fatFreeCubin( char* cubin, char* dbgInfoFile );


}
# 2 "/tmp/tmpxft_00005f60_00000000-3_dct8x8.fatbin.c" 2




extern "C" {


static const unsigned long long __deviceText_$sm_10$[] = {
0x6365746968637261ull,0x6d737b2065727574ull,0x6962610a7d30315full,0x206e6f6973726576ull,
0x6f6d0a7d317b2020ull,0x202020656d616e64ull,0x696275637b202020ull,0x6c706d61730a7d6eull,
0x616e090a7b207265ull,0x203d20202020656dull,0x090a637253786554ull,0x2074696e75786574ull,
0x6f630a7d0a30203dull,0x090a7b207374736eull,0x202020656d616e09ull,0x090a665f43203d20ull,
0x656d616e67657309ull,0x74736e6f63203d20ull,0x756e67657309090aull,0x090a30203d20206dull,
0x2074657366666f09ull,0x090a343034203d20ull,0x2020736574796209ull,0x656d090a34203d20ull,
0x783009090a7b206dull,0x6661323464386533ull,0x630a7d0a7d090a20ull,0x0a7b207374736e6full,
0x2020656d616e0909ull,0x0a655f43203d2020ull,0x6d616e6765730909ull,0x736e6f63203d2065ull,
0x6e67657309090a74ull,0x0a30203d20206d75ull,0x74657366666f0909ull,0x0a303034203d2020ull,
0x2073657479620909ull,0x6d090a34203d2020ull,0x3009090a7b206d65ull,0x6462386130663378ull,
0x0a7d0a7d090a2034ull,0x7b207374736e6f63ull,0x20656d616e09090aull,0x544344203d202020ull,
0x78697274616d3876ull,0x616e67657309090aull,0x6e6f63203d20656dull,0x67657309090a7473ull,
0x30203d20206d756eull,0x657366666f09090aull,0x090a30203d202074ull,0x2020736574796209ull,
0x090a363532203d20ull,0x09090a7b206d656dull,0x3430356265337830ull,0x6665337830203366ull,
0x7830206562343162ull,0x6535333863656533ull,0x6434646533783020ull,0x3009090a20313362ull,
0x6634303562653378ull,0x6538653378302033ull,0x3378302061643933ull,0x2035316665333465ull,
0x3563376364337830ull,0x783009090a203263ull,0x3366343035626533ull,0x6434646533783020ull,
0x6533783020313362ull,0x3020353166653334ull,0x6335633763646278ull,0x62783009090a2032ull,
0x2033663430356265ull,0x3431626665627830ull,0x6565627830206562ull,0x7830206535333863ull,
0x6164393365386562ull,0x6533783009090a20ull,0x3020336634303562ull,0x6439336538653378ull,
0x3334656278302061ull,0x6278302035316665ull,0x2065623431626665ull,0x626562783009090aull,
0x7830203366343035ull,0x3263356337636433ull,0x3863656533783020ull,0x6533783020653533ull,
0x0a20313362643464ull,0x3562653378300909ull,0x3378302033663430ull,0x2032633563376364ull,
0x3338636565627830ull,0x3865627830206535ull,0x090a206164393365ull,0x3035626533783009ull,
0x6533783020336634ull,0x3020313362643464ull,0x3166653334656278ull,0x6266656278302035ull,
0x09090a2065623431ull,0x3430356265337830ull,0x6364627830203366ull,0x7830203263356337ull,
0x6535333863656562ull,0x3365386533783020ull,0x3009090a20616439ull,0x6634303562653378ull,
0x3464656278302033ull,0x6278302031336264ull,0x2035316665333465ull,0x3431626665337830ull,
0x783009090a206562ull,0x3366343035626533ull,0x3365386562783020ull,0x6562783020616439ull,
0x3020353166653334ull,0x6234316266653378ull,0x62783009090a2065ull,0x2033663430356265ull,
0x3563376364627830ull,0x6565337830203263ull,0x7830206535333863ull,0x3133626434646562ull,
0x6533783009090a20ull,0x3020336634303562ull,0x3362643464656278ull,0x3334653378302031ull,
0x3378302035316665ull,0x2032633563376364ull,0x626562783009090aull,0x7830203366343035ull,
0x6562343162666533ull,0x3863656562783020ull,0x6533783020653533ull,0x0a20616439336538ull,
0x3562653378300909ull,0x6278302033663430ull,0x2065623431626665ull,0x3338636565337830ull,
0x6465627830206535ull,0x090a203133626434ull,0x3035626533783009ull,0x6562783020336634ull,
0x3020616439336538ull,0x3166653334653378ull,0x3763646278302035ull,0x7d090a2032633563ull,
0x74736e6f630a7d0aull,0x616e09090a7b2073ull,0x203d20202020656dull,0x657309090a645f43ull,
0x203d20656d616e67ull,0x09090a74736e6f63ull,0x20206d756e676573ull,0x666f09090a30203dull,
0x203d202074657366ull,0x796209090a363933ull,0x203d202020736574ull,0x7b206d656d090a34ull,
0x346633783009090aull,0x090a206534333239ull,0x736e6f630a7d0a7dull,0x6e09090a7b207374ull,
0x3d20202020656d61ull,0x0a6d726f6e5f4320ull,0x6d616e6765730909ull,0x736e6f63203d2065ull,
0x6e67657309090a74ull,0x0a30203d20206d75ull,0x74657366666f0909ull,0x0a383034203d2020ull,
0x2073657479620909ull,0x6d090a34203d2020ull,0x3009090a7b206d65ull,0x6634303562653378ull,
0x0a7d0a7d090a2033ull,0x7b207374736e6f63ull,0x20656d616e09090aull,0x635f43203d202020ull,
0x616e67657309090aull,0x6e6f63203d20656dull,0x67657309090a7473ull,0x30203d20206d756eull,
0x657366666f09090aull,0x323933203d202074ull,0x736574796209090aull,0x090a34203d202020ull,
0x09090a7b206d656dull,0x3338363966337830ull,0x7d0a7d090a203731ull,0x207374736e6f630aull,
0x656d616e09090a7bull,0x5f43203d20202020ull,0x6e67657309090a62ull,0x6f63203d20656d61ull,
0x657309090a74736eull,0x203d20206d756e67ull,0x7366666f09090a30ull,0x3833203d20207465ull,
0x6574796209090a38ull,0x0a34203d20202073ull,0x090a7b206d656d09ull,0x3337616633783009ull,
0x0a7d090a20353764ull,0x7374736e6f630a7dull,0x6d616e09090a7b20ull,0x43203d2020202065ull,
0x67657309090a615full,0x63203d20656d616eull,0x7309090a74736e6full,0x3d20206d756e6765ull,
0x66666f09090a3020ull,0x33203d2020746573ull,0x74796209090a3438ull,0x34203d2020207365ull,
0x0a7b206d656d090aull,0x3162663378300909ull,0x7d090a2036386138ull,0x74736e6f630a7d0aull,
0x616e09090a7b2073ull,0x203d20202020656dull,0x6e67657309090a51ull,0x6f63203d20656d61ull,
0x657309090a74736eull,0x203d20206d756e67ull,0x7366666f09090a30ull,0x3532203d20207465ull,
0x6574796209090a36ull,0x3231203d20202073ull,0x7b206d656d090a38ull,0x323030783009090aull,
0x7830203032303031ull,0x3333303031353030ull,0x3037323030783020ull,0x3030783020323430ull,
0x0a20323230303131ull,0x3432303078300909ull,0x3078302031323030ull,0x2030333030663230ull,
0x3030373130307830ull,0x3030307830206331ull,0x090a206330303063ull,0x3030333030783009ull,
0x3030783020333330ull,0x3020663230306331ull,0x3130306330303078ull,0x6330303078302037ull,
0x09090a2063303030ull,0x3030663230307830ull,0x3130307830203135ull,0x7830206331303037ull,
0x6330303063303030ull,0x3063303030783020ull,0x3009090a20633030ull,0x3430306331303078ull,
0x6330303078302032ull,0x3078302037313030ull,0x2063303030633030ull,0x3030633030307830ull,
0x783009090a206330ull,0x3732303037313030ull,0x3063303030783020ull,0x3030783020633030ull,
0x3020633030306330ull,0x3030306330303078ull,0x30783009090a2063ull,0x2032323030633030ull,
0x3030633030307830ull,0x3030307830206330ull,0x7830206330303063ull,0x6330303063303030ull,
0x3030783009090a20ull,0x3020313130306330ull,0x3030306330303078ull,0x6330303078302063ull,
0x3078302063303030ull,0x2063303030633030ull,0x6f630a7d0a7d090aull,0x616e090a7b206564ull,
0x315a5f203d20656dull,0x72656b4144554338ull,0x74726f68536c656eull,0x090a697350544344ull,
0x30203d206d656d6cull,0x3d206d656d73090aull,0x72090a3430323220ull,0x3431203d20206765ull,
0x3d2020726162090aull,0x736e6f63090a3120ull,0x730909090a7b2074ull,0x3d20656d616e6765ull,
0x090a74736e6f6320ull,0x6d756e6765730909ull,0x09090a31203d2020ull,0x2074657366666f09ull,
0x0909090a30203d20ull,0x2020207365747962ull,0x6d09090a3036203dull,0x0909090a7b206d65ull,
0x3030303030307830ull,0x3030307830203232ull,0x7830206666333030ull,0x6630303030303030ull,
0x3030303030783020ull,0x0909090a20313030ull,0x3030303030307830ull,0x6666667830206631ull,
0x7830203065666666ull,0x3238613530303030ull,0x3730303030783020ull,0x0909090a20323436ull,
0x3033303030307830ull,0x3030307830206366ull,0x7830206533363030ull,0x6239613130303030ull,
0x3066666666783020ull,0x0909090a20303030ull,0x6666303030307830ull,0x3030307830206666ull,
0x7830203336663130ull,0x3763313130303030ull,0x7d090a7d09090a20ull,0x646f636e6962090aull,
0x783009090a7b2065ull,0x3930323061303033ull,0x3030313065783020ull,0x3061783020303837ull,
0x3020393065343030ull,0x3837303032343078ull,0x61783009090a2030ull,0x2035303430303030ull,
0x3730303034307830ull,0x3030337830203038ull,0x7830203930343035ull,0x3038373030313463ull,
0x3033783009090a20ull,0x3020353132303330ull,0x3837303031346378ull,0x3030303178302030ull,
0x3078302035306363ull,0x2030383763333234ull,0x303032783009090aull,0x7830203930613030ull,
0x3038373830303430ull,0x3032383064783020ull,0x3030783020353032ull,0x0a20303837303034ull,
0x3530303478300909ull,0x3078302031313430ull,0x2030383730303030ull,0x3230303030617830ull,
0x3034307830206430ull,0x090a203038373030ull,0x3034303036783009ull,0x3030783020393136ull,
0x3020303837303130ull,0x3130303030306178ull,0x3030343078302031ull,0x09090a2030383730ull,
0x3630333030337830ull,0x3134637830203130ull,0x7830203038373030ull,0x6430633030313033ull,
0x3030313463783020ull,0x3009090a20303837ull,0x3163343030306178ull,0x3032343078302064ull,
0x3278302030383730ull,0x2039313030303030ull,0x3730313034307830ull,0x783009090a203038ull,
0x3530343034303036ull,0x6330303030783020ull,0x3033783020303837ull,0x3020393065303530ull,
0x3837303031346378ull,0x33783009090a2030ull,0x2031306330313030ull,0x3730303134637830ull,
0x3030327830203038ull,0x7830203930323030ull,0x3038373830303430ull,0x3036783009090a20ull,
0x3020353061303038ull,0x3837303034303878ull,0x3030303278302030ull,0x3078302039303030ull,
0x2030383738303034ull,0x303032783009090aull,0x7830203530323865ull,0x3330303030303030ull,
0x3032383033783020ull,0x6336783020643063ull,0x0a20306437633034ull,0x3130303378300909ull,
0x6378302039303430ull,0x2030383730303134ull,0x3230313030307830ull,0x3030637830203530ull,
0x090a203038373030ull,0x3030303061783009ull,0x6330783020646637ull,0x3020386337343130ull,
0x3030373330306178ull,0x3030303078302033ull,0x09090a2030303030ull,0x3863303030327830ull,
0x3234307830203131ull,0x7830203038373830ull,0x3330303733303031ull,0x3130303030783020ull,
0x3009090a20303031ull,0x3038306530306478ull,0x3063303878302039ull,0x3378302030383730ull,
0x2035306363313030ull,0x3730303334637830ull,0x783009090a203038ull,0x6430323030303032ull,
0x3031303430783020ull,0x3064783020303837ull,0x3020643136306530ull,0x3837303063303878ull,
0x32783009090a2030ull,0x2064303230303030ull,0x3763303034307830ull,0x3030647830203038ull,
0x7830203131363065ull,0x3038373030633038ull,0x3032783009090a20ull,0x3020313232303030ull,
0x3837633030343078ull,0x6530306478302030ull,0x3878302064303031ull,0x2030383730306330ull,
0x303430783009090aull,0x7830203130303030ull,0x3038373830323465ull,0x3030303032783020ull,
0x3430783020313232ull,0x0a20303837303230ull,0x6530306478300909ull,0x3878302039303031ull,
0x2030383730306330ull,0x3232303034307830ull,0x3234657830203130ull,0x090a203038376331ull,
0x3030303032783009ull,0x3430783020643132ull,0x3020303837303230ull,0x3265306530306478ull,
0x3063303878302031ull,0x09090a2030383730ull,0x3434303034307830ull,0x3234657830203130ull,
0x7830203038373031ull,0x3131323030303032ull,0x6331303430783020ull,0x3009090a20303837ull,
0x3138306530306478ull,0x3063303878302064ull,0x3078302030383730ull,0x2031303636303034ull,
0x3763303234657830ull,0x783009090a203038ull,0x3131323030303032ull,0x3031303430783020ull,
0x3064783020303837ull,0x3020353038306530ull,0x3837303063303878ull,0x30783009090a2030ull,
0x2031303838303034ull,0x3738303234657830ull,0x3034307830203038ull,0x7830203130616130ull,
0x3038373032323465ull,0x3430783009090a20ull,0x3020313063633030ull,0x3837633132346578ull,
0x3030343078302030ull,0x6578302031306565ull,0x2030383734303234ull,0x303464783009090aull,
0x7830203530386233ull,0x3038373030303032ull,0x3030303066783020ull,0x3065783020313030ull,
0x0a20323030303030ull,0x6631363878300909ull,0x3078302033306566ull,0x2030303030303030ull,
0x6330343030337830ull,0x3163657830203530ull,0x090a203038373030ull,0x3033383064783009ull,
0x3430783020353032ull,0x3020303837303034ull,0x3030303130306478ull,0x3030343078302031ull,
0x09090a2030383734ull,0x6330353830647830ull,0x3434307830203530ull,0x7830203038373030ull,
0x3130303034383064ull,0x3030343430783020ull,0x3009090a20303837ull,0x3030303130306478ull,
0x3030343078302035ull,0x3478302030383734ull,0x2031306138323630ull,0x3030303030307830ull,
0x783009090a203330ull,0x3130303030303032ull,0x3430303430783020ull,0x3030783020303837ull,
0x3020393030303130ull,0x3837303030306378ull,0x64783009090a2030ull,0x2064303063303038ull,
0x3730303030327830ull,0x3038647830203038ull,0x7830203131383431ull,0x3038373030303032ull,
0x6361783009090a20ull,0x3020643130383030ull,0x3837303132633078ull,0x3130386478302030ull,
0x3278302064303064ull,0x2030383730303030ull,0x303061783009090aull,0x7830203132303830ull,
0x3438373031326330ull,0x3532303864783020ull,0x3032783020313138ull,0x0a20303837303030ull,
0x3030636178300909ull,0x3078302035303038ull,0x2030383730313263ull,0x3066333038647830ull,
0x3030327830206430ull,0x090a203038373030ull,0x3830303061783009ull,0x6330783020353230ull,
0x3020343837303132ull,0x3138363330386478ull,0x3030303278302031ull,0x09090a2030383730ull,
0x6339303038617830ull,0x3263307830203130ull,0x7830203038373031ull,0x6430303830306361ull,
0x3031326330783020ull,0x3009090a20303837ull,0x3330383030306178ull,0x3132633078302031ull,
0x6478302034383730ull,0x2064303065323038ull,0x3730303030327830ull,0x783009090a203038ull,
0x3830303833303032ull,0x3833343032783020ull,0x6361783020383230ull,0x3020643230383030ull,
0x3837303132633078ull,0x32783009090a2030ull,0x2063303238393030ull,0x3238393430327830ull,
0x3030327830203432ull,0x7830203030653863ull,0x3430303962303032ull,0x3032783009090a20ull,
0x3020633165386334ull,0x3230396234303278ull,0x3330303278302030ull,0x3278302030333438ull,
0x2063323038313030ull,0x343032783009090aull,0x7830203433343833ull,0x6330303831343032ull,
0x3830303031783020ull,0x3030783020313030ull,0x0a20333038303030ull,0x3030303278300909ull,
0x3078302035303831ull,0x2030383763323034ull,0x3230363830367830ull,0x3430387830203930ull,
0x090a203038373030ull,0x3863373034783009ull,0x3030783020353036ull,0x3020663033303030ull,
0x3036383234303478ull,0x3030303078302064ull,0x09090a2037363730ull,0x6131373830367830ull,
0x3430387830203530ull,0x7830203038373430ull,0x6430613138383036ull,0x6330343438783020ull,
0x3009090a20303837ull,0x3034303031303378ull,0x3031636578302039ull,0x3278302030383730ull,
0x2035303238303030ull,0x3830303030307830ull,0x783009090a203330ull,0x6432383130343032ull,
0x6332303430783020ull,0x3032783020303837ull,0x3020643036383030ull,0x3038303030303078ull,
0x30783009090a2033ull,0x2031306331303038ull,0x3730313030657830ull,0x3130337830203038ull,
0x7830203530323030ull,0x3038373030316365ull,0x3033783009090a20ull,0x3020393036303031ull,
0x3837303031636578ull,0x3030303178302030ull,0x3078302064303038ull,0x2033303130303030ull,
0x303032783009090aull,0x7830203033653838ull,0x6331653838343032ull,0x6130303830783020ull,
0x3065783020313034ull,0x0a20303837383030ull,0x3638303678300909ull,0x3878302035303831ull,
0x2030383763303430ull,0x6530363830367830ull,0x3430387830206430ull,0x090a203038376330ull,
0x3132303033783009ull,0x3463783020313234ull,0x3020303837303031ull,0x3232306430303378ull,
0x3031636578302039ull,0x09090a2030383730ull,0x3631363830367830ull,0x3430387830203130ull,
0x7830203038373030ull,0x3532323132303033ull,0x3030313463783020ull,0x3009090a20303837ull,
0x3236306430303378ull,0x3031636578302064ull,0x3278302030383730ull,0x2064313031303030ull,
0x3738323034307830ull,0x783009090a203038ull,0x3530303030313033ull,0x3030316365783020ull,
0x3032783020303837ull,0x3020643032313030ull,0x3837633230343078ull,0x34783009090a2030ull,
0x2031306538333630ull,0x3130303030307830ull,0x3430327830203766ull,0x7830203532323130ull,
0x3038376332303430ull,0x3830783009090a20ull,0x3020313063323130ull,0x3837383030306578ull,
0x3034303278302030ull,0x3078302039323031ull,0x2030383738323034ull,0x383036783009090aull,
0x7830203130363039ull,0x3038373030343038ull,0x3937343034783020ull,0x3030783020353032ull,
0x0a20663131303030ull,0x3130383078300909ull,0x6578302031303462ull,0x2030383730313030ull,
0x3038303030327830ull,0x3030307830203132ull,0x090a203330383030ull,0x3161383036783009ull,
0x3438783020353034ull,0x3020303837343034ull,0x3034393734303478ull,0x3030303078302031ull,
0x09090a2066313130ull,0x3638333630347830ull,0x3030307830203930ull,0x7830203766313030ull,
0x6430303130313033ull,0x3030316365783020ull,0x3009090a20303837ull,0x3032316138303678ull,
0x3034303878302031ull,0x3278302030383730ull,0x2035303238303030ull,0x3830303030307830ull,
0x783009090a203330ull,0x3930653039383036ull,0x3830343438783020ull,0x3830783020303837ull,
0x3020313030363030ull,0x3837383130306578ull,0x32783009090a2030ull,0x2064303038303030ull,
0x3830303030307830ull,0x3130337830203330ull,0x7830203130323030ull,0x3038373030316365ull,
0x3032783009090a20ull,0x3020393034383030ull,0x3038303030303078ull,0x3031303378302033ull,
0x6578302035303630ull,0x2030383730303163ull,0x303830783009090aull,0x7830203130386530ull,
0x3038373030303065ull,0x3030313033783020ull,0x6365783020313034ull,0x0a20303837303031ull,
0x3130383078300909ull,0x6578302031303037ull,0x2030383738303030ull,0x3866313038307830ull,
0x3030657830203130ull,0x090a203038373030ull,0x6666313638783009ull,0x3030783020333065ull,
0x3020303030303030ull,0x3063383236303478ull,0x3030303078302031ull,0x09090a2033303030ull,
0x3030303030327830ull,0x3034307830203130ull,0x7830203038373431ull,0x3930303031303030ull,
0x3030303063783020ull,0x3009090a20303837ull,0x3030643031383378ull,0x3033636578302064ull,
0x3378302030383730ull,0x2031303264303138ull,0x3730303334637830ull,0x783009090a203038ull,
0x3530656330313833ull,0x3030333463783020ull,0x3833783020303837ull,0x3020393034643031ull,
0x3837303033636578ull,0x33783009090a2030ull,0x2064313064303138ull,0x3730303334637830ull,
0x3138337830203038ull,0x7830203532326430ull,0x3038373030336365ull,0x3833783009090a20ull,
0x3020353365633031ull,0x3837303033636578ull,0x3031383378302030ull,0x6378302039323464ull,
0x2030383730303334ull,0x313033783009090aull,0x7830203931303030ull,0x3038373030316365ull,
0x3030313033783020ull,0x6365783020353132ull,0x0a20303837303031ull,0x3031303378300909ull,
0x6578302031326530ull,0x2030383730303163ull,0x3431303130337830ull,0x3163657830203133ull,
0x090a203038373030ull,0x3836303032783009ull,0x3032783020303036ull,0x3020343061383230ull,
0x3130393930303278ull,0x6330303278302063ull,0x09090a2038326139ull,0x3638363430327830ull,
0x3430327830203831ull,0x7830203431613832ull,0x6330303831303032ull,0x3861303032783020ull,
0x3009090a20383065ull,0x3030303030303378ull,0x3030343078302035ull,0x3178302030383734ull,
0x2031303038303030ull,0x3830303030307830ull,0x783009090a203330ull,0x3930363030303032ull,
0x3830303430783020ull,0x3036783020303837ull,0x3020393034303638ull,0x3837303034303878ull,
0x33783009090a2030ull,0x2064323430303130ull,0x3730303163657830ull,0x3838647830203038ull,
0x7830203930656362ull,0x3038373030363430ull,0x3064783009090a20ull,0x3020643236316338ull,
0x3837303034343078ull,0x6230306478302030ull,0x3078302039303430ull,0x2030383734303034ull,
0x313033783009090aull,0x7830206432343030ull,0x3038373030316365ull,0x3962303032783020ull,
0x3032783020633238ull,0x0a20303361396334ull,0x6230303278300909ull,0x3278302034336538ull,
0x2063303638643430ull,0x3630363830367830ull,0x3430387830203130ull,0x090a203038373030ull,
0x3030313033783009ull,0x6365783020643030ull,0x3020303837303031ull,0x3032646238386478ull,
0x3036343078302031ull,0x09090a2030383730ull,0x3630633830647830ull,0x3434307830206430ull,
0x7830203038373030ull,0x6430303033303064ull,0x3430303430783020ull,0x3009090a20303837ull,
0x3036303031303378ull,0x3031636578302031ull,0x3278302030383730ull,0x2030303039303030ull,
0x3639303430327830ull,0x783009090a203030ull,0x3130303863373034ull,0x3030303030783020ull,
0x3036783020663033ull,0x3020313032303738ull,0x3837303034303878ull,0x32783009090a2030ull,
0x2031323031303430ull,0x3734323034307830ull,0x3030327830203038ull,0x7830203130303830ull,
0x3330383030303030ull,0x3033783009090a20ull,0x3020633165386130ull,0x3230396330303278ull,
0x3031303378302034ull,0x6578302031303030ull,0x2030383730303163ull,0x303033783009090aull,
0x7830203932303130ull,0x3038373033303430ull,0x6462383864783020ull,0x3430783020313230ull,
0x0a20303837303036ull,0x3234303478300909ull,0x3078302064316538ull,0x2037363730303030ull,
0x3030633830647830ull,0x3434307830206432ull,0x090a203038373030ull,0x3830303031783009ull,
0x3030783020313030ull,0x3020333031303030ull,0x3032303838303678ull,0x3134343878302035ull,
0x09090a2030383763ull,0x3031623030647830ull,0x3034307830203132ull,0x7830203038373430ull,
0x6431343136383036ull,0x3030343038783020ull,0x3009090a20303837ull,0x3032313638303678ull,
0x3034303878302031ull,0x3378302030383730ull,0x2039316330323030ull,0x3730303134637830ull,
0x783009090a203038ull,0x3532323830303032ull,0x3030303030783020ull,0x3033783020333038ull,
0x3020393265306430ull,0x3837303031636578ull,0x33783009090a2030ull,0x2035306130323030ull,
0x3730303134637830ull,0x3030337830203038ull,0x7830203531303064ull,0x3038373030316365ull,
0x3033783009090a20ull,0x3020313032313031ull,0x3837303031636578ull,0x3030303278302030ull,
0x3078302035326330ull,0x2030383738323034ull,0x383864783009090aull,0x7830206432346462ull,
0x3038373030363430ull,0x3030303032783020ull,0x3430783020643132ull,0x0a20303837343130ull,
0x6338306478300909ull,0x3078302031333030ull,0x2030383730303434ull,0x3239653730347830ull,
0x3030307830203130ull,0x090a203336303030ull,0x3030343032783009ull,0x3430783020393263ull,
0x3020303837383230ull,0x3136316330306478ull,0x3030343078302039ull,0x09090a2030383734ull,
0x6530643830367830ull,0x3430387830203130ull,0x7830203038373030ull,0x6432323030343032ull,
0x3431303430783020ull,0x3009090a20303837ull,0x3134396235303478ull,0x3030303078302035ull,
0x3478302062613130ull,0x2035303439373430ull,0x3130303030307830ull,0x783009090a206631ull,
0x3932303830303032ull,0x3030303030783020ull,0x3034783020333038ull,0x3020313032393336ull,
0x6631303030303078ull,0x36783009090a2037ull,0x2035313631653830ull,0x3734313430387830ull,
0x3830367830203038ull,0x7830203530363161ull,0x3038373430343438ull,0x3033783009090a20ull,
0x3020353234313031ull,0x3837303031636578ull,0x3938303678302030ull,0x3878302031306530ull,
0x2030383730303434ull,0x303032783009090aull,0x7830203932613830ull,0x3330383030303030ull,
0x3830303032783020ull,0x3030783020643132ull,0x0a20333038303030ull,0x6338306478300909ull,
0x3078302035313231ull,0x2030383730303434ull,0x3430633830647830ull,0x3434307830203530ull,
0x090a203038373030ull,0x3130313033783009ull,0x6365783020353234ull,0x3020303837303031ull,
0x3165303031303378ull,0x3031636578302064ull,0x09090a2030383730ull,0x6130303130337830ull,
0x3134637830203930ull,0x7830203038373030ull,0x3932303830303032ull,0x3030303030783020ull,
0x3009090a20333038ull,0x3232316338306478ull,0x3034343078302035ull,0x6478302030383730ull,
0x2035316530633830ull,0x3730303434307830ull,0x783009090a203038ull,0x3130323032303064ull,
0x3430303430783020ull,0x3033783020303837ull,0x3020393234313031ull,0x3837303031636578ull,
0x33783009090a2030ull,0x2064313231303130ull,0x3730303134637830ull,0x3130337830203038ull,
0x7830203930613030ull,0x3038373030313463ull,0x3064783009090a20ull,0x3020353030316338ull,
0x3837303034343078ull,0x6338306478302030ull,0x3078302064303630ull,0x2030383730303434ull,
0x303830783009090aull,0x7830203130653030ull,0x3038373030323465ull,0x3163383064783020ull,
0x3430783020353134ull,0x0a20303837303034ull,0x3230306478300909ull,0x3078302031303230ull,
0x2030383734303034ull,0x3630373030647830ull,0x3034307830203530ull,0x090a203038373430ull,
0x3063383064783009ull,0x3430783020393063ull,0x3020303837303034ull,0x3061303031303378ull,
0x3031346378302064ull,0x09090a2030383730ull,0x3031303038307830ull,0x3234657830203130ull,
0x7830203038373030ull,0x3130343033303064ull,0x3430303430783020ull,0x3009090a20303837ull,
0x3032313030383078ull,0x3032346578302031ull,0x3078302030383734ull,0x2031303431303038ull,
0x3730303234657830ull,0x783009090a203038ull,0x3330656666313638ull,0x3030303030783020ull,
0x3033783020303030ull,0x3020333030303030ull,0x3031303030303078ull,0x30783009090a2030ull,
0x2031303030303034ull,0x3730303030347830ull,0x3330327830203038ull,0x7830203930303863ull,
0x6266666666666630ull,0x3431783009090a20ull,0x3020313030633030ull,0x3837633332343078ull,
0x3130303378302030ull,0x6378302035306363ull,0x2030383730303334ull,0x303430783009090aull,
0x7830206430303030ull,0x3038373030303034ull,0x3030303030783020ull,0x3063783020393034ull,
0x0a20303837303030ull,0x6530306478300909ull,0x6178302031303830ull,0x2030383730306330ull,
0x3830303430327830ull,0x3034307830203930ull,0x090a203038373430ull,0x3834333032783009ull,
0x6630783020643036ull,0x3020336666666666ull,0x3030633030383178ull,0x3332343078302031ull,
0x09090a2030383763ull,0x3630303030307830ull,0x3030637830203930ull,0x7830203038373030ull,
0x3130343065303064ull,0x3030633061783020ull,0x3009090a20303837ull,0x3030303030343078ull,
0x3030303478302064ull,0x3278302030383730ull,0x2039303430303430ull,0x3734303034307830ull,
0x783009090a203038ull,0x3130326530303831ull,0x6333323430783020ull,0x3032783020303837ull,
0x3020643036386332ull,0x6566666666663078ull,0x64783009090a2062ull,0x2031303430653030ull,
0x3730306330617830ull,0x3030337830203038ull,0x7830203830323832ull,0x3030306530303931ull,
0x3030783009090a20ull,0x3020393036303030ull,0x3837303030306378ull,0x6530306478302030ull,
0x6178302031303430ull,0x2030383730306330ull,0x303831783009090aull,0x7830203130326530ull,
0x3038376333323430ull,0x3030303033783020ull,0x3430783020393032ull,0x0a20303837383030ull,
0x3030343078300909ull,0x3478302064303030ull,0x2030383730303030ull,0x3430653030647830ull,
0x6330617830203130ull,0x090a203038373030ull,0x3834323032783009ull,0x6630783020643036ull,
0x3020336566666666ull,0x3030653030393178ull,0x3230303378302030ull,0x09090a2038303238ull,
0x3630303030307830ull,0x3030637830203530ull,0x7830203038373030ull,0x3130343065303064ull,
0x3030633061783020ull,0x3009090a20303837ull,0x3032303030303378ull,0x3030343078302039ull,
0x3178302030383738ull,0x2031303265303034ull,0x3763333234307830ull,0x783009090a203038ull,
0x3530323030303033ull,0x3830303430783020ull,0x3064783020303837ull,0x3020313034306530ull,
0x3837303063306178ull,0x31783009090a2030ull,0x2031303063303034ull,0x3763333234307830ull,
0x3030647830203038ull,0x7830203130323065ull,0x3138373030633061ull,0x630a7d0a7d090a20ull,
0x6e090a7b2065646full,0x5a5f203d20656d61ull,0x656b414455433931ull,0x726f68536c656e72ull,
0x6973505443444974ull,0x3d206d656d6c090aull,0x6d656d73090a3020ull,0x0a34303232203d20ull,
0x203d202067657209ull,0x20726162090a3431ull,0x6f63090a31203d20ull,0x09090a7b2074736eull,
0x656d616e67657309ull,0x74736e6f63203d20ull,0x6e6765730909090aull,0x0a31203d20206d75ull,
0x657366666f090909ull,0x090a30203d202074ull,0x2073657479620909ull,0x090a3036203d2020ull,
0x090a7b206d656d09ull,0x3030303078300909ull,0x3078302032323030ull,0x2066663330303030ull,
0x3030303030307830ull,0x3030307830206630ull,0x090a203130303030ull,0x3030303078300909ull,
0x6678302066313030ull,0x2030656666666666ull,0x3637303030307830ull,0x3030307830203234ull,
0x090a203238613530ull,0x3030303078300909ull,0x3078302033366631ull,0x2063663033303030ull,
0x6131303030307830ull,0x3030307830206239ull,0x090a203763313130ull,0x3030303078300909ull,
0x6678302065333630ull,0x2030303030666666ull,0x6666303030307830ull,0x0a7d09090a206666ull,
0x636e6962090a7d09ull,0x09090a7b2065646full,0x3230323830647830ull,0x3430307830203930ull,
0x7830203038373030ull,0x3530323061303033ull,0x3030313065783020ull,0x3009090a20303837ull,
0x3034303030306178ull,0x3030343078302035ull,0x6178302030383730ull,0x2064306534303030ull,
0x3730303234307830ull,0x783009090a203038ull,0x3930303030303061ull,0x3030303430783020ull,
0x3061783020303837ull,0x3020313032303030ull,0x3837303030343078ull,0x33783009090a2030ull,
0x2035303230333030ull,0x3730303134637830ull,0x3030617830203038ull,0x7830203131633430ull,
0x3038373030323430ull,0x3033783009090a20ull,0x3020643036303530ull,0x3837303031346378ull,
0x3330303378302030ull,0x6378302035323030ull,0x2030383730303134ull,0x303032783009090aull,
0x7830203932323030ull,0x3038373830303430ull,0x3035303033783020ull,0x3463783020393038ull,
0x0a20303837303031ull,0x3030303278300909ull,0x3078302035303231ull,0x2030383763303034ull,
0x3431313030337830ull,0x3134637830203130ull,0x090a203038373030ull,0x6331303036783009ull,
0x3038783020393063ull,0x3020303837383032ull,0x3032313038303678ull,0x3034303878302035ull,
0x09090a2030383730ull,0x3030303030327830ull,0x3034307830203930ull,0x7830203038373830ull,
0x3530323865303032ull,0x3030303030783020ull,0x3009090a20333030ull,0x3034313238303378ull,
0x3034633678302064ull,0x3378302030643763ull,0x2039303430313030ull,0x3730303134637830ull,
0x783009090a203038ull,0x3530323031303030ull,0x3030303063783020ull,0x3061783020303837ull,
0x3020646637303030ull,0x6337343130633078ull,0x61783009090a2038ull,0x2033303032333030ull,
0x3030303030307830ull,0x3030327830203030ull,0x7830206431386330ull,0x3038373830323430ull,
0x3031783009090a20ull,0x3020333030323330ull,0x3031313030303078ull,0x6530306478302030ull,
0x3878302039306530ull,0x2030383730306330ull,0x303033783009090aull,0x7830203530636331ull,
0x3038373030333463ull,0x3030303032783020ull,0x3430783020643032ull,0x0a20303837633130ull,
0x6530306478300909ull,0x3878302035313630ull,0x2030383730306330ull,0x3230303030327830ull,
0x3034307830206430ull,0x090a203038376330ull,0x3065303064783009ull,0x3038783020313136ull,
0x3020303837303063ull,0x3132303030303278ull,0x3030343078302039ull,0x09090a2030383763ull,
0x6330653030647830ull,0x6330387830206430ull,0x7830203038373030ull,0x3130303030303430ull,
0x3830323465783020ull,0x3009090a20303837ull,0x3132303030303278ull,0x3130343078302039ull,
0x6478302030383738ull,0x2039306330653030ull,0x3730306330387830ull,0x783009090a203038ull,
0x3130323230303430ull,0x3431323465783020ull,0x3032783020303837ull,0x3020393132303030ull,
0x3837383130343078ull,0x64783009090a2030ull,0x2035316330653030ull,0x3730306330387830ull,
0x3034307830203038ull,0x7830203130343430ull,0x3038373031323465ull,0x3032783009090a20ull,
0x3020393132303030ull,0x3837383130343078ull,0x6530306478302030ull,0x3878302031316330ull,
0x2030383730306330ull,0x303430783009090aull,0x7830203130363630ull,0x3038376330323465ull,
0x3030303032783020ull,0x3430783020643132ull,0x0a20303837383130ull,0x6530306478300909ull,
0x3878302035306530ull,0x2030383730306330ull,0x3838303034307830ull,0x3234657830203130ull,
0x090a203038373830ull,0x6130303430783009ull,0x3465783020313061ull,0x3020303837343132ull,
0x3063633030343078ull,0x3132346578302031ull,0x09090a2030383730ull,0x6565303034307830ull,
0x3234657830203130ull,0x7830203038373430ull,0x3530386233303464ull,0x3030303032783020ull,
0x3009090a20303837ull,0x3030303030306678ull,0x3030306578302031ull,0x3878302032303030ull,
0x2033306566663136ull,0x3030303030307830ull,0x783009090a203030ull,0x3530343134303033ull,
0x3030316365783020ull,0x3064783020303837ull,0x3020353032303338ull,0x3837303034343078ull,
0x64783009090a2030ull,0x2031303030313030ull,0x3734303034307830ull,0x3830647830203038ull,
0x7830203530343135ull,0x3038373030343430ull,0x3064783009090a20ull,0x3020313030303438ull,
0x3837303034343078ull,0x3130306478302030ull,0x3078302035303030ull,0x2030383734303034ull,
0x363034783009090aull,0x7830203130323932ull,0x3330303030303030ull,0x3030303032783020ull,
0x3430783020313030ull,0x0a20303837343030ull,0x3130303078300909ull,0x6378302039303030ull,
0x2030383730303030ull,0x3834313038647830ull,0x3030327830206430ull,0x090a203038373030ull,
0x6431303864783009ull,0x3032783020313130ull,0x3020303837303030ull,0x3030383030636178ull,
0x3132633078302064ull,0x09090a2030383730ull,0x3836333038647830ull,0x3030327830206430ull,
0x7830203038373030ull,0x3130303830303061ull,0x3031326330783020ull,0x3009090a20343837ull,
0x3138353230386478ull,0x3030303278302031ull,0x6178302030383730ull,0x2039303038303063ull,
0x3730313263307830ull,0x783009090a203038ull,0x3931303830303061ull,0x3031326330783020ull,
0x3864783020343837ull,0x3020643030653230ull,0x3837303030303278ull,0x34783009090a2030ull,
0x2035303438633730ull,0x3330303030307830ull,0x3430347830206630ull,0x7830203531343832ull,
0x3736373030303030ull,0x3861783009090a20ull,0x3020313163393030ull,0x3837303132633078ull,
0x3030636178302030ull,0x3078302039303038ull,0x2030383730313263ull,0x383036783009090aull,
0x7830203530363036ull,0x3038373430343038ull,0x3039383036783020ull,0x3438783020353136ull,
0x0a20303837343134ull,0x3630303278300909ull,0x3278302063303838ull,0x2038313838363430ull,
0x3038323030327830ull,0x3430327830203032ull,0x090a203830303832ull,0x6633303864783009ull,
0x3032783020313130ull,0x3020303837303030ull,0x3030383030303178ull,0x3030303078302031ull,
0x09090a2033303130ull,0x3063303038647830ull,0x3030327830206430ull,0x7830203038373030ull,
0x6432303830303061ull,0x3031326330783020ull,0x3009090a20343837ull,0x3034303738303678ull,
0x3034303878302039ull,0x6178302030383730ull,0x2031313038303063ull,0x3730313263307830ull,
0x783009090a203038ull,0x3130303137383036ull,0x3030343038783020ull,0x3033783020303837ull,
0x3020313336313230ull,0x3837303031346378ull,0x33783009090a2030ull,0x2031323430643030ull,
0x3730303163657830ull,0x3030337830203038ull,0x7830206432383032ull,0x3038373030313463ull,
0x3033783009090a20ull,0x3020393030306430ull,0x3837303031636578ull,0x3738303678302030ull,
0x3878302031303630ull,0x2030383734303430ull,0x303032783009090aull,0x7830203131303130ull,
0x3038373033303430ull,0x3037383036783020ull,0x3438783020353036ull,0x0a20303837343034ull,
0x6230303278300909ull,0x3378302063303438ull,0x2063323438623030ull,0x3838653730347830ull,
0x3030307830203930ull,0x090a203336303030ull,0x3833363034783009ull,0x3030783020313138ull,
0x3020376631303030ull,0x3230313030303378ull,0x3330343078302031ull,0x09090a2030383730ull,
0x3630383830367830ull,0x3430387830203930ull,0x7830203038373830ull,0x3131363063383036ull,
0x3031343438783020ull,0x3009090a20303837ull,0x3063303738303678ull,0x3134303878302064ull,
0x3678302030383734ull,0x2039316330373830ull,0x3734313434387830ull,0x783009090a203038ull,
0x3533303937343034ull,0x3030303030783020ull,0x3032783020663131ull,0x3020313330303030ull,
0x3837383030343078ull,0x34783009090a2030ull,0x2035313039623530ull,0x3130303030307830ull,
0x3830367830206261ull,0x7830203132363161ull,0x3038373433343438ull,0x3032783009090a20ull,
0x3020313338393030ull,0x3038303030303078ull,0x6238303678302033ull,0x3878302064323631ull,
0x2030383734313430ull,0x303032783009090aull,0x7830203533363030ull,0x3038373032303430ull,
0x3130313033783020ull,0x6365783020353138ull,0x0a20303837303031ull,0x3030303278300909ull,
0x3078302035336139ull,0x2033303830303030ull,0x6331303038307830ull,0x3030657830203130ull,
0x090a203038373832ull,0x3030303032783009ull,0x3430783020313363ull,0x3020303837633230ull,
0x3161313031303378ull,0x3031636578302035ull,0x09090a2030383730ull,0x3030303430327830ull,
0x3034307830203930ull,0x7830203038373830ull,0x3130383930303032ull,0x3030303030783020ull,
0x3009090a20333038ull,0x3036303034303278ull,0x3230343078302064ull,0x3078302030383730ull,
0x2031303036303038ull,0x3738323030657830ull,0x783009090a203038ull,0x3531323030303032ull,
0x3031303430783020ull,0x3033783020303837ull,0x3020313030303031ull,0x3837303031636578ull,
0x32783009090a2030ull,0x2031313230303430ull,0x3730313034307830ull,0x3030327830203038ull,
0x7830203530613830ull,0x3330383030303030ull,0x3032783009090a20ull,0x3020353163303034ull,
0x3837633230343078ull,0x3030383078302030ull,0x6578302031303461ull,0x2030383730303030ull,
0x303032783009090aull,0x7830203131383830ull,0x3330383030303030ull,0x3030313033783020ull,
0x6365783020313032ull,0x0a20303837303031ull,0x3030303278300909ull,0x3078302035316138ull,
0x2033303830303030ull,0x3830303130337830ull,0x3163657830203530ull,0x090a203038373030ull,
0x6530303830783009ull,0x3065783020313038ull,0x3020303837303030ull,0x3036383030303278ull,
0x3030303078302064ull,0x09090a2033303830ull,0x6130303130337830ull,0x3163657830203130ull,
0x7830203038373030ull,0x3130633231303830ull,0x3830303065783020ull,0x3009090a20303837ull,
0x3034383030303278ull,0x3030303078302039ull,0x3378302033303830ull,0x2035303630303130ull,
0x3730303163657830ull,0x783009090a203038ull,0x3130303731303830ull,0x3030303065783020ull,
0x3033783020303837ull,0x3020313034303031ull,0x3837303031636578ull,0x30783009090a2030ull,
0x2031303462313038ull,0x3738303030657830ull,0x3038307830203038ull,0x7830203130386631ull,
0x3038373030303065ull,0x3638783009090a20ull,0x3020333065666631ull,0x3030303030303078ull,
0x3236303478302030ull,0x3078302031303439ull,0x2033303030303030ull,0x303032783009090aull,
0x7830203130303030ull,0x3038373432303430ull,0x3031303030783020ull,0x3063783020393030ull,
0x0a20303837303030ull,0x3031383378300909ull,0x6578302031303064ull,0x2030383730303363ull,
0x3264303138337830ull,0x3363657830203530ull,0x090a203038373030ull,0x3831303032783009ull,
0x3032783020633030ull,0x3020343030383134ull,0x3030383030303178ull,0x3030303078302039ull,
0x09090a2033303130ull,0x3630373830367830ull,0x3430387830203130ull,0x7830203038373830ull,
0x3930323037383036ull,0x3830343038783020ull,0x3009090a20303837ull,0x3130643031383378ull,
0x3033346378302031ull,0x3378302030383730ull,0x2031323464303138ull,0x3730303334637830ull,
0x783009090a203038ull,0x3530656330313833ull,0x3030333463783020ull,0x3833783020303837ull,
0x3020393132643031ull,0x3837303033346378ull,0x33783009090a2030ull,0x2064303464303138ull,
0x3730303363657830ull,0x3138337830203038ull,0x7830203531656330ull,0x3038373030336365ull,
0x3033783009090a20ull,0x3020393238303031ull,0x3837303031636578ull,0x3031303378302030ull,
0x6578302031313031ull,0x2030383730303163ull,0x313033783009090aull,0x7830203530323030ull,
0x3038373030316365ull,0x3030313033783020ull,0x6365783020313363ull,0x0a20303837303031ull,
0x3230303378300909ull,0x6378302064323630ull,0x2030383730303134ull,0x3838633730347830ull,
0x3030307830206430ull,0x090a206630333030ull,0x3032303033783009ull,0x3463783020353161ull,
0x3020303837303031ull,0x3234306430303378ull,0x3031636578302035ull,0x09090a2030383730ull,
0x3838323430347830ull,0x3030307830203931ull,0x7830203736373030ull,0x6430343136383036ull,
0x6330343038783020ull,0x3009090a20303837ull,0x3130306430303378ull,0x3031636578302031ull,
0x3278302030383730ull,0x2031323631303030ull,0x3734323034307830ull,0x783009090a203038ull,
0x3931343139383036ull,0x3831343438783020ull,0x3032783020303837ull,0x3020383032386330ull,
0x3261383430303278ull,0x34783009090a2038ull,0x2031303039653730ull,0x3030303030307830ull,
0x3430327830203336ull,0x7830203133323030ull,0x3038373033303430ull,0x3036783009090a20ull,
0x3020353034303738ull,0x3837633034303878ull,0x3838303678302030ull,0x3878302031303431ull,
0x2030383730303430ull,0x383036783009090aull,0x7830206430343037ull,0x3038376330343438ull,
0x3137383036783020ull,0x3038783020393038ull,0x0a20303837383134ull,0x3738303678300909ull,
0x3878302039313831ull,0x2030383738313434ull,0x3030303030327830ull,0x3034307830203133ull,
0x090a203038373430ull,0x3930303032783009ull,0x3030783020313338ull,0x3020333038303030ull,
0x3338313031303378ull,0x3031636578302031ull,0x09090a2030383730ull,0x3631303430327830ull,
0x3034307830203533ull,0x7830203038373432ull,0x3532656364383864ull,0x3030363430783020ull,
0x3009090a20303837ull,0x3238316538306478ull,0x3034343078302064ull,0x6478302030383730ull,
0x2064323231623030ull,0x3734303034307830ull,0x783009090a203038ull,0x3532363130313033ull,
0x3030316365783020ull,0x3033783020303837ull,0x3020353232313230ull,0x3837303031346378ull,
0x32783009090a2030ull,0x2030336138343430ull,0x3838393030337830ull,0x3430347830203431ull,
0x7830203131613937ull,0x6631313030303030ull,0x3036783009090a20ull,0x3020353161306138ull,
0x3837303134343878ull,0x3336303478302030ull,0x3078302035323039ull,0x2037663130303030ull,
0x353034783009090aull,0x7830203132613962ull,0x6261313030303030ull,0x3030303032783020ull,
0x3430783020353134ull,0x0a20303837343130ull,0x6338303678300909ull,0x3878302035323431ull,
0x2030383734323434ull,0x3831623830367830ull,0x3430387830203132ull,0x090a203038373032ull,
0x3161383036783009ull,0x3438783020313138ull,0x3020303837303134ull,0x3161383030303278ull,
0x3030303078302035ull,0x09090a2033303830ull,0x3038313030337830ull,0x3030327830203030ull,
0x7830203832633838ull,0x3530343030343032ull,0x3031303430783020ull,0x3009090a20303837ull,
0x3161303031303378ull,0x3031636578302031ull,0x3278302030383730ull,0x2031333630303030ull,
0x3734323034307830ull,0x783009090a203038ull,0x3531343930303032ull,0x3030303030783020ull,
0x3032783020333038ull,0x3020393036303034ull,0x3837343230343078ull,0x64783009090a2030ull,
0x2064303830653830ull,0x3730303434307830ull,0x3030327830203038ull,0x7830203932383930ull,
0x3330383030303030ull,0x3033783009090a20ull,0x3020353261303031ull,0x3837303031636578ull,
0x6538306478302030ull,0x3078302031313631ull,0x2030383730303434ull,0x313033783009090aull,
0x7830203531363030ull,0x3038373030313463ull,0x6464383864783020ull,0x3430783020643030ull,
0x0a20303837303036ull,0x3031303378300909ull,0x6578302039323431ull,0x2030383730303163ull,
0x3231653830647830ull,0x3434307830203532ull,0x090a203038373030ull,0x3035303064783009ull,
0x3430783020313138ull,0x3020303837343030ull,0x3234383030303278ull,0x3030303078302064ull,
0x09090a2033303830ull,0x3431653830647830ull,0x3434307830203531ull,0x7830203038373030ull,
0x3930363039303064ull,0x3430303430783020ull,0x3009090a20303837ull,0x3263303034303278ull,
0x3230343078302031ull,0x3378302030383730ull,0x2039313631303130ull,0x3730303163657830ull,
0x783009090a203038ull,0x6430613030313033ull,0x3030313463783020ull,0x3064783020303837ull,
0x3020393034306538ull,0x3837303034343078ull,0x64783009090a2030ull,0x2035313264643838ull,
0x3730303634307830ull,0x3030327830203038ull,0x7830203132303930ull,0x3330383030303030ull,
0x3064783009090a20ull,0x3020393163306538ull,0x3837303034343078ull,0x3330306478302030ull,
0x3078302039303430ull,0x2030383734303034ull,0x303032783009090aull,0x7830203532323830ull,
0x3330383030303030ull,0x3130313033783020ull,0x6365783020643030ull,0x0a20303837303031ull,
0x3630306478300909ull,0x3078302035306130ull,0x2030383734303034ull,0x3038303030327830ull,
0x3030307830203132ull,0x090a203330383030ull,0x3130313033783009ull,0x6365783020393132ull,
0x3020303837303031ull,0x3036306538306478ull,0x3034343078302031ull,0x09090a2030383730ull,
0x3464643838647830ull,0x3634307830203531ull,0x7830203038373030ull,0x3132303130313033ull,
0x3030316365783020ull,0x3009090a20303837ull,0x3163306538306478ull,0x3034343078302039ull,
0x3378302030383730ull,0x2064303030303130ull,0x3730303134637830ull,0x783009090a203038ull,
0x3130323065383064ull,0x3030343430783020ull,0x3064783020303837ull,0x3020313230316538ull,
0x3837303034343078ull,0x64783009090a2030ull,0x2035306130363030ull,0x3734303034307830ull,
0x3038307830203038ull,0x7830203130653030ull,0x3038373031323465ull,0x3064783009090a20ull,
0x3020313030303330ull,0x3837343030343078ull,0x3031303378302030ull,0x6378302064303031ull,
0x2030383730303134ull,0x383064783009090aull,0x7830203530323065ull,0x3038373030343430ull,
0x3130303830783020ull,0x3465783020313030ull,0x0a20303837383032ull,0x3330306478300909ull,
0x3078302035303230ull,0x2030383734303034ull,0x3231303038307830ull,0x3234657830203130ull,
0x090a203038373030ull,0x3130303830783009ull,0x3465783020313034ull,0x3020303837343032ull,
0x3065666631363878ull,0x3030303078302033ull,0x09090a2030303030ull,0x3030303030337830ull,
0x3030307830203330ull,0x7830203030313030ull,0x3130303030303430ull,0x3030303034783020ull,
0x3009090a20303837ull,0x3030386333303278ull,0x6666663078302039ull,0x3178302062666666ull,
0x2031303063303034ull,0x3763333234307830ull,0x783009090a203038ull,0x3530636331303033ull,
0x3030333463783020ull,0x3430783020303837ull,0x3020643030303030ull,0x3837303030303478ull,
0x30783009090a2030ull,0x2039303430303030ull,0x3730303030637830ull,0x3030647830203038ull,
0x7830203130653065ull,0x3038373030633061ull,0x3032783009090a20ull,0x3020393065303034ull,
0x3837343030343078ull,0x3433303278302030ull,0x3078302064303638ull,0x2033666666666666ull,
0x303831783009090aull,0x7830203130306330ull,0x3038376333323430ull,0x3030303030783020ull,
0x3063783020393036ull,0x0a20303837303030ull,0x6530306478300909ull,0x6178302031303430ull,
0x2030383730306330ull,0x3030303034307830ull,0x3030347830206430ull,0x090a203038373030ull,
0x3030343032783009ull,0x3430783020393034ull,0x3020303837343030ull,0x3032653030383178ull,
0x3332343078302031ull,0x09090a2030383763ull,0x3638633230327830ull,0x6666307830206430ull,
0x7830206265666666ull,0x3130343065303064ull,0x3030633061783020ull,0x3009090a20303837ull,
0x3032383230303378ull,0x3030393178302038ull,0x3078302030303065ull,0x2039303630303030ull,
0x3730303030637830ull,0x783009090a203038ull,0x3130343065303064ull,0x3030633061783020ull,
0x3831783020303837ull,0x3020313032653030ull,0x3837633332343078ull,0x33783009090a2030ull,
0x2039303230303030ull,0x3738303034307830ull,0x3034307830203038ull,0x7830206430303030ull,
0x3038373030303034ull,0x3064783009090a20ull,0x3020313034306530ull,0x3837303063306178ull,
0x3432303278302030ull,0x3078302064303638ull,0x2033656666666666ull,0x303931783009090aull,
0x7830203030306530ull,0x3830323832303033ull,0x3030303030783020ull,0x3063783020353036ull,
0x0a20303837303030ull,0x6530306478300909ull,0x6178302031303430ull,0x2030383730306330ull,
0x3230303030337830ull,0x3034307830203930ull,0x090a203038373830ull,0x6530303431783009ull,
0x3430783020313032ull,0x3020303837633332ull,0x3032303030303378ull,0x3030343078302035ull,
0x09090a2030383738ull,0x3430653030647830ull,0x6330617830203130ull,0x7830203038373030ull,
0x3130306330303431ull,0x6333323430783020ull,0x3009090a20303837ull,0x3032306530306478ull,
0x3063306178302031ull,0x7d090a2031383730ull,0x2065646f630a7d0aull,0x20656d616e090a7bull,
0x554337325a5f203dull,0x6c656e72656b4144ull,0x617a69746e617551ull,0x726f68536e6f6974ull,
0x6d6c090a69735074ull,0x090a30203d206d65ull,0x32203d206d656d73ull,0x2020676572090a38ull,
0x726162090a39203dull,0x63090a31203d2020ull,0x090a7b2074736e6full,0x6d616e6765730909ull,
0x736e6f63203d2065ull,0x6765730909090a74ull,0x31203d20206d756eull,0x7366666f0909090aull,
0x0a30203d20207465ull,0x7365747962090909ull,0x090a34203d202020ull,0x090a7b206d656d09ull,
0x3030303078300909ull,0x09090a2066663330ull,0x6962090a7d090a7dull,0x0a7b2065646f636eull,
0x3030303178300909ull,0x3078302035303030ull,0x2030383763333034ull,0x3630303830647830ull,
0x3430307830203130ull,0x090a203038373030ull,0x3238303134783009ull,0x3030783020643065ull,
0x3020333030303030ull,0x3030303030306178ull,0x3030343078302039ull,0x09090a2030383730ull,
0x6363303030317830ull,0x3234307830203130ull,0x7830203038376333ull,0x6430363030303032ull,
0x3830303430783020ull,0x3009090a20303837ull,0x3130303730303478ull,0x3030303078302031ull,
0x3678302030383730ull,0x2031313230363030ull,0x3730313030307830ull,0x783009090a203038ull,
0x3131383030313033ull,0x3030313463783020ull,0x3036783020303837ull,0x3020643030303630ull,
0x3837303130303078ull,0x34783009090a2030ull,0x2031306332383031ull,0x3030303030307830ull,
0x3030327830203330ull,0x7830206430363030ull,0x3038373030303430ull,0x3061783009090a20ull,
0x3020313034303030ull,0x3837303030343078ull,0x3330303378302030ull,0x6378302035303430ull,
0x2030383730303134ull,0x303032783009090aull,0x7830203830303833ull,0x3030303831303032ull,
0x3031303033783020ull,0x3463783020353034ull,0x0a20303837303031ull,0x3130303078300909ull,
0x6378302035303030ull,0x2030383730303030ull,0x3863303030327830ull,0x3234307830206430ull,
0x090a203038373430ull,0x3332303061783009ull,0x3030783020333030ull,0x3020303030303030ull,
0x3030303130343178ull,0x3030303278302039ull,0x09090a2030383738ull,0x3630653030647830ull,
0x3630387830203130ull,0x7830203038373030ull,0x3530343030303061ull,0x3031306330783020ull,
0x3009090a20303837ull,0x6631306337303378ull,0x3130633678302064ull,0x3378302038633738ull,
0x2039303230313030ull,0x3730303163657830ull,0x783009090a203038ull,0x3330306631303031ull,
0x3030303030783020ull,0x3032783020303832ull,0x3020313034303034ull,0x3837303030343078ull,
0x31783009090a2030ull,0x2039303230303030ull,0x3763333034307830ull,0x3030617830203038ull,
0x7830203130303030ull,0x3038373031306330ull,0x3032783009090a20ull,0x3020333030623230ull,
0x3837303030303078ull,0x3030303378302030ull,0x3078302031303038ull,0x2033303030303030ull,
0x303031783009090aull,0x7830203330303332ull,0x3038373030303030ull,0x3030303032783020ull,
0x3430783020313030ull,0x0a20303837383030ull,0x3030303178300909ull,0x3078302039303230ull,
0x2030383763333034ull,0x3030303030617830ull,0x3063307830203130ull,0x090a203038373031ull,
0x6232303032783009ull,0x3030783020333030ull,0x3020303837303030ull,0x3030303030306678ull,
0x3030306578302031ull,0x09090a2032303030ull,0x6566663136387830ull,0x3030307830203330ull,
0x7830203030303030ull,0x3930303033303034ull,0x3030303030783020ull,0x3009090a20303837ull,
0x3032303230303678ull,0x3030303078302039ull,0x3378302030383738ull,0x2039303430303130ull,
0x3730303134637830ull,0x783009090a203038ull,0x3130303032303036ull,0x3830303030783020ull,
0x3064783020303837ull,0x3020313036306530ull,0x3837303036306178ull,0x33783009090a2030ull,
0x2033303030303030ull,0x3730303030307830ull,0x3030617830203038ull,0x7830203131343030ull,
0x3038373431313430ull,0x3061783009090a20ull,0x3020353138303030ull,0x3837343030343478ull,
0x3030306178302030ull,0x3078302039313030ull,0x2030383734313134ull,0x303039783009090aull,
0x7830206431613030ull,0x3038373030303030ull,0x3030303061783020ull,0x3434783020353163ull,
0x0a20303837343630ull,0x6533303278300909ull,0x3078302064316538ull,0x2066666666666666ull,
0x6130373030637830ull,0x3030307830203531ull,0x090a203063376330ull,0x3030303061783009ull,
0x3438783020353161ull,0x3020303837343630ull,0x3230316230303478ull,0x3030303078302031ull,
0x09090a2030383730ull,0x3231613030367830ull,0x3030307830203132ull,0x7830203038373032ull,
0x3132303130313033ull,0x3030313463783020ull,0x3009090a20303837ull,0x3230316130303678ull,
0x3230303078302031ull,0x3278302030383730ull,0x2031326330303430ull,0x3730323034307830ull,
0x783009090a203038ull,0x3132303130303061ull,0x3436303434783020ull,0x3063783020303837ull,
0x3020643130313730ull,0x6337633030303078ull,0x61783009090a2030ull,0x2064316530303030ull,
0x3734363034387830ull,0x3030327830203038ull,0x7830203531613030ull,0x3038376331303430ull,
0x3034783009090a20ull,0x3020643136313830ull,0x3837303030303078ull,0x3930303678302030ull,
0x3078302064313431ull,0x2030383763313030ull,0x313033783009090aull,0x7830206431653030ull,
0x3038373030313463ull,0x3138303036783020ull,0x3030783020643134ull,0x0a20303837633130ull,
0x3030303378300909ull,0x3078302039316530ull,0x2030383738313034ull,0x3830363030337830ull,
0x3034367830203131ull,0x090a203038376330ull,0x3030303064783009ull,0x3430783020313034ull,
0x3020303837383030ull,0x3030306631303378ull,0x3031346578302031ull,0x09090a2030383730ull,
0x3830303030337830ull,0x3034307830203531ull,0x7830203038373431ull,0x3131303030303061ull,
0x3431306332783020ull,0x3009090a20303837ull,0x3138303530306478ull,0x3030343078302031ull,
0x3378302030383738ull,0x2064663530633730ull,0x3734313063367830ull,0x783009090a203863ull,
0x3130303030303032ull,0x3031303430783020ull,0x3064783020303837ull,0x3020313030303230ull,
0x3035633230343078ull,0x33783009090a2030ull,0x2033303030303030ull,0x3730303030307830ull,
0x3030667830203038ull,0x7830203130303030ull,0x3130303030303065ull,0x630a7d0a7d090a20ull,
0x6e090a7b2065646full,0x5a5f203d20656d61ull,0x656b414455433431ull,0x544344326c656e72ull,
0x656d6c090a696650ull,0x73090a30203d206dull,0x3132203d206d656dull,0x20676572090a3034ull,
0x62090a3431203d20ull,0x0a31203d20207261ull,0x7b2074736e6f6309ull,0x6e6765730909090aull,
0x6f63203d20656d61ull,0x730909090a74736eull,0x3d20206d756e6765ull,0x666f0909090a3120ull,
0x203d202074657366ull,0x7479620909090a30ull,0x38203d2020207365ull,0x7b206d656d09090aull,
0x303078300909090aull,0x3020666633303030ull,0x3230303030303078ull,0x090a7d09090a2031ull,
0x6f636e6962090a7dull,0x3009090a7b206564ull,0x3132306130303378ull,0x3031306578302031ull,
0x6178302030383730ull,0x2035306534303030ull,0x3730303234307830ull,0x783009090a203038ull,
0x6430383030303061ull,0x3030303430783020ull,0x3064783020303837ull,0x3020353032303038ull,
0x3837303034303078ull,0x61783009090a2030ull,0x2031316334303030ull,0x3730303234307830ull,
0x3030337830203038ull,0x7830203930323034ull,0x3038373030313463ull,0x3033783009090a20ull,
0x3020313336303330ull,0x3837303031346378ull,0x3030306178302030ull,0x3078302035303230ull,
0x2030383730303034ull,0x303033783009090aull,0x7830206430383035ull,0x3038373030313463ull,
0x3030303061783020ull,0x3430783020643230ull,0x0a20303837303030ull,0x3030303278300909ull,
0x3078302039303831ull,0x2030383738303034ull,0x3230333030337830ull,0x3134637830203130ull,
0x090a203038373030ull,0x6332303036783009ull,0x3038783020353063ull,0x3020303837633032ull,
0x3030386230303278ull,0x3130303278302030ull,0x09090a2034303038ull,0x3230323030337830ull,
0x3134637830203530ull,0x7830203038373030ull,0x3532636332303033ull,0x3030333463783020ull,
0x3009090a20303837ull,0x3038633030303278ull,0x3032343078302035ull,0x6478302030383734ull,
0x2035313230653030ull,0x3730306330387830ull,0x783009090a203038ull,0x3930323130303032ull,
0x3430303430783020ull,0x3064783020303837ull,0x3020313134306530ull,0x3837303063303878ull,
0x36783009090a2030ull,0x2035303831313830ull,0x3730303430387830ull,0x3030327830203038ull,
0x7830206430323130ull,0x3038373830303430ull,0x3064783009090a20ull,0x3020393036306530ull,
0x3837303063303878ull,0x3230303078302030ull,0x6378302035303230ull,0x2030383730303030ull,
0x303032783009090aull,0x7830203530323130ull,0x3038376330303430ull,0x3065303064783020ull,
0x3038783020643032ull,0x0a20303837303063ull,0x3030343078300909ull,0x6578302031306530ull,
0x2030383734313234ull,0x3231303030327830ull,0x3034307830203531ull,0x090a203038373430ull,
0x3065303064783009ull,0x3038783020353061ull,0x3020303837303063ull,0x3030353030343078ull,
0x3132346578302031ull,0x09090a2030383730ull,0x3231303030327830ull,0x3034307830203131ull,
0x7830203038373431ull,0x3531383065303064ull,0x3030633038783020ull,0x3009090a20303837ull,
0x3032393030343078ull,0x3032346578302031ull,0x3278302030383738ull,0x2039303231303030ull,
0x3730313034307830ull,0x783009090a203038ull,0x3131343065303064ull,0x3030633038783020ull,
0x3430783020303837ull,0x3020313034643030ull,0x3837633032346578ull,0x32783009090a2030ull,
0x2039323231303030ull,0x3738303034307830ull,0x3030647830203038ull,0x7830203930343165ull,
0x3038373030633038ull,0x3430783009090a20ull,0x3020313036313130ull,0x3837343032346578ull,
0x3130343078302030ull,0x6578302031303835ull,0x2030383734313234ull,0x303430783009090aull,
0x7830203130613931ull,0x3038373031323465ull,0x6431303430783020ull,0x3465783020313063ull,
0x0a20303837383032ull,0x6631363878300909ull,0x3078302033306566ull,0x2030303030303030ull,
0x3839313630347830ull,0x3030307830203530ull,0x090a203330303030ull,0x3030303032783009ull,
0x3430783020353032ull,0x3020303837303030ull,0x3032303230303078ull,0x3030306378302039ull,
0x09090a2030383730ull,0x3037373038647830ull,0x3030327830203131ull,0x7830203038373030ull,
0x6430383636303864ull,0x3030303032783020ull,0x3009090a20303837ull,0x3130633030303178ull,
0x3332343078302035ull,0x3178302034383763ull,0x2035303063303030ull,0x3763333234307830ull,
0x783009090a203438ull,0x3131303635303864ull,0x3030303032783020ull,0x6431783020303837ull,
0x3020633130653030ull,0x3230653030643178ull,0x64783009090a2030ull,0x2064303835343038ull,
0x3730303030327830ull,0x3030317830203038ull,0x7830203931306330ull,0x3438376333323430ull,
0x3031783009090a20ull,0x3020313130633030ull,0x3837633332343078ull,0x3130386478302034ull,
0x3278302031313034ull,0x2030383730303030ull,0x306431783009090aull,0x7830203830306530ull,
0x6330306530306431ull,0x3533303864783020ull,0x3032783020643030ull,0x0a20303837303030ull,
0x3030306278300909ull,0x3078302064313063ull,0x2034383763313230ull,0x3063303030627830ull,
0x3234307830203132ull,0x090a203438373032ull,0x3432303864783009ull,0x3032783020313138ull,
0x3020303837303030ull,0x3165363530396278ull,0x3230646278302034ull,0x09090a2038303036ull,
0x3063303030627830ull,0x3230307830203533ull,0x7830203438373831ull,0x3831613032303062ull,
0x3032343062783020ull,0x3009090a20343161ull,0x3065306430306278ull,0x6434306278302038ull,
0x6278302034336530ull,0x2063316330323030ull,0x6536313439627830ull,0x783009090a203430ull,
0x3131306330303062ull,0x3031323830783020ull,0x6362783020343837ull,0x3020643030633030ull,
0x3837633032343078ull,0x63783009090a2030ull,0x2064316530366530ull,0x3730303030307830ull,
0x3030627830203038ull,0x7830203930633030ull,0x3038373830303830ull,0x3830783009090a20ull,
0x3020313065303030ull,0x3837633132346578ull,0x3465306378302030ull,0x3078302039316131ull,
0x2030383730303030ull,0x653065783009090aull,0x7830203931613031ull,0x3038373831303030ull,
0x3036653063783020ull,0x3030783020393163ull,0x0a20303837303030ull,0x3030383078300909ull,
0x6578302031303239ull,0x2030383738313234ull,0x6131316530637830ull,0x3030307830206431ull,
0x090a203038373030ull,0x3132653063783009ull,0x3030783020393130ull,0x3020303837303030ull,
0x3034303665306378ull,0x3030303078302039ull,0x09090a2030383730ull,0x6130346530657830ull,
0x3038307830206431ull,0x7830203038376331ull,0x3931323030653065ull,0x3831303830783020ull,
0x3009090a20303837ull,0x3130313565306378ull,0x3030303078302035ull,0x3078302030383730ull,
0x2031303631313038ull,0x3738303234657830ull,0x783009090a203038ull,0x3930653036653063ull,
0x3030303030783020ull,0x3065783020303837ull,0x3020643138303365ull,0x3837383130303078ull,
0x65783009090a2030ull,0x2035333230326530ull,0x3734313030307830ull,0x6530637830203038ull,
0x7830203931323033ull,0x3038373030303030ull,0x3830783009090a20ull,0x3020313061393130ull,
0x3837383032346578ull,0x3565306578302030ull,0x3078302035313630ull,0x2030383763313034ull,
0x653065783009090aull,0x7830203930383030ull,0x3038373433303430ull,0x3130653065783020ull,
0x3030783020393130ull,0x0a20303837383130ull,0x3565306378300909ull,0x3078302035303230ull,
0x2030383730303030ull,0x6130366530637830ull,0x3030307830203531ull,0x090a203038373030ull,
0x3033653065783009ull,0x3030783020393036ull,0x3020303837383030ull,0x3138303565306578ull,
0x3130303078302039ull,0x09090a2030383738ull,0x3031336530657830ull,0x3030307830206431ull,
0x7830203038373430ull,0x3130303530303830ull,0x3431323465783020ull,0x3009090a20303837ull,
0x3034303665306378ull,0x3030303078302035ull,0x6578302030383730ull,0x2039303630326530ull,
0x3738313034307830ull,0x783009090a203038ull,0x3131383032653065ull,0x6331303030783020ull,
0x3830783020303837ull,0x3020313034643030ull,0x3837343032346578ull,0x63783009090a2030ull,
0x2035303430366530ull,0x3730303030307830ull,0x6530657830203038ull,0x7830203930363030ull,
0x3038373031303030ull,0x3830783009090a20ull,0x3020313038353130ull,0x3837343032346578ull,
0x3665306378302030ull,0x3078302035303430ull,0x2030383730303030ull,0x303830783009090aull,
0x7830203130636431ull,0x3038373430323465ull,0x6666313638783020ull,0x3030783020333065ull,
0x0a20303030303030ull,0x3030303278300909ull,0x3078302035303831ull,0x2030383763323034ull,
0x3230313830367830ull,0x3430367830203130ull,0x090a203038373030ull,0x3030343032783009ull,
0x3430783020313030ull,0x3020303837633230ull,0x3030303230303078ull,0x3030306378302039ull,
0x09090a2030383730ull,0x6366303039317830ull,0x3039317830203030ull,0x7830206330366630ull,
0x3430616630303931ull,0x6630303931783020ull,0x3009090a20383038ull,0x3065363030396278ull,
0x3330396278302030ull,0x6278302063303437ull,0x2034303037313039ull,0x3237323039627830ull,
0x783009090a203830ull,0x3031303033303062ull,0x3033343062783020ull,0x3062783020633130ull,
0x3020343132303230ull,0x3132303234306278ull,0x31783009090a2038ull,0x2034306366303039ull,
0x6166303039317830ull,0x3039317830203830ull,0x7830206330386630ull,0x3030366630303931ull,
0x3962783009090a20ull,0x3020343065363134ull,0x3030663230396278ull,0x3030306278302038ull,
0x3078302064323830ull,0x2030383734313030ull,0x653063783009090aull,0x7830203132633034ull,
0x3038373030303030ull,0x3733343962783020ull,0x3962783020633032ull,0x0a20303034663030ull,
0x3665306378300909ull,0x3078302064323631ull,0x2030383730303030ull,0x6530316530657830ull,
0x3030307830203132ull,0x090a203038373032ull,0x3030303830783009ull,0x3465783020313065ull,
0x3020303837633232ull,0x3230313665306378ull,0x3030303078302031ull,0x09090a2030383730ull,
0x3830303030627830ull,0x3038307830203131ull,0x7830203038373431ull,0x3531633031653063ull,
0x3030303030783020ull,0x3009090a20303837ull,0x3134303265306378ull,0x3030303078302039ull,
0x3078302030383730ull,0x2031303231303038ull,0x3730323234657830ull,0x783009090a203038ull,
0x3131383036653063ull,0x3030303030783020ull,0x3065783020303837ull,0x3020353165303465ull,
0x3837343130383078ull,0x65783009090a2030ull,0x2039313230306530ull,0x3738313038307830ull,
0x6530637830203038ull,0x7830206431343035ull,0x3038373030303030ull,0x3830783009090a20ull,
0x3020313036313030ull,0x3837303132346578ull,0x3665306378302030ull,0x3078302031316130ull,
0x2030383730303030ull,0x653065783009090aull,0x7830203531363033ull,0x3038373831303030ull,
0x3032653065783020ull,0x3030783020393132ull,0x0a20303837633130ull,0x3365306378300909ull,
0x3078302064313230ull,0x2030383730303030ull,0x6131303038307830ull,0x3234657830203130ull,
0x090a203038373031ull,0x3035653065783009ull,0x3430783020313130ull,0x3020303837343130ull,
0x3136303065306578ull,0x3130343078302035ull,0x09090a2030383738ull,0x3430306530657830ull,
0x3030307830203931ull,0x7830203038376331ull,0x6431323035653063ull,0x3030303030783020ull,
0x3009090a20303837ull,0x3038303665306378ull,0x3030303078302035ull,0x6578302030383730ull,
0x2031313030336530ull,0x3734313030307830ull,0x783009090a203038ull,0x3531363035653065ull,
0x3831303030783020ull,0x3065783020303837ull,0x3020393134303365ull,0x3837633130303078ull,
0x30783009090a2030ull,0x2031303031303038ull,0x3734303234657830ull,0x6530637830203038ull,
0x7830203530383036ull,0x3038373030303030ull,0x3065783009090a20ull,0x3020393030303265ull,
0x3837343130343078ull,0x3265306578302030ull,0x3078302064303630ull,0x2030383738313030ull,
0x303830783009090aull,0x7830203130343130ull,0x3038373430323465ull,0x3036653063783020ull,
0x3030783020353034ull,0x0a20303837303030ull,0x3065306578300909ull,0x3078302031303030ull,
0x2030383763303030ull,0x3831303038307830ull,0x3234657830203130ull,0x090a203038373430ull,
0x3036653063783009ull,0x3030783020313030ull,0x3020303837303030ull,0x3063313030383078ull,
0x3032346578302031ull,0x09090a2030383730ull,0x6566663136387830ull,0x3030307830203330ull,
0x7830203030303030ull,0x3130636537343134ull,0x3030303030783020ull,0x3009090a20333030ull,
0x3030303230303378ull,0x3031346378302031ull,0x3278302030383730ull,0x2034303439303430ull,
0x6565303035317830ull,0x783009090a203030ull,0x3930303431303464ull,0x3030303032783020ull,
0x3064783020303837ull,0x3020313032306530ull,0x3837303063306178ull,0x31783009090a2030ull,
0x2030303065303039ull,0x3238393030327830ull,0x3034647830203430ull,0x7830203930383432ull,
0x3038373030303032ull,0x3064783009090a20ull,0x3020313032306530ull,0x3837303063306178ull,
0x3030393178302030ull,0x3278302030303065ull,0x2034303238393030ull,0x303464783009090aull,
0x7830203930303533ull,0x3038373030303032ull,0x3065303064783020ull,0x3061783020313032ull,
0x0a20303837303063ull,0x3030393178300909ull,0x3278302030303065ull,0x2034303239313030ull,
0x3835343034647830ull,0x3030327830203930ull,0x090a203038373030ull,0x3065303064783009ull,
0x3061783020313032ull,0x3020303837303063ull,0x3030653030393178ull,0x3130303278302030ull,
0x09090a2034303239ull,0x3036353034647830ull,0x3030327830203930ull,0x7830203038373030ull,
0x3130323065303064ull,0x3030633061783020ull,0x3009090a20303837ull,0x3030653030393178ull,
0x3130303278302030ull,0x6478302034303239ull,0x2039303836363034ull,0x3730303030327830ull,
0x783009090a203038ull,0x3130323065303064ull,0x3030633061783020ull,0x3032783020303837ull,
0x3020343032393130ull,0x3030653030393178ull,0x64783009090a2030ull,0x2035303037373034ull,
0x3730303030327830ull,0x3030327830203038ull,0x7830203930323130ull,0x3038373430303430ull,
0x3064783009090a20ull,0x3020313032306530ull,0x3837303063306178ull,0x3030343178302030ull,
0x3078302031303063ull,0x2030383763333234ull,0x303064783009090aull,0x7830203130343065ull,
0x3138373030633061ull,0x630a7d0a7d090a20ull,0x6e090a7b2065646full,0x5a5f203d20656d61ull,
0x656b414455433431ull,0x544344316c656e72ull,0x6c090a6969696650ull,0x0a30203d206d656dull,
0x203d206d656d7309ull,0x676572090a383435ull,0x090a3031203d2020ull,0x31203d2020726162ull,
0x2074736e6f63090aull,0x6765730909090a7bull,0x63203d20656d616eull,0x0909090a74736e6full,
0x20206d756e676573ull,0x6f0909090a31203dull,0x3d20207465736666ull,0x79620909090a3020ull,
0x203d202020736574ull,0x206d656d09090a34ull,0x3078300909090a7bull,0x2066663330303030ull,
0x0a7d090a7d09090aull,0x65646f636e696209ull,0x61783009090a7b20ull,0x2035306334303030ull,
0x3730303234307830ull,0x3030617830203038ull,0x7830206430653430ull,0x3038373030323430ull,
0x3132783009090a20ull,0x3020383065653130ull,0x3030663330313278ull,0x3038306478302063ull,
0x3078302039303230ull,0x2030383730303430ull,0x303061783009090aull,0x7830203130303030ull,
0x3038373030303430ull,0x3033303033783020ull,0x3463783020393034ull,0x0a20303837303031ull,
0x3330303378300909ull,0x6378302064303630ull,0x2030383730303134ull,0x3430303030617830ull,
0x3034307830206431ull,0x090a203038373030ull,0x3832303032783009ull,0x3032783020343130ull,
0x3020383165383330ull,0x3065303330303378ull,0x3031346378302035ull,0x09090a2030383730ull,
0x6130303030617830ull,0x3034347830206430ull,0x7830203038373431ull,0x3131633030303061ull,
0x3431303434783020ull,0x3009090a20303837ull,0x3030303230303078ull,0x3030306378302035ull,
0x3278302030383730ull,0x2039303230303030ull,0x3730303034307830ull,0x783009090a203038ull,
0x3130363030303062ull,0x3030663330783020ull,0x3062783020333030ull,0x3020353038303030ull,
0x3030303066333078ull,0x30783009090a2033ull,0x2064306530323030ull,0x3730303030637830ull,
0x3030307830203038ull,0x7830203930343032ull,0x3038373030303063ull,0x3266783009090a20ull,
0x3020313030303034ull,0x3837303030303078ull,0x3030383078302034ull,0x6578302031303231ull,
0x2030383730303234ull,0x313638783009090aull,0x7830203330656666ull,0x3030303030303030ull,
0x3031303464783020ull,0x3032783020313138ull,0x0a20303837303030ull,0x3030303178300909ull,
0x3078302031313063ull,0x2034383763333234ull,0x3064303030317830ull,0x3234307830206430ull,
0x090a203438376333ull,0x6530303031783009ull,0x3430783020393030ull,0x3020343837633332ull,
0x3030663030303178ull,0x3332343078302035ull,0x09090a2034383763ull,0x3830323034647830ull,
0x3030327830203131ull,0x7830203038373030ull,0x3130306330303031ull,0x6333323430783020ull,
0x3009090a20343837ull,0x3232643030343178ull,0x3332343078302035ull,0x3178302030383763ull,
0x2031323265303034ull,0x3763333234307830ull,0x783009090a203038ull,0x3532323130386365ull,
0x3066313030783020ull,0x6365783020303837ull,0x3020353230313838ull,0x3837343230303078ull,
0x31783009090a2030ull,0x2031323266303034ull,0x3763333234307830ull,0x3963657830203038ull,
0x7830203132303130ull,0x3038373432303030ull,0x6365783009090a20ull,0x3020313138303839ull,
0x3837303230303078ull,0x3061636578302030ull,0x3078302064303630ull,0x2030383730313030ull,
0x616365783009090aull,0x7830203930343038ull,0x3038376330303030ull,0x3030626365783020ull,
0x3030783020353032ull,0x0a20303837383030ull,0x3862636578300909ull,0x3078302031303030ull,
0x2030383734303030ull,0x3239303038307830ull,0x3234657830203130ull,0x090a203038373030ull,
0x6666313638783009ull,0x3030783020333065ull,0x3020303030303030ull,0x3065303530303078ull,
0x3030306378302064ull,0x09090a2030383730ull,0x3834323063647830ull,0x3030327830206430ull,
0x7830203038373030ull,0x3430306530306431ull,0x6530306431783020ull,0x3009090a20303032ull,
0x3032303038346578ull,0x6631303078302035ull,0x6578302030383730ull,0x2035303030383834ull,
0x3734303030307830ull,0x783009090a203038ull,0x3130346330306331ull,0x6333323430783020ull,
0x3465783020303837ull,0x3020353030303039ull,0x3837343030303078ull,0x31783009090a2030ull,
0x2031303663303063ull,0x3763333234307830ull,0x3934657830203038ull,0x7830203530303038ull,
0x3038373430303030ull,0x6331783009090a20ull,0x3020313038633030ull,0x3837633332343078ull,
0x3061346578302030ull,0x3078302035303030ull,0x2030383734303030ull,0x306331783009090aull,
0x7830203130616330ull,0x3038376333323430ull,0x3038613465783020ull,0x3030783020353030ull,
0x0a20303837343030ull,0x3030633178300909ull,0x3078302031306363ull,0x2030383763333234ull,
0x3030306234657830ull,0x3030307830203530ull,0x090a203038373430ull,0x6330306331783009ull,
0x3430783020313065ull,0x3020303837633332ull,0x3030303862346578ull,0x3030303078302031ull,
0x09090a2030383734ull,0x3231303038307830ull,0x3234657830203130ull,0x7830203038373030ull,
0x3330656666313638ull,0x3030303030783020ull,0x3009090a20303030ull,0x3063633630303678ull,
0x3132303878302031ull,0x3378302030383734ull,0x2035303030323030ull,0x3730303134637830ull,
0x783009090a203038ull,0x3030326630303931ull,0x6531303132783020ull,0x3064783020343038ull,
0x3020313032306530ull,0x3837303063306178ull,0x0a7d0a7d090a2031ull,0x090a7b2065646f63ull,
0x5f203d20656d616eull,0x6b4144554337325aull,0x6175516c656e7265ull,0x6f6974617a69746eull,
0x665074616f6c466eull,0x206d656d6c090a69ull,0x656d73090a30203dull,0x090a3832203d206dull,
0x35203d2020676572ull,0x3d2020726162090aull,0x736e6f63090a3020ull,0x730909090a7b2074ull,
0x3d20656d616e6765ull,0x090a74736e6f6320ull,0x6d756e6765730909ull,0x09090a31203d2020ull,
0x2074657366666f09ull,0x0909090a30203d20ull,0x2020207365747962ull,0x6d09090a3432203dull,
0x0909090a7b206d65ull,0x3330303030307830ull,0x3865377830206666ull,0x7830203030303030ull,
0x3030303030303038ull,0x3030306633783020ull,0x0909090a20303030ull,0x3030303062347830ull,
0x3865337830203030ull,0x090a203030303030ull,0x62090a7d090a7d09ull,0x7b2065646f636e69ull,
0x303031783009090aull,0x7830203530303030ull,0x3038376333303430ull,0x3030383064783020ull,
0x3030783020313036ull,0x0a20303837303034ull,0x3830313478300909ull,0x3078302039306532ull,
0x2033303030303030ull,0x3030303030617830ull,0x3034307830206430ull,0x090a203038373030ull,
0x6330303031783009ull,0x3430783020313063ull,0x3020303837633332ull,0x3034303030303278ull,
0x3030343078302039ull,0x09090a2030383763ull,0x3030353030347830ull,0x3030307830203131ull,
0x7830203038373030ull,0x3131323034303036ull,0x3031303030783020ull,0x3009090a20303837ull,
0x3138303031303378ull,0x3031346378302031ull,0x6178302030383730ull,0x2035303430303030ull,
0x3730303034307830ull,0x783009090a203038ull,0x6430363033303033ull,0x3030313463783020ull,
0x3036783020303837ull,0x3020313130303430ull,0x3837303130303078ull,0x34783009090a2030ull,
0x2039306332383031ull,0x3030303030307830ull,0x3030327830203330ull,0x7830203030323833ull,
0x3830383832303032ull,0x3030783009090a20ull,0x3020353030303130ull,0x3837303030306378ull,
0x3030303278302030ull,0x3078302031303230ull,0x2030383738303034ull,0x303431783009090aull,
0x7830203930303031ull,0x3038373830303032ull,0x3032303033783020ull,0x3463783020313030ull,
0x0a20303837303031ull,0x3030306178300909ull,0x3478302035303430ull,0x2030383730313034ull,
0x3863303030327830ull,0x3234307830203930ull,0x090a203038373030ull,0x3031383062783009ull,
0x3036783020646633ull,0x3020386337303135ull,0x3032303030303178ull,0x3330343078302031ull,
0x09090a2030383763ull,0x3430653030647830ull,0x6330387830206430ull,0x7830203038373030ull,
0x6430363035383063ull,0x3030343030783020ull,0x3009090a20303836ull,0x3030303538306378ull,
0x3034303078302035ull,0x3978302030383630ull,0x2034303230303030ull,0x3630313030637830ull,
0x783009090a203430ull,0x6430323032383064ull,0x3030343430783020ull,0x3064783020303837ull,
0x3020643036303338ull,0x3837343034343078ull,0x62783009090a2030ull,0x2064303230303030ull,
0x3763303030307830ull,0x3830627830203038ull,0x7830206466333034ull,0x3863373031353036ull,
0x3061783009090a20ull,0x3020643036303030ull,0x3837343630636378ull,0x3338306278302030ull,
0x3678302064663330ull,0x2038643734303530ull,0x303031783009090aull,0x7830206430323030ull,
0x3038326333303430ull,0x3030303061783020ull,0x6363783020643032ull,0x0a20303836353630ull,
0x3330306378300909ull,0x3078302031303030ull,0x2030383730303030ull,0x3430653030647830ull,
0x6330617830203130ull,0x090a203138373030ull,0x65646f630a7d0a7dull,0x656d616e090a7b20ull,
0x4335315a5f203d20ull,0x656e72656b414455ull,0x665054434449316cull,0x656d6c090a696969ull,
0x73090a30203d206dull,0x3435203d206d656dull,0x2020676572090a38ull,0x726162090a38203dull,
0x63090a31203d2020ull,0x090a7b2074736e6full,0x6d616e6765730909ull,0x736e6f63203d2065ull,
0x6765730909090a74ull,0x31203d20206d756eull,0x7366666f0909090aull,0x0a30203d20207465ull,
0x7365747962090909ull,0x090a34203d202020ull,0x090a7b206d656d09ull,0x3030303078300909ull,
0x09090a2066663330ull,0x6962090a7d090a7dull,0x0a7b2065646f636eull,0x3030306178300909ull,
0x3078302039306534ull,0x2030383730303234ull,0x6334303030617830ull,0x3234307830203530ull,
0x090a203038373030ull,0x6632303132783009ull,0x3132783020633030ull,0x3020343065653130ull,
0x3032303038306478ull,0x3034303078302035ull,0x09090a2030383730ull,0x3030303030617830ull,
0x3034307830203930ull,0x7830203038373030ull,0x3131363033303033ull,0x3030313463783020ull,
0x3009090a20303837ull,0x3032303330303378ull,0x3031346378302035ull,0x6178302030383730ull,
0x2035313230303030ull,0x3730303034307830ull,0x783009090a203038ull,0x6330343831303032ull,
0x3834303032783020ull,0x3033783020303161ull,0x3020313061303330ull,0x3837303031346378ull,
0x61783009090a2030ull,0x2035303630303030ull,0x3734313034347830ull,0x3030617830203038ull,
0x7830206431383030ull,0x3038373431303434ull,0x3032783009090a20ull,0x3020393130303030ull,
0x3837383030343078ull,0x3030306278302030ull,0x3078302031303230ull,0x2033303030306633ull,
0x303062783009090aull,0x7830203530653030ull,0x3330303030663330ull,0x3035303030783020ull,
0x3063783020353061ull,0x0a20303837303030ull,0x3230303078300909ull,0x6378302039306330ull,
0x2030383730303030ull,0x3030303432667830ull,0x3030307830203130ull,0x090a203438373030ull,
0x3130303830783009ull,0x3465783020313032ull,0x3020303837303032ull,0x3065666631363878ull,
0x3030303078302033ull,0x09090a2030303030ull,0x3430323030307830ull,0x3030637830206430ull,
0x7830203038373030ull,0x3530326430306331ull,0x6333323430783020ull,0x3009090a20303837ull,
0x3032653030633178ull,0x3332343078302031ull,0x6578302030383763ull,0x2035303230303834ull,
0x3730663130307830ull,0x783009090a203038ull,0x3530303031383465ull,0x3430303030783020ull,
0x6331783020303837ull,0x3020313032663030ull,0x3837633332343078ull,0x64783009090a2030ull,
0x2031313830313063ull,0x3730303030327830ull,0x3834657830203038ull,0x7830203530303032ull,
0x3038373430303030ull,0x3031783009090a20ull,0x3020313030633030ull,0x3837633332343078ull,
0x3338346578302034ull,0x3078302035303030ull,0x2030383734303030ull,0x303031783009090aull,
0x7830203130306430ull,0x3438376333323430ull,0x3034383465783020ull,0x3030783020353030ull,
0x0a20303837343030ull,0x3030303178300909ull,0x3078302031303065ull,0x2034383763333234ull,
0x3030353834657830ull,0x3030307830203530ull,0x090a203038373430ull,0x6630303031783009ull,
0x3430783020313030ull,0x3020343837633332ull,0x3038303230636478ull,0x3030303278302064ull,
0x09090a2030383730ull,0x3030363834657830ull,0x3030307830203530ull,0x7830203038373430ull,
0x3130306330306331ull,0x6333323430783020ull,0x3009090a20303837ull,0x3030303738346578ull,
0x3030303078302031ull,0x3078302030383734ull,0x2031303239303038ull,0x3730303234657830ull,
0x783009090a203038ull,0x3330656666313638ull,0x3030303030783020ull,0x3464783020303030ull,
0x3020353038343230ull,0x3837303030303278ull,0x30783009090a2030ull,0x2064303430353030ull,
0x3730303030637830ull,0x3035317830203038ull,0x7830203430306530ull,0x3030326530303531ull,
0x6365783009090a20ull,0x3020353032303038ull,0x3837306631303078ull,0x3138636578302030ull,
0x3078302035303030ull,0x2030383734303030ull,0x303431783009090aull,0x7830203130346330ull,
0x3038376333323430ull,0x3032386365783020ull,0x3030783020353030ull,0x0a20303837343030ull,
0x3030343178300909ull,0x3078302031303663ull,0x2030383763333234ull,0x3030333863657830ull,
0x3030307830203530ull,0x090a203038373430ull,0x6330303431783009ull,0x3430783020313038ull,
0x3020303837633332ull,0x3030303438636578ull,0x3030303078302035ull,0x09090a2030383734ull,
0x6163303034317830ull,0x3234307830203130ull,0x7830203038376333ull,0x3530303035386365ull,
0x3430303030783020ull,0x3009090a20303837ull,0x3063633030343178ull,0x3332343078302031ull,
0x6578302030383763ull,0x2035303030363863ull,0x3734303030307830ull,0x783009090a203038ull,
0x3130656330303431ull,0x6333323430783020ull,0x6365783020303837ull,0x3020313030303738ull,
0x3837343030303078ull,0x30783009090a2030ull,0x2031303231303038ull,0x3730303234657830ull,
0x3136387830203038ull,0x7830203330656666ull,0x3030303030303030ull,0x3036783009090a20ull,
0x3020313063633430ull,0x3837633032303878ull,0x3230303378302030ull,0x6378302035303030ull,
0x2030383730303134ull,0x303931783009090aull,0x7830203030326630ull,0x3430386531303132ull,
0x3065303064783020ull,0x3061783020313032ull,0x0a20313837303063ull,0x646f630a7d0a7d09ull,
0x6d616e090a7b2065ull,0x35315a5f203d2065ull,0x6e72656b41445543ull,0x5054434449326c65ull,
0x6d656d6c090a6966ull,0x6d73090a30203d20ull,0x343132203d206d65ull,0x2020676572090a30ull,
0x6162090a3431203dull,0x090a31203d202072ull,0x0a7b2074736e6f63ull,0x616e676573090909ull,
0x6e6f63203d20656dull,0x65730909090a7473ull,0x203d20206d756e67ull,0x66666f0909090a31ull,
0x30203d2020746573ull,0x657479620909090aull,0x0a38203d20202073ull,0x0a7b206d656d0909ull,
0x3030307830090909ull,0x7830206666333030ull,0x3132303030303030ull,0x7d090a7d09090a20ull,
0x646f636e6962090aull,0x783009090a7b2065ull,0x3131323061303033ull,0x3030313065783020ull,
0x3061783020303837ull,0x3020353065343030ull,0x3837303032343078ull,0x61783009090a2030ull,
0x2064303830303030ull,0x3730303034307830ull,0x3830647830203038ull,0x7830203530323030ull,
0x3038373030343030ull,0x3061783009090a20ull,0x3020313163343030ull,0x3837303032343078ull,
0x3430303378302030ull,0x6378302039303230ull,0x2030383730303134ull,0x303033783009090aull,
0x7830203931363033ull,0x3038373030313463ull,0x3030303061783020ull,0x3430783020353032ull,
0x0a20303837303030ull,0x3530303378300909ull,0x6378302064303830ull,0x2030383730303134ull,
0x3030303030617830ull,0x3034307830203531ull,0x090a203038373030ull,0x3030303032783009ull,
0x3430783020393063ull,0x3020303837383030ull,0x3032303330303378ull,0x3031346378302031ull,
0x09090a2030383730ull,0x6363323030367830ull,0x3230387830203530ull,0x7830203038376330ull,
0x3030303835303032ull,0x3831303032783020ull,0x3009090a20343030ull,0x3032303230303378ull,
0x3031346378302035ull,0x3378302030383730ull,0x2064306363323030ull,0x3730303334637830ull,
0x783009090a203038ull,0x3530386330303032ull,0x3430323430783020ull,0x3064783020303837ull,
0x3020313232306530ull,0x3837303063303878ull,0x32783009090a2030ull,0x2039303630303030ull,
0x3734303034307830ull,0x3030647830203038ull,0x7830206431343065ull,0x3038373030633038ull,
0x3036783009090a20ull,0x3020353063303138ull,0x3837303034303878ull,0x3030303278302030ull,
0x3078302031313630ull,0x2030383738303034ull,0x303064783009090aull,0x7830203930383065ull,
0x3038373030633038ull,0x3032303030783020ull,0x3063783020353032ull,0x0a20303837303030ull,
0x3030303278300909ull,0x3078302035303630ull,0x2030383730313034ull,0x3230653030647830ull,
0x6330387830203131ull,0x090a203038373030ull,0x3030303430783009ull,0x3465783020313065ull,
0x3020303837303232ull,0x3236303030303278ull,0x3030343078302031ull,0x09090a2030383734ull,
0x3031653030647830ull,0x6330387830203530ull,0x7830203038373030ull,0x3130303530303430ull,
0x6331323465783020ull,0x3009090a20303837ull,0x3136303030303278ull,0x3230343078302064ull,
0x6478302030383730ull,0x2031326530653030ull,0x3730306330387830ull,0x783009090a203038ull,
0x3130323930303430ull,0x3830323465783020ull,0x3032783020303837ull,0x3020393036303030ull,
0x3837633130343078ull,0x64783009090a2030ull,0x2064313430653030ull,0x3730306330387830ull,
0x3034307830203038ull,0x7830203130346430ull,0x3038373031323465ull,0x3032783009090a20ull,
0x3020313136303030ull,0x3837383030343078ull,0x6530306478302030ull,0x3878302039303830ull,
0x2030383730306330ull,0x303430783009090aull,0x7830203130363131ull,0x3038373430323465ull,
0x3531303430783020ull,0x3465783020313038ull,0x0a20303837303232ull,0x3130343078300909ull,
0x6578302031306139ull,0x2030383763313234ull,0x6364313034307830ull,0x3234657830203130ull,
0x090a203038373830ull,0x6666313638783009ull,0x3030783020333065ull,0x3020303030303030ull,
0x3063383136303478ull,0x3030303078302035ull,0x09090a2033303030ull,0x3230303030327830ull,
0x3034307830203530ull,0x7830203038373030ull,0x3930323032303030ull,0x3030303063783020ull,
0x3009090a20303837ull,0x3038363630386478ull,0x3030303278302064ull,0x6478302030383730ull,
0x2031313835343038ull,0x3730303030327830ull,0x783009090a203038ull,0x6431306334656363ull,
0x3030323030783020ull,0x6363783020303837ull,0x3020313230633165ull,0x3837303032303078ull,
0x64783009090a2030ull,0x2064303834323038ull,0x3730303030327830ull,0x3030317830203038ull,
0x7830203930306330ull,0x3438376333323430ull,0x3031783009090a20ull,0x3020353030633030ull,
0x3837633332343078ull,0x3130386478302034ull,0x3278302031313034ull,0x2030383730303030ull,
0x656365783009090aull,0x7830203533306331ull,0x3038376331323030ull,0x6334656365783020ull,
0x3830783020313230ull,0x0a20303837303232ull,0x3730386478300909ull,0x3278302064303037ull,
0x2030383730303030ull,0x3063356530637830ull,0x3230307830206431ull,0x090a203438373030ull,
0x6335656363783009ull,0x3030783020353230ull,0x3020303837303032ull,0x3230633365636378ull,
0x3032303078302039ull,0x09090a2030383730ull,0x3063326563637830ull,0x3230307830206432ull,
0x7830203038373030ull,0x6431306330656365ull,0x6331323830783020ull,0x3009090a20303837ull,
0x3030353330386478ull,0x3030303278302064ull,0x6278302030383730ull,0x2039306563303038ull,
0x3738303230307830ull,0x783009090a203038ull,0x3532306330653065ull,0x3432323030783020ull,
0x3065783020343837ull,0x3020393230633265ull,0x3837383232383078ull,0x65783009090a2034ull,
0x2064323063336530ull,0x3763323230307830ull,0x3038647830203438ull,0x7830203131303635ull,
0x3038373030303032ull,0x6365783009090a20ull,0x3020313330633265ull,0x3837343232303078ull,
0x6430306278302030ull,0x6278302034323430ull,0x2038303430643430ull,0x303862783009090aull,
0x7830203530656330ull,0x3038373430323830ull,0x6333653065783020ull,0x3030783020313330ull,
0x0a20343837303332ull,0x3365636578300909ull,0x3078302064313063ull,0x2030383763313230ull,
0x3063356563657830ull,0x3234307830203932ull,0x090a203038373832ull,0x6330656365783009ull,
0x3430783020353330ull,0x3020303837633232ull,0x3232313030306278ull,0x3330303078302064ull,
0x09090a2030383730ull,0x3063326530657830ull,0x3234307830206431ull,0x7830203438376331ull,
0x3932306330653065ull,0x3832323430783020ull,0x3009090a20343837ull,0x3330633565306578ull,
0x3332303078302035ull,0x6378302034383734ull,0x2064323631366530ull,0x3730303030307830ull,
0x783009090a203038ull,0x3532323130303062ull,0x3033303830783020ull,0x3830783020303837ull,
0x3020313065303030ull,0x3837633232346578ull,0x63783009090a2030ull,0x2035323231366530ull,
0x3730303030307830ull,0x3030627830203038ull,0x7830206432343030ull,0x3038376331303030ull,
0x3830783009090a20ull,0x3020313063643130ull,0x3837343232346578ull,0x3665306378302030ull,
0x3078302035323631ull,0x2030383730303030ull,0x343062783009090aull,0x7830206331343037ull,
0x3830323038303062ull,0x3131303830783020ull,0x3465783020313036ull,0x0a20303837343232ull,
0x3665306378300909ull,0x3078302064316530ull,0x2030383730303030ull,0x3430613030627830ull,
0x3430627830203432ull,0x090a203032323038ull,0x6430303830783009ull,0x3465783020313034ull,
0x3020303837633132ull,0x3032313665306378ull,0x3030303078302035ull,0x09090a2030383730ull,
0x3031303030627830ull,0x3038307830206431ull,0x7830203038373433ull,0x3130303530303830ull,
0x3430323465783020ull,0x3009090a20303837ull,0x3065303665306378ull,0x3030303078302035ull,
0x6278302030383730ull,0x2064313031303030ull,0x3734333030307830ull,0x783009090a203038ull,
0x3130383531303830ull,0x3430323465783020ull,0x3063783020303837ull,0x3020353065303665ull,
0x3837303030303078ull,0x62783009090a2030ull,0x2039303430303030ull,0x3738323038307830ull,
0x3038307830203038ull,0x7830203130323930ull,0x3038373430323465ull,0x3063783009090a20ull,
0x3020353034303665ull,0x3837303030303078ull,0x3130383078302030ull,0x6578302031306139ull,
0x2030383734303234ull,0x313638783009090aull,0x7830203330656666ull,0x3030303030303030ull,
0x3030303032783020ull,0x3430783020353063ull,0x0a20303837343130ull,0x3138303678300909ull,
0x3678302031303230ull,0x2030383730303430ull,0x3030303430327830ull,0x3034307830203130ull,
0x090a203038373431ull,0x3032303030783009ull,0x3063783020393030ull,0x3020303837303030ull,
0x3036643030383178ull,0x3332343078302031ull,0x09090a2030383763ull,0x6164346538637830ull,
0x3230307830203132ull,0x7830203038373030ull,0x3532636435653863ull,0x3030323030783020ull,
0x3009090a20303837ull,0x3230643565386378ull,0x3032303078302039ull,0x3178302030383730ull,
0x2035303664303038ull,0x3763333234307830ull,0x783009090a203038ull,0x3531616431653863ull,
0x3030323030783020ull,0x3863783020303837ull,0x3020393163643365ull,0x3837303032303078ull,
0x63783009090a2030ull,0x2064316364326538ull,0x3730303230307830ull,0x3038627830203038ull,
0x7830203930656330ull,0x3038373030323030ull,0x3865783009090a20ull,0x3020313032643165ull,
0x3837303232303078ull,0x3065386578302030ull,0x3078302035323064ull,0x2030383734323230ull,
0x653865783009090aull,0x7830203132636430ull,0x3038373832323830ull,0x6330303862783020ull,
0x3830783020353065ull,0x0a20303837343032ull,0x3465386578300909ull,0x3078302035313264ull,
0x2030383734313238ull,0x3464326538657830ull,0x3230307830203532ull,0x090a203038373432ull,
0x6432653865783009ull,0x3830783020643230ull,0x3020303837383132ull,0x3330643365386578ull,
0x3132303078302031ull,0x09090a2030383763ull,0x3430303030627830ull,0x3030307830203931ull,
0x7830203038373030ull,0x3932386433653865ull,0x3432323030783020ull,0x3009090a20303837ull,
0x3134643365386578ull,0x3232303078302064ull,0x6578302030383730ull,0x2031323464356538ull,
0x3763323234307830ull,0x783009090a203038ull,0x3133346430653865ull,0x3033323430783020ull,
0x3062783020303837ull,0x3020643263303030ull,0x3837383230303078ull,0x65783009090a2030ull,
0x2035323864326538ull,0x3763313234307830ull,0x6538657830203038ull,0x7830206431386430ull,
0x3038373032323430ull,0x3865783009090a20ull,0x3020313238643565ull,0x3837303332303078ull,
0x3665306378302030ull,0x3078302064323631ull,0x2030383730303030ull,0x343062783009090aull,
0x7830203831633061ull,0x3830343030343062ull,0x3030303830783020ull,0x3465783020313065ull,
0x0a20303837633232ull,0x3665306378300909ull,0x3078302031306330ull,0x2030383730303030ull,
0x3430303030627830ull,0x3030307830203931ull,0x090a203038373432ull,0x3130303830783009ull,
0x3465783020313063ull,0x3020303837303032ull,0x3163303665306378ull,0x3030303078302039ull,
0x09090a2030383730ull,0x3430393430627830ull,0x3030627830203830ull,0x7830203030323035ull,
0x3130363130303830ull,0x3831323465783020ull,0x3009090a20303837ull,0x3034303665306378ull,
0x3030303078302039ull,0x6278302030383730ull,0x2038313030373030ull,0x3230353430627830ull,
0x783009090a203431ull,0x3130343130303830ull,0x3830323465783020ull,0x3063783020303837ull,
0x3020353063303665ull,0x3837303030303078ull,0x62783009090a2030ull,0x2039306130303030ull,
0x3730323038307830ull,0x3038307830203038ull,0x7830203130303130ull,0x3038373430323465ull,
0x3063783009090a20ull,0x3020353034303665ull,0x3837303030303078ull,0x3030306278302030ull,
0x3078302039306130ull,0x2030383730323030ull,0x303830783009090aull,0x7830203130383130ull,
0x3038373430323465ull,0x3036653063783020ull,0x3030783020353034ull,0x0a20303837303030ull,
0x3030306278300909ull,0x3078302031303030ull,0x2030383763313038ull,0x3231303038307830ull,
0x3234657830203130ull,0x090a203038373430ull,0x3036653063783009ull,0x3030783020313030ull,
0x3020303837303030ull,0x3061313030383078ull,0x3032346578302031ull,0x09090a2030383730ull,
0x6566663136387830ull,0x3030307830203330ull,0x7830203030303030ull,0x3130636537343134ull,
0x3030303030783020ull,0x3009090a20333030ull,0x3030303230303378ull,0x3031346378302031ull,
0x3278302030383730ull,0x2034303838303430ull,0x6565303035317830ull,0x783009090a203030ull,
0x3930303431303464ull,0x3030303032783020ull,0x3064783020303837ull,0x3020313032306530ull,
0x3837303063306178ull,0x31783009090a2030ull,0x2030303065303039ull,0x3238333030327830ull,
0x3034647830203430ull,0x7830203930383432ull,0x3038373030303032ull,0x3064783009090a20ull,
0x3020313032306530ull,0x3837303063306178ull,0x3030393178302030ull,0x3278302030303065ull,
0x2034303238333030ull,0x303464783009090aull,0x7830203930303533ull,0x3038373030303032ull,
0x3065303064783020ull,0x3061783020313032ull,0x0a20303837303063ull,0x3030393178300909ull,
0x3278302030303065ull,0x2034303638313030ull,0x3835343034647830ull,0x3030327830203930ull,
0x090a203038373030ull,0x3065303064783009ull,0x3061783020313032ull,0x3020303837303063ull,
0x3030653030393178ull,0x3130303278302030ull,0x09090a2034303638ull,0x3036353034647830ull,
0x3030327830203930ull,0x7830203038373030ull,0x3130323065303064ull,0x3030633061783020ull,
0x3009090a20303837ull,0x3030653030393178ull,0x3130303278302030ull,0x6478302034303638ull,
0x2039303836363034ull,0x3730303030327830ull,0x783009090a203038ull,0x3130323065303064ull,
0x3030633061783020ull,0x3032783020303837ull,0x3020343036383130ull,0x3030653030393178ull,
0x64783009090a2030ull,0x2035303037373034ull,0x3730303030327830ull,0x3030327830203038ull,
0x7830203930363030ull,0x3038373430303430ull,0x3064783009090a20ull,0x3020313032306530ull,
0x3837303063306178ull,0x3030343178302030ull,0x3078302031303063ull,0x2030383763333234ull,
0x303064783009090aull,0x7830203130343065ull,0x3138373030633061ull,0x000a7d0a7d090a20ull
};


}



extern "C" {


static const unsigned long long __deviceText_$compute_10$[] = {
0x6f69737265762e09ull,0x2e090a342e31206eull,0x7320746567726174ull,0x616d202c30315f6dull,
0x6f745f3436665f70ull,0x2f2f090a3233665full,0x656c69706d6f6320ull,0x2f20687469772064ull,
0x61636f6c2f727375ull,0x6f2f616475632f6cull,0x696c2f34366e6570ull,0x2f090a65622f2f62ull,
0x6e65706f766e202full,0x746c697562206363ull,0x39303032206e6f20ull,0x0a0a39302d34302dull,
0x752e206765722e09ull,0x313c617225203233ull,0x65722e090a3b3e37ull,0x25203436752e2067ull,
0x3b3e37313c616472ull,0x2e206765722e090aull,0x3c61662520323366ull,0x722e090a3b3e3731ull,
0x203436662e206765ull,0x3e37313c61646625ull,0x206765722e090a3bull,0x767225203233752eull,
0x722e090a3b3e353cull,0x203436752e206765ull,0x3b3e353c76647225ull,0x2e206765722e090aull,
0x3c76662520323366ull,0x65722e090a3b3e35ull,0x25203436662e2067ull,0x0a3b3e353c766466ull,
0x2d2d2d2f2f090a0aull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,
0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,
0x6d6f43202f2f090aull,0x2f20676e696c6970ull,0x78706d742f706d74ull,0x35303030305f7466ull,
0x303030305f303666ull,0x5f39312d30303030ull,0x632e387838746364ull,0x2f2820692e337070ull,
0x494263632f706d74ull,0x585955634c412e23ull,0x2d2d2d2f2f090a29ull,0x2d2d2d2d2d2d2d2dull,
0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,
0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2f2f090a0aull,0x2d2d2d2d2d2d2d2dull,
0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,
0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x74704f202f2f090aull,0x2f090a3a736e6f69ull,
0x2d2d2d2d2d2d2d2full,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,
0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2f2f090a2d2d2d2dull,
0x7465677261542020ull,0x5349202c7874703aull,0x2c30315f6d733a41ull,0x3a6e6169646e4520ull,
0x202c656c7474696cull,0x207265746e696f50ull,0x0a34363a657a6953ull,0x334f2d20202f2f09ull,
0x696d6974704f2809ull,0x6c206e6f6974617aull,0x2f090a296c657665ull,0x280930672d20202full,
0x656c206775626544ull,0x2f2f090a296c6576ull,0x522809326d2d2020ull,0x64612074726f7065ull,
0x736569726f736976ull,0x2d2d2d2f2f090a29ull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,
0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,
0x2d2d2d2d2d2d2d2dull,0x656c69662e090a0aull,0x6d6f633c22093109ull,0x6e696c2d646e616dull,
0x69662e090a223e65ull,0x742f22093209656cull,0x6678706d742f706dull,0x6635303030305f74ull,
0x30303030305f3036ull,0x645f38312d303030ull,0x75632e3878387463ull,0x70672e3265666164ull,
0x6c69662e090a2275ull,0x7463642209330965ull,0x6e72656b5f387838ull,0x74726f68735f6c65ull,
0x662e090a2275632eull,0x2f22093409656c69ull,0x2f62696c2f727375ull,0x5f3638782f636367ull,
0x78756e696c2d3436ull,0x332e342f756e672dull,0x756c636e692f332eull,0x65646474732f6564ull,
0x662e090a22682e66ull,0x2f22093509656c69ull,0x726f6e2f656d6f68ull,0x616475632f6c616dull,
0x2f2e2e2f6e69622full,0x2f6564756c636e69ull,0x697665642f747263ull,0x69746e75725f6563ull,
0x2e090a22682e656dull,0x22093609656c6966ull,0x6f6e2f656d6f682full,0x6475632f6c616d72ull,
0x2e2e2f6e69622f61ull,0x6564756c636e692full,0x65645f74736f682full,0x22682e73656e6966ull,
0x09656c69662e090aull,0x656d6f682f220937ull,0x2f6c616d726f6e2full,0x6e69622f61647563ull,
0x6c636e692f2e2e2full,0x6c6975622f656475ull,0x657079745f6e6974ull,0x662e090a22682e73ull,
0x2f22093809656c69ull,0x726f6e2f656d6f68ull,0x616475632f6c616dull,0x2f2e2e2f6e69622full,
0x2f6564756c636e69ull,0x745f656369766564ull,0x0a22682e73657079ull,0x3909656c69662e09ull,
0x2f656d6f682f2209ull,0x632f6c616d726f6eull,0x2f6e69622f616475ull,0x756c636e692f2e2eull,
0x65766972642f6564ull,0x2e73657079745f72ull,0x6c69662e090a2268ull,0x682f220930310965ull,
0x6d726f6e2f656d6full,0x2f616475632f6c61ull,0x692f2e2e2f6e6962ull,0x742f6564756c636eull,
0x745f657275747865ull,0x0a22682e73657079ull,0x3109656c69662e09ull,0x656d6f682f220931ull,
0x2f6c616d726f6e2full,0x6e69622f61647563ull,0x6c636e692f2e2e2full,0x746365762f656475ull,
0x73657079745f726full,0x69662e090a22682eull,0x2f2209323109656cull,0x726f6e2f656d6f68ull,
0x616475632f6c616dull,0x2f2e2e2f6e69622full,0x2f6564756c636e69ull,0x6c5f656369766564ull,
0x61705f68636e7561ull,0x73726574656d6172ull,0x69662e090a22682eull,0x2f2209333109656cull,
0x726f6e2f656d6f68ull,0x616475632f6c616dull,0x2f2e2e2f6e69622full,0x2f6564756c636e69ull,
0x726f74732f747263ull,0x73616c635f656761ull,0x662e090a22682e73ull,0x2209343109656c69ull,
0x636e692f7273752full,0x7469622f6564756cull,0x2e73657079742f73ull,0x6c69662e090a2268ull,
0x752f220935310965ull,0x756c636e692f7273ull,0x2e656d69742f6564ull,0x6c69662e090a2268ull,
0x6364220936310965ull,0x72656b5f38783874ull,0x2275632e326c656eull,0x09656c69662e090aull,
0x3874636422093731ull,0x656e72656b5f3878ull,0x090a2275632e316cull,0x383109656c69662eull,
0x3878387463642209ull,0x5f6c656e72656b5full,0x617a69746e617571ull,0x2275632e6e6f6974ull,
0x09656c69662e090aull,0x3874636422093931ull,0x090a2275632e3878ull,0x303209656c69662eull,
0x2f656d6f682f2209ull,0x632f6c616d726f6eull,0x2f6e69622f616475ull,0x756c636e692f2e2eull,
0x6f6d6d6f632f6564ull,0x6974636e75665f6eull,0x090a22682e736e6full,0x313209656c69662eull,
0x2f656d6f682f2209ull,0x632f6c616d726f6eull,0x2f6e69622f616475ull,0x756c636e692f2e2eull,
0x662f7472632f6564ull,0x7263616d5f636e75ull,0x662e090a22682e6full,0x2209323209656c69ull,
0x6f6e2f656d6f682full,0x6475632f6c616d72ull,0x2e2e2f6e69622f61ull,0x6564756c636e692full,
0x75665f6874616d2full,0x2e736e6f6974636eull,0x6c69662e090a2268ull,0x682f220933320965ull,
0x6d726f6e2f656d6full,0x2f616475632f6c61ull,0x692f2e2e2f6e6962ull,0x642f6564756c636eull,
0x75665f6563697665ull,0x2e736e6f6974636eull,0x6c69662e090a2268ull,0x682f220934320965ull,
0x6d726f6e2f656d6full,0x2f616475632f6c61ull,0x692f2e2e2f6e6962ull,0x6d2f6564756c636eull,
0x736e6f635f687461ull,0x22682e73746e6174ull,0x09656c69662e090aull,0x6d6f682f22093532ull,
0x6c616d726f6e2f65ull,0x69622f616475632full,0x636e692f2e2e2f6eull,0x5f6d732f6564756cull,
0x696d6f74615f3131ull,0x6974636e75665f63ull,0x090a22682e736e6full,0x363209656c69662eull,
0x2f656d6f682f2209ull,0x632f6c616d726f6eull,0x2f6e69622f616475ull,0x756c636e692f2e2eull,
0x32315f6d732f6564ull,0x5f63696d6f74615full,0x6e6f6974636e7566ull,0x662e090a22682e73ull,
0x2209373209656c69ull,0x6f6e2f656d6f682full,0x6475632f6c616d72ull,0x2e2e2f6e69622f61ull,
0x6564756c636e692full,0x645f33315f6d732full,0x75665f656c62756full,0x2e736e6f6974636eull,
0x6c69662e090a2268ull,0x682f220938320965ull,0x6d726f6e2f656d6full,0x2f616475632f6c61ull,
0x692f2e2e2f6e6962ull,0x632f6564756c636eull,0x79745f6e6f6d6d6full,0x090a22682e736570ull,
0x393209656c69662eull,0x2f656d6f682f2209ull,0x632f6c616d726f6eull,0x2f6e69622f616475ull,
0x756c636e692f2e2eull,0x75747865742f6564ull,0x68637465665f6572ull,0x6f6974636e75665full,
0x2e090a22682e736eull,0x09303309656c6966ull,0x6e2f656d6f682f22ull,0x75632f6c616d726full,
0x2e2f6e69622f6164ull,0x64756c636e692f2eull,0x665f6874616d2f65ull,0x736e6f6974636e75ull,
0x7874705f6c62645full,0x2e090a0a22682e31ull,0x3436752e20786574ull,0x3b63725378655420ull,
0x65726168732e090aull,0x6e67696c612e2064ull,0x432038622e203420ull,0x4c6b636f6c427275ull,
0x35325b316c61636full,0x68732e090a3b5d36ull,0x6c612e2064657261ull,0x622e2034206e6769ull,
0x6f6c427275432038ull,0x326c61636f4c6b63ull,0x090a3b5d3635325bull,0x2e2074736e6f632eull,
0x2034206e67696c61ull,0x765443442038622eull,0x5b78697274616d38ull,0x7b203d205d363532ull,
0x38312c342c333432ull,0x3039312c32362c31ull,0x2c3135322c30322cull,0x33312c34392c3236ull,
0x32362c3633322c31ull,0x2c3931322c39342cull,0x322c32362c323132ull,0x3138312c342c3334ull,
0x2c3831322c32362cull,0x362c3234312c3735ull,0x3933322c31322c32ull,0x312c32362c37362cull,
0x312c3739312c3439ull,0x34322c31362c3939ull,0x2c3138312c342c33ull,0x31322c39342c3236ull,
0x32362c3231322c39ull,0x2c3933322c31322cull,0x39312c32362c3736ull,0x39312c3739312c34ull,
0x34322c3938312c39ull,0x2c3138312c342c33ull,0x2c3039312c303931ull,0x312c3135322c3032ull,
0x33312c34392c3039ull,0x39312c3633322c31ull,0x37352c3831322c30ull,0x3039312c3234312cull,
0x312c342c3334322cull,0x31322c32362c3138ull,0x3234312c37352c38ull,0x322c31322c32362cull,
0x39312c37362c3933ull,0x30322c3039312c30ull,0x3039312c3135322cull,0x312c342c3334322cull,
0x312c3039312c3138ull,0x312c3739312c3439ull,0x34392c31362c3939ull,0x3633322c3133312cull,
0x322c39342c32362cull,0x362c3231322c3931ull,0x2c342c3334322c32ull,0x312c32362c313831ull,
0x312c3739312c3439ull,0x34392c31362c3939ull,0x3633322c3133312cull,0x3831322c3039312cull,
0x2c3234312c37352cull,0x2c3334322c303931ull,0x32362c3138312c34ull,0x2c3931322c39342cull,
0x322c32362c323132ull,0x37362c3933322c31ull,0x3039312c3039312cull,0x2c3135322c30322cull,
0x2c3334322c303931ull,0x32362c3138312c34ull,0x3739312c3439312cull,0x3938312c3939312cull,
0x2c3133312c34392cull,0x2c3039312c363332ull,0x312c37352c383132ull,0x34322c32362c3234ull,
0x2c3138312c342c33ull,0x31322c39342c3236ull,0x39312c3231322c39ull,0x3933322c31322c30ull,
0x2c3039312c37362cull,0x322c30322c303931ull,0x34322c32362c3135ull,0x2c3138312c342c33ull,
0x352c3831322c3236ull,0x39312c3234312c37ull,0x3933322c31322c30ull,0x2c3039312c37362cull,
0x322c30322c303931ull,0x34322c32362c3135ull,0x2c3138312c342c33ull,0x2c3439312c303931ull,
0x2c3939312c373931ull,0x312c34392c393831ull,0x362c3633322c3133ull,0x3931322c39342c32ull,
0x3039312c3231322cull,0x312c342c3334322cull,0x39342c32362c3138ull,0x3231322c3931322cull,
0x2c31322c3039312cull,0x362c37362c393332ull,0x39312c3439312c32ull,0x31362c3939312c37ull,
0x312c342c3334322cull,0x312c3039312c3138ull,0x35322c30322c3039ull,0x2c34392c32362c31ull,
0x2c3633322c313331ull,0x2c3831322c303931ull,0x362c3234312c3735ull,0x2c342c3334322c32ull,
0x312c32362c313831ull,0x35322c30322c3039ull,0x34392c3039312c31ull,0x3633322c3133312cull,
0x322c39342c32362cull,0x312c3231322c3931ull,0x342c3334322c3039ull,0x2c32362c3138312cull,
0x312c37352c383132ull,0x322c3039312c3234ull,0x37362c3933322c31ull,0x2c3439312c32362cull,
0x2c3939312c373931ull,0x2e090a3b7d393831ull,0x612e2074736e6f63ull,0x2e2032206e67696cull,
0x3832315b51203862ull,0x2c32337b203d205dull,0x352c302c33332c30ull,0x302c31382c302c31ull,
0x39332c302c36362cull,0x2c302c34332c302cull,0x2c33332c302c3731ull,0x342c302c36332c30ull,
0x302c37342c302c38ull,0x33322c302c38322cull,0x2c302c32312c302cull,0x2c31352c302c3231ull,
0x342c302c38342c30ull,0x302c38322c302c37ull,0x32312c302c33322cull,0x2c302c32312c302cull,
0x2c31382c302c3231ull,0x322c302c37342c30ull,0x302c33322c302c38ull,0x32312c302c32312cull,
0x2c302c32312c302cull,0x2c36362c302c3231ull,0x322c302c38322c30ull,0x302c32312c302c33ull,
0x32312c302c32312cull,0x2c302c32312c302cull,0x2c39332c302c3231ull,0x312c302c33322c30ull,
0x302c32312c302c32ull,0x32312c302c32312cull,0x2c302c32312c302cull,0x2c34332c302c3231ull,
0x312c302c32312c30ull,0x302c32312c302c32ull,0x32312c302c32312cull,0x2c302c32312c302cull,
0x2c37312c302c3231ull,0x312c302c32312c30ull,0x302c32312c302c32ull,0x32312c302c32312cull,
0x2c302c32312c302cull,0x090a3b7d302c3231ull,0x2e2074736e6f632eull,0x20615f4320323366ull,
0x316266336630203dull,0x202a2f2036386138ull,0x2034303738332e31ull,0x6f632e090a3b2f2aull,
0x3233662e2074736eull,0x30203d20625f4320ull,0x3764333761663366ull,0x332e31202a2f2035ull,
0x3b2f2a2036353630ull,0x74736e6f632e090aull,0x5f43203233662e20ull,0x66336630203d2063ull,
0x2f20373133383639ull,0x383537312e31202aull,0x2e090a3b2f2a2038ull,0x662e2074736e6f63ull,
0x3d20645f43203233ull,0x3239346633663020ull,0x30202a2f20653433ull,0x203539363538372eull,
0x6f632e090a3b2f2aull,0x3233662e2074736eull,0x30203d20655f4320ull,0x6462386130663366ull,
0x352e30202a2f2034ull,0x2f2a203639313134ull,0x736e6f632e090a3bull,0x43203233662e2074ull,
0x336630203d20665full,0x2066613234643865ull,0x3537322e30202a2full,0x0a3b2f2a20393938ull,
0x2074736e6f632e09ull,0x6e5f43203233662eull,0x6630203d206d726full,0x3366343035626533ull,
0x35332e30202a2f20ull,0x3b2f2a2033353533ull,0x72746e652e090a0aull,0x554334315a5f2079ull,
0x6c656e72656b4144ull,0x6969665054434431ull,0x702e09090a282069ull,0x36752e206d617261ull,
0x616475635f5f2034ull,0x315a5f5f6d726170ull,0x72656b4144554334ull,0x50544344316c656eull,
0x7473445f69696966ull,0x7261702e09090a2cull,0x203233732e206d61ull,0x6170616475635f5full,
0x4334315a5f5f6d72ull,0x656e72656b414455ull,0x696650544344316cull,0x6957676d495f6969ull,
0x2e09090a2c687464ull,0x732e206d61726170ull,0x6475635f5f203233ull,0x5a5f5f6d72617061ull,
0x656b414455433431ull,0x544344316c656e72ull,0x664f5f6969696650ull,0x6f6c425874657366ull,
0x2e09090a2c736b63ull,0x732e206d61726170ull,0x6475635f5f203233ull,0x5a5f5f6d72617061ull,
0x656b414455433431ull,0x544344316c656e72ull,0x664f5f6969696650ull,0x6f6c425974657366ull,
0x0a7b090a29736b63ull,0x752e206765722e09ull,0x39313c7225203233ull,0x6765722e090a3b3eull,
0x7225203436752e20ull,0x090a3b3e33323c64ull,0x33662e206765722eull,0x3e34363c66252032ull,
0x09636f6c2e090a3bull,0x0a30093538093731ull,0x5a5f5f3142424c24ull,0x656b414455433431ull,
0x544344316c656e72ull,0x090a3a6969696650ull,0x203436752e766f6dull,0x43202c3164722509ull,
0x4c6b636f6c427275ull,0x2f093b316c61636full,0x702e646c090a202full,0x3233752e6d617261ull,
0x5b202c3172250920ull,0x6170616475635f5full,0x4334315a5f5f6d72ull,0x656e72656b414455ull,
0x696650544344316cull,0x657366664f5f6969ull,0x736b636f6c425874ull,0x6469202f2f093b5dull,
0x75635f5f2033383aull,0x5f5f6d7261706164ull,0x6b4144554334315aull,0x4344316c656e7265ull,
0x4f5f696969665054ull,0x6c42587465736666ull,0x3078302b736b636full,0x33752e747663090aull,
0x2509203631752e32ull,0x61746325202c3272ull,0x2020203b782e6469ull,0x6461090a202f2f09ull,
0x2509203233752e64ull,0x2c317225202c3372ull,0x2020203b32722520ull,0x202f2f0920202020ull,
0x7261702e646c090aull,0x09203233752e6d61ull,0x5f5f5b202c347225ull,0x6d72617061647563ull,
0x44554334315a5f5full,0x316c656e72656b41ull,0x6969696650544344ull,0x5974657366664f5full,
0x3b5d736b636f6c42ull,0x383a6469202f2f09ull,0x616475635f5f2034ull,0x315a5f5f6d726170ull,
0x72656b4144554334ull,0x50544344316c656eull,0x66664f5f69696966ull,0x636f6c4259746573ull,
0x090a3078302b736bull,0x2e3233752e747663ull,0x3572250920363175ull,0x646961746325202cull,
0x2f092020203b792eull,0x2e646461090a202full,0x3672250920323375ull,0x25202c347225202cull,
0x20202020203b3572ull,0x090a202f2f092020ull,0x203233622e6c6873ull,0x7225202c37722509ull,
0x2020203b33202c33ull,0x2f09202020202020ull,0x2e6c6873090a202full,0x3872250920323362ull,
0x33202c367225202cull,0x202020202020203bull,0x090a202f2f092020ull,0x2e3233732e747663ull,
0x3972250920363175ull,0x782e64697425202cull,0x2f0920202020203bull,0x2e646461090a202full,
0x3172250920323373ull,0x202c377225202c30ull,0x202020203b397225ull,0x090a202f2f092020ull,
0x2e3233732e747663ull,0x3172250920363175ull,0x2e64697425202c31ull,0x2f09202020203b79ull,
0x2e646461090a202full,0x3172250920323373ull,0x202c387225202c32ull,0x2020203b31317225ull,
0x090a202f2f092020ull,0x662e6e722e747663ull,0x09203233732e3233ull,0x317225202c316625ull,
0x2f09202020203b30ull,0x2e766f6d090a202full,0x3266250920323366ull,0x303066336630202cull,
0x2020203b30303030ull,0x2e30202f2f092020ull,0x662e646461090a35ull,0x2c33662509203233ull,
0x6625202c31662520ull,0x2020202020203b32ull,0x63090a202f2f0920ull,0x33662e6e722e7476ull,
0x2509203233732e32ull,0x32317225202c3466ull,0x2f2f09202020203bull,0x662e766f6d090a20ull,
0x2c35662509203233ull,0x3030306633663020ull,0x202020203b303030ull,0x352e30202f2f0920ull,
0x33662e646461090aull,0x202c366625092032ull,0x356625202c346625ull,0x202020202020203bull,
0x6f6d090a202f2f09ull,0x2509203233662e76ull,0x30306630202c3766ull,0x203b303030303030ull,
0x202f2f0920202020ull,0x662e766f6d090a30ull,0x2c38662509203233ull,0x3030303030663020ull,
0x202020203b303030ull,0x090a30202f2f0920ull,0x762e64322e786574ull,0x33662e3233662e34ull,
0x252c3966257b2032ull,0x313166252c303166ull,0x5b2c7d323166252cull,0x7b2c637253786554ull,
0x2c3666252c336625ull,0x7d3866252c376625ull,0x636f6c2e090a3b5dull,0x0930303109373109ull,
0x662e766f6d090a30ull,0x3331662509203233ull,0x20203b396625202cull,0x2020202020202020ull,
0x73090a202f2f0920ull,0x09203233622e6c68ull,0x7225202c33317225ull,0x20203b33202c3131ull,
0x2f2f092020202020ull,0x732e646461090a20ull,0x3431722509203233ull,0x202c33317225202cull,
0x202020203b397225ull,0x63090a202f2f0920ull,0x732e3436732e7476ull,0x3264722509203233ull,
0x203b34317225202cull,0x2f2f092020202020ull,0x6c2e6c756d090a20ull,0x2509203436752e6full,
0x647225202c336472ull,0x2020203b34202c32ull,0x61090a202f2f0920ull,0x09203436752e6464ull,
0x7225202c34647225ull,0x31647225202c3364ull,0x2f2f09202020203bull,0x68732e7473090a20ull,
0x3233662e64657261ull,0x2b346472255b0920ull,0x33316625202c5d30ull,0x3a6469202f2f093bull,
0x6c42727543203738ull,0x6c61636f4c6b636full,0x2e090a3078302b31ull,0x3109373109636f6cull,
0x6162090a30093330ull,0x0920636e79732e72ull,0x2020202020203b30ull,0x2020202020202020ull,
0x202f2f0920202020ull,0x36752e766f6d090aull,0x2c35647225092034ull,0x636f6c4272754320ull,
0x3b326c61636f4c6bull,0x6f6d090a202f2f09ull,0x2509203436752e76ull,0x544344202c366472ull,
0x78697274616d3876ull,0x202f2f092020203bull,0x3109636f6c2e090aull,0x0a30093231310937ull,
0x3436732e74766309ull,0x722509203233732eull,0x3b397225202c3764ull,0x0920202020202020ull,
0x6c756d090a202f2full,0x203436752e6f6c2eull,0x25202c3864722509ull,0x203b34202c376472ull,
0x0a202f2f09202020ull,0x3436752e64646109ull,0x202c396472250920ull,0x7225202c38647225ull,
0x09202020203b3164ull,0x747663090a202f2full,0x3233732e3436732eull,0x2c30316472250920ull,
0x20203b3131722520ull,0x0a202f2f09202020ull,0x2e6f6c2e6c756d09ull,0x6472250920343675ull,
0x31647225202c3131ull,0x0920203b34202c30ull,0x646461090a202f2full,0x722509203436752eull,
0x647225202c323164ull,0x3131647225202c36ull,0x0a202f2f0920203bull,0x3233662e766f6d09ull,
0x202c343166250920ull,0x3030303030306630ull,0x09202020203b3030ull,0x646c090a30202f2full,
0x2e6465726168732eull,0x3166250920323366ull,0x396472255b202c35ull,0x202f2f093b5d302bull,
0x75432038383a6469ull,0x6f4c6b636f6c4272ull,0x3078302b316c6163ull,0x6e6f632e646c090aull,
0x09203233662e7473ull,0x255b202c36316625ull,0x3b5d302b32316472ull,0x383a6469202f2f09ull,
0x6d38765443442039ull,0x78302b7869727461ull,0x662e64616d090a30ull,0x3731662509203233ull,
0x202c35316625202cull,0x6625202c36316625ull,0x0a202f2f093b3431ull,0x726168732e646c09ull,
0x09203233662e6465ull,0x255b202c38316625ull,0x3b5d32332b396472ull,0x393a6469202f2f09ull,
0x6f6c427275432030ull,0x316c61636f4c6b63ull,0x646c090a3078302bull,0x662e74736e6f632eull,
0x3931662509203233ull,0x32316472255b202cull,0x2f2f093b5d32332bull,0x442031393a646920ull,
0x7274616d38765443ull,0x090a3078302b7869ull,0x203233662e64616dull,0x25202c3032662509ull,
0x316625202c383166ull,0x3b37316625202c39ull,0x646c090a202f2f09ull,0x2e6465726168732eull,
0x3266250920323366ull,0x396472255b202c31ull,0x2f2f093b5d34362bull,0x432032393a646920ull,
0x4c6b636f6c427275ull,0x78302b316c61636full,0x6f632e646c090a30ull,0x203233662e74736eull,
0x5b202c3232662509ull,0x34362b3231647225ull,0x6469202f2f093b5dull,0x765443442033393aull,
0x2b78697274616d38ull,0x64616d090a307830ull,0x662509203233662eull,0x31326625202c3332ull,
0x202c32326625202cull,0x2f2f093b30326625ull,0x68732e646c090a20ull,0x3233662e64657261ull,
0x202c343266250920ull,0x36392b396472255bull,0x6469202f2f093b5dull,0x427275432034393aull,
0x61636f4c6b636f6cull,0x090a3078302b316cull,0x74736e6f632e646cull,0x662509203233662eull,
0x6472255b202c3532ull,0x093b5d36392b3231ull,0x35393a6469202f2full,0x616d387654434420ull,
0x3078302b78697274ull,0x33662e64616d090aull,0x2c36326625092032ull,0x25202c3432662520ull,
0x326625202c353266ull,0x090a202f2f093b33ull,0x65726168732e646cull,0x2509203233662e64ull,
0x72255b202c373266ull,0x3b5d3832312b3964ull,0x393a6469202f2f09ull,0x6f6c427275432036ull,
0x316c61636f4c6b63ull,0x646c090a3078302bull,0x662e74736e6f632eull,0x3832662509203233ull,
0x32316472255b202cull,0x2f093b5d3832312bull,0x2037393a6469202full,0x74616d3876544344ull,
0x0a3078302b786972ull,0x3233662e64616d09ull,0x202c393266250920ull,0x6625202c37326625ull,
0x36326625202c3832ull,0x6c090a202f2f093bull,0x6465726168732e64ull,0x662509203233662eull,
0x6472255b202c3033ull,0x093b5d3036312b39ull,0x38393a6469202f2full,0x636f6c4272754320ull,
0x2b316c61636f4c6bull,0x2e646c090a307830ull,0x33662e74736e6f63ull,0x2c31336625092032ull,
0x2b32316472255b20ull,0x2f2f093b5d303631ull,0x442039393a646920ull,0x7274616d38765443ull,
0x090a3078302b7869ull,0x203233662e64616dull,0x25202c3233662509ull,0x336625202c303366ull,
0x3b39326625202c31ull,0x646c090a202f2f09ull,0x2e6465726168732eull,0x3366250920323366ull,
0x396472255b202c33ull,0x2f093b5d3239312bull,0x3030313a6469202full,0x636f6c4272754320ull,
0x2b316c61636f4c6bull,0x2e646c090a307830ull,0x33662e74736e6f63ull,0x2c34336625092032ull,
0x2b32316472255b20ull,0x2f2f093b5d323931ull,0x203130313a646920ull,0x74616d3876544344ull,
0x0a3078302b786972ull,0x3233662e64616d09ull,0x202c353366250920ull,0x6625202c33336625ull,
0x32336625202c3433ull,0x6c090a202f2f093bull,0x6465726168732e64ull,0x662509203233662eull,
0x6472255b202c3633ull,0x093b5d3432322b39ull,0x30313a6469202f2full,0x6f6c427275432032ull,
0x316c61636f4c6b63ull,0x646c090a3078302bull,0x662e74736e6f632eull,0x3733662509203233ull,
0x32316472255b202cull,0x2f093b5d3432322bull,0x3330313a6469202full,0x616d387654434420ull,
0x3078302b78697274ull,0x33662e64616d090aull,0x2c38336625092032ull,0x25202c3633662520ull,
0x336625202c373366ull,0x090a202f2f093b35ull,0x09373109636f6c2eull,0x61090a3009363131ull,
0x09203436752e6464ull,0x25202c3331647225ull,0x647225202c336472ull,0x2f2f092020203b35ull,
0x68732e7473090a20ull,0x3233662e64657261ull,0x33316472255b0920ull,0x336625202c5d302bull,
0x6469202f2f093b38ull,0x727543203430313aull,0x636f4c6b636f6c42ull,0x0a3078302b326c61ull,
0x373109636f6c2e09ull,0x090a300939313109ull,0x636e79732e726162ull,0x202020203b300920ull,
0x2020202020202020ull,0x2f09202020202020ull,0x636f6c2e090a202full,0x0938323109373109ull,
0x752e646461090a30ull,0x3164722509203436ull,0x2c38647225202c34ull,0x20203b3664722520ull,
0x63090a202f2f0920ull,0x732e3436732e7476ull,0x3164722509203233ull,0x3b33317225202c35ull,
0x2f2f092020202020ull,0x6c2e6c756d090a20ull,0x2509203436752e6full,0x7225202c36316472ull,
0x203b34202c353164ull,0x61090a202f2f0920ull,0x09203436752e6464ull,0x25202c3731647225ull,
0x647225202c356472ull,0x2f2f0920203b3631ull,0x662e766f6d090a20ull,0x3933662509203233ull,
0x303030306630202cull,0x2020203b30303030ull,0x090a30202f2f0920ull,0x65726168732e646cull,
0x2509203233662e64ull,0x72255b202c303466ull,0x093b5d302b373164ull,0x30313a6469202f2full,
0x6f6c427275432035ull,0x326c61636f4c6b63ull,0x646c090a3078302bull,0x662e74736e6f632eull,
0x3134662509203233ull,0x34316472255b202cull,0x202f2f093b5d302bull,0x44203630313a6469ull,
0x7274616d38765443ull,0x090a3078302b7869ull,0x203233662e64616dull,0x25202c3234662509ull,
0x346625202c303466ull,0x3b39336625202c31ull,0x646c090a202f2f09ull,0x2e6465726168732eull,
0x3466250920323366ull,0x316472255b202c33ull,0x2f2f093b5d342b37ull,0x203730313a646920ull,
0x6b636f6c42727543ull,0x302b326c61636f4cull,0x632e646c090a3078ull,0x3233662e74736e6full,
0x202c343466250920ull,0x332b34316472255bull,0x69202f2f093b5d32ull,0x4344203830313a64ull,
0x697274616d387654ull,0x6d090a3078302b78ull,0x09203233662e6461ull,0x6625202c35346625ull,
0x34346625202c3334ull,0x093b32346625202cull,0x2e646c090a202f2full,0x662e646572616873ull,
0x3634662509203233ull,0x37316472255b202cull,0x202f2f093b5d382bull,0x43203930313a6469ull,
0x4c6b636f6c427275ull,0x78302b326c61636full,0x6f632e646c090a30ull,0x203233662e74736eull,
0x5b202c3734662509ull,0x34362b3431647225ull,0x6469202f2f093b5dull,0x544344203031313aull,
0x78697274616d3876ull,0x616d090a3078302bull,0x2509203233662e64ull,0x346625202c383466ull,
0x2c37346625202c36ull,0x2f093b3534662520ull,0x732e646c090a202full,0x33662e6465726168ull,
0x2c39346625092032ull,0x2b37316472255b20ull,0x202f2f093b5d3231ull,0x43203131313a6469ull,
0x4c6b636f6c427275ull,0x78302b326c61636full,0x6f632e646c090a30ull,0x203233662e74736eull,
0x5b202c3035662509ull,0x36392b3431647225ull,0x6469202f2f093b5dull,0x544344203231313aull,
0x78697274616d3876ull,0x616d090a3078302bull,0x2509203233662e64ull,0x346625202c313566ull,
0x2c30356625202c39ull,0x2f093b3834662520ull,0x732e646c090a202full,0x33662e6465726168ull,
0x2c32356625092032ull,0x2b37316472255b20ull,0x202f2f093b5d3631ull,0x43203331313a6469ull,
0x4c6b636f6c427275ull,0x78302b326c61636full,0x6f632e646c090a30ull,0x203233662e74736eull,
0x5b202c3335662509ull,0x32312b3431647225ull,0x69202f2f093b5d38ull,0x4344203431313a64ull,
0x697274616d387654ull,0x6d090a3078302b78ull,0x09203233662e6461ull,0x6625202c34356625ull,
0x33356625202c3235ull,0x093b31356625202cull,0x2e646c090a202f2full,0x662e646572616873ull,
0x3535662509203233ull,0x37316472255b202cull,0x2f2f093b5d30322bull,0x203531313a646920ull,
0x6b636f6c42727543ull,0x302b326c61636f4cull,0x632e646c090a3078ull,0x3233662e74736e6full,
0x202c363566250920ull,0x312b34316472255bull,0x202f2f093b5d3036ull,0x44203631313a6469ull,
0x7274616d38765443ull,0x090a3078302b7869ull,0x203233662e64616dull,0x25202c3735662509ull,
0x356625202c353566ull,0x3b34356625202c36ull,0x646c090a202f2f09ull,0x2e6465726168732eull,
0x3566250920323366ull,0x316472255b202c38ull,0x2f093b5d34322b37ull,0x3731313a6469202full,
0x636f6c4272754320ull,0x2b326c61636f4c6bull,0x2e646c090a307830ull,0x33662e74736e6f63ull,
0x2c39356625092032ull,0x2b34316472255b20ull,0x2f2f093b5d323931ull,0x203831313a646920ull,
0x74616d3876544344ull,0x0a3078302b786972ull,0x3233662e64616d09ull,0x202c383366250920ull,
0x6625202c38356625ull,0x37356625202c3935ull,0x6c090a202f2f093bull,0x6465726168732e64ull,
0x662509203233662eull,0x6472255b202c3036ull,0x093b5d38322b3731ull,0x31313a6469202f2full,
0x6f6c427275432039ull,0x326c61636f4c6b63ull,0x646c090a3078302bull,0x662e74736e6f632eull,
0x3136662509203233ull,0x34316472255b202cull,0x2f093b5d3432322bull,0x3032313a6469202full,
0x616d387654434420ull,0x3078302b78697274ull,0x33662e64616d090aull,0x2c38336625092032ull,
0x25202c3036662520ull,0x336625202c313666ull,0x090a202f2f093b38ull,0x09373109636f6c2eull,
0x73090a3009323331ull,0x6465726168732e74ull,0x255b09203233662eull,0x202c5d302b346472ull,
0x2f2f093b38336625ull,0x203132313a646920ull,0x6b636f6c42727543ull,0x302b316c61636f4cull,
0x636f6c2e090a3078ull,0x0935333109373109ull,0x732e726162090a30ull,0x203b300920636e79ull,
0x2020202020202020ull,0x2020202020202020ull,0x2e090a202f2f0920ull,0x3109373109636f6cull,
0x646c090a30093833ull,0x2e6465726168732eull,0x3666250920323366ull,0x346472255b202c32ull,
0x202f2f093b5d302bull,0x43203232313a6469ull,0x4c6b636f6c427275ull,0x78302b316c61636full,
0x61702e646c090a30ull,0x203436752e6d6172ull,0x202c383164722509ull,0x70616475635f5f5bull,
0x34315a5f5f6d7261ull,0x6e72656b41445543ull,0x6650544344316c65ull,0x5d7473445f696969ull,
0x3a6469202f2f093bull,0x75635f5f20333231ull,0x5f5f6d7261706164ull,0x6b4144554334315aull,
0x4344316c656e7265ull,0x445f696969665054ull,0x090a3078302b7473ull,0x6d617261702e646cull,
0x722509203233732eull,0x635f5f5b202c3531ull,0x5f6d726170616475ull,0x4144554334315a5full,
0x44316c656e72656bull,0x5f69696966505443ull,0x6874646957676d49ull,0x6469202f2f093b5dull,
0x635f5f203432313aull,0x5f6d726170616475ull,0x4144554334315a5full,0x44316c656e72656bull,
0x5f69696966505443ull,0x6874646957676d49ull,0x756d090a3078302bull,0x732e6f6c2e34326cull,
0x3631722509203233ull,0x202c32317225202cull,0x2f2f093b35317225ull,0x732e646461090a20ull,
0x3731722509203233ull,0x202c30317225202cull,0x2020203b36317225ull,0x63090a202f2f0920ull,
0x732e3436732e7476ull,0x3164722509203233ull,0x3b37317225202c39ull,0x2f2f092020202020ull,
0x6c2e6c756d090a20ull,0x2509203436752e6full,0x7225202c30326472ull,0x203b34202c393164ull,
0x61090a202f2f0920ull,0x09203436752e6464ull,0x25202c3132647225ull,0x7225202c38316472ull,
0x2f2f09203b303264ull,0x6c672e7473090a20ull,0x3233662e6c61626full,0x31326472255b0920ull,
0x366625202c5d302bull,0x6469202f2f093b32ull,0x6c2e090a3532313aull,0x333109373109636full,
0x697865090a300939ull,0x2020202020203b74ull,0x2020202020202020ull,0x2020202020202020ull,
0x0a202f2f09202020ull,0x5f646e6557444c24ull,0x4144554334315a5full,0x44316c656e72656bull,
0x3a69696966505443ull,0x5f202f2f207d090aull,0x6b4144554334315aull,0x4344316c656e7265ull,
0x0a0a696969665054ull,0x207972746e652e09ull,0x4144554335315a5full,0x49316c656e72656bull,
0x6969696650544344ull,0x61702e09090a2820ull,0x3436752e206d6172ull,0x70616475635f5f20ull,
0x35315a5f5f6d7261ull,0x6e72656b41445543ull,0x5054434449316c65ull,0x7473445f69696966ull,
0x7261702e09090a2cull,0x203233732e206d61ull,0x6170616475635f5full,0x4335315a5f5f6d72ull,
0x656e72656b414455ull,0x665054434449316cull,0x57676d495f696969ull,0x09090a2c68746469ull,
0x2e206d617261702eull,0x75635f5f20323373ull,0x5f5f6d7261706164ull,0x6b4144554335315aull,
0x4449316c656e7265ull,0x5f69696966505443ull,0x425874657366664full,0x090a2c736b636f6cull,
0x206d617261702e09ull,0x635f5f203233732eull,0x5f6d726170616475ull,0x4144554335315a5full,
0x49316c656e72656bull,0x6969696650544344ull,0x5974657366664f5full,0x0a29736b636f6c42ull,
0x6765722e090a7b09ull,0x7225203233752e20ull,0x2e090a3b3e30323cull,0x3436752e20676572ull,
0x3e33323c64722520ull,0x206765722e090a3bull,0x3c6625203233662eull,0x6c2e090a3b3e3336ull,
0x353109373109636full,0x42424c240a300934ull,0x554335315a5f5f31ull,0x6c656e72656b4144ull,
0x6966505443444931ull,0x766f6d090a3a6969ull,0x722509203436752eull,0x42727543202c3164ull,
0x61636f4c6b636f6cull,0x0a202f2f093b316cull,0x617261702e646c09ull,0x2509203233752e6dull,
0x635f5f5b202c3172ull,0x5f6d726170616475ull,0x4144554335315a5full,0x49316c656e72656bull,
0x6969696650544344ull,0x5874657366664f5full,0x3b5d736b636f6c42ull,0x383a6469202f2f09ull,
0x616475635f5f2033ull,0x315a5f5f6d726170ull,0x72656b4144554335ull,0x54434449316c656eull,
0x664f5f6969696650ull,0x6f6c425874657366ull,0x0a3078302b736b63ull,0x3233752e74766309ull,
0x722509203631752eull,0x6961746325202c32ull,0x092020203b782e64ull,0x646461090a202f2full,
0x722509203233752eull,0x202c317225202c33ull,0x202020203b327225ull,0x0a202f2f09202020ull,
0x617261702e646c09ull,0x2509203233752e6dull,0x635f5f5b202c3472ull,0x5f6d726170616475ull,
0x4144554335315a5full,0x49316c656e72656bull,0x6969696650544344ull,0x5974657366664f5full,
0x3b5d736b636f6c42ull,0x383a6469202f2f09ull,0x616475635f5f2034ull,0x315a5f5f6d726170ull,
0x72656b4144554335ull,0x54434449316c656eull,0x664f5f6969696650ull,0x6f6c425974657366ull,
0x0a3078302b736b63ull,0x3233752e74766309ull,0x722509203631752eull,0x6961746325202c35ull,
0x092020203b792e64ull,0x646461090a202f2full,0x722509203233752eull,0x202c347225202c36ull,
0x202020203b357225ull,0x0a202f2f09202020ull,0x3233622e6c687309ull,0x25202c3772250920ull,
0x20203b33202c3372ull,0x0920202020202020ull,0x6c6873090a202f2full,0x722509203233622eull,
0x202c367225202c38ull,0x2020202020203b33ull,0x0a202f2f09202020ull,0x3233732e74766309ull,
0x722509203631752eull,0x2e64697425202c39ull,0x0920202020203b78ull,0x646461090a202f2full,
0x722509203233732eull,0x2c377225202c3031ull,0x2020203b39722520ull,0x0a202f2f09202020ull,
0x3233732e74766309ull,0x722509203631752eull,0x64697425202c3131ull,0x09202020203b792eull,
0x646461090a202f2full,0x722509203233732eull,0x2c387225202c3231ull,0x20203b3131722520ull,
0x0a202f2f09202020ull,0x2e6e722e74766309ull,0x203233732e323366ull,0x7225202c31662509ull,
0x09202020203b3031ull,0x766f6d090a202f2full,0x662509203233662eull,0x3066336630202c32ull,
0x20203b3030303030ull,0x30202f2f09202020ull,0x2e646461090a352eull,0x3366250920323366ull,
0x25202c316625202cull,0x20202020203b3266ull,0x090a202f2f092020ull,0x662e6e722e747663ull,
0x09203233732e3233ull,0x317225202c346625ull,0x2f09202020203b32ull,0x2e766f6d090a202full,
0x3566250920323366ull,0x303066336630202cull,0x2020203b30303030ull,0x2e30202f2f092020ull,
0x662e646461090a35ull,0x2c36662509203233ull,0x6625202c34662520ull,0x2020202020203b35ull,
0x6d090a202f2f0920ull,0x09203233662e766full,0x306630202c376625ull,0x3b30303030303030ull,
0x2f2f092020202020ull,0x2e766f6d090a3020ull,0x3866250920323366ull,0x303030306630202cull,
0x2020203b30303030ull,0x0a30202f2f092020ull,0x2e64322e78657409ull,0x662e3233662e3476ull,
0x2c3966257b203233ull,0x3166252c30316625ull,0x2c7d323166252c31ull,0x2c6372537865545bull,
0x3666252c3366257bull,0x3866252c3766252cull,0x6f6c2e090a3b5d7dull,0x3936310937310963ull,
0x2e766f6d090a3009ull,0x3166250920323366ull,0x203b396625202c33ull,0x2020202020202020ull,
0x090a202f2f092020ull,0x203233622e6c6873ull,0x25202c3331722509ull,0x203b33202c313172ull,
0x2f09202020202020ull,0x2e646461090a202full,0x3172250920323373ull,0x2c33317225202c34ull,
0x2020203b39722520ull,0x090a202f2f092020ull,0x2e3436732e747663ull,0x6472250920323373ull,
0x3b34317225202c32ull,0x2f09202020202020ull,0x2e6c756d090a202full,0x09203436752e6f6cull,
0x7225202c33647225ull,0x20203b34202c3264ull,0x090a202f2f092020ull,0x203436752e646461ull,
0x25202c3464722509ull,0x647225202c336472ull,0x2f09202020203b31ull,0x732e7473090a202full,
0x33662e6465726168ull,0x346472255b092032ull,0x316625202c5d302bull,0x6469202f2f093b33ull,
0x427275432037383aull,0x61636f4c6b636f6cull,0x090a3078302b316cull,0x09373109636f6c2eull,
0x62090a3009323731ull,0x20636e79732e7261ull,0x20202020203b3009ull,0x2020202020202020ull,
0x2f2f092020202020ull,0x752e766f6d090a20ull,0x3564722509203436ull,0x6f6c42727543202cull,
0x326c61636f4c6b63ull,0x6d090a202f2f093bull,0x09203436752e766full,0x4344202c36647225ull,
0x697274616d387654ull,0x2f2f092020203b78ull,0x09636f6c2e090a20ull,0x3009313831093731ull,
0x36732e747663090aull,0x2509203233732e34ull,0x317225202c376472ull,0x2020202020203b33ull,
0x756d090a202f2f09ull,0x3436752e6f6c2e6cull,0x202c386472250920ull,0x3b34202c37647225ull,
0x202f2f0920202020ull,0x36732e747663090aull,0x2509203233732e34ull,0x397225202c396472ull,
0x202020202020203bull,0x756d090a202f2f09ull,0x3436752e6f6c2e6cull,0x2c30316472250920ull,
0x34202c3964722520ull,0x202f2f092020203bull,0x36752e646461090aull,0x3131647225092034ull,
0x202c31647225202cull,0x20203b3031647225ull,0x6461090a202f2f09ull,0x2509203436752e64ull,
0x7225202c32316472ull,0x36647225202c3864ull,0x202f2f092020203bull,0x33662e766f6d090aull,
0x2c34316625092032ull,0x3030303030663020ull,0x202020203b303030ull,0x6c090a30202f2f09ull,
0x6465726168732e64ull,0x662509203233662eull,0x6472255b202c3531ull,0x2f093b5d302b3131ull,
0x2038383a6469202full,0x6b636f6c42727543ull,0x302b316c61636f4cull,0x632e646c090a3078ull,
0x3233662e74736e6full,0x202c363166250920ull,0x302b32316472255bull,0x6469202f2f093b5dull,
0x765443442039383aull,0x2b78697274616d38ull,0x64616d090a307830ull,0x662509203233662eull,
0x35316625202c3731ull,0x202c36316625202cull,0x2f2f093b34316625ull,0x68732e646c090a20ull,
0x3233662e64657261ull,0x202c383166250920ull,0x332b31316472255bull,0x69202f2f093b5d32ull,
0x7275432030393a64ull,0x636f4c6b636f6c42ull,0x0a3078302b316c61ull,0x736e6f632e646c09ull,
0x2509203233662e74ull,0x72255b202c393166ull,0x093b5d342b323164ull,0x31393a6469202f2full,
0x616d387654434420ull,0x3078302b78697274ull,0x33662e64616d090aull,0x2c30326625092032ull,
0x25202c3831662520ull,0x316625202c393166ull,0x090a202f2f093b37ull,0x65726168732e646cull,
0x2509203233662e64ull,0x72255b202c313266ull,0x3b5d34362b313164ull,0x393a6469202f2f09ull,
0x6f6c427275432032ull,0x316c61636f4c6b63ull,0x646c090a3078302bull,0x662e74736e6f632eull,
0x3232662509203233ull,0x32316472255b202cull,0x202f2f093b5d382bull,0x43442033393a6469ull,
0x697274616d387654ull,0x6d090a3078302b78ull,0x09203233662e6461ull,0x6625202c33326625ull,
0x32326625202c3132ull,0x093b30326625202cull,0x2e646c090a202f2full,0x662e646572616873ull,
0x3432662509203233ull,0x31316472255b202cull,0x2f2f093b5d36392bull,0x432034393a646920ull,
0x4c6b636f6c427275ull,0x78302b316c61636full,0x6f632e646c090a30ull,0x203233662e74736eull,
0x5b202c3532662509ull,0x32312b3231647225ull,0x6469202f2f093b5dull,0x765443442035393aull,
0x2b78697274616d38ull,0x64616d090a307830ull,0x662509203233662eull,0x34326625202c3632ull,
0x202c35326625202cull,0x2f2f093b33326625ull,0x68732e646c090a20ull,0x3233662e64657261ull,
0x202c373266250920ull,0x312b31316472255bull,0x202f2f093b5d3832ull,0x75432036393a6469ull,
0x6f4c6b636f6c4272ull,0x3078302b316c6163ull,0x6e6f632e646c090aull,0x09203233662e7473ull,
0x255b202c38326625ull,0x5d36312b32316472ull,0x3a6469202f2f093bull,0x3876544344203739ull,
0x302b78697274616dull,0x2e64616d090a3078ull,0x3266250920323366ull,0x2c37326625202c39ull,
0x25202c3832662520ull,0x202f2f093b363266ull,0x6168732e646c090aull,0x203233662e646572ull,
0x5b202c3033662509ull,0x36312b3131647225ull,0x69202f2f093b5d30ull,0x7275432038393a64ull,
0x636f4c6b636f6c42ull,0x0a3078302b316c61ull,0x736e6f632e646c09ull,0x2509203233662e74ull,
0x72255b202c313366ull,0x3b5d30322b323164ull,0x393a6469202f2f09ull,0x6d38765443442039ull,
0x78302b7869727461ull,0x662e64616d090a30ull,0x3233662509203233ull,0x202c30336625202cull,
0x6625202c31336625ull,0x0a202f2f093b3932ull,0x726168732e646c09ull,0x09203233662e6465ull,
0x255b202c33336625ull,0x3239312b31316472ull,0x6469202f2f093b5dull,0x727543203030313aull,
0x636f4c6b636f6c42ull,0x0a3078302b316c61ull,0x736e6f632e646c09ull,0x2509203233662e74ull,
0x72255b202c343366ull,0x3b5d34322b323164ull,0x313a6469202f2f09ull,0x3876544344203130ull,
0x302b78697274616dull,0x2e64616d090a3078ull,0x3366250920323366ull,0x2c33336625202c35ull,
0x25202c3433662520ull,0x202f2f093b323366ull,0x6168732e646c090aull,0x203233662e646572ull,
0x5b202c3633662509ull,0x32322b3131647225ull,0x69202f2f093b5d34ull,0x7543203230313a64ull,
0x6f4c6b636f6c4272ull,0x3078302b316c6163ull,0x6e6f632e646c090aull,0x09203233662e7473ull,
0x255b202c37336625ull,0x5d38322b32316472ull,0x3a6469202f2f093bull,0x7654434420333031ull,
0x2b78697274616d38ull,0x64616d090a307830ull,0x662509203233662eull,0x36336625202c3533ull,
0x202c37336625202cull,0x2f2f093b35336625ull,0x09636f6c2e090a20ull,0x3009353831093731ull,
0x36752e646461090aull,0x3331647225092034ull,0x202c33647225202cull,0x2020203b35647225ull,
0x7473090a202f2f09ull,0x2e6465726168732eull,0x72255b0920323366ull,0x202c5d302b333164ull,
0x2f2f093b35336625ull,0x203430313a646920ull,0x6b636f6c42727543ull,0x302b326c61636f4cull,
0x636f6c2e090a3078ull,0x0938383109373109ull,0x732e726162090a30ull,0x203b300920636e79ull,
0x2020202020202020ull,0x2020202020202020ull,0x2e090a202f2f0920ull,0x3109373109636f6cull,
0x6461090a30093739ull,0x2509203436752e64ull,0x7225202c34316472ull,0x35647225202c3864ull,
0x202f2f092020203bull,0x33622e6c6873090aull,0x2c35317225092032ull,0x3b33202c39722520ull,
0x2020202020202020ull,0x7663090a202f2f09ull,0x33732e3436732e74ull,0x3531647225092032ull,
0x203b35317225202cull,0x202f2f0920202020ull,0x6f6c2e6c756d090aull,0x722509203436752eull,
0x647225202c363164ull,0x20203b34202c3531ull,0x6461090a202f2f09ull,0x2509203436752e64ull,
0x7225202c37316472ull,0x31647225202c3664ull,0x202f2f0920203b36ull,0x33662e766f6d090aull,
0x2c38336625092032ull,0x3030303030663020ull,0x202020203b303030ull,0x6c090a30202f2f09ull,
0x6465726168732e64ull,0x662509203233662eull,0x6472255b202c3933ull,0x2f093b5d302b3431ull,
0x3530313a6469202full,0x636f6c4272754320ull,0x2b326c61636f4c6bull,0x2e646c090a307830ull,
0x33662e74736e6f63ull,0x2c30346625092032ull,0x2b37316472255b20ull,0x69202f2f093b5d30ull,
0x4344203630313a64ull,0x697274616d387654ull,0x6d090a3078302b78ull,0x09203233662e6461ull,
0x6625202c31346625ull,0x30346625202c3933ull,0x093b38336625202cull,0x2e646c090a202f2full,
0x662e646572616873ull,0x3234662509203233ull,0x34316472255b202cull,0x202f2f093b5d342bull,
0x43203730313a6469ull,0x4c6b636f6c427275ull,0x78302b326c61636full,0x6f632e646c090a30ull,
0x203233662e74736eull,0x5b202c3334662509ull,0x5d342b3731647225ull,0x3a6469202f2f093bull,
0x7654434420383031ull,0x2b78697274616d38ull,0x64616d090a307830ull,0x662509203233662eull,
0x32346625202c3434ull,0x202c33346625202cull,0x2f2f093b31346625ull,0x68732e646c090a20ull,
0x3233662e64657261ull,0x202c353466250920ull,0x382b34316472255bull,0x6469202f2f093b5dull,
0x727543203930313aull,0x636f4c6b636f6c42ull,0x0a3078302b326c61ull,0x736e6f632e646c09ull,
0x2509203233662e74ull,0x72255b202c363466ull,0x093b5d382b373164ull,0x31313a6469202f2full,
0x6d38765443442030ull,0x78302b7869727461ull,0x662e64616d090a30ull,0x3734662509203233ull,
0x202c35346625202cull,0x6625202c36346625ull,0x0a202f2f093b3434ull,0x726168732e646c09ull,
0x09203233662e6465ull,0x255b202c38346625ull,0x5d32312b34316472ull,0x3a6469202f2f093bull,
0x4272754320313131ull,0x61636f4c6b636f6cull,0x090a3078302b326cull,0x74736e6f632e646cull,
0x662509203233662eull,0x6472255b202c3934ull,0x093b5d32312b3731ull,0x31313a6469202f2full,
0x6d38765443442032ull,0x78302b7869727461ull,0x662e64616d090a30ull,0x3035662509203233ull,
0x202c38346625202cull,0x6625202c39346625ull,0x0a202f2f093b3734ull,0x726168732e646c09ull,
0x09203233662e6465ull,0x255b202c31356625ull,0x5d36312b34316472ull,0x3a6469202f2f093bull,
0x4272754320333131ull,0x61636f4c6b636f6cull,0x090a3078302b326cull,0x74736e6f632e646cull,
0x662509203233662eull,0x6472255b202c3235ull,0x093b5d36312b3731ull,0x31313a6469202f2full,
0x6d38765443442034ull,0x78302b7869727461ull,0x662e64616d090a30ull,0x3335662509203233ull,
0x202c31356625202cull,0x6625202c32356625ull,0x0a202f2f093b3035ull,0x726168732e646c09ull,
0x09203233662e6465ull,0x255b202c34356625ull,0x5d30322b34316472ull,0x3a6469202f2f093bull,
0x4272754320353131ull,0x61636f4c6b636f6cull,0x090a3078302b326cull,0x74736e6f632e646cull,
0x662509203233662eull,0x6472255b202c3535ull,0x093b5d30322b3731ull,0x31313a6469202f2full,
0x6d38765443442036ull,0x78302b7869727461ull,0x662e64616d090a30ull,0x3635662509203233ull,
0x202c34356625202cull,0x6625202c35356625ull,0x0a202f2f093b3335ull,0x726168732e646c09ull,
0x09203233662e6465ull,0x255b202c37356625ull,0x5d34322b34316472ull,0x3a6469202f2f093bull,
0x4272754320373131ull,0x61636f4c6b636f6cull,0x090a3078302b326cull,0x74736e6f632e646cull,
0x662509203233662eull,0x6472255b202c3835ull,0x093b5d34322b3731ull,0x31313a6469202f2full,
0x6d38765443442038ull,0x78302b7869727461ull,0x662e64616d090a30ull,0x3533662509203233ull,
0x202c37356625202cull,0x6625202c38356625ull,0x0a202f2f093b3635ull,0x726168732e646c09ull,
0x09203233662e6465ull,0x255b202c39356625ull,0x5d38322b34316472ull,0x3a6469202f2f093bull,
0x4272754320393131ull,0x61636f4c6b636f6cull,0x090a3078302b326cull,0x74736e6f632e646cull,
0x662509203233662eull,0x6472255b202c3036ull,0x093b5d38322b3731ull,0x32313a6469202f2full,
0x6d38765443442030ull,0x78302b7869727461ull,0x662e64616d090a30ull,0x3533662509203233ull,
0x202c39356625202cull,0x6625202c30366625ull,0x0a202f2f093b3533ull,0x373109636f6c2e09ull,
0x090a300931303209ull,0x65726168732e7473ull,0x5b09203233662e64ull,0x2c5d302b34647225ull,
0x2f093b3533662520ull,0x3132313a6469202full,0x636f6c4272754320ull,0x2b316c61636f4c6bull,
0x6f6c2e090a307830ull,0x3430320937310963ull,0x2e726162090a3009ull,0x3b300920636e7973ull,
0x2020202020202020ull,0x2020202020202020ull,0x090a202f2f092020ull,0x09373109636f6c2eull,
0x6c090a3009373032ull,0x6465726168732e64ull,0x662509203233662eull,0x6472255b202c3136ull,
0x2f2f093b5d302b34ull,0x203232313a646920ull,0x6b636f6c42727543ull,0x302b316c61636f4cull,
0x702e646c090a3078ull,0x3436752e6d617261ull,0x2c38316472250920ull,0x616475635f5f5b20ull,
0x315a5f5f6d726170ull,0x72656b4144554335ull,0x54434449316c656eull,0x73445f6969696650ull,
0x69202f2f093b5d74ull,0x5f5f203332313a64ull,0x6d72617061647563ull,0x44554335315a5f5full,
0x316c656e72656b41ull,0x6969665054434449ull,0x78302b7473445f69ull,0x61702e646c090a30ull,
0x203233732e6d6172ull,0x5b202c3631722509ull,0x6170616475635f5full,0x4335315a5f5f6d72ull,
0x656e72656b414455ull,0x665054434449316cull,0x57676d495f696969ull,0x2f093b5d68746469ull,
0x3432313a6469202full,0x70616475635f5f20ull,0x35315a5f5f6d7261ull,0x6e72656b41445543ull,
0x5054434449316c65ull,0x676d495f69696966ull,0x78302b6874646957ull,0x34326c756d090a30ull,
0x203233732e6f6c2eull,0x25202c3731722509ull,0x317225202c323172ull,0x090a202f2f093b36ull,
0x203233732e646461ull,0x25202c3831722509ull,0x317225202c303172ull,0x2f09202020203b37ull,
0x2e747663090a202full,0x203233732e343673ull,0x202c393164722509ull,0x2020203b38317225ull,
0x090a202f2f092020ull,0x752e6f6c2e6c756dull,0x3264722509203436ull,0x3931647225202c30ull,
0x2f0920203b34202cull,0x2e646461090a202full,0x6472250920343675ull,0x31647225202c3132ull,
0x3032647225202c38ull,0x090a202f2f09203bull,0x61626f6c672e7473ull,0x5b09203233662e6cull,
0x5d302b3132647225ull,0x093b31366625202cull,0x32313a6469202f2full,0x09636f6c2e090a35ull,
0x3009383032093731ull,0x203b74697865090aull,0x2020202020202020ull,0x2020202020202020ull,
0x2020202020202020ull,0x444c240a202f2f09ull,0x315a5f5f646e6557ull,0x72656b4144554335ull,
0x54434449316c656eull,0x090a3a6969696650ull,0x315a5f202f2f207dull,0x72656b4144554335ull,
0x54434449316c656eull,0x090a0a6969696650ull,0x5f207972746e652eull,0x6b4144554334315aull,
0x4344326c656e7265ull,0x090a282069665054ull,0x206d617261702e09ull,0x635f5f203436752eull,
0x5f6d726170616475ull,0x4144554334315a5full,0x44326c656e72656bull,0x5f5f5f6966505443ull,
0x617261705f6c6176ull,0x2c7473446372536dull,0x617261702e09090aull,0x5f203233732e206dull,
0x726170616475635full,0x554334315a5f5f6dull,0x6c656e72656b4144ull,0x5f69665054434432ull,
0x6469727453676d49ull,0x2e090a7b090a2965ull,0x3233752e20676572ull,0x3b3e35323c722520ull,
0x2e206765722e090aull,0x3c64722520343675ull,0x722e090a3b3e3932ull,0x203233662e206765ull,
0x3b3e3332313c6625ull,0x65726168732e090aull,0x6e67696c612e2064ull,0x5f2038622e203420ull,
0x6c625f616475635full,0x325b3237356b636full,0x2e090a3b5d323131ull,0x3209363109636f6cull,
0x424c240a30093430ull,0x4334315a5f5f3142ull,0x656e72656b414455ull,0x696650544344326cull,
0x752e766f6d090a3aull,0x3164722509203436ull,0x616475635f5f202cull,0x37356b636f6c625full,
0x090a202f2f093b32ull,0x09363109636f6c2eull,0x63090a3009383332ull,0x752e3233732e7476ull,
0x2c31722509203631ull,0x2e64696174632520ull,0x2f2f092020203b79ull,0x622e6c6873090a20ull,
0x2c32722509203233ull,0x3b34202c31722520ull,0x2020202020202020ull,0x63090a202f2f0920ull,
0x752e3233732e7476ull,0x2c33722509203631ull,0x3b7a2e6469742520ull,0x2f2f092020202020ull,
0x622e6c6873090a20ull,0x2c34722509203233ull,0x3b33202c33722520ull,0x2020202020202020ull,
0x63090a202f2f0920ull,0x752e3233732e7476ull,0x2c35722509203631ull,0x2e64696174632520ull,
0x2f2f092020203b78ull,0x622e6c6873090a20ull,0x2c36722509203233ull,0x3b35202c35722520ull,
0x2020202020202020ull,0x63090a202f2f0920ull,0x752e3233732e7476ull,0x2c37722509203631ull,
0x3b792e6469742520ull,0x2f2f092020202020ull,0x622e6c6873090a20ull,0x2c38722509203233ull,
0x3b33202c37722520ull,0x2020202020202020ull,0x61090a202f2f0920ull,0x09203233732e6464ull,
0x327225202c397225ull,0x20203b347225202cull,0x2f2f092020202020ull,0x732e766f6d090a20ull,
0x3031722509203233ull,0x2020203b3333202cull,0x2020202020202020ull,0x6d090a202f2f0920ull,
0x2e6f6c2e34326c75ull,0x3172250920323373ull,0x202c347225202c31ull,0x2f2f093b30317225ull,
0x752e747663090a20ull,0x09203631752e3233ull,0x7425202c32317225ull,0x2020203b782e6469ull,
0x61090a202f2f0920ull,0x09203233752e6464ull,0x7225202c33317225ull,0x3b32317225202c38ull,
0x2f2f092020202020ull,0x61702e646c090a20ull,0x203233732e6d6172ull,0x5b202c3431722509ull,
0x6170616475635f5full,0x4334315a5f5f6d72ull,0x656e72656b414455ull,0x696650544344326cull,
0x69727453676d495full,0x202f2f093b5d6564ull,0x5f203039343a6469ull,0x726170616475635full,
0x554334315a5f5f6dull,0x6c656e72656b4144ull,0x5f69665054434432ull,0x6469727453676d49ull,
0x6d090a3078302b65ull,0x2e6f6c2e34326c75ull,0x3172250920323373ull,0x202c397225202c35ull,
0x2f2f093b34317225ull,0x732e646461090a20ull,0x3631722509203233ull,0x202c31317225202cull,
0x2020203b33317225ull,0x63090a202f2f0920ull,0x732e3436752e7476ull,0x3264722509203233ull,
0x203b36317225202cull,0x2f2f092020202020ull,0x6c2e6c756d090a20ull,0x2509203436752e6full,
0x647225202c336472ull,0x2020203b34202c32ull,0x61090a202f2f0920ull,0x09203436752e6464ull,
0x7225202c34647225ull,0x33647225202c3164ull,0x2f2f09202020203bull,0x61702e646c090a20ull,
0x203436752e6d6172ull,0x5b202c3564722509ull,0x6170616475635f5full,0x4334315a5f5f6d72ull,
0x656e72656b414455ull,0x696650544344326cull,0x705f6c61765f5f5full,0x446372536d617261ull,
0x202f2f093b5d7473ull,0x5f203639343a6469ull,0x726170616475635full,0x554334315a5f5f6dull,
0x6c656e72656b4144ull,0x5f69665054434432ull,0x61705f6c61765f5full,0x73446372536d6172ull,
0x61090a3078302b74ull,0x09203233732e6464ull,0x7225202c37317225ull,0x3b35317225202c36ull,
0x2f2f092020202020ull,0x732e646461090a20ull,0x3831722509203233ull,0x202c33317225202cull,
0x2020203b37317225ull,0x63090a202f2f0920ull,0x732e3436752e7476ull,0x3664722509203233ull,
0x203b38317225202cull,0x2f2f092020202020ull,0x6c2e6c756d090a20ull,0x2509203436752e6full,
0x647225202c376472ull,0x2020203b34202c36ull,0x61090a202f2f0920ull,0x09203436752e6464ull,
0x7225202c38647225ull,0x37647225202c3564ull,0x2f2f09202020203bull,0x6c672e646c090a20ull,
0x3233662e6c61626full,0x5b202c3166250920ull,0x3b5d302b38647225ull,0x3a6469202f2f0920ull,
0x2e7473090a373934ull,0x662e646572616873ull,0x6472255b09203233ull,0x6625202c5d302b34ull,
0x69202f2f09203b31ull,0x5f5f203839343a64ull,0x6f6c625f61647563ull,0x78302b3237356b63ull,
0x09636f6c2e090a30ull,0x3009323432093631ull,0x36752e747663090aull,0x2509203233732e34ull,
0x317225202c396472ull,0x2020202020203b34ull,0x756d090a202f2f09ull,0x3436752e6f6c2e6cull,
0x2c30316472250920ull,0x34202c3964722520ull,0x202f2f092020203bull,0x36752e646461090aull,
0x3131647225092034ull,0x2c3031647225202cull,0x20203b3864722520ull,0x646c090a202f2f09ull,
0x2e6c61626f6c672eull,0x3266250920323366ull,0x31316472255b202cull,0x202f2f093b5d302bull,
0x090a3939343a6469ull,0x65726168732e7473ull,0x5b09203233662e64ull,0x3233312b34647225ull,
0x093b326625202c5dull,0x30353a6469202f2full,0x616475635f5f2030ull,0x37356b636f6c625full,
0x2e090a3078302b32ull,0x3209363109636f6cull,0x6461090a30093634ull,0x2509203436752e64ull,
0x7225202c32316472ull,0x647225202c303164ull,0x202f2f09203b3131ull,0x6f6c672e646c090aull,
0x203233662e6c6162ull,0x255b202c33662509ull,0x3b5d302b32316472ull,0x353a6469202f2f09ull,
0x732e7473090a3130ull,0x33662e6465726168ull,0x346472255b092032ull,0x25202c5d3436322bull,
0x69202f2f093b3366ull,0x5f5f203230353a64ull,0x6f6c625f61647563ull,0x78302b3237356b63ull,
0x09636f6c2e090a30ull,0x3009373432093631ull,0x36752e646461090aull,0x3331647225092034ull,
0x2c3031647225202cull,0x203b323164722520ull,0x6c2e090a202f2f09ull,0x353209363109636full,
0x2e646c090a300930ull,0x662e6c61626f6c67ull,0x2c34662509203233ull,0x2b33316472255b20ull,
0x69202f2f093b5d30ull,0x73090a3330353a64ull,0x6465726168732e74ull,0x255b09203233662eull,
0x5d3639332b346472ull,0x2f093b346625202cull,0x3430353a6469202full,0x5f616475635f5f20ull,
0x3237356b636f6c62ull,0x6c2e090a3078302bull,0x353209363109636full,0x646461090a300931ull,
0x722509203436752eull,0x647225202c333164ull,0x31647225202c3031ull,0x0a202f2f09203b33ull,
0x363109636f6c2e09ull,0x090a300934353209ull,0x61626f6c672e646cull,0x2509203233662e6cull,
0x6472255b202c3566ull,0x2f093b5d302b3331ull,0x3530353a6469202full,0x6168732e7473090aull,
0x203233662e646572ull,0x352b346472255b09ull,0x356625202c5d3832ull,0x3a6469202f2f093bull,
0x75635f5f20363035ull,0x6b636f6c625f6164ull,0x0a3078302b323735ull,0x363109636f6c2e09ull,
0x090a300935353209ull,0x203436752e646461ull,0x202c333164722509ull,0x25202c3031647225ull,
0x2f09203b33316472ull,0x636f6c2e090a202full,0x0938353209363109ull,0x6c672e646c090a30ull,
0x3233662e6c61626full,0x5b202c3666250920ull,0x5d302b3331647225ull,0x3a6469202f2f093bull,
0x2e7473090a373035ull,0x662e646572616873ull,0x6472255b09203233ull,0x202c5d3036362b34ull,
0x202f2f093b366625ull,0x5f203830353a6469ull,0x6c625f616475635full,0x302b3237356b636full,
0x636f6c2e090a3078ull,0x0939353209363109ull,0x752e646461090a30ull,0x3164722509203436ull,
0x3031647225202c33ull,0x3b3331647225202cull,0x2e090a202f2f0920ull,0x3209363109636f6cull,
0x646c090a30093236ull,0x2e6c61626f6c672eull,0x3766250920323366ull,0x33316472255b202cull,
0x202f2f093b5d302bull,0x090a3930353a6469ull,0x65726168732e7473ull,0x5b09203233662e64ull,
0x3239372b34647225ull,0x093b376625202c5dull,0x31353a6469202f2full,0x616475635f5f2030ull,
0x37356b636f6c625full,0x2e090a3078302b32ull,0x3209363109636f6cull,0x6461090a30093336ull,
0x2509203436752e64ull,0x7225202c33316472ull,0x647225202c303164ull,0x202f2f09203b3331ull,
0x3109636f6c2e090aull,0x0a30093636320936ull,0x626f6c672e646c09ull,0x09203233662e6c61ull,
0x72255b202c386625ull,0x093b5d302b333164ull,0x31353a6469202f2full,0x68732e7473090a31ull,
0x3233662e64657261ull,0x2b346472255b0920ull,0x6625202c5d343239ull,0x6469202f2f093b38ull,
0x635f5f203231353aull,0x636f6c625f616475ull,0x3078302b3237356bull,0x3109636f6c2e090aull,
0x0a30093836320936ull,0x6e79732e72616209ull,0x2020203b30092063ull,0x2020202020202020ull,
0x0920202020202020ull,0x6f6c2e090a202f2full,0x3731310936310963ull,0x2e747663090a3009ull,
0x203233732e343675ull,0x202c343164722509ull,0x2020203b33317225ull,0x090a202f2f092020ull,
0x732e6f6c2e6c756dull,0x3931722509203233ull,0x33202c347225202cull,0x2f09202020203b33ull,
0x2e747663090a202full,0x203233732e343673ull,0x202c353164722509ull,0x2020203b39317225ull,
0x090a202f2f092020ull,0x203436752e646461ull,0x202c363164722509ull,0x25202c3531647225ull,
0x2f09203b34316472ull,0x2e6c756d090a202full,0x09203436752e6f6cull,0x25202c3731647225ull,
0x3b34202c36316472ull,0x090a202f2f092020ull,0x203436752e646461ull,0x202c383164722509ull,
0x7225202c31647225ull,0x2f0920203b373164ull,0x732e646c090a202full,0x33662e6465726168ull,
0x202c396625092032ull,0x302b38316472255bull,0x6469202f2f093b5dull,0x635f5f203331353aull,
0x636f6c625f616475ull,0x3078302b3237356bull,0x6168732e646c090aull,0x203233662e646572ull,
0x5b202c3031662509ull,0x32392b3831647225ull,0x69202f2f093b5d34ull,0x5f5f203431353a64ull,
0x6f6c625f61647563ull,0x78302b3237356b63ull,0x662e646461090a30ull,0x3131662509203233ull,
0x25202c396625202cull,0x202020203b303166ull,0x2e090a202f2f0920ull,0x3109363109636f6cull,
0x646c090a30093831ull,0x2e6465726168732eull,0x3166250920323366ull,0x316472255b202c32ull,
0x093b5d3233312b38ull,0x31353a6469202f2full,0x616475635f5f2035ull,0x37356b636f6c625full,
0x6c090a3078302b32ull,0x6465726168732e64ull,0x662509203233662eull,0x6472255b202c3331ull,
0x3b5d3239372b3831ull,0x353a6469202f2f09ull,0x6475635f5f203631ull,0x356b636f6c625f61ull,
0x090a3078302b3237ull,0x203233662e646461ull,0x25202c3431662509ull,0x316625202c323166ull,
0x2f09202020203b33ull,0x636f6c2e090a202full,0x0939313109363109ull,0x68732e646c090a30ull,
0x3233662e64657261ull,0x202c353166250920ull,0x322b38316472255bull,0x202f2f093b5d3436ull,
0x5f203731353a6469ull,0x6c625f616475635full,0x302b3237356b636full,0x732e646c090a3078ull,
0x33662e6465726168ull,0x2c36316625092032ull,0x2b38316472255b20ull,0x2f2f093b5d303636ull,
0x203831353a646920ull,0x625f616475635f5full,0x2b3237356b636f6cull,0x646461090a307830ull,
0x662509203233662eull,0x35316625202c3731ull,0x203b36316625202cull,0x0a202f2f09202020ull,
0x363109636f6c2e09ull,0x090a300930323109ull,0x65726168732e646cull,0x2509203233662e64ull,
0x72255b202c383166ull,0x5d3639332b383164ull,0x3a6469202f2f093bull,0x75635f5f20393135ull,
0x6b636f6c625f6164ull,0x0a3078302b323735ull,0x726168732e646c09ull,0x09203233662e6465ull,
0x255b202c39316625ull,0x3832352b38316472ull,0x6469202f2f093b5dull,0x635f5f203032353aull,
0x636f6c625f616475ull,0x3078302b3237356bull,0x33662e646461090aull,0x2c30326625092032ull,
0x25202c3831662520ull,0x202020203b393166ull,0x6c2e090a202f2f09ull,0x323109363109636full,
0x627573090a300932ull,0x662509203233662eull,0x2c396625202c3132ull,0x20203b3031662520ull,
0x0a202f2f09202020ull,0x363109636f6c2e09ull,0x090a300933323109ull,0x203233662e627573ull,
0x25202c3232662509ull,0x316625202c333166ull,0x2f09202020203b32ull,0x636f6c2e090a202full,
0x0934323109363109ull,0x662e627573090a30ull,0x3332662509203233ull,0x202c35316625202cull,
0x2020203b36316625ull,0x2e090a202f2f0920ull,0x3109363109636f6cull,0x7573090a30093532ull,
0x2509203233662e62ull,0x316625202c343266ull,0x3b38316625202c39ull,0x202f2f0920202020ull,
0x3109636f6c2e090aull,0x0a30093233310936ull,0x3233662e64646109ull,0x202c353266250920ull,
0x6625202c31316625ull,0x09202020203b3032ull,0x646461090a202f2full,0x662509203233662eull,
0x34316625202c3632ull,0x203b37316625202cull,0x0a202f2f09202020ull,0x736e6f632e646c09ull,
0x2509203233662e74ull,0x5f435b202c373266ull,0x09203b5d6d726f6eull,0x38343a6469202f2full,
0x6d726f6e5f432039ull,0x6461090a3078302bull,0x2509203233662e64ull,0x326625202c383266ull,
0x3b36326625202c35ull,0x202f2f0920202020ull,0x33662e6c756d090aull,0x2c39326625092032ull,
0x25202c3732662520ull,0x202020203b383266ull,0x7473090a202f2f09ull,0x2e6465726168732eull,
0x72255b0920323366ull,0x202c5d302b383164ull,0x2f2f093b39326625ull,0x203132353a646920ull,
0x625f616475635f5full,0x2b3237356b636f6cull,0x6f6c2e090a307830ull,0x3333310936310963ull,
0x2e627573090a3009ull,0x3366250920323366ull,0x2c34316625202c30ull,0x20203b3731662520ull,
0x090a202f2f092020ull,0x203233662e627573ull,0x25202c3133662509ull,0x326625202c313166ull,
0x2f09202020203b30ull,0x632e646c090a202full,0x3233662e74736e6full,0x202c323366250920ull,
0x20203b5d625f435bull,0x6469202f2f092020ull,0x625f43203738343aull,0x646c090a3078302bull,
0x662e74736e6f632eull,0x3333662509203233ull,0x3b5d655f435b202cull,0x202f2f0920202020ull,
0x43203838343a6469ull,0x090a3078302b655full,0x203233662e6c756dull,0x25202c3433662509ull,
0x336625202c303366ull,0x2f09202020203b33ull,0x2e64616d090a202full,0x3366250920323366ull,
0x2c32336625202c35ull,0x25202c3133662520ull,0x202f2f093b343366ull,0x33662e6c756d090aull,
0x2c36336625092032ull,0x25202c3732662520ull,0x202020203b353366ull,0x7473090a202f2f09ull,
0x2e6465726168732eull,0x72255b0920323366ull,0x5d3436322b383164ull,0x093b36336625202cull,
0x32353a6469202f2full,0x616475635f5f2032ull,0x37356b636f6c625full,0x2e090a3078302b32ull,
0x3109363109636f6cull,0x7573090a30093433ull,0x2509203233662e62ull,0x326625202c373366ull,
0x3b36326625202c35ull,0x202f2f0920202020ull,0x33662e6c756d090aull,0x2c38336625092032ull,
0x25202c3732662520ull,0x202020203b373366ull,0x7473090a202f2f09ull,0x2e6465726168732eull,
0x72255b0920323366ull,0x5d3832352b383164ull,0x093b38336625202cull,0x32353a6469202f2full,
0x616475635f5f2033ull,0x37356b636f6c625full,0x2e090a3078302b32ull,0x3109363109636f6cull,
0x756d090a30093533ull,0x2509203233662e6cull,0x336625202c393366ull,0x3b32336625202c30ull,
0x202f2f0920202020ull,0x33662e6c756d090aull,0x2c30346625092032ull,0x25202c3333662520ull,
0x202020203b313366ull,0x7573090a202f2f09ull,0x2509203233662e62ull,0x346625202c313466ull,
0x3b39336625202c30ull,0x202f2f0920202020ull,0x33662e6c756d090aull,0x2c32346625092032ull,
0x25202c3732662520ull,0x202020203b313466ull,0x7473090a202f2f09ull,0x2e6465726168732eull,
0x72255b0920323366ull,0x5d3239372b383164ull,0x093b32346625202cull,0x32353a6469202f2full,
0x616475635f5f2034ull,0x37356b636f6c625full,0x2e090a3078302b32ull,0x3109363109636f6cull,
0x646c090a30093733ull,0x662e74736e6f632eull,0x3334662509203233ull,0x3b5d665f435b202cull,
0x202f2f0920202020ull,0x43203338343a6469ull,0x090a3078302b665full,0x74736e6f632e646cull,
0x662509203233662eull,0x645f435b202c3434ull,0x2f09202020203b5dull,0x3438343a6469202full,
0x3078302b645f4320ull,0x6e6f632e646c090aull,0x09203233662e7473ull,0x435b202c35346625ull,
0x202020203b5d615full,0x343a6469202f2f09ull,0x302b615f43203538ull,0x632e646c090a3078ull,
0x3233662e74736e6full,0x202c363466250920ull,0x20203b5d635f435bull,0x6469202f2f092020ull,
0x635f43203638343aull,0x756d090a3078302bull,0x2509203233662e6cull,0x326625202c373466ull,
0x3b36346625202c32ull,0x202f2f0920202020ull,0x33662e6c756d090aull,0x2c38346625092032ull,
0x25202c3534662520ull,0x202020203b313266ull,0x7573090a202f2f09ull,0x2509203233662e62ull,
0x346625202c393466ull,0x3b37346625202c38ull,0x202f2f0920202020ull,0x33662e64616d090aull,
0x2c30356625092032ull,0x25202c3434662520ull,0x346625202c333266ull,0x090a202f2f093b39ull,
0x203233662e6c756dull,0x25202c3135662509ull,0x326625202c333466ull,0x2f09202020203b34ull,
0x2e627573090a202full,0x3566250920323366ull,0x2c30356625202c32ull,0x20203b3135662520ull,
0x090a202f2f092020ull,0x203233662e6c756dull,0x25202c3335662509ull,0x356625202c373266ull,
0x2f09202020203b32ull,0x732e7473090a202full,0x33662e6465726168ull,0x316472255b092032ull,
0x202c5d3233312b38ull,0x2f2f093b33356625ull,0x203532353a646920ull,0x625f616475635f5full,
0x2b3237356b636f6cull,0x6f6c2e090a307830ull,0x3833310936310963ull,0x2e6c756d090a3009ull,
0x3566250920323366ull,0x2c32326625202c34ull,0x20203b3334662520ull,0x090a202f2f092020ull,
0x203233662e64616dull,0x25202c3535662509ull,0x326625202c363466ull,0x3b34356625202c31ull,
0x756d090a202f2f09ull,0x2509203233662e6cull,0x346625202c363566ull,0x3b33326625202c35ull,
0x202f2f0920202020ull,0x33662e627573090aull,0x2c37356625092032ull,0x25202c3535662520ull,
0x202020203b363566ull,0x616d090a202f2f09ull,0x2509203233662e64ull,0x346625202c383566ull,
0x2c34326625202c34ull,0x2f093b3735662520ull,0x2e6c756d090a202full,0x3566250920323366ull,
0x2c37326625202c39ull,0x20203b3835662520ull,0x090a202f2f092020ull,0x65726168732e7473ull,
0x5b09203233662e64ull,0x39332b3831647225ull,0x39356625202c5d36ull,0x3a6469202f2f093bull,
0x75635f5f20363235ull,0x6b636f6c625f6164ull,0x0a3078302b323735ull,0x363109636f6c2e09ull,
0x090a300939333109ull,0x203233662e6c756dull,0x25202c3036662509ull,0x346625202c313266ull,
0x2f09202020203b34ull,0x2e64616d090a202full,0x3666250920323366ull,0x2c35346625202c31ull,
0x25202c3232662520ull,0x202f2f093b303666ull,0x33662e64616d090aull,0x2c32366625092032ull,
0x25202c3334662520ull,0x366625202c333266ull,0x090a202f2f093b31ull,0x203233662e6c756dull,
0x25202c3336662509ull,0x326625202c363466ull,0x2f09202020203b34ull,0x2e627573090a202full,
0x3666250920323366ull,0x2c32366625202c34ull,0x20203b3336662520ull,0x090a202f2f092020ull,
0x203233662e6c756dull,0x25202c3536662509ull,0x366625202c373266ull,0x2f09202020203b34ull,
0x732e7473090a202full,0x33662e6465726168ull,0x316472255b092032ull,0x202c5d3036362b38ull,
0x2f2f093b35366625ull,0x203732353a646920ull,0x625f616475635f5full,0x2b3237356b636f6cull,
0x6f6c2e090a307830ull,0x3034310936310963ull,0x2e6c756d090a3009ull,0x3666250920323366ull,
0x2c31326625202c36ull,0x20203b3334662520ull,0x090a202f2f092020ull,0x203233662e64616dull,
0x25202c3736662509ull,0x326625202c343466ull,0x3b36366625202c32ull,0x616d090a202f2f09ull,
0x2509203233662e64ull,0x346625202c383666ull,0x2c33326625202c36ull,0x2f093b3736662520ull,
0x2e64616d090a202full,0x3666250920323366ull,0x2c35346625202c39ull,0x25202c3432662520ull,
0x202f2f093b383666ull,0x33662e6c756d090aull,0x2c30376625092032ull,0x25202c3732662520ull,
0x202020203b393666ull,0x7473090a202f2f09ull,0x2e6465726168732eull,0x72255b0920323366ull,
0x5d3432392b383164ull,0x093b30376625202cull,0x32353a6469202f2full,0x616475635f5f2038ull,
0x37356b636f6c625full,0x2e090a3078302b32ull,0x3209363109636f6cull,0x6162090a30093337ull,
0x0920636e79732e72ull,0x2020202020203b30ull,0x2020202020202020ull,0x202f2f0920202020ull,
0x3109636f6c2e090aull,0x0a30093731310936ull,0x3233752e64646109ull,0x202c303272250920ull,
0x317225202c347225ull,0x0920202020203b32ull,0x6c756d090a202f2full,0x203233752e6f6c2eull,
0x25202c3132722509ull,0x3b3333202c303272ull,0x0a202f2f09202020ull,0x3436752e74766309ull,
0x722509203233752eull,0x327225202c393164ull,0x0920202020203b31ull,0x646461090a202f2full,
0x722509203436752eull,0x647225202c303264ull,0x31647225202c3931ull,0x0a202f2f09203b34ull,
0x3436752e74766309ull,0x722509203233752eull,0x317225202c313264ull,0x0920202020203b32ull,
0x627573090a202f2full,0x722509203436752eull,0x647225202c323264ull,0x32647225202c3032ull,
0x0a202f2f09203b31ull,0x2e6f6c2e6c756d09ull,0x6472250920343675ull,0x32647225202c3332ull,
0x0920203b34202c32ull,0x646461090a202f2full,0x722509203436752eull,0x647225202c343264ull,
0x3332647225202c31ull,0x0a202f2f0920203bull,0x726168732e646c09ull,0x09203233662e6465ull,
0x255b202c31376625ull,0x3b5d302b34326472ull,0x353a6469202f2f09ull,0x6475635f5f203932ull,
0x356b636f6c625f61ull,0x090a3078302b3237ull,0x65726168732e646cull,0x2509203233662e64ull,
0x72255b202c323766ull,0x3b5d38322b343264ull,0x353a6469202f2f09ull,0x6475635f5f203033ull,
0x356b636f6c625f61ull,0x090a3078302b3237ull,0x203233662e646461ull,0x25202c3131662509ull,
0x376625202c313766ull,0x2f09202020203b32ull,0x636f6c2e090a202full,0x0938313109363109ull,
0x68732e646c090a30ull,0x3233662e64657261ull,0x202c333766250920ull,0x342b34326472255bull,
0x6469202f2f093b5dull,0x635f5f203133353aull,0x636f6c625f616475ull,0x3078302b3237356bull,
0x6168732e646c090aull,0x203233662e646572ull,0x5b202c3437662509ull,0x34322b3432647225ull,
0x6469202f2f093b5dull,0x635f5f203233353aull,0x636f6c625f616475ull,0x3078302b3237356bull,
0x33662e646461090aull,0x2c34316625092032ull,0x25202c3337662520ull,0x202020203b343766ull,
0x6c2e090a202f2f09ull,0x313109363109636full,0x2e646c090a300939ull,0x662e646572616873ull,
0x3537662509203233ull,0x34326472255b202cull,0x202f2f093b5d382bull,0x5f203333353a6469ull,
0x6c625f616475635full,0x302b3237356b636full,0x732e646c090a3078ull,0x33662e6465726168ull,
0x2c36376625092032ull,0x2b34326472255b20ull,0x202f2f093b5d3032ull,0x5f203433353a6469ull,
0x6c625f616475635full,0x302b3237356b636full,0x2e646461090a3078ull,0x3166250920323366ull,
0x2c35376625202c37ull,0x20203b3637662520ull,0x090a202f2f092020ull,0x09363109636f6c2eull,
0x6c090a3009303231ull,0x6465726168732e64ull,0x662509203233662eull,0x6472255b202c3737ull,
0x093b5d32312b3432ull,0x33353a6469202f2full,0x616475635f5f2035ull,0x37356b636f6c625full,
0x6c090a3078302b32ull,0x6465726168732e64ull,0x662509203233662eull,0x6472255b202c3837ull,
0x093b5d36312b3432ull,0x33353a6469202f2full,0x616475635f5f2036ull,0x37356b636f6c625full,
0x61090a3078302b32ull,0x09203233662e6464ull,0x6625202c30326625ull,0x38376625202c3737ull,
0x2f2f09202020203bull,0x09636f6c2e090a20ull,0x3009323231093631ull,0x33662e627573090aull,
0x2c31326625092032ull,0x25202c3137662520ull,0x202020203b323766ull,0x6c2e090a202f2f09ull,
0x323109363109636full,0x627573090a300933ull,0x662509203233662eull,0x34376625202c3232ull,
0x203b33376625202cull,0x0a202f2f09202020ull,0x363109636f6c2e09ull,0x090a300934323109ull,
0x203233662e627573ull,0x25202c3332662509ull,0x376625202c353766ull,0x2f09202020203b36ull,
0x636f6c2e090a202full,0x0935323109363109ull,0x662e627573090a30ull,0x3432662509203233ull,
0x202c38376625202cull,0x2020203b37376625ull,0x2e090a202f2f0920ull,0x3109363109636f6cull,
0x6461090a30093233ull,0x2509203233662e64ull,0x316625202c353266ull,0x3b30326625202c31ull,
0x202f2f0920202020ull,0x33662e646461090aull,0x2c36326625092032ull,0x25202c3431662520ull,
0x202020203b373166ull,0x6461090a202f2f09ull,0x2509203233662e64ull,0x326625202c393766ull,
0x3b36326625202c35ull,0x202f2f0920202020ull,0x33662e6c756d090aull,0x2c30386625092032ull,
0x25202c3732662520ull,0x202020203b393766ull,0x7473090a202f2f09ull,0x2e6465726168732eull,
0x72255b0920323366ull,0x202c5d302b343264ull,0x2f2f093b30386625ull,0x203733353a646920ull,
0x625f616475635f5full,0x2b3237356b636f6cull,0x6f6c2e090a307830ull,0x3333310936310963ull,
0x2e627573090a3009ull,0x3366250920323366ull,0x2c34316625202c30ull,0x20203b3731662520ull,
0x090a202f2f092020ull,0x203233662e627573ull,0x25202c3133662509ull,0x326625202c313166ull,
0x2f09202020203b30ull,0x2e6c756d090a202full,0x3866250920323366ull,0x2c30336625202c31ull,
0x20203b3333662520ull,0x090a202f2f092020ull,0x203233662e64616dull,0x25202c3238662509ull,
0x336625202c323366ull,0x3b31386625202c31ull,0x756d090a202f2f09ull,0x2509203233662e6cull,
0x326625202c333866ull,0x3b32386625202c37ull,0x202f2f0920202020ull,0x6168732e7473090aull,
0x203233662e646572ull,0x2b34326472255b09ull,0x33386625202c5d38ull,0x3a6469202f2f093bull,
0x75635f5f20383335ull,0x6b636f6c625f6164ull,0x0a3078302b323735ull,0x363109636f6c2e09ull,
0x090a300934333109ull,0x203233662e627573ull,0x25202c3438662509ull,0x326625202c353266ull,
0x2f09202020203b36ull,0x2e6c756d090a202full,0x3866250920323366ull,0x2c37326625202c35ull,
0x20203b3438662520ull,0x090a202f2f092020ull,0x65726168732e7473ull,0x5b09203233662e64ull,
0x36312b3432647225ull,0x3b35386625202c5dull,0x353a6469202f2f09ull,0x6475635f5f203933ull,
0x356b636f6c625f61ull,0x090a3078302b3237ull,0x09363109636f6c2eull,0x6d090a3009353331ull,
0x09203233662e6c75ull,0x6625202c36386625ull,0x32336625202c3033ull,0x2f2f09202020203bull,
0x662e6c756d090a20ull,0x3738662509203233ull,0x202c33336625202cull,0x2020203b31336625ull,
0x73090a202f2f0920ull,0x09203233662e6275ull,0x6625202c38386625ull,0x36386625202c3738ull,
0x2f2f09202020203bull,0x662e6c756d090a20ull,0x3938662509203233ull,0x202c37326625202cull,
0x2020203b38386625ull,0x73090a202f2f0920ull,0x6465726168732e74ull,0x255b09203233662eull,
0x5d34322b34326472ull,0x093b39386625202cull,0x34353a6469202f2full,0x616475635f5f2030ull,
0x37356b636f6c625full,0x2e090a3078302b32ull,0x3109363109636f6cull,0x756d090a30093733ull,
0x2509203233662e6cull,0x326625202c303966ull,0x3b36346625202c32ull,0x202f2f0920202020ull,
0x33662e6c756d090aull,0x2c31396625092032ull,0x25202c3534662520ull,0x202020203b313266ull,
0x7573090a202f2f09ull,0x2509203233662e62ull,0x396625202c323966ull,0x3b30396625202c31ull,
0x202f2f0920202020ull,0x33662e64616d090aull,0x2c33396625092032ull,0x25202c3434662520ull,
0x396625202c333266ull,0x090a202f2f093b32ull,0x203233662e6c756dull,0x25202c3439662509ull,
0x326625202c333466ull,0x2f09202020203b34ull,0x2e627573090a202full,0x3966250920323366ull,
0x2c33396625202c35ull,0x20203b3439662520ull,0x090a202f2f092020ull,0x203233662e6c756dull,
0x25202c3639662509ull,0x396625202c373266ull,0x2f09202020203b35ull,0x732e7473090a202full,
0x33662e6465726168ull,0x326472255b092032ull,0x6625202c5d342b34ull,0x69202f2f093b3639ull,
0x5f5f203134353a64ull,0x6f6c625f61647563ull,0x78302b3237356b63ull,0x09636f6c2e090a30ull,
0x3009383331093631ull,0x33662e6c756d090aull,0x2c37396625092032ull,0x25202c3232662520ull,
0x202020203b333466ull,0x616d090a202f2f09ull,0x2509203233662e64ull,0x346625202c383966ull,
0x2c31326625202c36ull,0x2f093b3739662520ull,0x2e6c756d090a202full,0x3966250920323366ull,
0x2c35346625202c39ull,0x20203b3332662520ull,0x090a202f2f092020ull,0x203233662e627573ull,
0x202c303031662509ull,0x6625202c38396625ull,0x2f092020203b3939ull,0x2e64616d090a202full,
0x3166250920323366ull,0x34346625202c3130ull,0x202c34326625202cull,0x2f093b3030316625ull,
0x2e6c756d090a202full,0x3166250920323366ull,0x37326625202c3230ull,0x3b3130316625202cull,
0x090a202f2f092020ull,0x65726168732e7473ull,0x5b09203233662e64ull,0x32312b3432647225ull,
0x3230316625202c5dull,0x3a6469202f2f093bull,0x75635f5f20323435ull,0x6b636f6c625f6164ull,
0x0a3078302b323735ull,0x363109636f6c2e09ull,0x090a300939333109ull,0x203233662e6c756dull,
0x202c333031662509ull,0x6625202c31326625ull,0x2f092020203b3434ull,0x2e64616d090a202full,
0x3166250920323366ull,0x35346625202c3430ull,0x202c32326625202cull,0x2f093b3330316625ull,
0x2e64616d090a202full,0x3166250920323366ull,0x33346625202c3530ull,0x202c33326625202cull,
0x2f093b3430316625ull,0x2e6c756d090a202full,0x3166250920323366ull,0x36346625202c3630ull,
0x203b34326625202cull,0x090a202f2f092020ull,0x203233662e627573ull,0x202c373031662509ull,
0x25202c3530316625ull,0x2f09203b36303166ull,0x2e6c756d090a202full,0x3166250920323366ull,
0x37326625202c3830ull,0x3b3730316625202cull,0x090a202f2f092020ull,0x65726168732e7473ull,
0x5b09203233662e64ull,0x30322b3432647225ull,0x3830316625202c5dull,0x3a6469202f2f093bull,
0x75635f5f20333435ull,0x6b636f6c625f6164ull,0x0a3078302b323735ull,0x363109636f6c2e09ull,
0x090a300930343109ull,0x203233662e6c756dull,0x202c393031662509ull,0x6625202c31326625ull,
0x2f092020203b3334ull,0x2e64616d090a202full,0x3166250920323366ull,0x34346625202c3031ull,
0x202c32326625202cull,0x2f093b3930316625ull,0x2e64616d090a202full,0x3166250920323366ull,
0x36346625202c3131ull,0x202c33326625202cull,0x2f093b3031316625ull,0x2e64616d090a202full,
0x3166250920323366ull,0x35346625202c3231ull,0x202c34326625202cull,0x2f093b3131316625ull,
0x2e6c756d090a202full,0x3166250920323366ull,0x37326625202c3331ull,0x3b3231316625202cull,
0x090a202f2f092020ull,0x65726168732e7473ull,0x5b09203233662e64ull,0x38322b3432647225ull,
0x3331316625202c5dull,0x3a6469202f2f093bull,0x75635f5f20343435ull,0x6b636f6c625f6164ull,
0x0a3078302b323735ull,0x363109636f6c2e09ull,0x090a300938373209ull,0x636e79732e726162ull,
0x202020203b300920ull,0x2020202020202020ull,0x2f09202020202020ull,0x636f6c2e090a202full,
0x0931383209363109ull,0x732e766f6d090a30ull,0x3232722509203233ull,0x202020203b37202cull,
0x2020202020202020ull,0x6d090a202f2f0920ull,0x2e6f6c2e34326c75ull,0x3272250920323373ull,
0x2c34317225202c33ull,0x2f093b3232722520ull,0x2e747663090a202full,0x203233732e343673ull,
0x202c353264722509ull,0x2020203b33327225ull,0x090a202f2f092020ull,0x752e6f6c2e6c756dull,
0x3264722509203436ull,0x3532647225202c36ull,0x2f0920203b34202cull,0x2e627573090a202full,
0x6472250920343675ull,0x31647225202c3331ull,0x3632647225202c33ull,0x090a202f2f09203bull,
0x09363109636f6c2eull,0x6c090a3009333832ull,0x6465726168732e64ull,0x662509203233662eull,
0x72255b202c343131ull,0x2f093b5d302b3464ull,0x3534353a6469202full,0x5f616475635f5f20ull,
0x3237356b636f6c62ull,0x7473090a3078302bull,0x2e6c61626f6c672eull,0x72255b0920323366ull,
0x202c5d302b333164ull,0x2f093b3431316625ull,0x3634353a6469202full,0x3109636f6c2e090aull,
0x0a30093438320936ull,0x3436752e64646109ull,0x2c33316472250920ull,0x202c303164722520ull,
0x09203b3331647225ull,0x6f6c2e090a202f2full,0x3738320936310963ull,0x732e646c090a3009ull,
0x33662e6465726168ull,0x3531316625092032ull,0x2b346472255b202cull,0x2f2f093b5d323331ull,
0x203734353a646920ull,0x625f616475635f5full,0x2b3237356b636f6cull,0x2e7473090a307830ull,
0x662e6c61626f6c67ull,0x6472255b09203233ull,0x25202c5d302b3331ull,0x2f2f093b35313166ull,
0x0a3834353a646920ull,0x363109636f6c2e09ull,0x090a300938383209ull,0x203436752e646461ull,
0x202c333164722509ull,0x25202c3031647225ull,0x2f09203b33316472ull,0x636f6c2e090a202full,
0x0931393209363109ull,0x68732e646c090a30ull,0x3233662e64657261ull,0x2c36313166250920ull,
0x322b346472255b20ull,0x202f2f093b5d3436ull,0x5f203934353a6469ull,0x6c625f616475635full,
0x302b3237356b636full,0x672e7473090a3078ull,0x33662e6c61626f6cull,0x316472255b092032ull,
0x6625202c5d302b33ull,0x202f2f093b363131ull,0x090a3035353a6469ull,0x09363109636f6c2eull,
0x61090a3009323932ull,0x09203436752e6464ull,0x25202c3331647225ull,0x7225202c30316472ull,
0x2f2f09203b333164ull,0x09636f6c2e090a20ull,0x3009353932093631ull,0x6168732e646c090aull,
0x203233662e646572ull,0x202c373131662509ull,0x39332b346472255bull,0x69202f2f093b5d36ull,
0x5f5f203135353a64ull,0x6f6c625f61647563ull,0x78302b3237356b63ull,0x6c672e7473090a30ull,
0x3233662e6c61626full,0x33316472255b0920ull,0x316625202c5d302bull,0x69202f2f093b3731ull,
0x2e090a3235353a64ull,0x3209363109636f6cull,0x6461090a30093639ull,0x2509203436752e64ull,
0x7225202c33316472ull,0x647225202c303164ull,0x202f2f09203b3331ull,0x3109636f6c2e090aull,
0x0a30093939320936ull,0x726168732e646c09ull,0x09203233662e6465ull,0x5b202c3831316625ull,
0x3832352b34647225ull,0x6469202f2f093b5dull,0x635f5f203335353aull,0x636f6c625f616475ull,
0x3078302b3237356bull,0x6f6c672e7473090aull,0x203233662e6c6162ull,0x2b33316472255b09ull,
0x31316625202c5d30ull,0x6469202f2f093b38ull,0x6c2e090a3435353aull,0x303309363109636full,
0x646461090a300930ull,0x722509203436752eull,0x647225202c333164ull,0x31647225202c3031ull,
0x0a202f2f09203b33ull,0x363109636f6c2e09ull,0x090a300933303309ull,0x65726168732e646cull,
0x2509203233662e64ull,0x255b202c39313166ull,0x5d3036362b346472ull,0x3a6469202f2f093bull,
0x75635f5f20353535ull,0x6b636f6c625f6164ull,0x0a3078302b323735ull,0x626f6c672e747309ull,
0x09203233662e6c61ull,0x302b33316472255bull,0x3931316625202c5dull,0x3a6469202f2f093bull,
0x6f6c2e090a363535ull,0x3430330936310963ull,0x2e646461090a3009ull,0x6472250920343675ull,
0x31647225202c3331ull,0x3331647225202c30ull,0x090a202f2f09203bull,0x09363109636f6c2eull,
0x6c090a3009373033ull,0x6465726168732e64ull,0x662509203233662eull,0x72255b202c303231ull,
0x3b5d3239372b3464ull,0x353a6469202f2f09ull,0x6475635f5f203735ull,0x356b636f6c625f61ull,
0x090a3078302b3237ull,0x61626f6c672e7473ull,0x5b09203233662e6cull,0x5d302b3331647225ull,
0x3b3032316625202cull,0x353a6469202f2f09ull,0x636f6c2e090a3835ull,0x0931313309363109ull,
0x68732e646c090a30ull,0x3233662e64657261ull,0x2c31323166250920ull,0x392b346472255b20ull,
0x202f2f093b5d3432ull,0x5f203935353a6469ull,0x6c625f616475635full,0x302b3237356b636full,
0x2e646461090a3078ull,0x6472250920343675ull,0x31647225202c3732ull,0x3331647225202c30ull,
0x090a202f2f09203bull,0x61626f6c672e7473ull,0x5b09203233662e6cull,0x5d302b3732647225ull,
0x3b3132316625202cull,0x353a6469202f2f09ull,0x636f6c2e090a3036ull,0x0932313309363109ull,
0x3b74697865090a30ull,0x2020202020202020ull,0x2020202020202020ull,0x2020202020202020ull,
0x4c240a202f2f0920ull,0x5a5f5f646e655744ull,0x656b414455433431ull,0x544344326c656e72ull,
0x207d090a3a696650ull,0x4334315a5f202f2full,0x656e72656b414455ull,0x696650544344326cull,
0x72746e652e090a0aull,0x554335315a5f2079ull,0x6c656e72656b4144ull,0x6966505443444932ull,
0x61702e09090a2820ull,0x3436752e206d6172ull,0x70616475635f5f20ull,0x35315a5f5f6d7261ull,
0x6e72656b41445543ull,0x5054434449326c65ull,0x6c61765f5f5f6966ull,0x72536d617261705full,
0x09090a2c74734463ull,0x2e206d617261702eull,0x75635f5f20323373ull,0x5f5f6d7261706164ull,
0x6b4144554335315aull,0x4449326c656e7265ull,0x6d495f6966505443ull,0x2965646972745367ull,
0x65722e090a7b090aull,0x25203233752e2067ull,0x090a3b3e35323c72ull,0x36752e206765722eull,
0x39323c6472252034ull,0x6765722e090a3b3eull,0x6625203233662e20ull,0x090a3b3e3732313cull,
0x206465726168732eull,0x34206e67696c612eull,0x635f5f2038622e20ull,0x636f6c625f616475ull,
0x31325b303037326bull,0x6c2e090a3b5d3231ull,0x323309363109636full,0x42424c240a300938ull,
0x554335315a5f5f31ull,0x6c656e72656b4144ull,0x6966505443444932ull,0x752e766f6d090a3aull,
0x3164722509203436ull,0x616475635f5f202cull,0x37326b636f6c625full,0x0a202f2f093b3030ull,
0x363109636f6c2e09ull,0x090a300932363309ull,0x2e3233732e747663ull,0x3172250920363175ull,
0x646961746325202cull,0x2f092020203b792eull,0x2e6c6873090a202full,0x3272250920323362ull,
0x34202c317225202cull,0x202020202020203bull,0x090a202f2f092020ull,0x2e3233732e747663ull,
0x3372250920363175ull,0x7a2e64697425202cull,0x2f0920202020203bull,0x2e6c6873090a202full,
0x3472250920323362ull,0x33202c337225202cull,0x202020202020203bull,0x090a202f2f092020ull,
0x2e3233732e747663ull,0x3572250920363175ull,0x646961746325202cull,0x2f092020203b782eull,
0x2e6c6873090a202full,0x3672250920323362ull,0x35202c357225202cull,0x202020202020203bull,
0x090a202f2f092020ull,0x2e3233732e747663ull,0x3772250920363175ull,0x792e64697425202cull,
0x2f0920202020203bull,0x2e6c6873090a202full,0x3872250920323362ull,0x33202c377225202cull,
0x202020202020203bull,0x090a202f2f092020ull,0x203233732e646461ull,0x7225202c39722509ull,
0x203b347225202c32ull,0x2f09202020202020ull,0x2e766f6d090a202full,0x3172250920323373ull,
0x20203b3333202c30ull,0x2020202020202020ull,0x090a202f2f092020ull,0x6f6c2e34326c756dull,
0x722509203233732eull,0x2c347225202c3131ull,0x2f093b3031722520ull,0x2e747663090a202full,
0x203631752e323375ull,0x25202c3231722509ull,0x20203b782e646974ull,0x090a202f2f092020ull,
0x203233752e646461ull,0x25202c3331722509ull,0x32317225202c3872ull,0x2f0920202020203bull,
0x702e646c090a202full,0x3233732e6d617261ull,0x202c343172250920ull,0x70616475635f5f5bull,
0x35315a5f5f6d7261ull,0x6e72656b41445543ull,0x5054434449326c65ull,0x7453676d495f6966ull,
0x2f093b5d65646972ull,0x3833353a6469202full,0x70616475635f5f20ull,0x35315a5f5f6d7261ull,
0x6e72656b41445543ull,0x5054434449326c65ull,0x7453676d495f6966ull,0x3078302b65646972ull,
0x2e34326c756d090aull,0x09203233732e6f6cull,0x7225202c35317225ull,0x3b34317225202c39ull,
0x6461090a202f2f09ull,0x2509203233732e64ull,0x317225202c363172ull,0x3b33317225202c31ull,
0x202f2f0920202020ull,0x36752e747663090aull,0x2509203233732e34ull,0x317225202c326472ull,
0x2020202020203b36ull,0x756d090a202f2f09ull,0x3436752e6f6c2e6cull,0x202c336472250920ull,
0x3b34202c32647225ull,0x202f2f0920202020ull,0x36752e646461090aull,0x2c34647225092034ull,
0x25202c3164722520ull,0x202020203b336472ull,0x646c090a202f2f09ull,0x752e6d617261702eull,
0x3564722509203436ull,0x6475635f5f5b202cull,0x5a5f5f6d72617061ull,0x656b414455433531ull,
0x434449326c656e72ull,0x765f5f5f69665054ull,0x6d617261705f6c61ull,0x3b5d747344637253ull,
0x353a6469202f2f09ull,0x6475635f5f203434ull,0x5a5f5f6d72617061ull,0x656b414455433531ull,
0x434449326c656e72ull,0x765f5f5f69665054ull,0x6d617261705f6c61ull,0x302b747344637253ull,
0x2e646461090a3078ull,0x3172250920323373ull,0x202c367225202c37ull,0x2020203b35317225ull,
0x090a202f2f092020ull,0x203233732e646461ull,0x25202c3831722509ull,0x317225202c333172ull,
0x2f09202020203b37ull,0x2e747663090a202full,0x203233732e343675ull,0x25202c3664722509ull,
0x202020203b383172ull,0x090a202f2f092020ull,0x752e6f6c2e6c756dull,0x3764722509203436ull,
0x202c36647225202cull,0x2f09202020203b34ull,0x2e646461090a202full,0x6472250920343675ull,
0x2c35647225202c38ull,0x20203b3764722520ull,0x090a202f2f092020ull,0x61626f6c672e646cull,
0x2509203233662e6cull,0x6472255b202c3166ull,0x2f09203b5d302b38ull,0x3534353a6469202full,
0x6168732e7473090aull,0x203233662e646572ull,0x302b346472255b09ull,0x203b316625202c5dull,
0x353a6469202f2f09ull,0x6475635f5f203634ull,0x326b636f6c625f61ull,0x0a3078302b303037ull,
0x363109636f6c2e09ull,0x090a300936363309ull,0x2e3436752e747663ull,0x6472250920323373ull,
0x3b34317225202c39ull,0x2f09202020202020ull,0x2e6c756d090a202full,0x09203436752e6f6cull,
0x25202c3031647225ull,0x203b34202c396472ull,0x090a202f2f092020ull,0x203436752e646461ull,
0x202c313164722509ull,0x25202c3031647225ull,0x2f0920203b386472ull,0x672e646c090a202full,
0x33662e6c61626f6cull,0x202c326625092032ull,0x302b31316472255bull,0x6469202f2f093b5dull,
0x7473090a3734353aull,0x2e6465726168732eull,0x72255b0920323366ull,0x2c5d3233312b3464ull,
0x2f2f093b32662520ull,0x203834353a646920ull,0x625f616475635f5full,0x303037326b636f6cull,
0x6c2e090a3078302bull,0x373309363109636full,0x646461090a300930ull,0x722509203436752eull,
0x647225202c323164ull,0x31647225202c3031ull,0x0a202f2f09203b31ull,0x626f6c672e646c09ull,
0x09203233662e6c61ull,0x72255b202c336625ull,0x093b5d302b323164ull,0x34353a6469202f2full,
0x68732e7473090a39ull,0x3233662e64657261ull,0x2b346472255b0920ull,0x6625202c5d343632ull,
0x6469202f2f093b33ull,0x635f5f203035353aull,0x636f6c625f616475ull,0x78302b303037326bull,
0x09636f6c2e090a30ull,0x3009313733093631ull,0x36752e646461090aull,0x3331647225092034ull,
0x2c3031647225202cull,0x203b323164722520ull,0x6c2e090a202f2f09ull,0x373309363109636full,
0x2e646c090a300934ull,0x662e6c61626f6c67ull,0x2c34662509203233ull,0x2b33316472255b20ull,
0x69202f2f093b5d30ull,0x73090a3135353a64ull,0x6465726168732e74ull,0x255b09203233662eull,
0x5d3639332b346472ull,0x2f093b346625202cull,0x3235353a6469202full,0x5f616475635f5f20ull,
0x3037326b636f6c62ull,0x2e090a3078302b30ull,0x3309363109636f6cull,0x6461090a30093537ull,
0x2509203436752e64ull,0x7225202c33316472ull,0x647225202c303164ull,0x202f2f09203b3331ull,
0x3109636f6c2e090aull,0x0a30093837330936ull,0x626f6c672e646c09ull,0x09203233662e6c61ull,
0x72255b202c356625ull,0x093b5d302b333164ull,0x35353a6469202f2full,0x68732e7473090a33ull,
0x3233662e64657261ull,0x2b346472255b0920ull,0x6625202c5d383235ull,0x6469202f2f093b35ull,
0x635f5f203435353aull,0x636f6c625f616475ull,0x78302b303037326bull,0x09636f6c2e090a30ull,
0x3009393733093631ull,0x36752e646461090aull,0x3331647225092034ull,0x2c3031647225202cull,
0x203b333164722520ull,0x6c2e090a202f2f09ull,0x383309363109636full,0x2e646c090a300932ull,
0x662e6c61626f6c67ull,0x2c36662509203233ull,0x2b33316472255b20ull,0x69202f2f093b5d30ull,
0x73090a3535353a64ull,0x6465726168732e74ull,0x255b09203233662eull,0x5d3036362b346472ull,
0x2f093b366625202cull,0x3635353a6469202full,0x5f616475635f5f20ull,0x3037326b636f6c62ull,
0x2e090a3078302b30ull,0x3309363109636f6cull,0x6461090a30093338ull,0x2509203436752e64ull,
0x7225202c33316472ull,0x647225202c303164ull,0x202f2f09203b3331ull,0x3109636f6c2e090aull,
0x0a30093638330936ull,0x626f6c672e646c09ull,0x09203233662e6c61ull,0x72255b202c376625ull,
0x093b5d302b333164ull,0x35353a6469202f2full,0x68732e7473090a37ull,0x3233662e64657261ull,
0x2b346472255b0920ull,0x6625202c5d323937ull,0x6469202f2f093b37ull,0x635f5f203835353aull,
0x636f6c625f616475ull,0x78302b303037326bull,0x09636f6c2e090a30ull,0x3009373833093631ull,
0x36752e646461090aull,0x3331647225092034ull,0x2c3031647225202cull,0x203b333164722520ull,
0x6c2e090a202f2f09ull,0x393309363109636full,0x2e646c090a300930ull,0x662e6c61626f6c67ull,
0x2c38662509203233ull,0x2b33316472255b20ull,0x69202f2f093b5d30ull,0x73090a3935353a64ull,
0x6465726168732e74ull,0x255b09203233662eull,0x5d3432392b346472ull,0x2f093b386625202cull,
0x3036353a6469202full,0x5f616475635f5f20ull,0x3037326b636f6c62ull,0x2e090a3078302b30ull,
0x3309363109636f6cull,0x6162090a30093239ull,0x0920636e79732e72ull,0x2020202020203b30ull,
0x2020202020202020ull,0x202f2f0920202020ull,0x3109636f6c2e090aull,0x0a30093336310936ull,
0x3436752e74766309ull,0x722509203233732eull,0x317225202c343164ull,0x0920202020203b33ull,
0x6c756d090a202f2full,0x203233732e6f6c2eull,0x25202c3931722509ull,0x203b3333202c3472ull,
0x0a202f2f09202020ull,0x3436732e74766309ull,0x722509203233732eull,0x317225202c353164ull,
0x0920202020203b39ull,0x646461090a202f2full,0x722509203436752eull,0x647225202c363164ull,
0x31647225202c3531ull,0x0a202f2f09203b34ull,0x2e6f6c2e6c756d09ull,0x6472250920343675ull,
0x31647225202c3731ull,0x0920203b34202c36ull,0x646461090a202f2full,0x722509203436752eull,
0x647225202c383164ull,0x3731647225202c31ull,0x0a202f2f0920203bull,0x726168732e646c09ull,
0x09203233662e6465ull,0x72255b202c396625ull,0x093b5d302b383164ull,0x36353a6469202f2full,
0x616475635f5f2031ull,0x37326b636f6c625full,0x090a3078302b3030ull,0x65726168732e646cull,
0x2509203233662e64ull,0x72255b202c303166ull,0x5d3832352b383164ull,0x3a6469202f2f093bull,
0x75635f5f20323635ull,0x6b636f6c625f6164ull,0x3078302b30303732ull,0x33662e646461090aull,
0x2c31316625092032ull,0x6625202c39662520ull,0x20202020203b3031ull,0x6c2e090a202f2f09ull,
0x363109363109636full,0x2e646c090a300934ull,0x662e646572616873ull,0x3231662509203233ull,
0x38316472255b202cull,0x2f093b5d3239372bull,0x3336353a6469202full,0x5f616475635f5f20ull,
0x3037326b636f6c62ull,0x6c090a3078302b30ull,0x6465726168732e64ull,0x662509203233662eull,
0x6472255b202c3331ull,0x3b5d3436322b3831ull,0x353a6469202f2f09ull,0x6475635f5f203436ull,
0x326b636f6c625f61ull,0x0a3078302b303037ull,0x736e6f632e646c09ull,0x2509203233662e74ull,
0x5f435b202c343166ull,0x09202020203b5d62ull,0x33353a6469202f2full,0x78302b625f432036ull,
0x6f632e646c090a30ull,0x203233662e74736eull,0x5b202c3531662509ull,0x2020203b5d655f43ull,
0x3a6469202f2f0920ull,0x2b655f4320373335ull,0x6c756d090a307830ull,0x662509203233662eull,
0x32316625202c3631ull,0x203b35316625202cull,0x0a202f2f09202020ull,0x3233662e64616d09ull,
0x202c373166250920ull,0x6625202c33316625ull,0x36316625202c3431ull,0x2e090a202f2f093bull,
0x3109363109636f6cull,0x646c090a30093836ull,0x2e6465726168732eull,0x3166250920323366ull,
0x316472255b202c38ull,0x093b5d3432392b38ull,0x36353a6469202f2full,0x616475635f5f2035ull,
0x37326b636f6c625full,0x090a3078302b3030ull,0x65726168732e646cull,0x2509203233662e64ull,
0x72255b202c393166ull,0x5d3233312b383164ull,0x3a6469202f2f093bull,0x75635f5f20363635ull,
0x6b636f6c625f6164ull,0x3078302b30303732ull,0x6168732e646c090aull,0x203233662e646572ull,
0x5b202c3032662509ull,0x39332b3831647225ull,0x69202f2f093b5d36ull,0x5f5f203736353a64ull,
0x6f6c625f61647563ull,0x302b303037326b63ull,0x732e646c090a3078ull,0x33662e6465726168ull,
0x2c31326625092032ull,0x2b38316472255b20ull,0x2f2f093b5d303636ull,0x203836353a646920ull,
0x625f616475635f5full,0x303037326b636f6cull,0x646c090a3078302bull,0x662e74736e6f632eull,
0x3232662509203233ull,0x3b5d645f435b202cull,0x202f2f0920202020ull,0x43203233353a6469ull,
0x090a3078302b645full,0x74736e6f632e646cull,0x662509203233662eull,0x635f435b202c3332ull,
0x2f09202020203b5dull,0x3333353a6469202full,0x3078302b635f4320ull,0x6e6f632e646c090aull,
0x09203233662e7473ull,0x435b202c34326625ull,0x202020203b5d615full,0x353a6469202f2f09ull,
0x302b615f43203433ull,0x632e646c090a3078ull,0x3233662e74736e6full,0x202c353266250920ull,
0x20203b5d665f435bull,0x6469202f2f092020ull,0x665f43203533353aull,0x756d090a3078302bull,
0x2509203233662e6cull,0x316625202c363266ull,0x3b35326625202c38ull,0x202f2f0920202020ull,
0x33662e64616d090aull,0x2c37326625092032ull,0x25202c3931662520ull,0x326625202c343266ull,
0x090a202f2f093b36ull,0x203233662e64616dull,0x25202c3832662509ull,0x326625202c303266ull,
0x3b37326625202c33ull,0x616d090a202f2f09ull,0x2509203233662e64ull,0x326625202c393266ull,
0x2c32326625202c31ull,0x2f093b3832662520ull,0x636f6c2e090a202full,0x0939363109363109ull,
0x662e6c756d090a30ull,0x3033662509203233ull,0x202c39316625202cull,0x2020203b35326625ull,
0x6d090a202f2f0920ull,0x09203233662e6c75ull,0x6625202c31336625ull,0x34326625202c3831ull,
0x2f2f09202020203bull,0x662e627573090a20ull,0x3233662509203233ull,0x202c31336625202cull,
0x2020203b30336625ull,0x6d090a202f2f0920ull,0x09203233662e6461ull,0x6625202c33336625ull,
0x32326625202c3032ull,0x093b32336625202cull,0x6c756d090a202f2full,0x662509203233662eull,
0x31326625202c3433ull,0x203b33326625202cull,0x0a202f2f09202020ull,0x3233662e62757309ull,
0x202c353366250920ull,0x6625202c33336625ull,0x09202020203b3433ull,0x6f6c2e090a202f2full,
0x3137310936310963ull,0x2e627573090a3009ull,0x3366250920323366ull,0x202c396625202c36ull,
0x2020203b30316625ull,0x090a202f2f092020ull,0x09363109636f6c2eull,0x6d090a3009323731ull,
0x09203233662e6c75ull,0x6625202c37336625ull,0x34316625202c3231ull,0x2f2f09202020203bull,
0x662e6c756d090a20ull,0x3833662509203233ull,0x202c33316625202cull,0x2020203b35316625ull,
0x73090a202f2f0920ull,0x09203233662e6275ull,0x6625202c39336625ull,0x37336625202c3833ull,
0x2f2f09202020203bull,0x09636f6c2e090a20ull,0x3009363731093631ull,0x33662e6c756d090aull,
0x2c30346625092032ull,0x25202c3831662520ull,0x202020203b323266ull,0x756d090a202f2f09ull,
0x2509203233662e6cull,0x316625202c313466ull,0x3b33326625202c39ull,0x202f2f0920202020ull,
0x33662e627573090aull,0x2c32346625092032ull,0x25202c3134662520ull,0x202020203b303466ull,
0x756d090a202f2f09ull,0x2509203233662e6cull,0x326625202c333466ull,0x3b35326625202c30ull,
0x202f2f0920202020ull,0x33662e627573090aull,0x2c34346625092032ull,0x25202c3234662520ull,
0x202020203b333466ull,0x756d090a202f2f09ull,0x2509203233662e6cull,0x326625202c353466ull,
0x3b34326625202c31ull,0x202f2f0920202020ull,0x33662e627573090aull,0x2c36346625092032ull,
0x25202c3434662520ull,0x202020203b353466ull,0x6c2e090a202f2f09ull,0x373109363109636full,
0x6c756d090a300937ull,0x662509203233662eull,0x38316625202c3734ull,0x203b33326625202cull,
0x0a202f2f09202020ull,0x3233662e64616d09ull,0x202c383466250920ull,0x6625202c39316625ull,
0x37346625202c3232ull,0x6d090a202f2f093bull,0x09203233662e6c75ull,0x6625202c39346625ull,
0x34326625202c3032ull,0x2f2f09202020203bull,0x662e627573090a20ull,0x3035662509203233ull,
0x202c38346625202cull,0x2020203b39346625ull,0x6d090a202f2f0920ull,0x09203233662e6461ull,
0x6625202c31356625ull,0x35326625202c3132ull,0x093b30356625202cull,0x6f6c2e090a202f2full,
0x3937310936310963ull,0x2e646461090a3009ull,0x3566250920323366ull,0x2c31316625202c32ull,
0x20203b3731662520ull,0x090a202f2f092020ull,0x74736e6f632e646cull,0x662509203233662eull,
0x6e5f435b202c3335ull,0x2f09203b5d6d726full,0x3133353a6469202full,0x2b6d726f6e5f4320ull,
0x646461090a307830ull,0x662509203233662eull,0x32356625202c3435ull,0x203b39326625202cull,
0x0a202f2f09202020ull,0x3233662e6c756d09ull,0x202c353566250920ull,0x6625202c33356625ull,
0x09202020203b3435ull,0x2e7473090a202f2full,0x662e646572616873ull,0x6472255b09203233ull,
0x25202c5d302b3831ull,0x202f2f093b353566ull,0x5f203936353a6469ull,0x6c625f616475635full,
0x2b303037326b636full,0x6f6c2e090a307830ull,0x3038310936310963ull,0x2e627573090a3009ull,
0x3566250920323366ull,0x2c32356625202c36ull,0x20203b3932662520ull,0x090a202f2f092020ull,
0x203233662e6c756dull,0x25202c3735662509ull,0x356625202c333566ull,0x2f09202020203b36ull,
0x732e7473090a202full,0x33662e6465726168ull,0x316472255b092032ull,0x202c5d3432392b38ull,
0x2f2f093b37356625ull,0x203037353a646920ull,0x625f616475635f5full,0x303037326b636f6cull,
0x6c2e090a3078302bull,0x383109363109636full,0x627573090a300931ull,0x662509203233662eull,
0x31316625202c3835ull,0x203b37316625202cull,0x0a202f2f09202020ull,0x3233662e64646109ull,
0x202c393566250920ull,0x6625202c38356625ull,0x09202020203b3533ull,0x6c756d090a202f2full,
0x662509203233662eull,0x33356625202c3036ull,0x203b39356625202cull,0x0a202f2f09202020ull,
0x726168732e747309ull,0x09203233662e6465ull,0x352b38316472255bull,0x366625202c5d3832ull,
0x6469202f2f093b30ull,0x635f5f203137353aull,0x636f6c625f616475ull,0x78302b303037326bull,
0x09636f6c2e090a30ull,0x3009323831093631ull,0x33662e627573090aull,0x2c31366625092032ull,
0x25202c3835662520ull,0x202020203b353366ull,0x756d090a202f2f09ull,0x2509203233662e6cull,
0x356625202c323666ull,0x3b31366625202c33ull,0x202f2f0920202020ull,0x6168732e7473090aull,
0x203233662e646572ull,0x2b38316472255b09ull,0x6625202c5d363933ull,0x69202f2f093b3236ull,
0x5f5f203237353a64ull,0x6f6c625f61647563ull,0x302b303037326b63ull,0x636f6c2e090a3078ull,
0x0934383109363109ull,0x662e646461090a30ull,0x3336662509203233ull,0x202c36336625202cull,
0x2020203b39336625ull,0x61090a202f2f0920ull,0x09203233662e6464ull,0x6625202c34366625ull,
0x36346625202c3336ull,0x2f2f09202020203bull,0x662e6c756d090a20ull,0x3536662509203233ull,
0x202c33356625202cull,0x2020203b34366625ull,0x73090a202f2f0920ull,0x6465726168732e74ull,
0x255b09203233662eull,0x3233312b38316472ull,0x3b35366625202c5dull,0x353a6469202f2f09ull,
0x6475635f5f203337ull,0x326b636f6c625f61ull,0x0a3078302b303037ull,0x363109636f6c2e09ull,
0x090a300935383109ull,0x203233662e627573ull,0x25202c3636662509ull,0x336625202c363366ull,
0x2f09202020203b39ull,0x2e627573090a202full,0x3666250920323366ull,0x2c36366625202c37ull,
0x20203b3135662520ull,0x090a202f2f092020ull,0x203233662e6c756dull,0x25202c3836662509ull,
0x366625202c333566ull,0x2f09202020203b37ull,0x732e7473090a202full,0x33662e6465726168ull,
0x316472255b092032ull,0x202c5d3036362b38ull,0x2f2f093b38366625ull,0x203437353a646920ull,
0x625f616475635f5full,0x303037326b636f6cull,0x6c2e090a3078302bull,0x383109363109636full,
0x646461090a300936ull,0x662509203233662eull,0x36366625202c3936ull,0x203b31356625202cull,
0x0a202f2f09202020ull,0x3233662e6c756d09ull,0x202c303766250920ull,0x6625202c33356625ull,
0x09202020203b3936ull,0x2e7473090a202f2full,0x662e646572616873ull,0x6472255b09203233ull,
0x2c5d3436322b3831ull,0x2f093b3037662520ull,0x3537353a6469202full,0x5f616475635f5f20ull,
0x3037326b636f6c62ull,0x2e090a3078302b30ull,0x3109363109636f6cull,0x7573090a30093738ull,
0x2509203233662e62ull,0x366625202c313766ull,0x3b36346625202c33ull,0x202f2f0920202020ull,
0x33662e6c756d090aull,0x2c32376625092032ull,0x25202c3335662520ull,0x202020203b313766ull,
0x7473090a202f2f09ull,0x2e6465726168732eull,0x72255b0920323366ull,0x5d3239372b383164ull,
0x093b32376625202cull,0x37353a6469202f2full,0x616475635f5f2036ull,0x37326b636f6c625full,
0x090a3078302b3030ull,0x09363109636f6c2eull,0x62090a3009373933ull,0x20636e79732e7261ull,
0x20202020203b3009ull,0x2020202020202020ull,0x2f2f092020202020ull,0x09636f6c2e090a20ull,
0x3009333631093631ull,0x33752e646461090aull,0x2c30327225092032ull,0x7225202c34722520ull,
0x20202020203b3231ull,0x756d090a202f2f09ull,0x3233752e6f6c2e6cull,0x202c313272250920ull,
0x3333202c30327225ull,0x202f2f092020203bull,0x36752e747663090aull,0x2509203233752e34ull,
0x7225202c39316472ull,0x20202020203b3132ull,0x6461090a202f2f09ull,0x2509203436752e64ull,
0x7225202c30326472ull,0x647225202c393164ull,0x202f2f09203b3431ull,0x36752e747663090aull,
0x2509203233752e34ull,0x7225202c31326472ull,0x20202020203b3231ull,0x7573090a202f2f09ull,
0x2509203436752e62ull,0x7225202c32326472ull,0x647225202c303264ull,0x202f2f09203b3132ull,
0x6f6c2e6c756d090aull,0x722509203436752eull,0x647225202c333264ull,0x20203b34202c3232ull,
0x6461090a202f2f09ull,0x2509203436752e64ull,0x7225202c34326472ull,0x32647225202c3164ull,
0x202f2f0920203b33ull,0x6168732e646c090aull,0x203233662e646572ull,0x5b202c3337662509ull,
0x5d302b3432647225ull,0x3a6469202f2f093bull,0x75635f5f20373735ull,0x6b636f6c625f6164ull,
0x3078302b30303732ull,0x6168732e646c090aull,0x203233662e646572ull,0x5b202c3437662509ull,
0x36312b3432647225ull,0x6469202f2f093b5dull,0x635f5f203837353aull,0x636f6c625f616475ull,
0x78302b303037326bull,0x662e646461090a30ull,0x3131662509203233ull,0x202c33376625202cull,
0x2020203b34376625ull,0x2e090a202f2f0920ull,0x3109363109636f6cull,0x646c090a30093436ull,
0x2e6465726168732eull,0x3766250920323366ull,0x326472255b202c35ull,0x2f093b5d34322b34ull,
0x3937353a6469202full,0x5f616475635f5f20ull,0x3037326b636f6c62ull,0x6c090a3078302b30ull,
0x6465726168732e64ull,0x662509203233662eull,0x6472255b202c3637ull,0x2f093b5d382b3432ull,
0x3038353a6469202full,0x5f616475635f5f20ull,0x3037326b636f6c62ull,0x6d090a3078302b30ull,
0x09203233662e6c75ull,0x6625202c37376625ull,0x35316625202c3537ull,0x2f2f09202020203bull,
0x662e64616d090a20ull,0x3731662509203233ull,0x202c36376625202cull,0x6625202c34316625ull,
0x0a202f2f093b3737ull,0x363109636f6c2e09ull,0x090a300938363109ull,0x65726168732e646cull,
0x2509203233662e64ull,0x72255b202c383766ull,0x3b5d38322b343264ull,0x353a6469202f2f09ull,
0x6475635f5f203138ull,0x326b636f6c625f61ull,0x0a3078302b303037ull,0x726168732e646c09ull,
0x09203233662e6465ull,0x255b202c39376625ull,0x3b5d342b34326472ull,0x353a6469202f2f09ull,
0x6475635f5f203238ull,0x326b636f6c625f61ull,0x0a3078302b303037ull,0x726168732e646c09ull,
0x09203233662e6465ull,0x255b202c30386625ull,0x5d32312b34326472ull,0x3a6469202f2f093bull,
0x75635f5f20333835ull,0x6b636f6c625f6164ull,0x3078302b30303732ull,0x6168732e646c090aull,
0x203233662e646572ull,0x5b202c3138662509ull,0x30322b3432647225ull,0x6469202f2f093b5dull,
0x635f5f203438353aull,0x636f6c625f616475ull,0x78302b303037326bull,0x662e6c756d090a30ull,
0x3238662509203233ull,0x202c38376625202cull,0x2020203b35326625ull,0x6d090a202f2f0920ull,
0x09203233662e6461ull,0x6625202c33386625ull,0x34326625202c3937ull,0x093b32386625202cull,
0x64616d090a202f2full,0x662509203233662eull,0x30386625202c3438ull,0x202c33326625202cull,
0x2f2f093b33386625ull,0x662e64616d090a20ull,0x3932662509203233ull,0x202c31386625202cull,
0x6625202c32326625ull,0x0a202f2f093b3438ull,0x363109636f6c2e09ull,0x090a300939363109ull,
0x203233662e6c756dull,0x25202c3538662509ull,0x326625202c393766ull,0x2f09202020203b35ull,
0x2e6c756d090a202full,0x3866250920323366ull,0x2c38376625202c36ull,0x20203b3432662520ull,
0x090a202f2f092020ull,0x203233662e627573ull,0x25202c3738662509ull,0x386625202c363866ull,
0x2f09202020203b35ull,0x2e64616d090a202full,0x3866250920323366ull,0x2c30386625202c38ull,
0x25202c3232662520ull,0x202f2f093b373866ull,0x33662e6c756d090aull,0x2c39386625092032ull,
0x25202c3138662520ull,0x202020203b333266ull,0x7573090a202f2f09ull,0x2509203233662e62ull,
0x386625202c353366ull,0x3b39386625202c38ull,0x202f2f0920202020ull,0x3109636f6c2e090aull,
0x0a30093137310936ull,0x3233662e62757309ull,0x202c363366250920ull,0x6625202c33376625ull,
0x09202020203b3437ull,0x6f6c2e090a202f2full,0x3237310936310963ull,0x2e6c756d090a3009ull,
0x3966250920323366ull,0x2c35376625202c30ull,0x20203b3431662520ull,0x090a202f2f092020ull,
0x203233662e6c756dull,0x25202c3139662509ull,0x316625202c363766ull,0x2f09202020203b35ull,
0x2e627573090a202full,0x3366250920323366ull,0x2c31396625202c39ull,0x20203b3039662520ull,
0x090a202f2f092020ull,0x09363109636f6c2eull,0x6d090a3009363731ull,0x09203233662e6c75ull,
0x6625202c32396625ull,0x32326625202c3837ull,0x2f2f09202020203bull,0x662e6c756d090a20ull,
0x3339662509203233ull,0x202c39376625202cull,0x2020203b33326625ull,0x73090a202f2f0920ull,
0x09203233662e6275ull,0x6625202c34396625ull,0x32396625202c3339ull,0x2f2f09202020203bull,
0x662e6c756d090a20ull,0x3539662509203233ull,0x202c30386625202cull,0x2020203b35326625ull,
0x73090a202f2f0920ull,0x09203233662e6275ull,0x6625202c36396625ull,0x35396625202c3439ull,
0x2f2f09202020203bull,0x662e6c756d090a20ull,0x3739662509203233ull,0x202c31386625202cull,
0x2020203b34326625ull,0x73090a202f2f0920ull,0x09203233662e6275ull,0x6625202c36346625ull,
0x37396625202c3639ull,0x2f2f09202020203bull,0x09636f6c2e090a20ull,0x3009373731093631ull,
0x33662e6c756d090aull,0x2c38396625092032ull,0x25202c3837662520ull,0x202020203b333266ull,
0x616d090a202f2f09ull,0x2509203233662e64ull,0x376625202c393966ull,0x2c32326625202c39ull,
0x2f093b3839662520ull,0x2e6c756d090a202full,0x3166250920323366ull,0x30386625202c3030ull,
0x203b34326625202cull,0x090a202f2f092020ull,0x203233662e627573ull,0x202c313031662509ull,
0x6625202c39396625ull,0x2f0920203b303031ull,0x2e64616d090a202full,0x3566250920323366ull,
0x2c31386625202c31ull,0x25202c3532662520ull,0x2f2f093b31303166ull,0x09636f6c2e090a20ull,
0x3009393731093631ull,0x33662e646461090aull,0x2c32356625092032ull,0x25202c3131662520ull,
0x202020203b373166ull,0x6461090a202f2f09ull,0x2509203233662e64ull,0x6625202c32303166ull,
0x39326625202c3235ull,0x202f2f092020203bull,0x33662e6c756d090aull,0x3330316625092032ull,
0x202c33356625202cull,0x20203b3230316625ull,0x7473090a202f2f09ull,0x2e6465726168732eull,
0x72255b0920323366ull,0x202c5d302b343264ull,0x2f093b3330316625ull,0x3538353a6469202full,
0x5f616475635f5f20ull,0x3037326b636f6c62ull,0x2e090a3078302b30ull,0x3109363109636f6cull,
0x7573090a30093038ull,0x2509203233662e62ull,0x6625202c34303166ull,0x39326625202c3235ull,
0x202f2f092020203bull,0x33662e6c756d090aull,0x3530316625092032ull,0x202c33356625202cull,
0x20203b3430316625ull,0x7473090a202f2f09ull,0x2e6465726168732eull,0x72255b0920323366ull,
0x2c5d38322b343264ull,0x093b353031662520ull,0x38353a6469202f2full,0x616475635f5f2036ull,
0x37326b636f6c625full,0x090a3078302b3030ull,0x09363109636f6c2eull,0x73090a3009313831ull,
0x09203233662e6275ull,0x6625202c38356625ull,0x37316625202c3131ull,0x2f2f09202020203bull,
0x662e646461090a20ull,0x3031662509203233ull,0x2c38356625202c36ull,0x20203b3533662520ull,
0x6d090a202f2f0920ull,0x09203233662e6c75ull,0x25202c3730316625ull,0x316625202c333566ull,
0x2f2f0920203b3630ull,0x68732e7473090a20ull,0x3233662e64657261ull,0x34326472255b0920ull,
0x6625202c5d36312bull,0x202f2f093b373031ull,0x5f203738353a6469ull,0x6c625f616475635full,
0x2b303037326b636full,0x6f6c2e090a307830ull,0x3238310936310963ull,0x2e627573090a3009ull,
0x3166250920323366ull,0x38356625202c3830ull,0x203b35336625202cull,0x090a202f2f092020ull,
0x203233662e6c756dull,0x202c393031662509ull,0x6625202c33356625ull,0x2f0920203b383031ull,
0x732e7473090a202full,0x33662e6465726168ull,0x326472255b092032ull,0x25202c5d32312b34ull,
0x2f2f093b39303166ull,0x203838353a646920ull,0x625f616475635f5full,0x303037326b636f6cull,
0x6c2e090a3078302bull,0x383109363109636full,0x646461090a300934ull,0x662509203233662eull,
0x36336625202c3336ull,0x203b39336625202cull,0x0a202f2f09202020ull,0x3233662e64646109ull,
0x2c30313166250920ull,0x25202c3336662520ull,0x092020203b363466ull,0x6c756d090a202f2full,
0x662509203233662eull,0x356625202c313131ull,0x3031316625202c33ull,0x0a202f2f0920203bull,
0x726168732e747309ull,0x09203233662e6465ull,0x342b34326472255bull,0x3131316625202c5dull,
0x3a6469202f2f093bull,0x75635f5f20393835ull,0x6b636f6c625f6164ull,0x3078302b30303732ull,
0x3109636f6c2e090aull,0x0a30093538310936ull,0x3233662e62757309ull,0x202c363666250920ull,
0x6625202c36336625ull,0x09202020203b3933ull,0x627573090a202f2full,0x662509203233662eull,
0x366625202c323131ull,0x3b31356625202c36ull,0x0a202f2f09202020ull,0x3233662e6c756d09ull,
0x2c33313166250920ull,0x25202c3335662520ull,0x0920203b32313166ull,0x2e7473090a202f2full,
0x662e646572616873ull,0x6472255b09203233ull,0x202c5d30322b3432ull,0x2f093b3331316625ull,
0x3039353a6469202full,0x5f616475635f5f20ull,0x3037326b636f6c62ull,0x2e090a3078302b30ull,
0x3109363109636f6cull,0x6461090a30093638ull,0x2509203233662e64ull,0x6625202c34313166ull,
0x31356625202c3636ull,0x202f2f092020203bull,0x33662e6c756d090aull,0x3531316625092032ull,
0x202c33356625202cull,0x20203b3431316625ull,0x7473090a202f2f09ull,0x2e6465726168732eull,
0x72255b0920323366ull,0x202c5d382b343264ull,0x2f093b3531316625ull,0x3139353a6469202full,
0x5f616475635f5f20ull,0x3037326b636f6c62ull,0x2e090a3078302b30ull,0x3109363109636f6cull,
0x7573090a30093738ull,0x2509203233662e62ull,0x6625202c36313166ull,0x36346625202c3336ull,
0x202f2f092020203bull,0x33662e6c756d090aull,0x3731316625092032ull,0x202c33356625202cull,
0x20203b3631316625ull,0x7473090a202f2f09ull,0x2e6465726168732eull,0x72255b0920323366ull,
0x2c5d34322b343264ull,0x093b373131662520ull,0x39353a6469202f2full,0x616475635f5f2032ull,
0x37326b636f6c625full,0x090a3078302b3030ull,0x09363109636f6c2eull,0x62090a3009323034ull,
0x20636e79732e7261ull,0x20202020203b3009ull,0x2020202020202020ull,0x2f2f092020202020ull,
0x09636f6c2e090a20ull,0x3009353034093631ull,0x33732e766f6d090aull,0x2c32327225092032ull,
0x20202020203b3720ull,0x2020202020202020ull,0x756d090a202f2f09ull,0x732e6f6c2e34326cull,
0x3332722509203233ull,0x202c34317225202cull,0x2f2f093b32327225ull,0x732e747663090a20ull,
0x09203233732e3436ull,0x25202c3532647225ull,0x202020203b333272ull,0x6d090a202f2f0920ull,
0x36752e6f6c2e6c75ull,0x3632647225092034ull,0x2c3532647225202cull,0x2f2f0920203b3420ull,
0x752e627573090a20ull,0x3164722509203436ull,0x3331647225202c33ull,0x3b3632647225202cull,
0x2e090a202f2f0920ull,0x3409363109636f6cull,0x646c090a30093730ull,0x2e6465726168732eull,
0x3166250920323366ull,0x6472255b202c3831ull,0x2f2f093b5d302b34ull,0x203339353a646920ull,
0x625f616475635f5full,0x303037326b636f6cull,0x7473090a3078302bull,0x2e6c61626f6c672eull,
0x72255b0920323366ull,0x202c5d302b333164ull,0x2f093b3831316625ull,0x3439353a6469202full,
0x3109636f6c2e090aull,0x0a30093830340936ull,0x3436752e64646109ull,0x2c33316472250920ull,
0x202c303164722520ull,0x09203b3331647225ull,0x6f6c2e090a202f2full,0x3131340936310963ull,
0x732e646c090a3009ull,0x33662e6465726168ull,0x3931316625092032ull,0x2b346472255b202cull,
0x2f2f093b5d323331ull,0x203539353a646920ull,0x625f616475635f5full,0x303037326b636f6cull,
0x7473090a3078302bull,0x2e6c61626f6c672eull,0x72255b0920323366ull,0x202c5d302b333164ull,
0x2f093b3931316625ull,0x3639353a6469202full,0x3109636f6c2e090aull,0x0a30093231340936ull,
0x3436752e64646109ull,0x2c33316472250920ull,0x202c303164722520ull,0x09203b3331647225ull,
0x6f6c2e090a202f2full,0x3531340936310963ull,0x732e646c090a3009ull,0x33662e6465726168ull,
0x3032316625092032ull,0x2b346472255b202cull,0x2f2f093b5d343632ull,0x203739353a646920ull,
0x625f616475635f5full,0x303037326b636f6cull,0x7473090a3078302bull,0x2e6c61626f6c672eull,
0x72255b0920323366ull,0x202c5d302b333164ull,0x2f093b3032316625ull,0x3839353a6469202full,
0x3109636f6c2e090aull,0x0a30093631340936ull,0x3436752e64646109ull,0x2c33316472250920ull,
0x202c303164722520ull,0x09203b3331647225ull,0x6f6c2e090a202f2full,0x3931340936310963ull,
0x732e646c090a3009ull,0x33662e6465726168ull,0x3132316625092032ull,0x2b346472255b202cull,
0x2f2f093b5d363933ull,0x203939353a646920ull,0x625f616475635f5full,0x303037326b636f6cull,
0x7473090a3078302bull,0x2e6c61626f6c672eull,0x72255b0920323366ull,0x202c5d302b333164ull,
0x2f093b3132316625ull,0x3030363a6469202full,0x3109636f6c2e090aull,0x0a30093032340936ull,
0x3436752e64646109ull,0x2c33316472250920ull,0x202c303164722520ull,0x09203b3331647225ull,
0x6f6c2e090a202f2full,0x3332340936310963ull,0x732e646c090a3009ull,0x33662e6465726168ull,
0x3232316625092032ull,0x2b346472255b202cull,0x2f2f093b5d383235ull,0x203130363a646920ull,
0x625f616475635f5full,0x303037326b636f6cull,0x7473090a3078302bull,0x2e6c61626f6c672eull,
0x72255b0920323366ull,0x202c5d302b333164ull,0x2f093b3232316625ull,0x3230363a6469202full,
0x3109636f6c2e090aull,0x0a30093432340936ull,0x3436752e64646109ull,0x2c33316472250920ull,
0x202c303164722520ull,0x09203b3331647225ull,0x6f6c2e090a202f2full,0x3732340936310963ull,
0x732e646c090a3009ull,0x33662e6465726168ull,0x3332316625092032ull,0x2b346472255b202cull,
0x2f2f093b5d303636ull,0x203330363a646920ull,0x625f616475635f5full,0x303037326b636f6cull,
0x7473090a3078302bull,0x2e6c61626f6c672eull,0x72255b0920323366ull,0x202c5d302b333164ull,
0x2f093b3332316625ull,0x3430363a6469202full,0x3109636f6c2e090aull,0x0a30093832340936ull,
0x3436752e64646109ull,0x2c33316472250920ull,0x202c303164722520ull,0x09203b3331647225ull,
0x6f6c2e090a202f2full,0x3133340936310963ull,0x732e646c090a3009ull,0x33662e6465726168ull,
0x3432316625092032ull,0x2b346472255b202cull,0x2f2f093b5d323937ull,0x203530363a646920ull,
0x625f616475635f5full,0x303037326b636f6cull,0x7473090a3078302bull,0x2e6c61626f6c672eull,
0x72255b0920323366ull,0x202c5d302b333164ull,0x2f093b3432316625ull,0x3630363a6469202full,
0x3109636f6c2e090aull,0x0a30093533340936ull,0x726168732e646c09ull,0x09203233662e6465ull,
0x5b202c3532316625ull,0x3432392b34647225ull,0x6469202f2f093b5dull,0x635f5f203730363aull,
0x636f6c625f616475ull,0x78302b303037326bull,0x752e646461090a30ull,0x3264722509203436ull,
0x3031647225202c37ull,0x3b3331647225202cull,0x73090a202f2f0920ull,0x6c61626f6c672e74ull,
0x255b09203233662eull,0x2c5d302b37326472ull,0x093b353231662520ull,0x30363a6469202f2full,
0x09636f6c2e090a38ull,0x3009363334093631ull,0x203b74697865090aull,0x2020202020202020ull,
0x2020202020202020ull,0x2020202020202020ull,0x444c240a202f2f09ull,0x315a5f5f646e6557ull,
0x72656b4144554335ull,0x54434449326c656eull,0x207d090a3a696650ull,0x4335315a5f202f2full,
0x656e72656b414455ull,0x665054434449326cull,0x746e652e090a0a69ull,0x4338315a5f207972ull,
0x656e72656b414455ull,0x434474726f68536cull,0x090a282069735054ull,0x206d617261702e09ull,
0x635f5f203436752eull,0x5f6d726170616475ull,0x4144554338315a5full,0x68536c656e72656bull,
0x735054434474726full,0x5f6c61765f5f5f69ull,0x6372536d61726170ull,0x2e09090a2c747344ull,
0x732e206d61726170ull,0x6475635f5f203233ull,0x5a5f5f6d72617061ull,0x656b414455433831ull,
0x726f68536c656e72ull,0x5f69735054434474ull,0x6469727453676d49ull,0x2e090a7b090a2965ull,
0x3233752e20676572ull,0x3e3635323c722520ull,0x206765722e090a3bull,0x647225203436752eull,
0x2e090a3b3e35323cull,0x6572702e20676572ull,0x3b3e333c70252064ull,0x65726168732e090aull,
0x6e67696c612e2064ull,0x5f2038622e203220ull,0x6c625f616475635full,0x5b383238346b636full,
0x090a3b5d36373132ull,0x34093309636f6c2eull,0x424c240a30093935ull,0x4338315a5f5f3142ull,
0x656e72656b414455ull,0x434474726f68536cull,0x6d090a3a69735054ull,0x09203436752e766full,
0x5f5f202c31647225ull,0x6f6c625f61647563ull,0x093b383238346b63ull,0x6f6c2e090a202f2full,
0x0932303509330963ull,0x732e747663090a30ull,0x09203631752e3233ull,0x697425202c317225ull,
0x202020203b7a2e64ull,0x73090a202f2f0920ull,0x09203233622e6c68ull,0x317225202c327225ull,
0x202020203b33202cull,0x2f2f092020202020ull,0x732e747663090a20ull,0x09203631752e3233ull,
0x697425202c337225ull,0x202020203b792e64ull,0x73090a202f2f0920ull,0x09203233622e6c68ull,
0x337225202c347225ull,0x202020203b33202cull,0x2f2f092020202020ull,0x752e747663090a20ull,
0x09203631752e3233ull,0x697425202c357225ull,0x202020203b782e64ull,0x61090a202f2f0920ull,
0x09203233752e6464ull,0x347225202c367225ull,0x20203b357225202cull,0x2f2f092020202020ull,
0x622e6c6873090a20ull,0x2c37722509203233ull,0x3b31202c36722520ull,0x2020202020202020ull,
0x6c090a202f2f0920ull,0x2e6d617261702e64ull,0x3872250920323373ull,0x6475635f5f5b202cull,
0x5a5f5f6d72617061ull,0x656b414455433831ull,0x726f68536c656e72ull,0x5f69735054434474ull,
0x6469727453676d49ull,0x69202f2f093b5d65ull,0x5f5f203838343a64ull,0x6d72617061647563ull,
0x44554338315a5f5full,0x536c656e72656b41ull,0x5054434474726f68ull,0x7453676d495f6973ull,
0x3078302b65646972ull,0x7261702e646c090aull,0x09203436752e6d61ull,0x5f5b202c32647225ull,
0x726170616475635full,0x554338315a5f5f6dull,0x6c656e72656b4144ull,0x54434474726f6853ull,
0x61765f5f5f697350ull,0x536d617261705f6cull,0x093b5d7473446372ull,0x39343a6469202f2full,
0x616475635f5f2032ull,0x315a5f5f6d726170ull,0x72656b4144554338ull,0x74726f68536c656eull,
0x5f5f697350544344ull,0x7261705f6c61765full,0x7473446372536d61ull,0x7663090a3078302bull,
0x31752e3233732e74ull,0x202c397225092036ull,0x792e646961746325ull,0x202f2f092020203bull,
0x33622e6c6873090aull,0x2c30317225092032ull,0x3b35202c39722520ull,0x2020202020202020ull,
0x6461090a202f2f09ull,0x2509203233732e64ull,0x327225202c313172ull,0x203b30317225202cull,
0x202f2f0920202020ull,0x6f6c2e6c756d090aull,0x722509203233732eull,0x2c387225202c3231ull,
0x20203b3131722520ull,0x7663090a202f2f09ull,0x31752e3233732e74ull,0x2c33317225092036ull,
0x2e64696174632520ull,0x202f2f0920203b78ull,0x33622e6c6873090aull,0x2c34317225092032ull,
0x35202c3331722520ull,0x202020202020203bull,0x6461090a202f2f09ull,0x2509203233732e64ull,
0x317225202c353172ull,0x3b34317225202c32ull,0x202f2f0920202020ull,0x33732e646461090aull,
0x2c36317225092032ull,0x7225202c37722520ull,0x20202020203b3531ull,0x7663090a202f2f09ull,
0x33732e3436752e74ull,0x2c33647225092032ull,0x20203b3631722520ull,0x202f2f0920202020ull,
0x6f6c2e6c756d090aull,0x722509203436752eull,0x33647225202c3464ull,0x202020203b32202cull,
0x6461090a202f2f09ull,0x2509203436752e64ull,0x647225202c356472ull,0x3b34647225202c32ull,
0x202f2f0920202020ull,0x3309636f6c2e090aull,0x090a300930313509ull,0x203233732e766f6dull,
0x33202c3731722509ull,0x2020202020203b34ull,0x2f09202020202020ull,0x326c756d090a202full,
0x3233732e6f6c2e34ull,0x202c383172250920ull,0x317225202c327225ull,0x090a202f2f093b37ull,
0x203233732e646461ull,0x25202c3931722509ull,0x38317225202c3772ull,0x2f0920202020203bull,
0x2e747663090a202full,0x203233732e343675ull,0x25202c3664722509ull,0x202020203b393172ull,
0x090a202f2f092020ull,0x752e6f6c2e6c756dull,0x3764722509203436ull,0x202c36647225202cull,
0x2f09202020203b32ull,0x2e646461090a202full,0x6472250920343675ull,0x2c31647225202c38ull,
0x20203b3764722520ull,0x090a202f2f092020ull,0x203233732e766f6dull,0x31202c3032722509ull,
0x2020202020203b35ull,0x2f09202020202020ull,0x70746573090a202full,0x203233732e656c2eull,
0x7225202c31702509ull,0x3b30327225202c36ull,0x090a202f2f092020ull,0x7262203170252140ull,
0x345f744c24092061ull,0x20203b343937315full,0x2f09202020202020ull,0x636f6c2e090a202full,
0x3009353135093309ull,0x6f6c672e646c090aull,0x203233732e6c6162ull,0x5b202c3132722509ull,
0x3b5d302b35647225ull,0x343a6469202f2f09ull,0x732e7473090a3539ull,0x33732e6465726168ull,
0x386472255b092032ull,0x327225202c5d302bull,0x6469202f2f093b31ull,0x635f5f203639343aull,
0x636f6c625f616475ull,0x78302b383238346bull,0x09636f6c2e090a30ull,0x0a30093631350933ull,
0x3436752e74766309ull,0x722509203233732eull,0x3b387225202c3964ull,0x0920202020202020ull,
0x6c756d090a202f2full,0x203436752e6f6c2eull,0x202c303164722509ull,0x3b32202c39647225ull,
0x0a202f2f09202020ull,0x3436752e64646109ull,0x202c356472250920ull,0x25202c3031647225ull,
0x092020203b356472ull,0x6f6c2e090a202f2full,0x0939313509330963ull,0x6c672e646c090a30ull,
0x3233732e6c61626full,0x202c323272250920ull,0x5d302b356472255bull,0x3a6469202f2f093bull,
0x2e7473090a373934ull,0x732e646572616873ull,0x6472255b09203233ull,0x25202c5d38362b38ull,
0x202f2f093b323272ull,0x5f203839343a6469ull,0x6c625f616475635full,0x2b383238346b636full,
0x6f6c2e090a307830ull,0x0930323509330963ull,0x752e646461090a30ull,0x3564722509203436ull,
0x2c3031647225202cull,0x20203b3564722520ull,0x2e090a202f2f0920ull,0x3235093309636f6cull,
0x2e646c090a300933ull,0x732e6c61626f6c67ull,0x3332722509203233ull,0x2b356472255b202cull,
0x69202f2f093b5d30ull,0x73090a3939343a64ull,0x6465726168732e74ull,0x255b09203233732eull,
0x5d3633312b386472ull,0x093b33327225202cull,0x30353a6469202f2full,0x616475635f5f2030ull,
0x38346b636f6c625full,0x090a3078302b3832ull,0x35093309636f6c2eull,0x6461090a30093432ull,
0x2509203436752e64ull,0x647225202c356472ull,0x35647225202c3031ull,0x202f2f092020203bull,
0x3309636f6c2e090aull,0x090a300937323509ull,0x61626f6c672e646cull,0x2509203233732e6cull,
0x72255b202c343272ull,0x2f093b5d302b3564ull,0x3130353a6469202full,0x6168732e7473090aull,
0x203233732e646572ull,0x322b386472255b09ull,0x327225202c5d3430ull,0x6469202f2f093b34ull,
0x635f5f203230353aull,0x636f6c625f616475ull,0x78302b383238346bull,0x09636f6c2e090a30ull,
0x0a30093832350933ull,0x3436752e64646109ull,0x202c356472250920ull,0x25202c3031647225ull,
0x092020203b356472ull,0x6f6c2e090a202f2full,0x0931333509330963ull,0x6c672e646c090a30ull,
0x3233732e6c61626full,0x202c353272250920ull,0x5d302b356472255bull,0x3a6469202f2f093bull,
0x2e7473090a333035ull,0x732e646572616873ull,0x6472255b09203233ull,0x202c5d3237322b38ull,
0x2f2f093b35327225ull,0x203430353a646920ull,0x625f616475635f5full,0x383238346b636f6cull,
0x6c2e090a3078302bull,0x323335093309636full,0x2e646461090a3009ull,0x6472250920343675ull,
0x3031647225202c35ull,0x203b35647225202cull,0x090a202f2f092020ull,0x35093309636f6c2eull,
0x646c090a30093533ull,0x2e6c61626f6c672eull,0x3272250920323373ull,0x356472255b202c36ull,
0x202f2f093b5d302bull,0x090a3530353a6469ull,0x65726168732e7473ull,0x5b09203233732e64ull,
0x3034332b38647225ull,0x3b36327225202c5dull,0x353a6469202f2f09ull,0x6475635f5f203630ull,
0x346b636f6c625f61ull,0x0a3078302b383238ull,0x093309636f6c2e09ull,0x61090a3009363335ull,
0x09203436752e6464ull,0x7225202c35647225ull,0x647225202c303164ull,0x2f2f092020203b35ull,
0x09636f6c2e090a20ull,0x0a30093933350933ull,0x626f6c672e646c09ull,0x09203233732e6c61ull,
0x255b202c37327225ull,0x093b5d302b356472ull,0x30353a6469202f2full,0x68732e7473090a37ull,
0x3233732e64657261ull,0x2b386472255b0920ull,0x7225202c5d383034ull,0x69202f2f093b3732ull,
0x5f5f203830353a64ull,0x6f6c625f61647563ull,0x302b383238346b63ull,0x636f6c2e090a3078ull,
0x3009303435093309ull,0x36752e646461090aull,0x2c35647225092034ull,0x202c303164722520ull,
0x2020203b35647225ull,0x6c2e090a202f2f09ull,0x313435093309636full,0x2e646461090a3009ull,
0x6472250920343675ull,0x2c38647225202c38ull,0x2020203b36373420ull,0x090a202f2f092020ull,
0x35093309636f6c2eull,0x646c090a30093334ull,0x2e6c61626f6c672eull,0x3272250920323373ull,
0x356472255b202c38ull,0x202f2f093b5d302bull,0x090a3930353a6469ull,0x65726168732e7473ull,
0x5b09203233732e64ull,0x2c5d302b38647225ull,0x2f093b3832722520ull,0x3031353a6469202full,
0x5f616475635f5f20ull,0x3238346b636f6c62ull,0x4c240a3078302b38ull,0x343937315f345f74ull,
0x09636f6c2e090a3aull,0x0a30093634350933ull,0x6e79732e72616209ull,0x2020203b30092063ull,
0x2020202020202020ull,0x0920202020202020ull,0x6f6c2e090a202f2full,0x0938353109330963ull,
0x732e726873090a30ull,0x3932722509203233ull,0x34202c367225202cull,0x202020202020203bull,
0x61090a202f2f0920ull,0x09203233622e646eull,0x7225202c30337225ull,0x20203b31202c3932ull,
0x2f2f092020202020ull,0x33622e726f090a20ull,0x2c31337225092032ull,0x7225202c37722520ull,
0x20202020203b3033ull,0x6d090a202f2f0920ull,0x33732e6f6c2e6c75ull,0x2c32337225092032ull,
0x3433202c32722520ull,0x2f2f09202020203bull,0x732e747663090a20ull,0x09203233732e3436ull,
0x25202c3131647225ull,0x202020203b323372ull,0x61090a202f2f0920ull,0x09203233622e646eull,
0x7225202c33337225ull,0x203b3133202c3133ull,0x2f2f092020202020ull,0x622e646e61090a20ull,
0x3433722509203233ull,0x2d202c367225202cull,0x20202020203b3233ull,0x6f090a202f2f0920ull,
0x2509203233622e72ull,0x337225202c353372ull,0x3b34337225202c33ull,0x2f2f092020202020ull,
0x752e747663090a20ull,0x09203233732e3436ull,0x25202c3231647225ull,0x202020203b353372ull,
0x61090a202f2f0920ull,0x09203436752e6464ull,0x25202c3331647225ull,0x7225202c31316472ull,
0x2f2f09203b323164ull,0x6c2e6c756d090a20ull,0x2509203436752e6full,0x7225202c34316472ull,
0x203b32202c333164ull,0x61090a202f2f0920ull,0x09203436752e6464ull,0x25202c3531647225ull,
0x647225202c316472ull,0x2f2f0920203b3431ull,0x68732e646c090a20ull,0x3631732e64657261ull,
0x202c363372250920ull,0x302b35316472255bull,0x6469202f2f093b5dull,0x635f5f203131353aull,
0x636f6c625f616475ull,0x78302b383238346bull,0x09636f6c2e090a30ull,0x0a30093036310933ull,
0x726168732e646c09ull,0x09203631732e6465ull,0x255b202c37337225ull,0x5d38362b35316472ull,
0x3a6469202f2f093bull,0x75635f5f20323135ull,0x6b636f6c625f6164ull,0x3078302b38323834ull,
0x3309636f6c2e090aull,0x090a300932363109ull,0x65726168732e646cull,0x2509203631732e64ull,
0x72255b202c383372ull,0x5d3633312b353164ull,0x3a6469202f2f093bull,0x75635f5f20333135ull,
0x6b636f6c625f6164ull,0x3078302b38323834ull,0x3309636f6c2e090aull,0x090a300934363109ull,
0x65726168732e646cull,0x2509203631732e64ull,0x72255b202c393372ull,0x5d3430322b353164ull,
0x3a6469202f2f093bull,0x75635f5f20343135ull,0x6b636f6c625f6164ull,0x3078302b38323834ull,
0x3309636f6c2e090aull,0x090a300936363109ull,0x65726168732e646cull,0x2509203631732e64ull,
0x72255b202c303472ull,0x5d3237322b353164ull,0x3a6469202f2f093bull,0x75635f5f20353135ull,
0x6b636f6c625f6164ull,0x3078302b38323834ull,0x3309636f6c2e090aull,0x090a300938363109ull,
0x65726168732e646cull,0x2509203631732e64ull,0x72255b202c313472ull,0x5d3034332b353164ull,
0x3a6469202f2f093bull,0x75635f5f20363135ull,0x6b636f6c625f6164ull,0x3078302b38323834ull,
0x3309636f6c2e090aull,0x090a300930373109ull,0x65726168732e646cull,0x2509203631732e64ull,
0x72255b202c323472ull,0x5d3830342b353164ull,0x3a6469202f2f093bull,0x75635f5f20373135ull,
0x6b636f6c625f6164ull,0x3078302b38323834ull,0x3309636f6c2e090aull,0x090a300932373109ull,
0x65726168732e646cull,0x2509203631732e64ull,0x72255b202c333472ull,0x5d3637342b353164ull,
0x3a6469202f2f093bull,0x75635f5f20383135ull,0x6b636f6c625f6164ull,0x3078302b38323834ull,
0x3309636f6c2e090aull,0x090a300930303209ull,0x203233732e646461ull,0x25202c3434722509ull,
0x347225202c363372ull,0x2f09202020203b33ull,0x2e646461090a202full,0x3472250920323373ull,
0x2c39337225202c35ull,0x20203b3034722520ull,0x090a202f2f092020ull,0x203233732e646461ull,
0x25202c3634722509ull,0x347225202c373372ull,0x2f09202020203b32ull,0x2e646461090a202full,
0x3472250920323373ull,0x2c38337225202c37ull,0x20203b3134722520ull,0x090a202f2f092020ull,
0x203233732e646461ull,0x25202c3834722509ull,0x347225202c343472ull,0x2f09202020203b35ull,
0x2e646461090a202full,0x3472250920323373ull,0x2c36347225202c39ull,0x20203b3734722520ull,
0x090a202f2f092020ull,0x203233732e646461ull,0x25202c3035722509ull,0x347225202c383472ull,
0x2f09202020203b39ull,0x2e766f6d090a202full,0x3572250920323373ull,0x3037313332202c31ull,
0x202020202020203bull,0x090a202f2f092020ull,0x6f6c2e34326c756dull,0x722509203233732eull,
0x30357225202c3235ull,0x093b31357225202cull,0x646461090a202f2full,0x722509203233732eull,
0x32357225202c3335ull,0x3b3836373233202cull,0x0a202f2f09202020ull,0x3233732e72687309ull,
0x202c343572250920ull,0x3631202c33357225ull,0x092020202020203bull,0x2e7473090a202f2full,
0x732e646572616873ull,0x6472255b09203631ull,0x25202c5d302b3531ull,0x202f2f093b343572ull,
0x5f203931353a6469ull,0x6c625f616475635full,0x2b383238346b636full,0x6f6c2e090a307830ull,
0x0932303209330963ull,0x732e627573090a30ull,0x3535722509203233ull,0x202c34347225202cull,
0x2020203b35347225ull,0x73090a202f2f0920ull,0x09203233732e6275ull,0x7225202c36357225ull,
0x37347225202c3634ull,0x2f2f09202020203bull,0x732e766f6d090a20ull,0x3735722509203233ull,
0x3b3437323033202cull,0x2020202020202020ull,0x6d090a202f2f0920ull,0x2e6f6c2e34326c75ull,
0x3572250920323373ull,0x2c35357225202c38ull,0x2f093b3735722520ull,0x2e766f6d090a202full,
0x3572250920323373ull,0x3034353231202c39ull,0x202020202020203bull,0x090a202f2f092020ull,
0x6f6c2e34326c756dull,0x722509203233732eull,0x36357225202c3036ull,0x093b39357225202cull,
0x646461090a202f2full,0x722509203233732eull,0x38357225202c3136ull,0x203b30367225202cull,
0x0a202f2f09202020ull,0x3233732e64646109ull,0x202c323672250920ull,0x3233202c31367225ull,
0x092020203b383637ull,0x726873090a202f2full,0x722509203233732eull,0x32367225202c3336ull,
0x2020203b3631202cull,0x0a202f2f09202020ull,0x726168732e747309ull,0x09203631732e6465ull,
0x312b35316472255bull,0x367225202c5d3633ull,0x6469202f2f093b33ull,0x635f5f203032353aull,
0x636f6c625f616475ull,0x78302b383238346bull,0x09636f6c2e090a30ull,0x0a30093430320933ull,
0x3233732e62757309ull,0x202c343672250920ull,0x7225202c38347225ull,0x09202020203b3934ull,
0x766f6d090a202f2full,0x722509203233732eull,0x37313332202c3536ull,0x2020202020203b30ull,
0x0a202f2f09202020ull,0x6c2e34326c756d09ull,0x2509203233732e6full,0x367225202c363672ull,
0x3b35367225202c34ull,0x6461090a202f2f09ull,0x2509203233732e64ull,0x367225202c373672ull,
0x3836373233202c36ull,0x202f2f092020203bull,0x33732e726873090aull,0x2c38367225092032ull,
0x31202c3736722520ull,0x2020202020203b36ull,0x7473090a202f2f09ull,0x2e6465726168732eull,
0x72255b0920363173ull,0x5d3237322b353164ull,0x093b38367225202cull,0x32353a6469202f2full,
0x616475635f5f2031ull,0x38346b636f6c625full,0x090a3078302b3832ull,0x32093309636f6c2eull,
0x6f6d090a30093630ull,0x2509203233732e76ull,0x353231202c393672ull,0x20202020203b3034ull,
0x202f2f0920202020ull,0x2e34326c756d090aull,0x09203233732e6f6cull,0x7225202c30377225ull,
0x39367225202c3535ull,0x6d090a202f2f093bull,0x09203233732e766full,0x3033202c31377225ull,
0x202020203b343732ull,0x2f2f092020202020ull,0x34326c756d090a20ull,0x203233732e6f6c2eull,
0x25202c3237722509ull,0x377225202c363572ull,0x090a202f2f093b31ull,0x203233732e627573ull,
0x25202c3337722509ull,0x377225202c303772ull,0x2f09202020203b32ull,0x2e646461090a202full,
0x3772250920323373ull,0x2c33377225202c34ull,0x203b383637323320ull,0x090a202f2f092020ull,
0x203233732e726873ull,0x25202c3537722509ull,0x3b3631202c343772ull,0x2f09202020202020ull,
0x732e7473090a202full,0x31732e6465726168ull,0x316472255b092036ull,0x202c5d3830342b35ull,
0x2f2f093b35377225ull,0x203232353a646920ull,0x625f616475635f5full,0x383238346b636f6cull,
0x6c2e090a3078302bull,0x393032093309636full,0x2e627573090a3009ull,0x3772250920323373ull,
0x2c37337225202c36ull,0x20203b3234722520ull,0x090a202f2f092020ull,0x203233732e627573ull,
0x25202c3737722509ull,0x347225202c383372ull,0x2f09202020203b31ull,0x2e627573090a202full,
0x3772250920323373ull,0x2c39337225202c38ull,0x20203b3034722520ull,0x090a202f2f092020ull,
0x203233732e627573ull,0x25202c3937722509ull,0x347225202c363372ull,0x2f09202020203b33ull,
0x2e627573090a202full,0x3872250920323373ull,0x2c36377225202c30ull,0x20203b3737722520ull,
0x090a202f2f092020ull,0x203233732e646461ull,0x25202c3138722509ull,0x377225202c363772ull,
0x2f09202020203b37ull,0x2e6c6873090a202full,0x3872250920323362ull,0x2c38377225202c32ull,
0x20202020203b3220ull,0x090a202f2f092020ull,0x203233622e6c6873ull,0x25202c3338722509ull,
0x203b32202c393772ull,0x2f09202020202020ull,0x2e766f6d090a202full,0x3872250920323373ull,
0x3037313332202c34ull,0x202020202020203bull,0x090a202f2f092020ull,0x6f6c2e34326c756dull,
0x722509203233732eull,0x30387225202c3538ull,0x093b34387225202cull,0x766f6d090a202f2full,
0x722509203233732eull,0x37313332202c3638ull,0x2020202020203b30ull,0x0a202f2f09202020ull,
0x6c2e34326c756d09ull,0x2509203233732e6full,0x387225202c373872ull,0x3b36387225202c31ull,
0x6461090a202f2f09ull,0x2509203233732e64ull,0x387225202c383872ull,0x3b36393034202c35ull,
0x202f2f0920202020ull,0x33732e646461090aull,0x2c39387225092032ull,0x34202c3738722520ull,
0x202020203b363930ull,0x6873090a202f2f09ull,0x2509203233732e72ull,0x387225202c303972ull,
0x20203b3331202c38ull,0x202f2f0920202020ull,0x33732e726873090aull,0x2c31397225092032ull,
0x31202c3938722520ull,0x2020202020203b33ull,0x6461090a202f2f09ull,0x2509203233732e64ull,
0x387225202c323972ull,0x3b30397225202c32ull,0x202f2f0920202020ull,0x33732e646461090aull,
0x2c33397225092032ull,0x25202c3338722520ull,0x202020203b313972ull,0x6f6d090a202f2f09ull,
0x2509203233732e76ull,0x393531202c343972ull,0x2020202020203b38ull,0x202f2f0920202020ull,
0x2e34326c756d090aull,0x09203233732e6f6cull,0x7225202c35397225ull,0x34397225202c3239ull,
0x6d090a202f2f093bull,0x09203233732e766full,0x3038202c36397225ull,0x20202020203b3533ull,
0x2f2f092020202020ull,0x34326c756d090a20ull,0x203233732e6f6c2eull,0x25202c3739722509ull,
0x397225202c333972ull,0x090a202f2f093b36ull,0x203233732e646461ull,0x25202c3839722509ull,
0x397225202c353972ull,0x2f09202020203b37ull,0x2e646461090a202full,0x3972250920323373ull,
0x2c38397225202c39ull,0x203b383637323320ull,0x090a202f2f092020ull,0x203233732e726873ull,
0x202c303031722509ull,0x3631202c39397225ull,0x2f0920202020203bull,0x732e7473090a202full,
0x31732e6465726168ull,0x316472255b092036ull,0x25202c5d38362b35ull,0x2f2f093b30303172ull,
0x203332353a646920ull,0x625f616475635f5full,0x383238346b636f6cull,0x6c2e090a3078302bull,
0x313132093309636full,0x2e627573090a3009ull,0x3172250920323373ull,0x32387225202c3130ull,
0x203b30397225202cull,0x090a202f2f092020ull,0x203233732e627573ull,0x202c323031722509ull,
0x7225202c33387225ull,0x2f092020203b3139ull,0x2e766f6d090a202full,0x3172250920323373ull,
0x31313836202c3330ull,0x202020202020203bull,0x090a202f2f092020ull,0x6f6c2e34326c756dull,
0x722509203233732eull,0x317225202c343031ull,0x30317225202c3230ull,0x090a202f2f093b33ull,
0x203233732e766f6dull,0x202c353031722509ull,0x2020203b31353534ull,0x2f09202020202020ull,
0x326c756d090a202full,0x3233732e6f6c2e34ull,0x2c36303172250920ull,0x202c313031722520ull,
0x2f093b3530317225ull,0x2e627573090a202full,0x3172250920323373ull,0x30317225202c3730ull,
0x3630317225202c34ull,0x090a202f2f09203bull,0x203233732e646461ull,0x202c383031722509ull,
0x33202c3730317225ull,0x2f09203b38363732ull,0x2e726873090a202full,0x3172250920323373ull,
0x30317225202c3930ull,0x20203b3631202c38ull,0x090a202f2f092020ull,0x65726168732e7473ull,
0x5b09203631732e64ull,0x30322b3531647225ull,0x30317225202c5d34ull,0x6469202f2f093b39ull,
0x635f5f203432353aull,0x636f6c625f616475ull,0x78302b383238346bull,0x09636f6c2e090a30ull,
0x0a30093331320933ull,0x3233732e766f6d09ull,0x2c30313172250920ull,0x20203b3131383620ull,
0x0920202020202020ull,0x6c756d090a202f2full,0x33732e6f6c2e3432ull,0x3131317225092032ull,
0x2c3130317225202cull,0x093b303131722520ull,0x766f6d090a202f2full,0x722509203233732eull,
0x353534202c323131ull,0x2020202020203b31ull,0x0a202f2f09202020ull,0x6c2e34326c756d09ull,
0x2509203233732e6full,0x7225202c33313172ull,0x317225202c323031ull,0x0a202f2f093b3231ull,
0x3233732e64646109ull,0x2c34313172250920ull,0x202c313131722520ull,0x09203b3331317225ull,
0x646461090a202f2full,0x722509203233732eull,0x317225202c353131ull,0x36373233202c3431ull,
0x0a202f2f09203b38ull,0x3233732e72687309ull,0x2c36313172250920ull,0x202c353131722520ull,
0x09202020203b3631ull,0x2e7473090a202f2full,0x732e646572616873ull,0x6472255b09203631ull,
0x2c5d3034332b3531ull,0x093b363131722520ull,0x32353a6469202f2full,0x616475635f5f2035ull,
0x38346b636f6c625full,0x090a3078302b3832ull,0x32093309636f6c2eull,0x6f6d090a30093531ull,
0x2509203233732e76ull,0x3531202c37313172ull,0x20202020203b3839ull,0x202f2f0920202020ull,
0x2e34326c756d090aull,0x09203233732e6f6cull,0x25202c3831317225ull,0x317225202c333972ull,
0x0a202f2f093b3731ull,0x3233732e766f6d09ull,0x2c39313172250920ull,0x20203b3533303820ull,
0x0920202020202020ull,0x6c756d090a202f2full,0x33732e6f6c2e3432ull,0x3032317225092032ull,
0x202c32397225202cull,0x2f093b3931317225ull,0x2e627573090a202full,0x3172250920323373ull,
0x31317225202c3132ull,0x3032317225202c38ull,0x090a202f2f09203bull,0x203233732e646461ull,
0x202c323231722509ull,0x33202c3132317225ull,0x2f09203b38363732ull,0x2e726873090a202full,
0x3172250920323373ull,0x32317225202c3332ull,0x20203b3631202c32ull,0x090a202f2f092020ull,
0x65726168732e7473ull,0x5b09203631732e64ull,0x37342b3531647225ull,0x32317225202c5d36ull,
0x6469202f2f093b33ull,0x635f5f203632353aull,0x636f6c625f616475ull,0x78302b383238346bull,
0x09636f6c2e090a30ull,0x0a30093834350933ull,0x6e79732e72616209ull,0x2020203b30092063ull,
0x2020202020202020ull,0x0920202020202020ull,0x6f6c2e090a202f2full,0x0936333209330963ull,
0x6c2e6c756d090a30ull,0x2509203233732e6full,0x7225202c34323172ull,0x20203b3433202c36ull,
0x63090a202f2f0920ull,0x732e3436732e7476ull,0x3164722509203233ull,0x3432317225202c36ull,
0x2f2f09202020203bull,0x752e747663090a20ull,0x09203233732e3436ull,0x25202c3731647225ull,
0x20202020203b3272ull,0x61090a202f2f0920ull,0x09203436752e6464ull,0x25202c3831647225ull,
0x7225202c36316472ull,0x2f2f09203b373164ull,0x6c2e6c756d090a20ull,0x2509203436752e6full,
0x7225202c39316472ull,0x203b32202c383164ull,0x61090a202f2f0920ull,0x09203436752e6464ull,
0x25202c3032647225ull,0x647225202c316472ull,0x2f2f0920203b3931ull,0x68732e646c090a20ull,
0x3233752e64657261ull,0x2c35323172250920ull,0x2b30326472255b20ull,0x69202f2f093b5d30ull,
0x5f5f203732353a64ull,0x6f6c625f61647563ull,0x302b383238346b63ull,0x636f6c2e090a3078ull,
0x3009373332093309ull,0x6168732e646c090aull,0x203233752e646572ull,0x202c363231722509ull,
0x342b30326472255bull,0x6469202f2f093b5dull,0x635f5f203832353aull,0x636f6c625f616475ull,
0x78302b383238346bull,0x09636f6c2e090a30ull,0x0a30093833320933ull,0x726168732e646c09ull,
0x09203233752e6465ull,0x5b202c3732317225ull,0x5d382b3032647225ull,0x3a6469202f2f093bull,
0x75635f5f20393235ull,0x6b636f6c625f6164ull,0x3078302b38323834ull,0x3309636f6c2e090aull,
0x090a300939333209ull,0x65726168732e646cull,0x2509203233752e64ull,0x255b202c38323172ull,
0x5d32312b30326472ull,0x3a6469202f2f093bull,0x75635f5f20303335ull,0x6b636f6c625f6164ull,
0x3078302b38323834ull,0x3309636f6c2e090aull,0x090a300933353209ull,0x203233732e766f6dull,
0x202c393231722509ull,0x20203b3632317225ull,0x2f09202020202020ull,0x2e726873090a202full,
0x3172250920323373ull,0x32317225202c3033ull,0x20203b3631202c39ull,0x090a202f2f092020ull,
0x203233622e6c6873ull,0x202c313331722509ull,0x31202c3732317225ull,0x2f09202020203b36ull,
0x2e726873090a202full,0x3172250920323373ull,0x33317225202c3233ull,0x20203b3631202c31ull,
0x090a202f2f092020ull,0x203233732e627573ull,0x202c333331722509ull,0x25202c3033317225ull,
0x2f09203b32333172ull,0x636f6c2e090a202full,0x3009343532093309ull,0x33622e6c6873090aull,
0x3433317225092032ull,0x2c3632317225202cull,0x202020203b363120ull,0x6873090a202f2f09ull,
0x2509203233732e72ull,0x7225202c35333172ull,0x3b3631202c343331ull,0x202f2f0920202020ull,
0x33732e766f6d090aull,0x3633317225092032ull,0x3b3732317225202cull,0x2020202020202020ull,
0x6873090a202f2f09ull,0x2509203233732e72ull,0x7225202c37333172ull,0x3b3631202c363331ull,
0x202f2f0920202020ull,0x33732e627573090aull,0x3833317225092032ull,0x2c3533317225202cull,
0x203b373331722520ull,0x6c2e090a202f2f09ull,0x353532093309636full,0x2e766f6d090a3009ull,
0x3172250920323373ull,0x32317225202c3933ull,0x2020202020203b35ull,0x090a202f2f092020ull,
0x203233732e726873ull,0x202c303431722509ull,0x31202c3933317225ull,0x2f09202020203b36ull,
0x2e6c6873090a202full,0x3172250920323362ull,0x32317225202c3134ull,0x20203b3631202c38ull,
0x090a202f2f092020ull,0x203233732e726873ull,0x202c323431722509ull,0x31202c3134317225ull,
0x2f09202020203b36ull,0x2e627573090a202full,0x3172250920323373ull,0x34317225202c3334ull,
0x3234317225202c30ull,0x090a202f2f09203bull,0x32093309636f6c2eull,0x6873090a30093635ull,
0x2509203233622e6cull,0x7225202c34343172ull,0x3b3631202c353231ull,0x202f2f0920202020ull,
0x33732e726873090aull,0x3534317225092032ull,0x2c3434317225202cull,0x202020203b363120ull,
0x6f6d090a202f2f09ull,0x2509203233732e76ull,0x7225202c36343172ull,0x202020203b383231ull,
0x202f2f0920202020ull,0x33732e726873090aull,0x3734317225092032ull,0x2c3634317225202cull,
0x202020203b363120ull,0x7573090a202f2f09ull,0x2509203233732e62ull,0x7225202c38343172ull,
0x317225202c353431ull,0x202f2f09203b3734ull,0x3309636f6c2e090aull,0x090a300938353209ull,
0x203233732e646461ull,0x202c393431722509ull,0x25202c3033317225ull,0x2f09203b32333172ull,
0x2e646461090a202full,0x3172250920323373ull,0x34317225202c3035ull,0x3734317225202c35ull,
0x090a202f2f09203bull,0x203233732e646461ull,0x202c313531722509ull,0x25202c3934317225ull,
0x2f09203b30353172ull,0x636f6c2e090a202full,0x3009303632093309ull,0x33732e646461090aull,
0x3235317225092032ull,0x2c3533317225202cull,0x203b373331722520ull,0x6461090a202f2f09ull,
0x2509203233732e64ull,0x7225202c33353172ull,0x317225202c303431ull,0x202f2f09203b3234ull,
0x33732e627573090aull,0x3435317225092032ull,0x2c3335317225202cull,0x203b323531722520ull,
0x6c2e090a202f2f09ull,0x313632093309636full,0x2e627573090a3009ull,0x3172250920323373ull,
0x35317225202c3535ull,0x3934317225202c30ull,0x090a202f2f09203bull,0x32093309636f6c2eull,
0x6461090a30093336ull,0x2509203233732e64ull,0x7225202c36353172ull,0x317225202c323531ull,
0x202f2f09203b3335ull,0x33732e646461090aull,0x3735317225092032ull,0x2c3135317225202cull,
0x203b363531722520ull,0x6f6d090a202f2f09ull,0x2509203233732e76ull,0x3332202c38353172ull,
0x202020203b303731ull,0x202f2f0920202020ull,0x2e34326c756d090aull,0x09203233732e6f6cull,
0x25202c3935317225ull,0x7225202c37353172ull,0x202f2f093b383531ull,0x33732e646461090aull,
0x3036317225092032ull,0x2c3935317225202cull,0x203b383637323320ull,0x6873090a202f2f09ull,
0x2509203233732e72ull,0x7225202c31363172ull,0x3b3631202c303631ull,0x202f2f0920202020ull,
0x33622e646e61090aull,0x3236317225092032ull,0x2c3532317225202cull,0x3b36333535362d20ull,
0x6e61090a202f2f09ull,0x2509203233622e64ull,0x7225202c33363172ull,0x353536202c313631ull,
0x202f2f09203b3533ull,0x33732e766f6d090aull,0x3336317225092032ull,0x3b3336317225202cull,
0x2020202020202020ull,0x726f090a202f2f09ull,0x722509203233622eull,0x317225202c353231ull,
0x36317225202c3236ull,0x202f2f0920203b33ull,0x3309636f6c2e090aull,0x090a300934363209ull,
0x203233732e766f6dull,0x202c343631722509ull,0x20203b3532317225ull,0x2f09202020202020ull,
0x2e726873090a202full,0x3172250920323373ull,0x36317225202c3034ull,0x20203b3631202c34ull,
0x090a202f2f092020ull,0x203233732e646461ull,0x202c333531722509ull,0x25202c3034317225ull,
0x2f09203b32343172ull,0x2e646461090a202full,0x3172250920323373ull,0x35317225202c3536ull,
0x3335317225202c32ull,0x090a202f2f09203bull,0x203233732e627573ull,0x202c363631722509ull,
0x25202c3135317225ull,0x2f09203b35363172ull,0x2e766f6d090a202full,0x3172250920323373ull,
0x37313332202c3736ull,0x2020202020203b30ull,0x090a202f2f092020ull,0x6f6c2e34326c756dull,
0x722509203233732eull,0x317225202c383631ull,0x36317225202c3636ull,0x090a202f2f093b37ull,
0x203233732e646461ull,0x202c393631722509ull,0x33202c3836317225ull,0x2f09203b38363732ull,
0x2e726873090a202full,0x3172250920323373ull,0x36317225202c3037ull,0x20203b3631202c39ull,
0x090a202f2f092020ull,0x203233622e646e61ull,0x202c313731722509ull,0x2d202c3732317225ull,
0x2f093b3633353536ull,0x2e646e61090a202full,0x3172250920323362ull,0x37317225202c3237ull,
0x3533353536202c30ull,0x090a202f2f09203bull,0x203233732e766f6dull,0x202c323731722509ull,
0x20203b3237317225ull,0x2f09202020202020ull,0x622e726f090a202full,0x3231722509203233ull,
0x3137317225202c37ull,0x3b3237317225202cull,0x090a202f2f092020ull,0x32093309636f6c2eull,
0x6f6d090a30093636ull,0x2509203233732e76ull,0x3033202c33373172ull,0x202020203b343732ull,
0x202f2f0920202020ull,0x2e34326c756d090aull,0x09203233732e6f6cull,0x25202c3437317225ull,
0x7225202c35353172ull,0x202f2f093b333731ull,0x33732e766f6d090aull,0x3537317225092032ull,
0x3b3732317225202cull,0x2020202020202020ull,0x6873090a202f2f09ull,0x2509203233732e72ull,
0x7225202c36373172ull,0x3b3631202c353731ull,0x202f2f0920202020ull,0x33732e646461090aull,
0x3737317225092032ull,0x2c3533317225202cull,0x203b363731722520ull,0x7573090a202f2f09ull,
0x2509203233732e62ull,0x7225202c38373172ull,0x317225202c333531ull,0x202f2f09203b3737ull,
0x33732e766f6d090aull,0x3937317225092032ull,0x3b3034353231202cull,0x2020202020202020ull,
0x756d090a202f2f09ull,0x732e6f6c2e34326cull,0x3831722509203233ull,0x3837317225202c30ull,
0x3b3937317225202cull,0x6461090a202f2f09ull,0x2509203233732e64ull,0x7225202c31383172ull,
0x317225202c343731ull,0x202f2f09203b3038ull,0x33732e646461090aull,0x3238317225092032ull,
0x2c3138317225202cull,0x203b383637323320ull,0x6873090a202f2f09ull,0x2509203233732e72ull,
0x7225202c33383172ull,0x3b3631202c323831ull,0x202f2f0920202020ull,0x33622e646e61090aull,
0x3438317225092032ull,0x2c3632317225202cull,0x3b36333535362d20ull,0x6e61090a202f2f09ull,
0x2509203233622e64ull,0x7225202c35383172ull,0x353536202c333831ull,0x202f2f09203b3533ull,
0x33732e766f6d090aull,0x3538317225092032ull,0x3b3538317225202cull,0x2020202020202020ull,
0x726f090a202f2f09ull,0x722509203233622eull,0x317225202c363231ull,0x38317225202c3438ull,
0x202f2f0920203b35ull,0x3309636f6c2e090aull,0x090a300937363209ull,0x203233732e766f6dull,
0x202c363831722509ull,0x20203b3034353231ull,0x2f09202020202020ull,0x326c756d090a202full,
0x3233732e6f6c2e34ull,0x2c37383172250920ull,0x202c353531722520ull,0x2f093b3638317225ull,
0x2e766f6d090a202full,0x3172250920323373ull,0x37323033202c3838ull,0x2020202020203b34ull,
0x090a202f2f092020ull,0x6f6c2e34326c756dull,0x722509203233732eull,0x317225202c393831ull,
0x38317225202c3435ull,0x090a202f2f093b38ull,0x203233732e627573ull,0x202c303931722509ull,
0x25202c3738317225ull,0x2f09203b39383172ull,0x2e646461090a202full,0x3172250920323373ull,
0x39317225202c3139ull,0x3836373233202c30ull,0x090a202f2f09203bull,0x203233732e726873ull,
0x202c323931722509ull,0x31202c3139317225ull,0x2f09202020203b36ull,0x2e646e61090a202full,
0x3172250920323362ull,0x32317225202c3339ull,0x333535362d202c38ull,0x090a202f2f093b36ull,
0x203233622e646e61ull,0x202c343931722509ull,0x36202c3239317225ull,0x2f09203b35333535ull,
0x2e766f6d090a202full,0x3172250920323373ull,0x39317225202c3439ull,0x2020202020203b34ull,
0x090a202f2f092020ull,0x09203233622e726full,0x25202c3832317225ull,0x7225202c33393172ull,
0x2f0920203b343931ull,0x636f6c2e090a202full,0x3009303832093309ull,0x33732e646461090aull,
0x3539317225092032ull,0x2c3833317225202cull,0x203b333431722520ull,0x6873090a202f2f09ull,
0x2509203233622e6cull,0x7225202c36393172ull,0x203b32202c383431ull,0x202f2f0920202020ull,
0x33732e627573090aull,0x3739317225092032ull,0x2c3334317225202cull,0x203b383331722520ull,
0x6873090a202f2f09ull,0x2509203233622e6cull,0x7225202c38393172ull,0x203b32202c333331ull,
0x202f2f0920202020ull,0x33732e766f6d090aull,0x3939317225092032ull,0x3b3037313332202cull,
0x2020202020202020ull,0x756d090a202f2f09ull,0x732e6f6c2e34326cull,0x3032722509203233ull,
0x3539317225202c30ull,0x3b3939317225202cull,0x6f6d090a202f2f09ull,0x2509203233732e76ull,
0x3332202c31303272ull,0x202020203b303731ull,0x202f2f0920202020ull,0x2e34326c756d090aull,
0x09203233732e6f6cull,0x25202c3230327225ull,0x7225202c37393172ull,0x202f2f093b313032ull,
0x33732e646461090aull,0x3330327225092032ull,0x2c3030327225202cull,0x20203b3639303420ull,
0x6461090a202f2f09ull,0x2509203233732e64ull,0x7225202c34303272ull,0x393034202c323032ull,
0x202f2f0920203b36ull,0x33732e726873090aull,0x3530327225092032ull,0x2c3330327225202cull,
0x202020203b333120ull,0x6873090a202f2f09ull,0x2509203233732e72ull,0x7225202c36303272ull,
0x3b3331202c343032ull,0x202f2f0920202020ull,0x33732e646461090aull,0x3730327225092032ull,
0x2c3639317225202cull,0x203b353032722520ull,0x6461090a202f2f09ull,0x2509203233732e64ull,
0x7225202c38303272ull,0x327225202c383931ull,0x202f2f09203b3630ull,0x33732e766f6d090aull,
0x3930327225092032ull,0x203b35333038202cull,0x2020202020202020ull,0x756d090a202f2f09ull,
0x732e6f6c2e34326cull,0x3132722509203233ull,0x3730327225202c30ull,0x3b3930327225202cull,
0x6f6d090a202f2f09ull,0x2509203233732e76ull,0x3531202c31313272ull,0x20202020203b3839ull,
0x202f2f0920202020ull,0x2e34326c756d090aull,0x09203233732e6f6cull,0x25202c3231327225ull,
0x7225202c38303272ull,0x202f2f093b313132ull,0x33732e646461090aull,0x3331327225092032ull,
0x2c3031327225202cull,0x203b323132722520ull,0x6461090a202f2f09ull,0x2509203233732e64ull,
0x7225202c34313272ull,0x373233202c333132ull,0x202f2f09203b3836ull,0x33732e726873090aull,
0x3531327225092032ull,0x2c3431327225202cull,0x202020203b363120ull,0x6e61090a202f2f09ull,
0x2509203233622e64ull,0x7225202c36313272ull,0x353536202c353231ull,0x202f2f09203b3533ull,
0x33622e646e61090aull,0x3731327225092032ull,0x2c3531327225202cull,0x203b353335353620ull,
0x6873090a202f2f09ull,0x2509203233622e6cull,0x7225202c37313272ull,0x3b3631202c373132ull,
0x202f2f0920202020ull,0x3233622e726f090aull,0x2c35323172250920ull,0x202c363132722520ull,
0x20203b3731327225ull,0x6c2e090a202f2f09ull,0x313832093309636full,0x2e766f6d090a3009ull,
0x3272250920323373ull,0x38393531202c3831ull,0x202020202020203bull,0x090a202f2f092020ull,
0x6f6c2e34326c756dull,0x722509203233732eull,0x327225202c393132ull,0x31327225202c3730ull,
0x090a202f2f093b38ull,0x203233732e766f6dull,0x202c303232722509ull,0x2020203b35333038ull,
0x2f09202020202020ull,0x326c756d090a202full,0x3233732e6f6c2e34ull,0x2c31323272250920ull,
0x202c383032722520ull,0x2f093b3032327225ull,0x2e627573090a202full,0x3272250920323373ull,
0x31327225202c3232ull,0x3132327225202c39ull,0x090a202f2f09203bull,0x203233732e646461ull,
0x202c333232722509ull,0x33202c3232327225ull,0x2f09203b38363732ull,0x2e726873090a202full,
0x3272250920323373ull,0x32327225202c3432ull,0x20203b3631202c33ull,0x090a202f2f092020ull,
0x203233622e646e61ull,0x202c353232722509ull,0x36202c3832317225ull,0x2f09203b35333535ull,
0x2e646e61090a202full,0x3272250920323362ull,0x32327225202c3632ull,0x3533353536202c34ull,
0x090a202f2f09203bull,0x203233622e6c6873ull,0x202c363232722509ull,0x31202c3632327225ull,
0x2f09202020203b36ull,0x622e726f090a202full,0x3231722509203233ull,0x3532327225202c38ull,
0x3b3632327225202cull,0x090a202f2f092020ull,0x32093309636f6c2eull,0x7573090a30093238ull,
0x2509203233732e62ull,0x7225202c37323272ull,0x327225202c363931ull,0x202f2f09203b3530ull,
0x33732e627573090aull,0x3832327225092032ull,0x2c3839317225202cull,0x203b363032722520ull,
0x6f6d090a202f2f09ull,0x2509203233732e76ull,0x3534202c39323272ull,0x20202020203b3135ull,
0x202f2f0920202020ull,0x2e34326c756d090aull,0x09203233732e6f6cull,0x25202c3033327225ull,
0x7225202c37323272ull,0x202f2f093b393232ull,0x33732e766f6d090aull,0x3133327225092032ull,
0x203b31313836202cull,0x2020202020202020ull,0x756d090a202f2f09ull,0x732e6f6c2e34326cull,
0x3332722509203233ull,0x3832327225202c32ull,0x3b3133327225202cull,0x6461090a202f2f09ull,
0x2509203233732e64ull,0x7225202c33333272ull,0x327225202c303332ull,0x202f2f09203b3233ull,
0x33732e646461090aull,0x3433327225092032ull,0x2c3333327225202cull,0x203b383637323320ull,
0x6873090a202f2f09ull,0x2509203233732e72ull,0x7225202c35333272ull,0x3b3631202c343332ull,
0x202f2f0920202020ull,0x33622e646e61090aull,0x3633327225092032ull,0x2c3732317225202cull,
0x203b353335353620ull,0x6e61090a202f2f09ull,0x2509203233622e64ull,0x7225202c37333272ull,
0x353536202c353332ull,0x202f2f09203b3533ull,0x33622e6c6873090aull,0x3733327225092032ull,
0x2c3733327225202cull,0x202020203b363120ull,0x726f090a202f2f09ull,0x722509203233622eull,
0x327225202c373231ull,0x33327225202c3633ull,0x202f2f0920203b37ull,0x3309636f6c2e090aull,
0x090a300933383209ull,0x203233732e766f6dull,0x202c383332722509ull,0x2020203b31313836ull,
0x2f09202020202020ull,0x326c756d090a202full,0x3233732e6f6c2e34ull,0x2c39333272250920ull,
0x202c373232722520ull,0x2f093b3833327225ull,0x2e766f6d090a202full,0x3272250920323373ull,
0x31353534202c3034ull,0x202020202020203bull,0x090a202f2f092020ull,0x6f6c2e34326c756dull,
0x722509203233732eull,0x327225202c313432ull,0x34327225202c3832ull,0x090a202f2f093b30ull,
0x203233732e627573ull,0x202c323432722509ull,0x25202c3933327225ull,0x2f09203b31343272ull,
0x2e646461090a202full,0x3272250920323373ull,0x34327225202c3334ull,0x3836373233202c32ull,
0x090a202f2f09203bull,0x203233732e726873ull,0x202c343432722509ull,0x31202c3334327225ull,
0x2f09202020203b36ull,0x2e646e61090a202full,0x3272250920323362ull,0x32317225202c3534ull,
0x3533353536202c36ull,0x090a202f2f09203bull,0x203233622e646e61ull,0x202c363432722509ull,
0x36202c3434327225ull,0x2f09203b35333535ull,0x2e6c6873090a202full,0x3272250920323362ull,
0x34327225202c3634ull,0x20203b3631202c36ull,0x090a202f2f092020ull,0x09203233622e726full,
0x25202c3632317225ull,0x7225202c35343272ull,0x2f0920203b363432ull,0x636f6c2e090a202full,
0x3009353832093309ull,0x6168732e7473090aull,0x203233752e646572ull,0x2b30326472255b09ull,
0x32317225202c5d30ull,0x6469202f2f093b35ull,0x635f5f203133353aull,0x636f6c625f616475ull,
0x78302b383238346bull,0x09636f6c2e090a30ull,0x0a30093638320933ull,0x726168732e747309ull,
0x09203233752e6465ull,0x342b30326472255bull,0x3632317225202c5dull,0x3a6469202f2f093bull,
0x75635f5f20323335ull,0x6b636f6c625f6164ull,0x3078302b38323834ull,0x3309636f6c2e090aull,
0x090a300937383209ull,0x65726168732e7473ull,0x5b09203233752e64ull,0x5d382b3032647225ull,
0x3b3732317225202cull,0x353a6469202f2f09ull,0x6475635f5f203333ull,0x346b636f6c625f61ull,
0x0a3078302b383238ull,0x093309636f6c2e09ull,0x73090a3009383832ull,0x6465726168732e74ull,
0x255b09203233752eull,0x5d32312b30326472ull,0x3b3832317225202cull,0x353a6469202f2f09ull,
0x6475635f5f203433ull,0x346b636f6c625f61ull,0x0a3078302b383238ull,0x093309636f6c2e09ull,
0x62090a3009303535ull,0x20636e79732e7261ull,0x20202020203b3009ull,0x2020202020202020ull,
0x2f2f092020202020ull,0x3170252140090a20ull,0x4c24092061726220ull,0x363033325f345f74ull,
0x202020202020203bull,0x2e090a202f2f0920ull,0x3535093309636f6cull,0x2e646c090a300935ull,
0x732e646572616873ull,0x3432722509203233ull,0x386472255b202c37ull,0x202f2f093b5d302bull,
0x090a3533353a6469ull,0x61626f6c672e7473ull,0x5b09203233732e6cull,0x2c5d302b35647225ull,
0x093b373432722520ull,0x33353a6469202f2full,0x09636f6c2e090a36ull,0x0a30093635350933ull,
0x3436752e74766309ull,0x722509203233732eull,0x387225202c313264ull,0x092020202020203bull,
0x6c756d090a202f2full,0x203436752e6f6c2eull,0x202c323264722509ull,0x32202c3132647225ull,
0x0a202f2f0920203bull,0x3436752e62757309ull,0x202c356472250920ull,0x7225202c35647225ull,
0x092020203b323264ull,0x6f6c2e090a202f2full,0x0939353509330963ull,0x68732e646c090a30ull,
0x3233732e64657261ull,0x2c38343272250920ull,0x2d2b386472255b20ull,0x202f2f093b5d3836ull,
0x090a3733353a6469ull,0x61626f6c672e7473ull,0x5b09203233732e6cull,0x2c5d302b35647225ull,
0x093b383432722520ull,0x33353a6469202f2full,0x09636f6c2e090a38ull,0x0a30093036350933ull,
0x3436752e62757309ull,0x202c356472250920ull,0x7225202c35647225ull,0x092020203b323264ull,
0x6f6c2e090a202f2full,0x0933363509330963ull,0x68732e646c090a30ull,0x3233732e64657261ull,
0x2c39343272250920ull,0x2d2b386472255b20ull,0x2f2f093b5d363331ull,0x0a3933353a646920ull,
0x626f6c672e747309ull,0x09203233732e6c61ull,0x5d302b356472255bull,0x3b3934327225202cull,
0x353a6469202f2f09ull,0x636f6c2e090a3034ull,0x3009343635093309ull,0x36752e627573090aull,
0x2c35647225092034ull,0x25202c3564722520ull,0x2020203b32326472ull,0x6c2e090a202f2f09ull,
0x373635093309636full,0x732e646c090a3009ull,0x33732e6465726168ull,0x3035327225092032ull,
0x2b386472255b202cull,0x2f093b5d3430322dull,0x3134353a6469202full,0x6f6c672e7473090aull,
0x203233732e6c6162ull,0x302b356472255b09ull,0x3035327225202c5dull,0x3a6469202f2f093bull,
0x6f6c2e090a323435ull,0x0938363509330963ull,0x752e627573090a30ull,0x3564722509203436ull,
0x202c35647225202cull,0x20203b3232647225ull,0x2e090a202f2f0920ull,0x3735093309636f6cull,
0x2e646c090a300931ull,0x732e646572616873ull,0x3532722509203233ull,0x386472255b202c31ull,
0x093b5d3237322d2bull,0x34353a6469202f2full,0x6c672e7473090a33ull,0x3233732e6c61626full,
0x2b356472255b0920ull,0x35327225202c5d30ull,0x6469202f2f093b31ull,0x6c2e090a3434353aull,
0x323735093309636full,0x2e627573090a3009ull,0x6472250920343675ull,0x2c35647225202c35ull,
0x203b323264722520ull,0x090a202f2f092020ull,0x35093309636f6c2eull,0x646c090a30093537ull,
0x2e6465726168732eull,0x3272250920323373ull,0x6472255b202c3235ull,0x3b5d3034332d2b38ull,
0x353a6469202f2f09ull,0x672e7473090a3534ull,0x33732e6c61626f6cull,0x356472255b092032ull,
0x327225202c5d302bull,0x69202f2f093b3235ull,0x2e090a3634353a64ull,0x3735093309636f6cull,
0x627573090a300936ull,0x722509203436752eull,0x35647225202c3564ull,0x3b3232647225202cull,
0x0a202f2f09202020ull,0x093309636f6c2e09ull,0x6c090a3009393735ull,0x6465726168732e64ull,
0x722509203233732eull,0x72255b202c333532ull,0x5d3830342d2b3864ull,0x3a6469202f2f093bull,
0x2e7473090a373435ull,0x732e6c61626f6c67ull,0x6472255b09203233ull,0x7225202c5d302b35ull,
0x202f2f093b333532ull,0x090a3834353a6469ull,0x35093309636f6c2eull,0x646c090a30093338ull,
0x2e6465726168732eull,0x3272250920323373ull,0x6472255b202c3435ull,0x3b5d3637342d2b38ull,
0x353a6469202f2f09ull,0x2e627573090a3934ull,0x6472250920343675ull,0x35647225202c3332ull,
0x3b3232647225202cull,0x090a202f2f092020ull,0x61626f6c672e7473ull,0x5b09203233732e6cull,
0x5d302b3332647225ull,0x3b3435327225202cull,0x353a6469202f2f09ull,0x345f744c240a3035ull,
0x090a3a363033325full,0x35093309636f6c2eull,0x7865090a30093538ull,0x20202020203b7469ull,
0x2020202020202020ull,0x2020202020202020ull,0x202f2f0920202020ull,0x646e6557444c240aull,
0x44554338315a5f5full,0x536c656e72656b41ull,0x5054434474726f68ull,0x2f207d090a3a6973ull,
0x554338315a5f202full,0x6c656e72656b4144ull,0x54434474726f6853ull,0x652e090a0a697350ull,
0x315a5f207972746eull,0x72656b4144554339ull,0x74726f68536c656eull,0x2069735054434449ull,
0x7261702e09090a28ull,0x203436752e206d61ull,0x6170616475635f5full,0x4339315a5f5f6d72ull,
0x656e72656b414455ull,0x444974726f68536cull,0x5f5f5f6973505443ull,0x617261705f6c6176ull,
0x2c7473446372536dull,0x617261702e09090aull,0x5f203233732e206dull,0x726170616475635full,
0x554339315a5f5f6dull,0x6c656e72656b4144ull,0x43444974726f6853ull,0x676d495f69735054ull,
0x0a29656469727453ull,0x6765722e090a7b09ull,0x7225203233752e20ull,0x090a3b3e3735323cull,
0x36752e206765722eull,0x35323c6472252034ull,0x6765722e090a3b3eull,0x2520646572702e20ull,
0x2e090a3b3e333c70ull,0x2e20646572616873ull,0x2032206e67696c61ull,0x75635f5f2038622eull,
0x6b636f6c625f6164ull,0x3731325b30323037ull,0x6f6c2e090a3b5d36ull,0x0931303609330963ull,
0x5f3142424c240a30ull,0x4144554339315a5full,0x68536c656e72656bull,0x505443444974726full,
0x766f6d090a3a6973ull,0x722509203436752eull,0x75635f5f202c3164ull,0x6b636f6c625f6164ull,
0x2f2f093b30323037ull,0x09636f6c2e090a20ull,0x0a30093434360933ull,0x3233732e74766309ull,
0x722509203631752eull,0x2e64697425202c31ull,0x0920202020203b7aull,0x6c6873090a202f2full,
0x722509203233622eull,0x202c317225202c32ull,0x2020202020203b33ull,0x0a202f2f09202020ull,
0x3233732e74766309ull,0x722509203631752eull,0x2e64697425202c33ull,0x0920202020203b79ull,
0x6c6873090a202f2full,0x722509203233622eull,0x202c337225202c34ull,0x2020202020203b33ull,
0x0a202f2f09202020ull,0x3233752e74766309ull,0x722509203631752eull,0x2e64697425202c35ull,
0x0920202020203b78ull,0x646461090a202f2full,0x722509203233752eull,0x202c347225202c36ull,
0x202020203b357225ull,0x0a202f2f09202020ull,0x3233622e6c687309ull,0x25202c3772250920ull,
0x20203b31202c3672ull,0x0920202020202020ull,0x2e646c090a202f2full,0x33732e6d61726170ull,
0x202c387225092032ull,0x70616475635f5f5bull,0x39315a5f5f6d7261ull,0x6e72656b41445543ull,
0x4974726f68536c65ull,0x495f697350544344ull,0x656469727453676dull,0x6469202f2f093b5dull,
0x635f5f203635343aull,0x5f6d726170616475ull,0x4144554339315a5full,0x68536c656e72656bull,
0x505443444974726full,0x7453676d495f6973ull,0x3078302b65646972ull,0x7261702e646c090aull,
0x09203436752e6d61ull,0x5f5b202c32647225ull,0x726170616475635full,0x554339315a5f5f6dull,
0x6c656e72656b4144ull,0x43444974726f6853ull,0x765f5f5f69735054ull,0x6d617261705f6c61ull,
0x3b5d747344637253ull,0x343a6469202f2f09ull,0x6475635f5f203036ull,0x5a5f5f6d72617061ull,
0x656b414455433931ull,0x726f68536c656e72ull,0x6973505443444974ull,0x705f6c61765f5f5full,
0x446372536d617261ull,0x090a3078302b7473ull,0x2e3233732e747663ull,0x3972250920363175ull,
0x646961746325202cull,0x2f092020203b792eull,0x2e6c6873090a202full,0x3172250920323362ull,
0x202c397225202c30ull,0x2020202020203b35ull,0x090a202f2f092020ull,0x203233732e646461ull,
0x25202c3131722509ull,0x30317225202c3272ull,0x2f0920202020203bull,0x326c756d090a202full,
0x3233732e6f6c2e34ull,0x202c323172250920ull,0x7225202c31317225ull,0x090a202f2f093b38ull,
0x2e3233732e747663ull,0x3172250920363175ull,0x6961746325202c33ull,0x2f0920203b782e64ull,
0x2e6c6873090a202full,0x3172250920323362ull,0x2c33317225202c34ull,0x20202020203b3520ull,
0x090a202f2f092020ull,0x203233732e646461ull,0x25202c3531722509ull,0x317225202c323172ull,
0x2f09202020203b34ull,0x2e646461090a202full,0x3172250920323373ull,0x202c377225202c36ull,
0x2020203b35317225ull,0x090a202f2f092020ull,0x2e3436752e747663ull,0x6472250920323373ull,
0x3b36317225202c33ull,0x2f09202020202020ull,0x2e6c756d090a202full,0x09203436752e6f6cull,
0x7225202c34647225ull,0x20203b32202c3364ull,0x090a202f2f092020ull,0x203436752e646461ull,
0x25202c3564722509ull,0x647225202c326472ull,0x2f09202020203b34ull,0x636f6c2e090a202full,
0x3009323536093309ull,0x33732e766f6d090aull,0x2c37317225092032ull,0x202020203b343320ull,
0x2020202020202020ull,0x756d090a202f2f09ull,0x732e6f6c2e34326cull,0x3831722509203233ull,
0x25202c327225202cull,0x202f2f093b373172ull,0x33732e646461090aull,0x2c39317225092032ull,
0x7225202c37722520ull,0x20202020203b3831ull,0x7663090a202f2f09ull,0x33732e3436752e74ull,
0x2c36647225092032ull,0x20203b3931722520ull,0x202f2f0920202020ull,0x6f6c2e6c756d090aull,
0x722509203436752eull,0x36647225202c3764ull,0x202020203b32202cull,0x6461090a202f2f09ull,
0x2509203436752e64ull,0x647225202c386472ull,0x3b37647225202c31ull,0x202f2f0920202020ull,
0x33732e766f6d090aull,0x2c30327225092032ull,0x202020203b353120ull,0x2020202020202020ull,
0x6573090a202f2f09ull,0x33732e656c2e7074ull,0x202c317025092032ull,0x327225202c367225ull,
0x202f2f0920203b30ull,0x203170252140090aull,0x744c240920617262ull,0x3b343937315f355full,
0x2020202020202020ull,0x6c2e090a202f2f09ull,0x373536093309636full,0x672e646c090a3009ull,
0x33732e6c61626f6cull,0x2c31327225092032ull,0x302b356472255b20ull,0x6469202f2f093b5dull,
0x7473090a3336343aull,0x2e6465726168732eull,0x72255b0920323373ull,0x25202c5d302b3864ull,
0x202f2f093b313272ull,0x5f203436343a6469ull,0x6c625f616475635full,0x2b303230376b636full,
0x6f6c2e090a307830ull,0x0938353609330963ull,0x752e747663090a30ull,0x09203233732e3436ull,
0x7225202c39647225ull,0x2020202020203b38ull,0x6d090a202f2f0920ull,0x36752e6f6c2e6c75ull,
0x3031647225092034ull,0x202c39647225202cull,0x2f2f092020203b32ull,0x752e646461090a20ull,
0x3564722509203436ull,0x2c3031647225202cull,0x20203b3564722520ull,0x2e090a202f2f0920ull,
0x3636093309636f6cull,0x2e646c090a300931ull,0x732e6c61626f6c67ull,0x3232722509203233ull,
0x2b356472255b202cull,0x69202f2f093b5d30ull,0x73090a3536343a64ull,0x6465726168732e74ull,
0x255b09203233732eull,0x2c5d38362b386472ull,0x2f093b3232722520ull,0x3636343a6469202full,
0x5f616475635f5f20ull,0x3230376b636f6c62ull,0x2e090a3078302b30ull,0x3636093309636f6cull,
0x646461090a300932ull,0x722509203436752eull,0x31647225202c3564ull,0x3b35647225202c30ull,
0x0a202f2f09202020ull,0x093309636f6c2e09ull,0x6c090a3009353636ull,0x6c61626f6c672e64ull,
0x722509203233732eull,0x6472255b202c3332ull,0x2f2f093b5d302b35ull,0x0a3736343a646920ull,
0x726168732e747309ull,0x09203233732e6465ull,0x33312b386472255bull,0x33327225202c5d36ull,
0x3a6469202f2f093bull,0x75635f5f20383634ull,0x6b636f6c625f6164ull,0x3078302b30323037ull,
0x3309636f6c2e090aull,0x090a300936363609ull,0x203436752e646461ull,0x25202c3564722509ull,
0x7225202c30316472ull,0x2f092020203b3564ull,0x636f6c2e090a202full,0x3009393636093309ull,
0x6f6c672e646c090aull,0x203233732e6c6162ull,0x5b202c3432722509ull,0x3b5d302b35647225ull,
0x343a6469202f2f09ull,0x732e7473090a3936ull,0x33732e6465726168ull,0x386472255b092032ull,
0x25202c5d3430322bull,0x202f2f093b343272ull,0x5f203037343a6469ull,0x6c625f616475635full,
0x2b303230376b636full,0x6f6c2e090a307830ull,0x0930373609330963ull,0x752e646461090a30ull,
0x3564722509203436ull,0x2c3031647225202cull,0x20203b3564722520ull,0x2e090a202f2f0920ull,
0x3736093309636f6cull,0x2e646c090a300933ull,0x732e6c61626f6c67ull,0x3532722509203233ull,
0x2b356472255b202cull,0x69202f2f093b5d30ull,0x73090a3137343a64ull,0x6465726168732e74ull,
0x255b09203233732eull,0x5d3237322b386472ull,0x093b35327225202cull,0x37343a6469202f2full,
0x616475635f5f2032ull,0x30376b636f6c625full,0x090a3078302b3032ull,0x36093309636f6c2eull,
0x6461090a30093437ull,0x2509203436752e64ull,0x647225202c356472ull,0x35647225202c3031ull,
0x202f2f092020203bull,0x3309636f6c2e090aull,0x090a300937373609ull,0x61626f6c672e646cull,
0x2509203233732e6cull,0x72255b202c363272ull,0x2f093b5d302b3564ull,0x3337343a6469202full,
0x6168732e7473090aull,0x203233732e646572ull,0x332b386472255b09ull,0x327225202c5d3034ull,
0x6469202f2f093b36ull,0x635f5f203437343aull,0x636f6c625f616475ull,0x78302b303230376bull,
0x09636f6c2e090a30ull,0x0a30093837360933ull,0x3436752e64646109ull,0x202c356472250920ull,
0x25202c3031647225ull,0x092020203b356472ull,0x6f6c2e090a202f2full,0x0931383609330963ull,
0x6c672e646c090a30ull,0x3233732e6c61626full,0x202c373272250920ull,0x5d302b356472255bull,
0x3a6469202f2f093bull,0x2e7473090a353734ull,0x732e646572616873ull,0x6472255b09203233ull,
0x202c5d3830342b38ull,0x2f2f093b37327225ull,0x203637343a646920ull,0x625f616475635f5full,
0x303230376b636f6cull,0x6c2e090a3078302bull,0x323836093309636full,0x2e646461090a3009ull,
0x6472250920343675ull,0x3031647225202c35ull,0x203b35647225202cull,0x090a202f2f092020ull,
0x36093309636f6c2eull,0x6461090a30093338ull,0x2509203436752e64ull,0x647225202c386472ull,
0x203b363734202c38ull,0x202f2f0920202020ull,0x3309636f6c2e090aull,0x090a300935383609ull,
0x61626f6c672e646cull,0x2509203233732e6cull,0x72255b202c383272ull,0x2f093b5d302b3564ull,
0x3737343a6469202full,0x6168732e7473090aull,0x203233732e646572ull,0x302b386472255b09ull,
0x3b38327225202c5dull,0x343a6469202f2f09ull,0x6475635f5f203837ull,0x376b636f6c625f61ull,
0x0a3078302b303230ull,0x37315f355f744c24ull,0x6f6c2e090a3a3439ull,0x0938383609330963ull,
0x732e726162090a30ull,0x203b300920636e79ull,0x2020202020202020ull,0x2020202020202020ull,
0x2e090a202f2f0920ull,0x3133093309636f6cull,0x726873090a300931ull,0x722509203233732eull,
0x2c367225202c3932ull,0x20202020203b3420ull,0x0a202f2f09202020ull,0x3233622e646e6109ull,
0x202c303372250920ull,0x3b31202c39327225ull,0x0920202020202020ull,0x2e726f090a202f2full,
0x3372250920323362ull,0x202c377225202c31ull,0x2020203b30337225ull,0x0a202f2f09202020ull,
0x2e6f6c2e6c756d09ull,0x3372250920323373ull,0x202c327225202c32ull,0x09202020203b3433ull,
0x747663090a202f2full,0x3233732e3436732eull,0x2c31316472250920ull,0x20203b3233722520ull,
0x0a202f2f09202020ull,0x3233622e646e6109ull,0x202c333372250920ull,0x3133202c31337225ull,
0x092020202020203bull,0x646e61090a202f2full,0x722509203233622eull,0x2c367225202c3433ull,
0x2020203b32332d20ull,0x0a202f2f09202020ull,0x203233622e726f09ull,0x25202c3533722509ull,
0x337225202c333372ull,0x0920202020203b34ull,0x747663090a202f2full,0x3233732e3436752eull,
0x2c32316472250920ull,0x20203b3533722520ull,0x0a202f2f09202020ull,0x3436752e64646109ull,
0x2c33316472250920ull,0x202c313164722520ull,0x09203b3231647225ull,0x6c756d090a202f2full,
0x203436752e6f6c2eull,0x202c343164722509ull,0x32202c3331647225ull,0x0a202f2f0920203bull,
0x3436752e64646109ull,0x2c35316472250920ull,0x25202c3164722520ull,0x0920203b34316472ull,
0x2e646c090a202f2full,0x732e646572616873ull,0x3633722509203631ull,0x35316472255b202cull,
0x202f2f093b5d302bull,0x5f203937343a6469ull,0x6c625f616475635full,0x2b303230376b636full,
0x6f6c2e090a307830ull,0x0935313309330963ull,0x68732e646c090a30ull,0x3631732e64657261ull,
0x202c373372250920ull,0x312b35316472255bull,0x202f2f093b5d3633ull,0x5f203038343a6469ull,
0x6c625f616475635full,0x2b303230376b636full,0x6f6c2e090a307830ull,0x0937313309330963ull,
0x68732e646c090a30ull,0x3631732e64657261ull,0x202c383372250920ull,0x322b35316472255bull,
0x202f2f093b5d3430ull,0x5f203138343a6469ull,0x6c625f616475635full,0x2b303230376b636full,
0x6f6c2e090a307830ull,0x0939313309330963ull,0x68732e646c090a30ull,0x3631732e64657261ull,
0x202c393372250920ull,0x322b35316472255bull,0x202f2f093b5d3237ull,0x5f203238343a6469ull,
0x6c625f616475635full,0x2b303230376b636full,0x6f6c2e090a307830ull,0x0931323309330963ull,
0x68732e646c090a30ull,0x3631732e64657261ull,0x202c303472250920ull,0x332b35316472255bull,
0x202f2f093b5d3034ull,0x5f203338343a6469ull,0x6c625f616475635full,0x2b303230376b636full,
0x6f6c2e090a307830ull,0x0933323309330963ull,0x68732e646c090a30ull,0x3631732e64657261ull,
0x202c313472250920ull,0x342b35316472255bull,0x202f2f093b5d3830ull,0x5f203438343a6469ull,
0x6c625f616475635full,0x2b303230376b636full,0x6f6c2e090a307830ull,0x0930343309330963ull,
0x68732e646c090a30ull,0x3631732e64657261ull,0x202c323472250920ull,0x362b35316472255bull,
0x69202f2f093b5d38ull,0x5f5f203538343a64ull,0x6f6c625f61647563ull,0x302b303230376b63ull,
0x2e6c6873090a3078ull,0x3472250920323362ull,0x2c32347225202c33ull,0x20202020203b3220ull,
0x090a202f2f092020ull,0x33093309636f6c2eull,0x646c090a30093134ull,0x2e6465726168732eull,
0x3472250920363173ull,0x316472255b202c34ull,0x093b5d3637342b35ull,0x38343a6469202f2full,
0x616475635f5f2036ull,0x30376b636f6c625full,0x090a3078302b3032ull,0x203233622e6c6873ull,
0x25202c3534722509ull,0x203b32202c343472ull,0x2f09202020202020ull,0x636f6c2e090a202full,
0x3009343533093309ull,0x33732e766f6d090aull,0x2c36347225092032ull,0x203b343732303320ull,
0x2020202020202020ull,0x756d090a202f2f09ull,0x732e6f6c2e34326cull,0x3734722509203233ull,
0x202c37337225202cull,0x2f2f093b36347225ull,0x732e766f6d090a20ull,0x3834722509203233ull,
0x3b3034353231202cull,0x2020202020202020ull,0x6d090a202f2f0920ull,0x2e6f6c2e34326c75ull,
0x3472250920323373ull,0x2c31347225202c39ull,0x2f093b3834722520ull,0x2e646461090a202full,
0x3572250920323373ull,0x2c36337225202c30ull,0x20203b3933722520ull,0x090a202f2f092020ull,
0x203233732e646461ull,0x25202c3135722509ull,0x347225202c383372ull,0x2f09202020203b30ull,
0x2e627573090a202full,0x3572250920323373ull,0x2c38337225202c32ull,0x20203b3034722520ull,
0x090a202f2f092020ull,0x203233732e646461ull,0x25202c3335722509ull,0x347225202c373472ull,
0x2f09202020203b39ull,0x2e766f6d090a202full,0x3572250920323373ull,0x3037313332202c34ull,
0x202020202020203bull,0x090a202f2f092020ull,0x6f6c2e34326c756dull,0x722509203233732eull,
0x30357225202c3535ull,0x093b34357225202cull,0x766f6d090a202f2full,0x722509203233732eull,
0x37313332202c3635ull,0x2020202020203b30ull,0x0a202f2f09202020ull,0x6c2e34326c756d09ull,
0x2509203233732e6full,0x357225202c373572ull,0x3b36357225202c31ull,0x6f6d090a202f2f09ull,
0x2509203233732e76ull,0x313332202c383572ull,0x20202020203b3037ull,0x202f2f0920202020ull,
0x2e34326c756d090aull,0x09203233732e6f6cull,0x7225202c39357225ull,0x38357225202c3235ull,
0x61090a202f2f093bull,0x09203233732e6464ull,0x7225202c30367225ull,0x35357225202c3335ull,
0x2f2f09202020203bull,0x732e646461090a20ull,0x3136722509203233ull,0x202c37357225202cull,
0x2020203b36393034ull,0x61090a202f2f0920ull,0x09203233732e6464ull,0x7225202c32367225ull,
0x36393034202c3935ull,0x2f2f09202020203bull,0x732e726873090a20ull,0x3336722509203233ull,
0x202c31367225202cull,0x20202020203b3331ull,0x73090a202f2f0920ull,0x09203233732e7268ull,
0x7225202c34367225ull,0x203b3331202c3236ull,0x2f2f092020202020ull,0x732e646461090a20ull,
0x3536722509203233ull,0x202c33367225202cull,0x2020203b33347225ull,0x61090a202f2f0920ull,
0x09203233732e6464ull,0x7225202c36367225ull,0x35347225202c3436ull,0x2f2f09202020203bull,
0x732e766f6d090a20ull,0x3736722509203233ull,0x203b35333038202cull,0x2020202020202020ull,
0x6d090a202f2f0920ull,0x2e6f6c2e34326c75ull,0x3672250920323373ull,0x2c35367225202c38ull,
0x2f093b3736722520ull,0x2e766f6d090a202full,0x3672250920323373ull,0x3b38393531202c39ull,
0x2020202020202020ull,0x090a202f2f092020ull,0x6f6c2e34326c756dull,0x722509203233732eull,
0x36367225202c3037ull,0x093b39367225202cull,0x646461090a202f2full,0x722509203233732eull,
0x38367225202c3137ull,0x203b30377225202cull,0x0a202f2f09202020ull,0x3233732e64646109ull,
0x202c323772250920ull,0x7225202c30367225ull,0x09202020203b3137ull,0x646461090a202f2full,
0x722509203233732eull,0x32377225202c3337ull,0x3b3836373233202cull,0x0a202f2f09202020ull,
0x3233732e72687309ull,0x202c343772250920ull,0x3631202c33377225ull,0x092020202020203bull,
0x2e7473090a202f2full,0x732e646572616873ull,0x6472255b09203631ull,0x25202c5d302b3531ull,
0x202f2f093b343772ull,0x5f203738343a6469ull,0x6c625f616475635full,0x2b303230376b636full,
0x6f6c2e090a307830ull,0x0936353309330963ull,0x732e627573090a30ull,0x3537722509203233ull,
0x202c36337225202cull,0x2020203b39337225ull,0x6d090a202f2f0920ull,0x09203233732e766full,
0x3231202c36377225ull,0x202020203b303435ull,0x2f2f092020202020ull,0x34326c756d090a20ull,
0x203233732e6f6c2eull,0x25202c3737722509ull,0x377225202c373372ull,0x090a202f2f093b36ull,
0x203233732e766f6dull,0x33202c3837722509ull,0x2020203b34373230ull,0x2f09202020202020ull,
0x326c756d090a202full,0x3233732e6f6c2e34ull,0x202c393772250920ull,0x7225202c31347225ull,
0x0a202f2f093b3837ull,0x3233732e766f6d09ull,0x202c303872250920ull,0x20203b3037313332ull,
0x0920202020202020ull,0x6c756d090a202f2full,0x33732e6f6c2e3432ull,0x2c31387225092032ull,
0x25202c3537722520ull,0x202f2f093b303872ull,0x33732e627573090aull,0x2c32387225092032ull,
0x25202c3737722520ull,0x202020203b393772ull,0x6461090a202f2f09ull,0x2509203233732e64ull,
0x387225202c333872ull,0x3b32387225202c31ull,0x202f2f0920202020ull,0x33732e627573090aull,
0x2c34387225092032ull,0x25202c3334722520ull,0x202020203b333672ull,0x7573090a202f2f09ull,
0x2509203233732e62ull,0x347225202c353872ull,0x3b34367225202c35ull,0x202f2f0920202020ull,
0x33732e766f6d090aull,0x2c36387225092032ull,0x20203b3131383620ull,0x2020202020202020ull,
0x756d090a202f2f09ull,0x732e6f6c2e34326cull,0x3738722509203233ull,0x202c34387225202cull,
0x2f2f093b36387225ull,0x732e766f6d090a20ull,0x3838722509203233ull,0x203b31353534202cull,
0x2020202020202020ull,0x6d090a202f2f0920ull,0x2e6f6c2e34326c75ull,0x3872250920323373ull,
0x2c35387225202c39ull,0x2f093b3838722520ull,0x2e627573090a202full,0x3972250920323373ull,
0x2c37387225202c30ull,0x20203b3938722520ull,0x090a202f2f092020ull,0x203233732e646461ull,
0x25202c3139722509ull,0x397225202c333872ull,0x2f09202020203b30ull,0x2e646461090a202full,
0x3972250920323373ull,0x2c31397225202c32ull,0x203b383637323320ull,0x090a202f2f092020ull,
0x203233732e726873ull,0x25202c3339722509ull,0x3b3631202c323972ull,0x2f09202020202020ull,
0x732e7473090a202full,0x31732e6465726168ull,0x316472255b092036ull,0x25202c5d38362b35ull,
0x202f2f093b333972ull,0x5f203838343a6469ull,0x6c625f616475635full,0x2b303230376b636full,
0x6f6c2e090a307830ull,0x0938353309330963ull,0x732e627573090a30ull,0x3439722509203233ull,
0x202c31387225202cull,0x2020203b32387225ull,0x6d090a202f2f0920ull,0x09203233732e766full,
0x3534202c35397225ull,0x20202020203b3135ull,0x2f2f092020202020ull,0x34326c756d090a20ull,
0x203233732e6f6c2eull,0x25202c3639722509ull,0x397225202c343872ull,0x090a202f2f093b35ull,
0x203233732e766f6dull,0x36202c3739722509ull,0x202020203b313138ull,0x2f09202020202020ull,
0x326c756d090a202full,0x3233732e6f6c2e34ull,0x202c383972250920ull,0x7225202c35387225ull,
0x0a202f2f093b3739ull,0x3233732e64646109ull,0x202c393972250920ull,0x7225202c36397225ull,
0x09202020203b3839ull,0x646461090a202f2full,0x722509203233732eull,0x397225202c303031ull,
0x3b39397225202c34ull,0x0a202f2f09202020ull,0x3233732e64646109ull,0x2c31303172250920ull,
0x202c303031722520ull,0x09203b3836373233ull,0x726873090a202f2full,0x722509203233732eull,
0x317225202c323031ull,0x203b3631202c3130ull,0x0a202f2f09202020ull,0x726168732e747309ull,
0x09203631732e6465ull,0x312b35316472255bull,0x317225202c5d3633ull,0x69202f2f093b3230ull,
0x5f5f203938343a64ull,0x6f6c625f61647563ull,0x302b303230376b63ull,0x636f6c2e090a3078ull,
0x3009303633093309ull,0x33732e627573090aull,0x3330317225092032ull,0x202c35357225202cull,
0x2020203b33357225ull,0x6f6d090a202f2f09ull,0x2509203233732e76ull,0x3531202c34303172ull,
0x20202020203b3839ull,0x202f2f0920202020ull,0x2e34326c756d090aull,0x09203233732e6f6cull,
0x25202c3530317225ull,0x317225202c353672ull,0x0a202f2f093b3430ull,0x3233732e766f6d09ull,
0x2c36303172250920ull,0x20203b3533303820ull,0x0920202020202020ull,0x6c756d090a202f2full,
0x33732e6f6c2e3432ull,0x3730317225092032ull,0x202c36367225202cull,0x2f093b3630317225ull,
0x2e627573090a202full,0x3172250920323373ull,0x30317225202c3830ull,0x3730317225202c35ull,
0x090a202f2f09203bull,0x203233732e646461ull,0x202c393031722509ull,0x25202c3330317225ull,
0x2f09203b38303172ull,0x2e646461090a202full,0x3172250920323373ull,0x30317225202c3031ull,
0x3836373233202c39ull,0x090a202f2f09203bull,0x203233732e726873ull,0x202c313131722509ull,
0x31202c3031317225ull,0x2f09202020203b36ull,0x732e7473090a202full,0x31732e6465726168ull,
0x316472255b092036ull,0x202c5d3430322b35ull,0x2f093b3131317225ull,0x3039343a6469202full,
0x5f616475635f5f20ull,0x3230376b636f6c62ull,0x2e090a3078302b30ull,0x3633093309636f6cull,
0x627573090a300932ull,0x722509203233732eull,0x317225202c323131ull,0x30317225202c3330ull,
0x0a202f2f09203b38ull,0x3233732e64646109ull,0x2c33313172250920ull,0x202c323131722520ull,
0x09203b3836373233ull,0x726873090a202f2full,0x722509203233732eull,0x317225202c343131ull,
0x203b3631202c3331ull,0x0a202f2f09202020ull,0x726168732e747309ull,0x09203631732e6465ull,
0x322b35316472255bull,0x317225202c5d3237ull,0x69202f2f093b3431ull,0x5f5f203139343a64ull,
0x6f6c625f61647563ull,0x302b303230376b63ull,0x636f6c2e090a3078ull,0x3009343633093309ull,
0x33732e627573090aull,0x3531317225092032ull,0x202c34397225202cull,0x2020203b39397225ull,
0x6461090a202f2f09ull,0x2509203233732e64ull,0x7225202c36313172ull,0x373233202c353131ull,
0x202f2f09203b3836ull,0x33732e726873090aull,0x3731317225092032ull,0x2c3631317225202cull,
0x202020203b363120ull,0x7473090a202f2f09ull,0x2e6465726168732eull,0x72255b0920363173ull,
0x5d3034332b353164ull,0x3b3731317225202cull,0x343a6469202f2f09ull,0x6475635f5f203239ull,
0x376b636f6c625f61ull,0x0a3078302b303230ull,0x093309636f6c2e09ull,0x73090a3009363633ull,
0x09203233732e6275ull,0x25202c3831317225ull,0x397225202c333872ull,0x2f2f092020203b30ull,
0x732e646461090a20ull,0x3131722509203233ull,0x3831317225202c39ull,0x3b3836373233202cull,
0x73090a202f2f0920ull,0x09203233732e7268ull,0x25202c3032317225ull,0x3631202c39313172ull,
0x2f2f09202020203bull,0x68732e7473090a20ull,0x3631732e64657261ull,0x35316472255b0920ull,
0x25202c5d3830342bull,0x2f2f093b30323172ull,0x203339343a646920ull,0x625f616475635f5full,
0x303230376b636f6cull,0x6c2e090a3078302bull,0x383633093309636full,0x2e627573090a3009ull,
0x3172250920323373ull,0x30367225202c3132ull,0x203b31377225202cull,0x090a202f2f092020ull,
0x203233732e646461ull,0x202c323231722509ull,0x33202c3132317225ull,0x2f09203b38363732ull,
0x2e726873090a202full,0x3172250920323373ull,0x32317225202c3332ull,0x20203b3631202c32ull,
0x090a202f2f092020ull,0x65726168732e7473ull,0x5b09203631732e64ull,0x37342b3531647225ull,
0x32317225202c5d36ull,0x6469202f2f093b33ull,0x635f5f203439343aull,0x636f6c625f616475ull,
0x78302b303230376bull,0x09636f6c2e090a30ull,0x0a30093039360933ull,0x6e79732e72616209ull,
0x2020203b30092063ull,0x2020202020202020ull,0x0920202020202020ull,0x6f6c2e090a202f2full,
0x0930393309330963ull,0x6c2e6c756d090a30ull,0x2509203233732e6full,0x7225202c34323172ull,
0x20203b3433202c36ull,0x63090a202f2f0920ull,0x732e3436732e7476ull,0x3164722509203233ull,
0x3432317225202c36ull,0x2f2f09202020203bull,0x752e747663090a20ull,0x09203233732e3436ull,
0x25202c3731647225ull,0x20202020203b3272ull,0x61090a202f2f0920ull,0x09203436752e6464ull,
0x25202c3831647225ull,0x7225202c36316472ull,0x2f2f09203b373164ull,0x6c2e6c756d090a20ull,
0x2509203436752e6full,0x7225202c39316472ull,0x203b32202c383164ull,0x61090a202f2f0920ull,
0x09203436752e6464ull,0x25202c3032647225ull,0x647225202c316472ull,0x2f2f0920203b3931ull,
0x68732e646c090a20ull,0x3233752e64657261ull,0x2c35323172250920ull,0x2b30326472255b20ull,
0x69202f2f093b5d30ull,0x5f5f203539343a64ull,0x6f6c625f61647563ull,0x302b303230376b63ull,
0x636f6c2e090a3078ull,0x3009313933093309ull,0x6168732e646c090aull,0x203233752e646572ull,
0x202c363231722509ull,0x342b30326472255bull,0x6469202f2f093b5dull,0x635f5f203639343aull,
0x636f6c625f616475ull,0x78302b303230376bull,0x09636f6c2e090a30ull,0x0a30093239330933ull,
0x726168732e646c09ull,0x09203233752e6465ull,0x5b202c3732317225ull,0x5d382b3032647225ull,
0x3a6469202f2f093bull,0x75635f5f20373934ull,0x6b636f6c625f6164ull,0x3078302b30323037ull,
0x3309636f6c2e090aull,0x090a300933393309ull,0x65726168732e646cull,0x2509203233752e64ull,
0x255b202c38323172ull,0x5d32312b30326472ull,0x3a6469202f2f093bull,0x75635f5f20383934ull,
0x6b636f6c625f6164ull,0x3078302b30323037ull,0x3309636f6c2e090aull,0x090a300938303409ull,
0x203233622e6c6873ull,0x202c393231722509ull,0x31202c3632317225ull,0x2f09202020203b36ull,
0x2e726873090a202full,0x3172250920323373ull,0x32317225202c3033ull,0x20203b3631202c39ull,
0x090a202f2f092020ull,0x203233622e6c6873ull,0x202c313331722509ull,0x31202c3832317225ull,
0x2f09202020203b36ull,0x2e726873090a202full,0x3172250920323373ull,0x33317225202c3233ull,
0x20203b3631202c31ull,0x090a202f2f092020ull,0x203233622e6c6873ull,0x202c333331722509ull,
0x31202c3532317225ull,0x2f09202020203b36ull,0x2e726873090a202full,0x3172250920323373ull,
0x33317225202c3433ull,0x20203b3631202c33ull,0x090a202f2f092020ull,0x203233622e6c6873ull,
0x202c353331722509ull,0x31202c3732317225ull,0x2f09202020203b36ull,0x2e726873090a202full,
0x3172250920323373ull,0x33317225202c3633ull,0x20203b3631202c35ull,0x090a202f2f092020ull,
0x203233732e766f6dull,0x202c373331722509ull,0x20203b3437323033ull,0x2f09202020202020ull,
0x326c756d090a202full,0x3233732e6f6c2e34ull,0x2c38333172250920ull,0x202c303331722520ull,
0x2f093b3733317225ull,0x2e766f6d090a202full,0x3172250920323373ull,0x34353231202c3933ull,
0x2020202020203b30ull,0x090a202f2f092020ull,0x6f6c2e34326c756dull,0x722509203233732eull,
0x317225202c303431ull,0x33317225202c3233ull,0x090a202f2f093b39ull,0x203233732e646461ull,
0x202c313431722509ull,0x25202c3433317225ull,0x2f09203b36333172ull,0x2e646461090a202full,
0x3172250920323373ull,0x33317225202c3234ull,0x3034317225202c38ull,0x090a202f2f09203bull,
0x203233732e766f6dull,0x202c333431722509ull,0x20203b3037313332ull,0x2f09202020202020ull,
0x326c756d090a202full,0x3233732e6f6c2e34ull,0x2c34343172250920ull,0x202c313431722520ull,
0x2f093b3334317225ull,0x2e646461090a202full,0x3172250920323373ull,0x34317225202c3534ull,
0x3434317225202c32ull,0x090a202f2f09203bull,0x34093309636f6c2eull,0x6f6d090a30093930ull,
0x2509203233732e76ull,0x3231202c36343172ull,0x202020203b303435ull,0x202f2f0920202020ull,
0x2e34326c756d090aull,0x09203233732e6f6cull,0x25202c3734317225ull,0x7225202c30333172ull,
0x202f2f093b363431ull,0x33732e766f6d090aull,0x3834317225092032ull,0x3b3437323033202cull,
0x2020202020202020ull,0x756d090a202f2f09ull,0x732e6f6c2e34326cull,0x3431722509203233ull,
0x3233317225202c39ull,0x3b3834317225202cull,0x7573090a202f2f09ull,0x2509203233732e62ull,
0x7225202c30353172ull,0x317225202c343331ull,0x202f2f09203b3633ull,0x33732e627573090aull,
0x3135317225092032ull,0x2c3734317225202cull,0x203b393431722520ull,0x6f6d090a202f2f09ull,
0x2509203233732e76ull,0x3332202c32353172ull,0x202020203b303731ull,0x202f2f0920202020ull,
0x2e34326c756d090aull,0x09203233732e6f6cull,0x25202c3335317225ull,0x7225202c30353172ull,
0x202f2f093b323531ull,0x33732e646461090aull,0x3435317225092032ull,0x2c3135317225202cull,
0x203b333531722520ull,0x6c2e090a202f2f09ull,0x303134093309636full,0x2e627573090a3009ull,
0x3172250920323373ull,0x35317225202c3535ull,0x3135317225202c33ull,0x090a202f2f09203bull,
0x34093309636f6c2eull,0x7573090a30093131ull,0x2509203233732e62ull,0x7225202c36353172ull,
0x317225202c343431ull,0x202f2f09203b3234ull,0x3309636f6c2e090aull,0x090a300934323409ull,
0x203233732e766f6dull,0x202c373531722509ull,0x20203b3632317225ull,0x2f09202020202020ull,
0x2e726873090a202full,0x3172250920323373ull,0x35317225202c3835ull,0x20203b3631202c37ull,
0x090a202f2f092020ull,0x203233732e766f6dull,0x202c393531722509ull,0x20203b3732317225ull,
0x2f09202020202020ull,0x2e726873090a202full,0x3172250920323373ull,0x35317225202c3036ull,
0x20203b3631202c39ull,0x090a202f2f092020ull,0x203233732e766f6dull,0x202c313631722509ull,
0x20203b3532317225ull,0x2f09202020202020ull,0x2e726873090a202full,0x3172250920323373ull,
0x36317225202c3236ull,0x20203b3631202c31ull,0x090a202f2f092020ull,0x203233732e766f6dull,
0x202c333631722509ull,0x20203b3832317225ull,0x2f09202020202020ull,0x2e726873090a202full,
0x3172250920323373ull,0x36317225202c3436ull,0x20203b3631202c33ull,0x090a202f2f092020ull,
0x203233732e646461ull,0x202c353631722509ull,0x25202c3835317225ull,0x2f09203b30363172ull,
0x2e627573090a202full,0x3172250920323373ull,0x35317225202c3636ull,0x3036317225202c38ull,
0x090a202f2f09203bull,0x203233622e6c6873ull,0x202c373631722509ull,0x32202c3236317225ull,
0x2f0920202020203bull,0x2e6c6873090a202full,0x3172250920323362ull,0x36317225202c3836ull,
0x2020203b32202c34ull,0x090a202f2f092020ull,0x203233732e766f6dull,0x202c393631722509ull,
0x20203b3037313332ull,0x2f09202020202020ull,0x326c756d090a202full,0x3233732e6f6c2e34ull,
0x2c30373172250920ull,0x202c353631722520ull,0x2f093b3936317225ull,0x2e766f6d090a202full,
0x3172250920323373ull,0x37313332202c3137ull,0x2020202020203b30ull,0x090a202f2f092020ull,
0x6f6c2e34326c756dull,0x722509203233732eull,0x317225202c323731ull,0x37317225202c3636ull,
0x090a202f2f093b31ull,0x203233732e646461ull,0x202c333731722509ull,0x34202c3037317225ull,
0x2f0920203b363930ull,0x2e646461090a202full,0x3172250920323373ull,0x37317225202c3437ull,
0x3b36393034202c32ull,0x090a202f2f092020ull,0x203233732e726873ull,0x202c353731722509ull,
0x31202c3337317225ull,0x2f09202020203b33ull,0x2e726873090a202full,0x3172250920323373ull,
0x37317225202c3637ull,0x20203b3331202c34ull,0x090a202f2f092020ull,0x203233732e646461ull,
0x202c373731722509ull,0x25202c3736317225ull,0x2f09203b35373172ull,0x2e646461090a202full,
0x3172250920323373ull,0x36317225202c3837ull,0x3637317225202c38ull,0x090a202f2f09203bull,
0x203233732e766f6dull,0x202c393731722509ull,0x2020203b35333038ull,0x2f09202020202020ull,
0x326c756d090a202full,0x3233732e6f6c2e34ull,0x2c30383172250920ull,0x202c373731722520ull,
0x2f093b3937317225ull,0x2e766f6d090a202full,0x3172250920323373ull,0x38393531202c3138ull,
0x202020202020203bull,0x090a202f2f092020ull,0x6f6c2e34326c756dull,0x722509203233732eull,
0x317225202c323831ull,0x38317225202c3837ull,0x090a202f2f093b31ull,0x203233732e646461ull,
0x202c333831722509ull,0x25202c3038317225ull,0x2f09203b32383172ull,0x636f6c2e090a202full,
0x3009353234093309ull,0x33732e766f6d090aull,0x3438317225092032ull,0x203b38393531202cull,
0x2020202020202020ull,0x756d090a202f2f09ull,0x732e6f6c2e34326cull,0x3831722509203233ull,
0x3737317225202c35ull,0x3b3438317225202cull,0x6f6d090a202f2f09ull,0x2509203233732e76ull,
0x3038202c36383172ull,0x20202020203b3533ull,0x202f2f0920202020ull,0x2e34326c756d090aull,
0x09203233732e6f6cull,0x25202c3738317225ull,0x7225202c38373172ull,0x202f2f093b363831ull,
0x33732e627573090aull,0x3838317225092032ull,0x2c3538317225202cull,0x203b373831722520ull,
0x6c2e090a202f2f09ull,0x363234093309636full,0x2e627573090a3009ull,0x3172250920323373ull,
0x36317225202c3938ull,0x3537317225202c37ull,0x090a202f2f09203bull,0x203233732e627573ull,
0x202c303931722509ull,0x25202c3836317225ull,0x2f09203b36373172ull,0x2e766f6d090a202full,
0x3172250920323373ull,0x31353534202c3139ull,0x202020202020203bull,0x090a202f2f092020ull,
0x6f6c2e34326c756dull,0x722509203233732eull,0x317225202c323931ull,0x39317225202c3938ull,
0x090a202f2f093b31ull,0x203233732e766f6dull,0x202c333931722509ull,0x2020203b31313836ull,
0x2f09202020202020ull,0x326c756d090a202full,0x3233732e6f6c2e34ull,0x2c34393172250920ull,
0x202c303931722520ull,0x2f093b3339317225ull,0x2e646461090a202full,0x3172250920323373ull,
0x39317225202c3539ull,0x3439317225202c32ull,0x090a202f2f09203bull,0x34093309636f6c2eull,
0x6f6d090a30093732ull,0x2509203233732e76ull,0x3534202c36393172ull,0x20202020203b3135ull,
0x202f2f0920202020ull,0x2e34326c756d090aull,0x09203233732e6f6cull,0x25202c3739317225ull,
0x7225202c30393172ull,0x202f2f093b363931ull,0x33732e766f6d090aull,0x3839317225092032ull,
0x203b31313836202cull,0x2020202020202020ull,0x756d090a202f2f09ull,0x732e6f6c2e34326cull,
0x3931722509203233ull,0x3938317225202c39ull,0x3b3839317225202cull,0x7573090a202f2f09ull,
0x2509203233732e62ull,0x7225202c30303272ull,0x317225202c393931ull,0x202f2f09203b3739ull,
0x3309636f6c2e090aull,0x090a300939323409ull,0x203233732e646461ull,0x202c313032722509ull,
0x25202c3338317225ull,0x2f09203b35343172ull,0x2e646461090a202full,0x3272250920323373ull,
0x30327225202c3230ull,0x3836373233202c31ull,0x090a202f2f09203bull,0x203233732e726873ull,
0x202c333032722509ull,0x31202c3230327225ull,0x2f09202020203b36ull,0x2e646e61090a202full,
0x3272250920323362ull,0x32317225202c3430ull,0x333535362d202c35ull,0x090a202f2f093b36ull,
0x203233622e646e61ull,0x202c353032722509ull,0x36202c3330327225ull,0x2f09203b35333535ull,
0x2e766f6d090a202full,0x3272250920323373ull,0x30327225202c3530ull,0x2020202020203b35ull,
0x090a202f2f092020ull,0x09203233622e726full,0x25202c3532317225ull,0x7225202c34303272ull,
0x2f0920203b353032ull,0x636f6c2e090a202full,0x3009303334093309ull,0x33732e766f6d090aull,
0x3630327225092032ull,0x3b3532317225202cull,0x2020202020202020ull,0x6873090a202f2f09ull,
0x2509203233732e72ull,0x7225202c37303272ull,0x3b3631202c363032ull,0x202f2f0920202020ull,
0x33622e6c6873090aull,0x3830327225092032ull,0x2c3730327225202cull,0x20202020203b3220ull,
0x7573090a202f2f09ull,0x2509203233732e62ull,0x7225202c39303272ull,0x317225202c383032ull,
0x202f2f09203b3537ull,0x33732e766f6d090aull,0x3031327225092032ull,0x203b31313836202cull,
0x2020202020202020ull,0x756d090a202f2f09ull,0x732e6f6c2e34326cull,0x3132722509203233ull,
0x3930327225202c31ull,0x3b3031327225202cull,0x7573090a202f2f09ull,0x2509203233732e62ull,
0x7225202c32313272ull,0x317225202c313132ull,0x202f2f09203b3739ull,0x33732e646461090aull,
0x3331327225092032ull,0x2c3435317225202cull,0x203b323132722520ull,0x6461090a202f2f09ull,
0x2509203233732e64ull,0x7225202c34313272ull,0x373233202c333132ull,0x202f2f09203b3836ull,
0x33732e726873090aull,0x3531327225092032ull,0x2c3431327225202cull,0x202020203b363120ull,
0x6e61090a202f2f09ull,0x2509203233622e64ull,0x7225202c36313272ull,0x353536202c353231ull,
0x202f2f09203b3533ull,0x33622e646e61090aull,0x3731327225092032ull,0x2c3531327225202cull,
0x203b353335353620ull,0x6873090a202f2f09ull,0x2509203233622e6cull,0x7225202c37313272ull,
0x3b3631202c373132ull,0x202f2f0920202020ull,0x3233622e726f090aull,0x2c35323172250920ull,
0x202c363132722520ull,0x20203b3731327225ull,0x6c2e090a202f2f09ull,0x313334093309636full,
0x2e646461090a3009ull,0x3272250920323373ull,0x35317225202c3831ull,0x3539317225202c35ull,
0x090a202f2f09203bull,0x203233732e646461ull,0x202c393132722509ull,0x33202c3831327225ull,
0x2f09203b38363732ull,0x2e726873090a202full,0x3272250920323373ull,0x31327225202c3032ull,
0x20203b3631202c39ull,0x090a202f2f092020ull,0x203233622e646e61ull,0x202c313232722509ull,
0x2d202c3632317225ull,0x2f093b3633353536ull,0x2e646e61090a202full,0x3272250920323362ull,
0x32327225202c3232ull,0x3533353536202c30ull,0x090a202f2f09203bull,0x203233732e766f6dull,
0x202c323232722509ull,0x20203b3232327225ull,0x2f09202020202020ull,0x622e726f090a202full,
0x3231722509203233ull,0x3132327225202c36ull,0x3b3232327225202cull,0x090a202f2f092020ull,
0x34093309636f6c2eull,0x6461090a30093233ull,0x2509203233732e64ull,0x7225202c33323272ull,
0x317225202c363531ull,0x202f2f09203b3838ull,0x33732e646461090aull,0x3432327225092032ull,
0x2c3332327225202cull,0x203b383637323320ull,0x6873090a202f2f09ull,0x2509203233732e72ull,
0x7225202c35323272ull,0x3b3631202c343232ull,0x202f2f0920202020ull,0x33622e646e61090aull,
0x3632327225092032ull,0x2c3632317225202cull,0x203b353335353620ull,0x6e61090a202f2f09ull,
0x2509203233622e64ull,0x7225202c37323272ull,0x353536202c353232ull,0x202f2f09203b3533ull,
0x33622e6c6873090aull,0x3732327225092032ull,0x2c3732327225202cull,0x202020203b363120ull,
0x726f090a202f2f09ull,0x722509203233622eull,0x327225202c363231ull,0x32327225202c3632ull,
0x202f2f0920203b37ull,0x3309636f6c2e090aull,0x090a300933333409ull,0x203233732e627573ull,
0x202c383232722509ull,0x25202c3635317225ull,0x2f09203b38383172ull,0x2e646461090a202full,
0x3272250920323373ull,0x32327225202c3932ull,0x3836373233202c38ull,0x090a202f2f09203bull,
0x203233732e726873ull,0x202c303332722509ull,0x31202c3932327225ull,0x2f09202020203b36ull,
0x2e646e61090a202full,0x3272250920323362ull,0x32317225202c3133ull,0x333535362d202c37ull,
0x090a202f2f093b36ull,0x203233622e646e61ull,0x202c323332722509ull,0x36202c3033327225ull,
0x2f09203b35333535ull,0x2e766f6d090a202full,0x3272250920323373ull,0x33327225202c3233ull,
0x2020202020203b32ull,0x090a202f2f092020ull,0x09203233622e726full,0x25202c3732317225ull,
0x7225202c31333272ull,0x2f0920203b323332ull,0x636f6c2e090a202full,0x3009343334093309ull,
0x33732e627573090aull,0x3333327225092032ull,0x2c3535317225202cull,0x203b353931722520ull,
0x6461090a202f2f09ull,0x2509203233732e64ull,0x7225202c34333272ull,0x373233202c333332ull,
0x202f2f09203b3836ull,0x33732e726873090aull,0x3533327225092032ull,0x2c3433327225202cull,
0x202020203b363120ull,0x6e61090a202f2f09ull,0x2509203233622e64ull,0x7225202c36333272ull,
0x353536202c373231ull,0x202f2f09203b3533ull,0x33622e646e61090aull,0x3733327225092032ull,
0x2c3533327225202cull,0x203b353335353620ull,0x6873090a202f2f09ull,0x2509203233622e6cull,
0x7225202c37333272ull,0x3b3631202c373332ull,0x202f2f0920202020ull,0x3233622e726f090aull,
0x2c37323172250920ull,0x202c363332722520ull,0x20203b3733327225ull,0x6c2e090a202f2f09ull,
0x353334093309636full,0x2e627573090a3009ull,0x3272250920323373ull,0x35317225202c3833ull,
0x3030327225202c34ull,0x090a202f2f09203bull,0x203233732e646461ull,0x202c393332722509ull,
0x33202c3833327225ull,0x2f09203b38363732ull,0x2e726873090a202full,0x3272250920323373ull,
0x33327225202c3034ull,0x20203b3631202c39ull,0x090a202f2f092020ull,0x203233622e646e61ull,
0x202c313432722509ull,0x2d202c3832317225ull,0x2f093b3633353536ull,0x2e646e61090a202full,
0x3272250920323362ull,0x34327225202c3234ull,0x3533353536202c30ull,0x090a202f2f09203bull,
0x203233732e766f6dull,0x202c323432722509ull,0x20203b3234327225ull,0x2f09202020202020ull,
0x622e726f090a202full,0x3231722509203233ull,0x3134327225202c38ull,0x3b3234327225202cull,
0x090a202f2f092020ull,0x34093309636f6c2eull,0x7573090a30093633ull,0x2509203233732e62ull,
0x7225202c33343272ull,0x317225202c353431ull,0x202f2f09203b3338ull,0x33732e646461090aull,
0x3434327225092032ull,0x2c3334327225202cull,0x203b383637323320ull,0x6873090a202f2f09ull,
0x2509203233732e72ull,0x7225202c35343272ull,0x3b3631202c343432ull,0x202f2f0920202020ull,
0x33622e646e61090aull,0x3634327225092032ull,0x2c3832317225202cull,0x203b353335353620ull,
0x6e61090a202f2f09ull,0x2509203233622e64ull,0x7225202c37343272ull,0x353536202c353432ull,
0x202f2f09203b3533ull,0x33622e6c6873090aull,0x3734327225092032ull,0x2c3734327225202cull,
0x202020203b363120ull,0x726f090a202f2f09ull,0x722509203233622eull,0x327225202c383231ull,
0x34327225202c3634ull,0x202f2f0920203b37ull,0x3309636f6c2e090aull,0x090a300938333409ull,
0x65726168732e7473ull,0x5b09203233752e64ull,0x5d302b3032647225ull,0x3b3532317225202cull,
0x343a6469202f2f09ull,0x6475635f5f203939ull,0x376b636f6c625f61ull,0x0a3078302b303230ull,
0x093309636f6c2e09ull,0x73090a3009393334ull,0x6465726168732e74ull,0x255b09203233752eull,
0x2c5d342b30326472ull,0x093b363231722520ull,0x30353a6469202f2full,0x616475635f5f2030ull,
0x30376b636f6c625full,0x090a3078302b3032ull,0x34093309636f6c2eull,0x7473090a30093034ull,
0x2e6465726168732eull,0x72255b0920323375ull,0x202c5d382b303264ull,0x2f093b3732317225ull,
0x3130353a6469202full,0x5f616475635f5f20ull,0x3230376b636f6c62ull,0x2e090a3078302b30ull,
0x3434093309636f6cull,0x2e7473090a300931ull,0x752e646572616873ull,0x6472255b09203233ull,
0x202c5d32312b3032ull,0x2f093b3832317225ull,0x3230353a6469202full,0x5f616475635f5f20ull,
0x3230376b636f6c62ull,0x2e090a3078302b30ull,0x3936093309636f6cull,0x726162090a300932ull,
0x300920636e79732eull,0x202020202020203bull,0x2020202020202020ull,0x0a202f2f09202020ull,
0x6220317025214009ull,0x5f744c2409206172ull,0x203b363033325f35ull,0x0920202020202020ull,
0x6f6c2e090a202f2full,0x0937393609330963ull,0x68732e646c090a30ull,0x3233732e64657261ull,
0x2c38343272250920ull,0x302b386472255b20ull,0x6469202f2f093b5dull,0x7473090a3330353aull,
0x2e6c61626f6c672eull,0x72255b0920323373ull,0x25202c5d302b3564ull,0x2f2f093b38343272ull,
0x0a3430353a646920ull,0x093309636f6c2e09ull,0x63090a3009383936ull,0x732e3436752e7476ull,
0x3264722509203233ull,0x203b387225202c31ull,0x2f2f092020202020ull,0x6c2e6c756d090a20ull,
0x2509203436752e6full,0x7225202c32326472ull,0x203b32202c313264ull,0x73090a202f2f0920ull,
0x09203436752e6275ull,0x7225202c35647225ull,0x32647225202c3564ull,0x2f2f092020203b32ull,
0x09636f6c2e090a20ull,0x0a30093130370933ull,0x726168732e646c09ull,0x09203233732e6465ull,
0x5b202c3934327225ull,0x38362d2b38647225ull,0x6469202f2f093b5dull,0x7473090a3530353aull,
0x2e6c61626f6c672eull,0x72255b0920323373ull,0x25202c5d302b3564ull,0x2f2f093b39343272ull,
0x0a3630353a646920ull,0x093309636f6c2e09ull,0x73090a3009323037ull,0x09203436752e6275ull,
0x7225202c35647225ull,0x32647225202c3564ull,0x2f2f092020203b32ull,0x09636f6c2e090a20ull,
0x0a30093530370933ull,0x726168732e646c09ull,0x09203233732e6465ull,0x5b202c3035327225ull,
0x33312d2b38647225ull,0x69202f2f093b5d36ull,0x73090a3730353a64ull,0x6c61626f6c672e74ull,
0x255b09203233732eull,0x202c5d302b356472ull,0x2f093b3035327225ull,0x3830353a6469202full,
0x3309636f6c2e090aull,0x090a300936303709ull,0x203436752e627573ull,0x25202c3564722509ull,
0x647225202c356472ull,0x2f092020203b3232ull,0x636f6c2e090a202full,0x3009393037093309ull,
0x6168732e646c090aull,0x203233732e646572ull,0x202c313532722509ull,0x322d2b386472255bull,
0x202f2f093b5d3430ull,0x090a3930353a6469ull,0x61626f6c672e7473ull,0x5b09203233732e6cull,
0x2c5d302b35647225ull,0x093b313532722520ull,0x31353a6469202f2full,0x09636f6c2e090a30ull,
0x0a30093031370933ull,0x3436752e62757309ull,0x202c356472250920ull,0x7225202c35647225ull,
0x092020203b323264ull,0x6f6c2e090a202f2full,0x0933313709330963ull,0x68732e646c090a30ull,
0x3233732e64657261ull,0x2c32353272250920ull,0x2d2b386472255b20ull,0x2f2f093b5d323732ull,
0x0a3131353a646920ull,0x626f6c672e747309ull,0x09203233732e6c61ull,0x5d302b356472255bull,
0x3b3235327225202cull,0x353a6469202f2f09ull,0x636f6c2e090a3231ull,0x3009343137093309ull,
0x36752e627573090aull,0x2c35647225092034ull,0x25202c3564722520ull,0x2020203b32326472ull,
0x6c2e090a202f2f09ull,0x373137093309636full,0x732e646c090a3009ull,0x33732e6465726168ull,
0x3335327225092032ull,0x2b386472255b202cull,0x2f093b5d3034332dull,0x3331353a6469202full,
0x6f6c672e7473090aull,0x203233732e6c6162ull,0x302b356472255b09ull,0x3335327225202c5dull,
0x3a6469202f2f093bull,0x6f6c2e090a343135ull,0x0938313709330963ull,0x752e627573090a30ull,
0x3564722509203436ull,0x202c35647225202cull,0x20203b3232647225ull,0x2e090a202f2f0920ull,
0x3237093309636f6cull,0x2e646c090a300931ull,0x732e646572616873ull,0x3532722509203233ull,
0x386472255b202c34ull,0x093b5d3830342d2bull,0x31353a6469202f2full,0x6c672e7473090a35ull,
0x3233732e6c61626full,0x2b356472255b0920ull,0x35327225202c5d30ull,0x6469202f2f093b34ull,
0x6c2e090a3631353aull,0x353237093309636full,0x732e646c090a3009ull,0x33732e6465726168ull,
0x3535327225092032ull,0x2b386472255b202cull,0x2f093b5d3637342dull,0x3731353a6469202full,
0x36752e627573090aull,0x3332647225092034ull,0x202c35647225202cull,0x20203b3232647225ull,
0x7473090a202f2f09ull,0x2e6c61626f6c672eull,0x72255b0920323373ull,0x202c5d302b333264ull,
0x2f093b3535327225ull,0x3831353a6469202full,0x325f355f744c240aull,0x6c2e090a3a363033ull,
0x373237093309636full,0x74697865090a3009ull,0x202020202020203bull,0x2020202020202020ull,
0x2020202020202020ull,0x240a202f2f092020ull,0x5f5f646e6557444cull,0x6b4144554339315aull,
0x6f68536c656e7265ull,0x7350544344497472ull,0x2f2f207d090a3a69ull,0x44554339315a5f20ull,
0x536c656e72656b41ull,0x5443444974726f68ull,0x652e090a0a697350ull,0x325a5f207972746eull,
0x72656b4144554337ull,0x746e6175516c656eull,0x466e6f6974617a69ull,0x2069665074616f6cull,
0x7261702e09090a28ull,0x203436752e206d61ull,0x6170616475635f5full,0x4337325a5f5f6d72ull,
0x656e72656b414455ull,0x7a69746e6175516cull,0x6f6c466e6f697461ull,0x72535f6966507461ull,
0x09090a2c74734463ull,0x2e206d617261702eull,0x75635f5f20323373ull,0x5f5f6d7261706164ull,
0x6b4144554337325aull,0x6175516c656e7265ull,0x6f6974617a69746eull,0x665074616f6c466eull,
0x6564697274535f69ull,0x722e090a7b090a29ull,0x203631752e206765ull,0x0a3b3e343c687225ull,
0x752e206765722e09ull,0x39313c7225203233ull,0x6765722e090a3b3eull,0x7225203436752e20ull,
0x090a3b3e30313c64ull,0x33662e206765722eull,0x3e38313c66252032ull,0x206765722e090a3bull,
0x702520646572702eull,0x6c2e090a3b3e353cull,0x353709383109636full,0x3142424c240a3009ull,
0x44554337325a5f5full,0x516c656e72656b41ull,0x74617a69746e6175ull,0x74616f6c466e6f69ull,
0x6c2e090a3a696650ull,0x363409333209636full,0x7663090a30093439ull,0x31752e3233732e74ull,
0x202c317225092036ull,0x782e646961746325ull,0x202f2f092020203bull,0x31752e747663090aull,
0x2509203233752e36ull,0x317225202c316872ull,0x202020202020203bull,0x756d090a202f2f09ull,
0x752e656469772e6cull,0x2c32722509203631ull,0x38202c3168722520ull,0x202f2f092020203bull,
0x33732e747663090aull,0x2509203631752e32ull,0x61746325202c3372ull,0x2020203b792e6469ull,
0x7663090a202f2f09ull,0x33752e3631752e74ull,0x2c32687225092032ull,0x2020203b33722520ull,
0x202f2f0920202020ull,0x69772e6c756d090aull,0x09203631752e6564ull,0x687225202c347225ull,
0x2020203b38202c32ull,0x7663090a202f2f09ull,0x31752e3233732e74ull,0x202c357225092036ull,
0x203b792e64697425ull,0x202f2f0920202020ull,0x33732e646461090aull,0x202c367225092032ull,
0x357225202c347225ull,0x202020202020203bull,0x646c090a202f2f09ull,0x732e6d617261702eull,
0x2c37722509203233ull,0x616475635f5f5b20ull,0x325a5f5f6d726170ull,0x72656b4144554337ull,
0x746e6175516c656eull,0x466e6f6974617a69ull,0x5f69665074616f6cull,0x3b5d656469727453ull,
0x343a6469202f2f09ull,0x616475635f5f2036ull,0x325a5f5f6d726170ull,0x72656b4144554337ull,
0x746e6175516c656eull,0x466e6f6974617a69ull,0x5f69665074616f6cull,0x302b656469727453ull,
0x2e6c756d090a3078ull,0x09203233732e6f6cull,0x377225202c387225ull,0x20203b367225202cull,
0x090a202f2f092020ull,0x2e3233732e747663ull,0x3972250920363175ull,0x782e64697425202cull,
0x2f0920202020203bull,0x702e646c090a202full,0x3436752e6d617261ull,0x202c316472250920ull,
0x70616475635f5f5bull,0x37325a5f5f6d7261ull,0x6e72656b41445543ull,0x69746e6175516c65ull,
0x6c466e6f6974617aull,0x535f69665074616full,0x093b5d7473446372ull,0x37343a6469202f2full,
0x70616475635f5f20ull,0x37325a5f5f6d7261ull,0x6e72656b41445543ull,0x69746e6175516c65ull,
0x6c466e6f6974617aull,0x535f69665074616full,0x78302b7473446372ull,0x732e646461090a30ull,
0x3031722509203233ull,0x25202c327225202cull,0x20202020203b3872ull,0x61090a202f2f0920ull,
0x09203233732e6464ull,0x7225202c31317225ull,0x3b30317225202c39ull,0x2f2f092020202020ull,
0x732e747663090a20ull,0x09203233732e3436ull,0x7225202c32647225ull,0x20202020203b3131ull,
0x6d090a202f2f0920ull,0x36752e6f6c2e6c75ull,0x2c33647225092034ull,0x34202c3264722520ull,
0x2f2f09202020203bull,0x752e646461090a20ull,0x3464722509203436ull,0x202c31647225202cull,
0x2020203b33647225ull,0x6c090a202f2f0920ull,0x6c61626f6c672e64ull,0x662509203233662eull,
0x346472255b202c31ull,0x2f2f09203b5d302bull,0x090a38343a646920ull,0x203436752e766f6dull,
0x51202c3564722509ull,0x202020202020203bull,0x2f09202020202020ull,0x326c756d090a202full,
0x3233732e6f6c2e34ull,0x202c323172250920ull,0x203b38202c357225ull,0x090a202f2f092020ull,
0x203233732e646461ull,0x25202c3331722509ull,0x32317225202c3972ull,0x2f0920202020203bull,
0x2e747663090a202full,0x203233732e343673ull,0x25202c3664722509ull,0x202020203b333172ull,
0x090a202f2f092020ull,0x752e6f6c2e6c756dull,0x3764722509203436ull,0x202c36647225202cull,
0x2f09202020203b32ull,0x2e646461090a202full,0x6472250920343675ull,0x2c35647225202c38ull,
0x20203b3764722520ull,0x090a202f2f092020ull,0x74736e6f632e646cull,0x722509203631732eull,
0x6472255b202c3431ull,0x2f09203b5d302b38ull,0x2039343a6469202full,0x63090a3078302b51ull,
0x33662e6e722e7476ull,0x2509203233732e32ull,0x34317225202c3266ull,0x2f2f09202020203bull,
0x662e766f6d090a20ull,0x2c33662509203233ull,0x2020203b32662520ull,0x2020202020202020ull,
0x2e090a202f2f0920ull,0x3409333209636f6cull,0x61090a3009363136ull,0x09203233662e7362ull,
0x326625202c346625ull,0x202020202020203bull,0x2f2f092020202020ull,0x662e766f6d090a20ull,
0x2c35662509203233ull,0x3030386537663020ull,0x202020203b303030ull,0x352e38202f2f0920ull,
0x37332b6536303730ull,0x672e70746573090aull,0x2509203233662e74ull,0x2c346625202c3170ull,
0x2020203b35662520ull,0x2140090a202f2f09ull,0x2061726220317025ull,0x325f365f744c2409ull,
0x202020203b323635ull,0x202f2f0920202020ull,0x3209636f6c2e090aull,0x3009373136340933ull,
0x33662e766f6d090aull,0x202c366625092032ull,0x3030303865336630ull,0x20202020203b3030ull,
0x35322e30202f2f09ull,0x33662e6c756d090aull,0x202c316625092032ull,0x366625202c316625ull,
0x202020202020203bull,0x6c2e090a202f2f09ull,0x363409333209636full,0x6f6d090a30093831ull,
0x2509203233662e76ull,0x65336630202c3766ull,0x203b303030303038ull,0x202f2f0920202020ull,
0x756d090a35322e30ull,0x2509203233662e6cull,0x2c326625202c3366ull,0x2020203b37662520ull,
0x202f2f0920202020ull,0x325f365f744c240aull,0x6c2e090a3a323635ull,0x363409333209636full,
0x6964090a30093032ull,0x786f727070612e76ull,0x662509203233662eull,0x202c316625202c38ull,
0x202f2f093b336625ull,0x33662e736261090aull,0x202c396625092032ull,0x202020203b386625ull,
0x2020202020202020ull,0x6f6d090a202f2f09ull,0x2509203233622e76ull,0x386625202c353172ull,
0x202020202020203bull,0x202f2f0920202020ull,0x33622e646e61090aull,0x2c36317225092032ull,
0x2d202c3531722520ull,0x3633383437343132ull,0x0a202f2f093b3834ull,0x203233622e726f09ull,
0x25202c3731722509ull,0x353031202c363172ull,0x3b38303634363936ull,0x6f6d090a202f2f09ull,
0x2509203233622e76ull,0x317225202c303166ull,0x2020202020203b37ull,0x202f2f0920202020ull,
0x33662e646461090aull,0x2c31316625092032ull,0x6625202c38662520ull,0x20202020203b3031ull,
0x7663090a202f2f09ull,0x33662e697a722e74ull,0x2509203233662e32ull,0x316625202c323166ull,
0x202f2f0920203b31ull,0x33662e766f6d090aull,0x2c33316625092032ull,0x3030306234663020ull,
0x202020203b303030ull,0x38332e38202f2f09ull,0x0a36302b65313638ull,0x74672e7074657309ull,
0x702509203233662eull,0x202c396625202c32ull,0x0920203b33316625ull,0x6c6573090a202f2full,
0x2509203233662e70ull,0x386625202c343166ull,0x202c32316625202cull,0x202f2f093b327025ull,
0x33662e766f6d090aull,0x2c35316625092032ull,0x3030306633663020ull,0x202020203b303030ull,
0x0a352e30202f2f09ull,0x746c2e7074657309ull,0x702509203233662eull,0x202c396625202c33ull,
0x0920203b35316625ull,0x252140090a202f2full,0x0920617262203370ull,0x30335f365f744c24ull,
0x20202020203b3437ull,0x0a202f2f09202020ull,0x323209636f6c2e09ull,0x0a30093139393209ull,
0x697a722e74766309ull,0x3233662e3233662eull,0x202c343166250920ull,0x092020203b386625ull,
0x5f744c240a202f2full,0x0a3a343730335f36ull,0x383109636f6c2e09ull,0x6d090a3009343909ull,
0x09203233662e6c75ull,0x6625202c36316625ull,0x3b34316625202c32ull,0x2f2f092020202020ull,
0x6c672e7473090a20ull,0x3233662e6c61626full,0x2b346472255b0920ull,0x36316625202c5d30ull,
0x3a6469202f2f093bull,0x636f6c2e090a3035ull,0x3009353909383109ull,0x203b74697865090aull,
0x2020202020202020ull,0x2020202020202020ull,0x2020202020202020ull,0x444c240a202f2f09ull,
0x325a5f5f646e6557ull,0x72656b4144554337ull,0x746e6175516c656eull,0x466e6f6974617a69ull,
0x3a69665074616f6cull,0x5f202f2f207d090aull,0x6b4144554337325aull,0x6175516c656e7265ull,
0x6f6974617a69746eull,0x665074616f6c466eull,0x746e652e090a0a69ull,0x4337325a5f207972ull,
0x656e72656b414455ull,0x7a69746e6175516cull,0x6f68536e6f697461ull,0x0a28206973507472ull,
0x6d617261702e0909ull,0x5f5f203436752e20ull,0x6d72617061647563ull,0x44554337325a5f5full,
0x516c656e72656b41ull,0x74617a69746e6175ull,0x74726f68536e6f69ull,0x446372535f697350ull,
0x702e09090a2c7473ull,0x33732e206d617261ull,0x616475635f5f2032ull,0x325a5f5f6d726170ull,
0x72656b4144554337ull,0x746e6175516c656eull,0x536e6f6974617a69ull,0x5f69735074726f68ull,
0x0a29656469727453ull,0x6765722e090a7b09ull,0x7225203631752e20ull,0x2e090a3b3e343c68ull,
0x3233752e20676572ull,0x3b3e32323c722520ull,0x2e206765722e090aull,0x3c64722520343675ull,
0x722e090a3b3e3031ull,0x646572702e206765ull,0x0a3b3e333c702520ull,0x383109636f6c2e09ull,
0x240a300938303109ull,0x325a5f5f3142424cull,0x72656b4144554337ull,0x746e6175516c656eull,
0x536e6f6974617a69ull,0x3a69735074726f68ull,0x3109636f6c2e090aull,0x0a30093931310938ull,
0x3233732e74766309ull,0x722509203631752eull,0x6961746325202c31ull,0x092020203b782e64ull,
0x747663090a202f2full,0x3233752e3631752eull,0x202c316872250920ull,0x202020203b317225ull,
0x0a202f2f09202020ull,0x6469772e6c756d09ull,0x2509203631752e65ull,0x31687225202c3272ull,
0x092020203b38202cull,0x747663090a202f2full,0x3631752e3233732eull,0x25202c3372250920ull,
0x3b792e6469617463ull,0x0a202f2f09202020ull,0x3631752e74766309ull,0x722509203233752eull,
0x3b337225202c3268ull,0x0920202020202020ull,0x6c756d090a202f2full,0x31752e656469772eull,
0x202c347225092036ull,0x3b38202c32687225ull,0x0a202f2f09202020ull,0x3233732e74766309ull,
0x722509203631752eull,0x2e64697425202c35ull,0x0920202020203b79ull,0x646461090a202f2full,
0x722509203233732eull,0x202c347225202c36ull,0x202020203b357225ull,0x0a202f2f09202020ull,
0x617261702e646c09ull,0x2509203233732e6dull,0x635f5f5b202c3772ull,0x5f6d726170616475ull,
0x4144554337325a5full,0x75516c656e72656bull,0x6974617a69746e61ull,0x5074726f68536e6full,
0x64697274535f6973ull,0x69202f2f093b5d65ull,0x635f5f2037343a64ull,0x5f6d726170616475ull,
0x4144554337325a5full,0x75516c656e72656bull,0x6974617a69746e61ull,0x5074726f68536e6full,
0x64697274535f6973ull,0x6d090a3078302b65ull,0x33732e6f6c2e6c75ull,0x202c387225092032ull,
0x367225202c377225ull,0x2f2f09202020203bull,0x732e747663090a20ull,0x09203631752e3233ull,
0x697425202c397225ull,0x202020203b782e64ull,0x6c090a202f2f0920ull,0x2e6d617261702e64ull,
0x6472250920343675ull,0x75635f5f5b202c31ull,0x5f5f6d7261706164ull,0x6b4144554337325aull,
0x6175516c656e7265ull,0x6f6974617a69746eull,0x735074726f68536eull,0x7473446372535f69ull,
0x6469202f2f093b5dull,0x75635f5f2038343aull,0x5f5f6d7261706164ull,0x6b4144554337325aull,
0x6175516c656e7265ull,0x6f6974617a69746eull,0x735074726f68536eull,0x7473446372535f69ull,
0x6461090a3078302bull,0x2509203233732e64ull,0x327225202c303172ull,0x20203b387225202cull,
0x202f2f0920202020ull,0x33732e646461090aull,0x2c31317225092032ull,0x7225202c39722520ull,
0x20202020203b3031ull,0x7663090a202f2f09ull,0x33732e3436732e74ull,0x2c32647225092032ull,
0x20203b3131722520ull,0x202f2f0920202020ull,0x6f6c2e6c756d090aull,0x722509203436752eull,
0x32647225202c3364ull,0x202020203b32202cull,0x6461090a202f2f09ull,0x2509203436752e64ull,
0x647225202c346472ull,0x3b33647225202c31ull,0x202f2f0920202020ull,0x6f6c672e646c090aull,
0x203631732e6c6162ull,0x5b202c3231722509ull,0x3b5d302b34647225ull,0x343a6469202f2f09ull,
0x752e766f6d090a39ull,0x3564722509203436ull,0x202020203b51202cull,0x2020202020202020ull,
0x6d090a202f2f0920ull,0x2e6f6c2e34326c75ull,0x3172250920323373ull,0x202c357225202c33ull,
0x2f2f092020203b38ull,0x732e646461090a20ull,0x3431722509203233ull,0x25202c397225202cull,
0x202020203b333172ull,0x63090a202f2f0920ull,0x732e3436732e7476ull,0x3664722509203233ull,
0x203b34317225202cull,0x2f2f092020202020ull,0x6c2e6c756d090a20ull,0x2509203436752e6full,
0x647225202c376472ull,0x2020203b32202c36ull,0x61090a202f2f0920ull,0x09203436752e6464ull,
0x7225202c38647225ull,0x37647225202c3564ull,0x2f2f09202020203bull,0x6f632e646c090a20ull,
0x203631732e74736eull,0x5b202c3531722509ull,0x3b5d302b38647225ull,0x3a6469202f2f0920ull,
0x3078302b51203035ull,0x33732e726873090aull,0x2c36317225092032ull,0x31202c3531722520ull,
0x202020202020203bull,0x6f6d090a202f2f09ull,0x2509203233752e76ull,0x203b30202c373172ull,
0x2020202020202020ull,0x202f2f0920202020ull,0x672e70746573090aull,0x2509203233732e65ull,
0x32317225202c3170ull,0x203b37317225202cull,0x2540090a202f2f09ull,0x0920617262203170ull,
0x32315f375f744c24ull,0x20202020203b3238ull,0x202f2f0920202020ull,0x3109636f6c2e090aull,
0x0a30093632310938ull,0x3233732e62757309ull,0x202c383172250920ull,0x7225202c36317225ull,
0x09202020203b3231ull,0x747663090a202f2full,0x3233732e3631732eull,0x202c323172250920ull,
0x2020203b38317225ull,0x0a202f2f09202020ull,0x383109636f6c2e09ull,0x090a300937323109ull,
0x203233732e766964ull,0x25202c3231722509ull,0x317225202c323172ull,0x2f09202020203b35ull,
0x636f6c2e090a202full,0x0938323109383109ull,0x732e67656e090a30ull,0x3231722509203233ull,
0x203b32317225202cull,0x2020202020202020ull,0x62090a202f2f0920ull,0x0920696e752e6172ull,
0x30315f375f744c24ull,0x20202020203b3632ull,0x2f2f092020202020ull,0x5f375f744c240a20ull,
0x2e090a3a32383231ull,0x3109383109636f6cull,0x6461090a30093233ull,0x2509203233732e64ull,
0x317225202c393172ull,0x3b36317225202c32ull,0x202f2f0920202020ull,0x31732e747663090aull,
0x2509203233732e36ull,0x317225202c323172ull,0x2020202020203b39ull,0x6c2e090a202f2f09ull,
0x333109383109636full,0x766964090a300933ull,0x722509203233732eull,0x32317225202c3231ull,
0x203b35317225202cull,0x0a202f2f09202020ull,0x30315f375f744c24ull,0x6f6c2e090a3a3632ull,
0x3533310938310963ull,0x2e726162090a3009ull,0x3b300920636e7973ull,0x2020202020202020ull,
0x2020202020202020ull,0x090a202f2f092020ull,0x09383109636f6c2eull,0x6d090a3009303431ull,
0x33732e6f6c2e6c75ull,0x2c30327225092032ull,0x25202c3231722520ull,0x2f2f09203b353172ull,
0x6c672e7473090a20ull,0x3631732e6c61626full,0x2b346472255b0920ull,0x30327225202c5d30ull,
0x3a6469202f2f093bull,0x636f6c2e090a3135ull,0x0931343109383109ull,0x3b74697865090a30ull,
0x2020202020202020ull,0x2020202020202020ull,0x2020202020202020ull,0x4c240a202f2f0920ull,
0x5a5f5f646e655744ull,0x656b414455433732ull,0x6e6175516c656e72ull,0x6e6f6974617a6974ull,
0x69735074726f6853ull,0x202f2f207d090a3aull,0x4144554337325a5full,0x75516c656e72656bull,
0x6974617a69746e61ull,0x5074726f68536e6full,0x000000000a0a6973ull
};


}


static __cudaFatPtxEntry __ptxEntries [] = {{(char*)"compute_10",(char*)__deviceText_$compute_10$},{0,0}};
static __cudaFatCubinEntry __cubinEntries[] = {{(char*)"sm_10",(char*)__deviceText_$sm_10$},{0,0}};
static __cudaFatDebugEntry __debugEntries[] = {{0,0}};



static __cudaFatCudaBinary __fatDeviceText __attribute__ ((section (".nvFatBinSegment")))= {0x1ee55a01,0x00000003,0x8ecc680c,(char*)"a68acc2789e411bc",(char*)"dct8x8.cu",(char*)" ",__ptxEntries,__cubinEntries,__debugEntries,0,0,0,0,0,0xb1038b15};
# 5 "/tmp/tmpxft_00005f60_00000000-1_dct8x8.cudafe1.stub.c" 2
# 1 "/home/normal/cuda/bin/../include/crt/host_runtime.h" 1
# 85 "/home/normal/cuda/bin/../include/crt/host_runtime.h"
# 1 "/home/normal/cuda/bin/../include/host_defines.h" 1
# 86 "/home/normal/cuda/bin/../include/crt/host_runtime.h" 2
# 111 "/home/normal/cuda/bin/../include/crt/host_runtime.h"
extern "C" {


extern void** __cudaRegisterFatBinary(
  void *fatCubin
);

extern void __cudaUnregisterFatBinary(
  void **fatCubinHandle
);

extern void __cudaRegisterVar(
        void **fatCubinHandle,
        char *hostVar,
        char *deviceAddress,
  const char *deviceName,
        int ext,
        int size,
        int constant,
        int global
);

extern void __cudaRegisterTexture(
        void **fatCubinHandle,
  const struct textureReference *hostVar,
  const void **deviceAddress,
  const char *deviceName,
        int dim,
        int norm,
        int ext
);

extern void __cudaRegisterShared(
  void **fatCubinHandle,
  void **devicePtr
);

extern void __cudaRegisterSharedVar(
  void **fatCubinHandle,
  void **devicePtr,
  size_t size,
  size_t alignment,
  int storage
);

extern void __cudaRegisterFunction(
        void **fatCubinHandle,
  const char *hostFun,
        char *deviceFun,
  const char *deviceName,
        int thread_limit,
        uint3 *tid,
        uint3 *bid,
        dim3 *bDim,
        dim3 *gDim,
        int *wSize
);


}




extern int atexit(void(*)(void)) throw();







static void **__cudaFatCubinHandle;

static void __cudaUnregisterBinaryUtil(void)
{
  __cudaUnregisterFatBinary(__cudaFatCubinHandle);
}
# 226 "/home/normal/cuda/bin/../include/crt/host_runtime.h"
# 1 "/home/normal/cuda/bin/../include/common_functions.h" 1
# 68 "/home/normal/cuda/bin/../include/common_functions.h"
# 1 "/home/normal/cuda/bin/../include/crt/func_macro.h" 1 3
# 69 "/home/normal/cuda/bin/../include/common_functions.h" 2

static clock_t __cuda_clock(void)
{
  return clock();
}

static void *__cuda_memset(void *s, int c, size_t n)
{
  return memset(s, c, n);
}

static void *__cuda_memcpy(void *d, const void *s, size_t n)
{
  return memcpy(d, s, n);
}
# 93 "/home/normal/cuda/bin/../include/common_functions.h"
# 1 "/home/normal/cuda/bin/../include/math_functions.h" 1 3
# 864 "/home/normal/cuda/bin/../include/math_functions.h" 3
extern __attribute__((__weak__)) int __cuda_error_not_implememted(void); int __cuda_error_not_implememted(void);
# 920 "/home/normal/cuda/bin/../include/math_functions.h" 3
static int __cuda_abs(int a)
{
  return abs(a);
}

static float __cuda_fabsf(float a)
{
  return fabsf(a);
}

static long long int __cuda_llabs(long long int a)
{

  return ::llabs(a);



}

static float __cuda_exp2f(float a)
{
  return exp2f(a);
}

# 1 "/home/normal/cuda/bin/../include/device_functions.h" 1 3
# 426 "/home/normal/cuda/bin/../include/device_functions.h" 3
# 1 "/home/normal/cuda/bin/../include/math_constants.h" 1 3
# 427 "/home/normal/cuda/bin/../include/device_functions.h" 2 3
# 2367 "/home/normal/cuda/bin/../include/device_functions.h" 3
# 1 "/home/normal/cuda/bin/../include/common_types.h" 1 3
# 37 "/home/normal/cuda/bin/../include/common_types.h" 3
union __cudart_FloatUintCvt {
    float f;
    unsigned int i;
};

union __cudart_FloatIntCvt {
    float f;
    int i;
};

union __cudart_DoubleUlonglongCvt {
    double d;
    unsigned long long int i;
};

union __cudart_DoubleLonglongCvt {
    double d;
    long long int i;
};

union __cudart_DoubleInthiloCvt {
    double d;
    signed int i[2];
};

struct __cudart_UintUint {
    unsigned int lo;
    unsigned int hi;
};
# 2368 "/home/normal/cuda/bin/../include/device_functions.h" 2 3

static const unsigned char __internal_rcpTab[128] =
{
  0xff, 0xfd, 0xfb, 0xf9, 0xf7, 0xf5, 0xf4, 0xf2,
  0xf0, 0xee, 0xed, 0xeb, 0xe9, 0xe8, 0xe6, 0xe4,
  0xe3, 0xe1, 0xe0, 0xde, 0xdd, 0xdb, 0xda, 0xd8,
  0xd7, 0xd5, 0xd4, 0xd3, 0xd1, 0xd0, 0xcf, 0xcd,
  0xcc, 0xcb, 0xca, 0xc8, 0xc7, 0xc6, 0xc5, 0xc4,
  0xc2, 0xc1, 0xc0, 0xbf, 0xbe, 0xbd, 0xbc, 0xbb,
  0xba, 0xb9, 0xb8, 0xb7, 0xb6, 0xb5, 0xb4, 0xb3,
  0xb2, 0xb1, 0xb0, 0xaf, 0xae, 0xad, 0xac, 0xab,
  0xaa, 0xa9, 0xa8, 0xa8, 0xa7, 0xa6, 0xa5, 0xa4,
  0xa3, 0xa3, 0xa2, 0xa1, 0xa0, 0x9f, 0x9f, 0x9e,
  0x9d, 0x9c, 0x9c, 0x9b, 0x9a, 0x99, 0x99, 0x98,
  0x97, 0x97, 0x96, 0x95, 0x95, 0x94, 0x93, 0x93,
  0x92, 0x91, 0x91, 0x90, 0x8f, 0x8f, 0x8e, 0x8e,
  0x8d, 0x8c, 0x8c, 0x8b, 0x8b, 0x8a, 0x89, 0x89,
  0x88, 0x88, 0x87, 0x87, 0x86, 0x85, 0x85, 0x84,
  0x84, 0x83, 0x83, 0x82, 0x82, 0x81, 0x81, 0x80
};

static const unsigned int __internal_invSqrtCubeTab[96] =
{
  0xfa0bf8fe, 0xee6b28fa, 0xe5f024f7, 0xdaf268f3,
  0xd2f000f0, 0xc890c0ec, 0xc10378e9, 0xb9a758e6,
  0xb4da40e4, 0xadcea0e1, 0xa6f278de, 0xa279c0dc,
  0x9beb48d9, 0x97a5c4d7, 0x916340d4, 0x8d4fc8d2,
  0x895000d0, 0x8563b8ce, 0x818ac0cc, 0x7dc4e8ca,
  0x7a1200c8, 0x7671d8c6, 0x72e440c4, 0x6f6908c2,
  0x6db240c1, 0x6a523cbf, 0x670424bd, 0x6563c0bc,
  0x623028ba, 0x609ce8b9, 0x5d8364b7, 0x5bfd18b6,
  0x58fd40b4, 0x5783a8b3, 0x560e48b2, 0x533000b0,
  0x51c70caf, 0x506238ae, 0x4da4c0ac, 0x4c4c10ab,
  0x4af768aa, 0x49a6b8a9, 0x485a00a8, 0x471134a7,
  0x45cc58a6, 0x434e40a4, 0x4214f8a3, 0x40df88a2,
  0x3fade0a1, 0x3e8000a0, 0x3d55dc9f, 0x3c2f789e,
  0x3c2f789e, 0x3b0cc49d, 0x39edc09c, 0x38d2609b,
  0x37baa89a, 0x36a68899, 0x35960098, 0x34890497,
  0x34890497, 0x337f9896, 0x3279ac95, 0x31774094,
  0x30784893, 0x30784893, 0x2f7cc892, 0x2e84b091,
  0x2d900090, 0x2d900090, 0x2c9eac8f, 0x2bb0b88e,
  0x2bb0b88e, 0x2ac6148d, 0x29dec08c, 0x29dec08c,
  0x28fab08b, 0x2819e88a, 0x2819e88a, 0x273c5889,
  0x273c5889, 0x26620088, 0x258ad487, 0x258ad487,
  0x24b6d886, 0x24b6d886, 0x23e5fc85, 0x23184084,
  0x23184084, 0x224d9883, 0x224d9883, 0x21860882,
  0x21860882, 0x20c18081, 0x20c18081, 0x20000080
};

static float __internal_frcp_kernel (float x,enum cudaRoundMode mode)
{
  unsigned long long prod;
  volatile union __cudart_FloatUintCvt arg;
  unsigned int expo;
  unsigned int sign;
  unsigned f, y;

  arg.f = x;
  sign = arg.i & 0x80000000;
  expo = (arg.i >> 23);
  expo = expo & 0xff;
  f = expo - 1;

  if (f <= 0xFD) {
    y = (arg.i << 8);
    y = y | 0x80000000;

    arg.i = __internal_rcpTab[(y >> 24) - 128];

    f = arg.i * arg.i;
    f = f << 16;
    prod = ((unsigned long long)y) * f;
    arg.i = (arg.i << 24) - (unsigned)(prod >> 32);

    f = arg.i + arg.i;
    prod = ((unsigned long long)y) * f;
    f = (unsigned)(-(int)(prod >> 32));
    prod = ((unsigned long long)arg.i) * f;
    y = y >> 8;

    expo = (2 * 127) - expo - 2;
    arg.i = (unsigned)(prod >> 32);
    if (mode == cudaRoundNearest) {
      arg.i = arg.i >> 6;
    } else {
      arg.i = (arg.i + 32) >> 6;
    }
    if ((int)expo >= 0) {
      f = y * arg.i;
      arg.i = ((expo << 23) + arg.i) | sign;
    } else {

      expo = -(int)expo;
      arg.i = arg.i >> expo;
      f = y * arg.i;
      arg.i = arg.i | sign;
    }
    if (mode == cudaRoundNearest) {
      expo = f + y;
      if ((int)f < 0) f = (unsigned)(-(int)f);
      if ((int)expo < 0) expo = (unsigned)(-(int)expo);
      if (expo < f) arg.i++;
    } else if (mode == cudaRoundZero) {
      if ((int)f > 0) arg.i = arg.i - 1;
    } else if (mode == cudaRoundPosInf) {
      if (((int)f > 0) && sign) arg.i = arg.i - 1;
      if (((int)f < 0) && !sign) arg.i = arg.i + 1;
    } else {
      if (((int)f > 0) && !sign) arg.i = arg.i - 1;
      if (((int)f < 0) && sign) arg.i = arg.i + 1;
    }
    return arg.f;
  } else {

    if (!(arg.i << 1)) {
      arg.i = 0x7F800000 | arg.i;
      return arg.f;
    }

    if ((arg.i << 1) == 0xff000000) {
      arg.i &= 0x80000000;
      return arg.f;
    }

    if ((arg.i << 1) > 0xff000000) {
      arg.i |= 0x00400000;
      return arg.f;
    }

    f = 0;
    arg.i <<= 8;
    do {
      f++;
      arg.i <<= 1;
    } while ((int)arg.i > 0);
    arg.i >>= 8;
    arg.i |= sign;
    arg.f = __internal_frcp_kernel (arg.f, mode);
    expo = ((arg.i << 1) >> 24);
    if ((expo + f) < 255) {
      arg.i = (arg.i + (f << 23));
      return arg.f;
    }
    if (mode == cudaRoundNearest) {
      arg.i = (arg.i & 0x80000000) | 0x7f800000;
    } else if (mode == cudaRoundZero) {
      arg.i = (arg.i & 0x80000000) | 0x7f7fffff;
    } else if (mode == cudaRoundPosInf) {
      arg.i = (arg.i & 0x80000000) | ((sign) ? 0x7f7fffff : 0x7f800000);
    } else {
      arg.i = (arg.i & 0x80000000) | ((sign) ? 0x7f800000 : 0x7f7fffff);
    }
    return arg.f;
  }
}

static float __internal_fsqrt_kernel (float radicand, enum cudaRoundMode mode)

{
  unsigned long long prod;
  volatile union __cudart_FloatUintCvt arg;
  unsigned int expo;
  unsigned int s, f, x;

  arg.f = radicand;
  expo = arg.i >> 23;
  expo = expo & 0xff;
  f = expo - 1;

  if ((arg.i <= 0x80000000) && (f <= 0xFD)) {

    x = (arg.i << 8) | 0x80000000;
    x = x >> (expo & 1);

    arg.i = f = __internal_invSqrtCubeTab[((unsigned)x >> 25) - 32];

    prod = ((unsigned long long)x) * f;
    arg.i = ((arg.i * 3) << 22) - (unsigned)(prod >> 32);

    prod = ((unsigned long long)arg.i) * arg.i;
    s = (unsigned)(prod >> 32);
    prod = ((unsigned long long)x) * s;
    f = 0x30000000 - (unsigned)(prod >> 32);
    prod = ((unsigned long long)f) * arg.i;
    arg.i = (unsigned)(prod >> 32);

    prod = ((unsigned long long)x) * arg.i;
    arg.i = (unsigned)(prod >> 32);
    if (mode == cudaRoundNearest) {
      arg.i = arg.i >> 3;
    } else {
      arg.i = (arg.i + 4) >> 3;
    }
    x = (x << 16) - (arg.i * arg.i);

    if (mode == cudaRoundNearest) {
      f = x - (2 * arg.i + 1);
      if ((int)f < 0) f = (unsigned)(-(int)f);
      if ((int)x < 0) x = (unsigned)(-(int)x);
      if (f < x) arg.i ++;
    } else if ((mode == cudaRoundZero) || (mode == cudaRoundMinInf)) {
      if ((int)x < 0) arg.i--;
    } else if (mode == cudaRoundPosInf) {
      if ((int)x > 0) arg.i++;
    }
    arg.i = arg.i + (((expo + 125) & ~0x1) << 22);
    return arg.f;
  } else {

    if (!(arg.i << 1) || (arg.i == 0x7F800000)) {
      return arg.f;
    }

    if ((arg.i << 1) > 0xFF000000) {
      arg.i |= 0x00400000;
      return arg.f;
    }

    if (arg.i & 0x80000000) {
      arg.i = 0xFFC00000;
      return arg.f;
    }

    x = 0;
    arg.i <<= 8;
    do {
      x++;
      arg.i <<= 1;
    } while ((int)arg.i > 0);
    arg.i >>= 8;
    arg.i += (x & 1) << 23;
    x += (x & 1);
    arg.f = __internal_fsqrt_kernel (arg.f, mode);
    arg.i -= ((x >> 1) << 23);
    return arg.f;
  }
}

static float __internal_fdiv_kernel (float dividend, float divisor, enum cudaRoundMode mode)

{
  unsigned long long prod;
  unsigned r, f, x, y, expox, expoy, sign;
  volatile union __cudart_FloatUintCvt cvtx, cvty, res;

  cvtx.f = dividend;
  cvty.f = divisor;
  expox = ((cvtx.i >> 23) & 0xff) - 1;
  expoy = ((cvty.i >> 23) & 0xff) - 1;
  sign = ((cvtx.i ^ cvty.i) & 0x80000000);

  if ((expox <= 0xFD) && (expoy <= 0xFD)) {
divide:
    expox = expox - expoy + 127 - 1;
    expoy = expox;

    y = (cvty.i << 8) | 0x80000000;
    x = (cvtx.i & 0x00ffffff) | 0x00800000;

    r = __internal_rcpTab[(y >> 24) - 128];

    f = r * r;
    prod = ((unsigned long long)y) * (f << 16);
    r = (r << 24) - (unsigned)(prod >> 32);

    prod = ((unsigned long long)y) * (r << 1);
    f = (unsigned)-(int)(prod >> 32);
    prod = ((unsigned long long)f) * (r << 1);
    r = (unsigned)(prod >> 32);

    prod = ((unsigned long long)x) * (r << 1);

    if (((int)((prod >> 32) << 8)) > 0) {
      expox--;
      prod = prod + prod;
    }
    if (mode == cudaRoundNearest) {

      r = (unsigned)(prod >> 32);
      y = y >> 8;

      if (expox <= 0xFD) {
        int rem0, rem1, inc;

        prod = ((unsigned long long)y) * r;
        x = x << (23 + ((prod >> 32) >> 15));
        rem1 = x - (unsigned)(prod & 0xffffffff);
        rem0 = rem1 - y;
        inc = abs(rem0) < abs(rem1);

        res.i = sign | ((expox << 23) + r + inc);
        return res.f;
      } else if ((int)expox >= 254) {

        res.i = sign | 0x7f800000;
        return res.f;
      } else {

        int shift = -(int)expox;
        if (shift > 23) {

          r = (shift < 25) && ((x != y) || (r > 0x00ff0000));
          res.i = sign | r;
          return res.f;
        }
        if (x == y) {

          shift = -(int)expoy;
          r = 0x00800000 >> shift;
          res.i = sign | r;
          return res.f;
        }
        {
          unsigned long long tempx;
          long long remlo, remhi;

          r = r >> shift;
          prod = ((unsigned long long)y) * r;
          tempx = ((unsigned long long)x) << (23 - shift);
          remlo = 2 * tempx - 2 * prod - y;
          remhi = remlo + 2 * tempx;
          if (remlo < 0) remlo = -remlo;
          if (remhi < 0) remhi = -remhi;
          if (remhi < remlo) tempx = 2 * tempx;
          remlo = tempx - prod;
          remhi = remlo - y;
          if (remlo < 0) remlo = -remlo;
          if (remhi < 0) remhi = -remhi;
          if ((remhi < remlo) || ((remhi == remlo) && (r & 1))) r++;
          res.i = sign | r;
          return res.f;
        }
      }
    } else if (mode == cudaRoundZero) {

      prod += 0x0000000080000000ULL;
      r = (unsigned)(prod >> 32);
      y = y >> 8;

      if (expox <= 0xFD) {
        int rem1;
        prod = ((unsigned long long)y) * r;
        x = x << (23 + ((prod >> 32) >> 15));
        rem1 = x - (unsigned)(prod & 0xffffffff);
        if (rem1 < 0) r--;
        r = (expox << 23) + r;
        if (r == 0x7f800000) r = 0x7f7fffff;
        res.i = sign | r;
        return res.f;
      } else if ((int)expox >= 254) {

        res.i = sign | 0x7f7fffff;
        return res.f;
      } else {

        int shift = -(int)expox;
        if ((x == y) && (shift < 31)) {
          shift = -(int)expoy;
          r = 0x00800000 >> shift;
          res.i = sign | r;
          return res.f;
        }
        if (shift > 23) {
          r = 0;
          res.i = sign | r;
          return res.f;
        }
        {
          unsigned long long tempx;
          long long remlo, remhi;

          r = r >> shift;
          prod = ((unsigned long long)y) * r;
          tempx = ((unsigned long long)x) << (23 - shift);
          remlo = 2 * tempx - 2 * prod - y;
          remhi = remlo + 2 * tempx;
          if (remlo < 0) remlo = -remlo;
          if (remhi < 0) remhi = -remhi;
          if (remhi < remlo) tempx = 2 * tempx;
          remlo = tempx - prod;
          if ((remlo < 0) & (r != 0)) r--;
          res.i = sign | r;
          return res.f;
        }
      }
    } else if (mode == cudaRoundPosInf) {

      prod += 0x0000000080000000ULL;
      r = (unsigned)(prod >> 32);
      y = y >> 8;

      if (expox <= 0xFD) {
        int rem1;
        prod = ((unsigned long long)y) * r;
        x = x << (23 + ((prod >> 32) >> 15));
        rem1 = x - (unsigned)(prod & 0xffffffff);
        if ((rem1 < 0) && (sign)) r--;
        if ((rem1 > 0) && (!sign)) r++;
        r = (expox << 23) + r;
        if ((r == 0x7f800000) && (sign)) r = 0x7f7fffff;
        res.i = sign | r;
        return res.f;
      } else if ((int)expox >= 254) {

        r = sign ? 0x7f7fffff : 0x7f800000;
        res.i = sign | r;
        return res.f;
      } else {

        int shift = -(int)expox;
        if ((x == y) && (shift <= 24)) {
          shift = -(int)expoy;
          r = 0x00800000 >> shift;
          if (r == 0) r = !sign;
          res.i = sign | r;
          return res.f;
        }
        if (shift > 23) {
          r = !sign;
          res.i = sign | r;
          return res.f;
        }
        {
          unsigned long long tempx;
          long long remlo, remhi;

          r = r >> shift;
          prod = ((unsigned long long)y) * r;
          tempx = ((unsigned long long)x) << (23 - shift);
          remlo = 2 * tempx - 2 * prod - y;
          remhi = remlo + 2 * tempx;
          if (remlo < 0) remlo = -remlo;
          if (remhi < 0) remhi = -remhi;
          if (remhi < remlo) tempx = 2 * tempx;
          remlo = tempx - prod;
          if ((remlo < 0) && (r != 0) && (sign)) r--;
          if ((remlo > 0) && (!sign)) r++;
          res.i = sign | r;
          return res.f;
        }
      }
    } else if (mode == cudaRoundMinInf) {

      prod += 0x0000000080000000ULL;
      r = (unsigned)(prod >> 32);
      y = y >> 8;

      if (expox <= 0xFD) {
        int rem1;
        prod = ((unsigned long long)y) * r;
        x = x << (23 + ((prod >> 32) >> 15));
        rem1 = x - (unsigned)(prod & 0xffffffff);
        if ((rem1 < 0) && (!sign)) r--;
        if ((rem1 > 0) && (sign)) r++;
        r = (expox << 23) + r;
        if ((r == 0x7f800000) && (!sign)) r = 0x7f7fffff;
        res.i = sign | r;
        return res.f;
      } else if ((int)expox >= 254) {

        r = sign ? 0x7f800000 : 0x7f7fffff;
        res.i = sign | r;
        return res.f;
      } else {

        int shift = -(int)expox;
        if ((x == y) && (shift <= 24)) {
          shift = -(int)expoy;
          r = 0x00800000 >> shift;
          if (r == 0) r = !!sign;
          res.i = sign | r;
          return res.f;
        }
        if (shift > 23) {
          r = !!sign;
          res.i = sign | r;
          return res.f;
        }
        {
          unsigned long long tempx;
          long long remlo, remhi;

          r = r >> shift;
          prod = ((unsigned long long)y) * r;
          tempx = ((unsigned long long)x) << (23 - shift);
          remlo = 2 * tempx - 2 * prod - y;
          remhi = remlo + 2 * tempx;
          if (remlo < 0) remlo = -remlo;
          if (remhi < 0) remhi = -remhi;
          if (remhi < remlo) tempx = 2 * tempx;
          remlo = tempx - prod;
          if ((remlo < 0) && (r != 0) && (!sign)) r--;
          if ((remlo > 0) && (sign)) r++;
          res.i = sign | r;
          return res.f;
        }
      }
    }
  }
  {
    int xzero, yzero, xinf, yinf, xnan, ynan;

    xnan = (cvtx.i << 1) > 0xff000000;
    ynan = (cvty.i << 1) > 0xff000000;

    if (xnan) {
      res.i = cvtx.i | 0x00400000;
      return res.f;
    }
    if (ynan) {
      res.i = cvty.i | 0x00400000;
      return res.f;
    }
    xzero = (cvtx.i << 1) == 0x00000000;
    yzero = (cvty.i << 1) == 0x00000000;
    xinf = (cvtx.i << 1) == 0xff000000;
    yinf = (cvty.i << 1) == 0xff000000;

    if ((xzero & yzero) | (xinf & yinf)) {
      res.i = 0xffc00000;
      return res.f;
    }

    if (xzero | yinf) {
      res.i = sign;
      return res.f;
    }

    if (yzero | xinf) {
      res.i = sign | 0x7f800000;
      return res.f;
    }

    if ((int)expox < 0) {
      cvtx.i = cvtx.i << 9;
      while ((int)cvtx.i >= 0) {
        expox--;
        cvtx.i = cvtx.i + cvtx.i;
      }
      cvtx.i = cvtx.i >> 8;
    }
    if ((int)expoy < 0) {
      cvty.i = cvty.i << 9;
      while ((int)cvty.i >= 0) {
        expoy--;
        cvty.i = cvty.i + cvty.i;
      }
      cvty.i = cvty.i >> 8;
    }
    goto divide;
  }
}

static float __internal_fmul_kernel2 (float a, float b, enum cudaRoundMode mode)

{
  unsigned long long product;
  volatile union __cudart_FloatUintCvt xx, yy;

  unsigned expo_x, expo_y;

  xx.f = a;
  yy.f = b;

  expo_y = 0xFF;
  expo_x = expo_y & (xx.i >> 23);
  expo_x = expo_x - 1;
  expo_y = expo_y & (yy.i >> 23);
  expo_y = expo_y - 1;

  if ((expo_x <= 0xFD) &&
      (expo_y <= 0xFD)) {
multiply:
    expo_x = expo_x + expo_y;
    expo_y = xx.i ^ yy.i;
    xx.i = xx.i & 0x00ffffff;
    yy.i = yy.i << 8;
    xx.i = xx.i | 0x00800000;
    yy.i = yy.i | 0x80000000;

    product = ((unsigned long long)xx.i) * yy.i;
    expo_x = expo_x - 127 + 2;
    expo_y = expo_y & 0x80000000;
    xx.i = (unsigned int)(product >> 32);
    yy.i = (unsigned int)(product & 0xffffffff);

    if (xx.i < 0x00800000) {
      xx.i = (xx.i << 1) | (yy.i >> 31);
      yy.i = (yy.i << 1);
      expo_x--;
    }
    if (expo_x <= 0xFD) {
      xx.i = xx.i | expo_y;
      xx.i = xx.i + (expo_x << 23);

      if (mode == cudaRoundNearest) {
        if (yy.i < 0x80000000) return xx.f;
        xx.i += ((yy.i == 0x80000000) ? (xx.i & 1) : (yy.i >> 31));
      } else if (mode == cudaRoundZero) {
      } else if (mode == cudaRoundPosInf) {
        xx.i += (yy.i && !expo_y);
      } else if (mode == cudaRoundMinInf) {
        xx.i += (yy.i && expo_y);
      }
      return xx.f;
    } else if ((int)expo_x >= 254) {

      if (mode == cudaRoundNearest) {
         xx.i = expo_y | 0x7F800000;
      } else if (mode == cudaRoundZero) {
         xx.i = expo_y | 0x7F7FFFFF;
      } else if (mode == cudaRoundPosInf) {
         xx.i = (expo_y ? 0xff7fffff : 0x7F800000);
      } else {
         xx.i = (expo_y ? 0xFF800000 : 0x7f7fffff);
      }
      return xx.f;
    } else {

      expo_x = ((unsigned int)-((int)expo_x));
      if (mode == cudaRoundNearest) {
        if (expo_x > 25) {

          xx.i = expo_y;
          return xx.f;
        } else {
          yy.i = (xx.i << (32 - expo_x)) | ((yy.i) ? 1 : 0);
          xx.i = expo_y + (xx.i >> expo_x);
          xx.i += ((yy.i == 0x80000000) ? (xx.i & 1) : (yy.i >> 31));
          return xx.f;
        }
      } else if (mode == cudaRoundZero) {
        if (expo_x > 25) expo_x = 25;
        xx.i = expo_y + (xx.i >> expo_x);
        return xx.f;
      } else if (mode == cudaRoundPosInf) {
        if (expo_x > 25) expo_x = 25;
        yy.i = (xx.i << (32 - expo_x)) | ((yy.i) ? 1 : 0);
        xx.i = expo_y + (xx.i >> expo_x);
        xx.i += (yy.i && !expo_y);
        return xx.f;
      } else {
        if (expo_x > 25) expo_x = 25;
        yy.i = (xx.i << (32 - expo_x)) | ((yy.i) ? 1 : 0);
        xx.i = expo_y + (xx.i >> expo_x);
        xx.i += (yy.i && expo_y);
        return xx.f;
      }
    }
  } else {
    product = xx.i ^ yy.i;
    product = product & 0x80000000;
    if (!(xx.i & 0x7fffffff)) {
      if (expo_y != 254) {
        xx.i = (unsigned int)product;
        return xx.f;
      }
      expo_y = yy.i << 1;
      if (expo_y == 0xFF000000) {
        xx.i = expo_y | 0x00C00000;
      } else {
        xx.i = yy.i | 0x00400000;
      }
      return xx.f;
    }
    if (!(yy.i & 0x7fffffff)) {
      if (expo_x != 254) {
        xx.i = (unsigned int)product;
        return xx.f;
      }
      expo_x = xx.i << 1;
      if (expo_x == 0xFF000000) {
        xx.i = expo_x | 0x00C00000;
      } else {
        xx.i = xx.i | 0x00400000;
      }
      return xx.f;
    }
    if ((expo_y != 254) && (expo_x != 254)) {
      expo_y++;
      expo_x++;
      if (expo_x == 0) {
        expo_y |= xx.i & 0x80000000;




        xx.i = xx.i << 8;
        while (!(xx.i & 0x80000000)) {
          xx.i <<= 1;
          expo_x--;
        }
        xx.i = (xx.i >> 8) | (expo_y & 0x80000000);
        expo_y &= ~0x80000000;
        expo_y--;
        goto multiply;
      }
      if (expo_y == 0) {
        expo_x |= yy.i & 0x80000000;
        yy.i = yy.i << 8;
        while (!(yy.i & 0x80000000)) {
          yy.i <<= 1;
          expo_y--;
        }
        yy.i = (yy.i >> 8) | (expo_x & 0x80000000);
        expo_x &= ~0x80000000;
        expo_x--;
        goto multiply;
      }
    }
    expo_x = xx.i << 1;
    expo_y = yy.i << 1;

    if (expo_x > 0xFF000000) {

      xx.i = xx.i | 0x00400000;
      return xx.f;
    }

    if (expo_y > 0xFF000000) {

      xx.i = yy.i | 0x00400000;
      return xx.f;
    }
    xx.i = (unsigned int)product | 0x7f800000;
    return xx.f;
  }
}

static float __internal_fmaf_kernel (float a, float b, float c, enum cudaRoundMode mode)

{
  unsigned long long product;
  unsigned int xx, yy, zz, ww;
  unsigned int temp, s, u;
  unsigned int expo_x, expo_y, expo_z;
  volatile union __cudart_FloatUintCvt cvt;

  cvt.f = a;
  xx = cvt.i;
  cvt.f = b;
  yy = cvt.i;
  cvt.f = c;
  zz = cvt.i;

  temp = 0xff;
  expo_x = temp & (xx >> 23);
  expo_x = expo_x - 1;
  expo_y = temp & (yy >> 23);
  expo_y = expo_y - 1;
  expo_z = temp & (zz >> 23);
  expo_z = expo_z - 1;

  if (!((expo_x <= 0xFD) &&
        (expo_y <= 0xFD) &&
        (expo_z <= 0xFD))) {




    if ((yy << 1) > 0xff000000) {
      return b + b;
    }
    if ((zz << 1) > 0xff000000) {
      return c + c;
    }
    if ((xx << 1) > 0xff000000) {
      return a + a;
    }
# 3148 "/home/normal/cuda/bin/../include/device_functions.h" 3
    if ((((xx << 1) == 0) && ((yy << 1) == 0xff000000)) ||
        (((yy << 1) == 0) && ((xx << 1) == 0xff000000))) {
      cvt.i = 0xffc00000;
      return cvt.f;
    }
    if ((zz << 1) == 0xff000000) {
      if (((yy << 1) == 0xff000000) || ((xx << 1) == 0xff000000)) {
        if ((int)(xx ^ yy ^ zz) < 0) {
          cvt.i = 0xffc00000;
          return cvt.f;
        }
      }
    }




    if ((xx << 1) == 0xff000000) {
      xx = xx ^ (yy & 0x80000000);
      cvt.i = xx;
      return cvt.f;
    }
    if ((yy << 1) == 0xff000000) {
      yy = yy ^ (xx & 0x80000000);
      cvt.i = yy;
      return cvt.f;
    }
    if ((zz << 1) == 0xff000000) {
      cvt.i = zz;
      return cvt.f;
    }





    if (zz == 0x80000000) {
      if (((xx << 1) == 0) || ((yy << 1) == 0)) {
        if ((int)(xx ^ yy) < 0) {
          cvt.i = zz;
          return cvt.f;
        }
      }
    }



    if (((zz << 1) == 0) &&
        (((xx << 1) == 0) || ((yy << 1) == 0))) {
      if (mode == cudaRoundMinInf) {
        zz = 0x80000000 & (xx ^ yy ^ zz);
      } else {
        zz &= 0x7fffffff;
      }
      cvt.i = zz;
      return cvt.f;
    }



    if (((xx << 1) == 0) || ((yy << 1) == 0)) {
      cvt.i = zz;
      return cvt.f;
    }

    if (expo_x == (unsigned)-1) {
      temp = xx & 0x80000000;
      xx = xx << 8;
      while (!(xx & 0x80000000)) {
        xx <<= 1;
        expo_x--;
      }
      expo_x++;
      xx = (xx >> 8) | temp;
    }

    if (expo_y == (unsigned)-1) {
      temp = yy & 0x80000000;
      yy = yy << 8;
      while (!(yy & 0x80000000)) {
        yy <<= 1;
        expo_y--;
      }
      expo_y++;
      yy = (yy >> 8) | temp;
    }

    if ((expo_z == (unsigned)-1) && ((zz << 1) != 0)) {
      temp = zz & 0x80000000;
      zz = zz << 8;
      while (!(zz & 0x80000000)) {
        zz <<= 1;
        expo_z--;
      }
      expo_z++;
      zz = (zz >> 8) | temp;
    }
  }

  expo_x = expo_x + expo_y;
  expo_y = xx ^ yy;
  xx = xx & 0x00ffffff;
  yy = yy << 8;
  xx = xx | 0x00800000;
  yy = yy | 0x80000000;

  product = ((unsigned long long)xx) * yy;
  xx = (unsigned)(product >> 32);
  yy = (unsigned)(product & 0xffffffff);

  expo_x = expo_x - 127 + 2;
  expo_y = expo_y & 0x80000000;

  if (xx < 0x00800000) {
    xx = (xx << 1) | (yy >> 31);
    yy = (yy << 1);
    expo_x--;
  }
  temp = 0;

  if ((zz << 1) != 0) {
    s = zz & 0x80000000;
    zz &= 0x00ffffff;
    zz |= 0x00800000;
    ww = 0;

    if ((int)expo_z > (int)expo_x) {
      temp = expo_z;
      expo_z = expo_x;
      expo_x = temp;
      temp = zz;
      zz = xx;
      xx = temp;
      temp = ww;
      ww = yy;
      yy = temp;
      temp = expo_y;
      expo_y = s;
      s = temp;
    }


    expo_z = expo_x - expo_z;
    u = expo_y ^ s;
    if (expo_z <= 49) {

      temp = 0;
      while (expo_z >= 32) {
        temp = ww | (temp != 0);
        ww = zz;
        zz = 0;
        expo_z -= 32;
      }
      if (expo_z) {
        temp = ((temp >> expo_z) | (ww << (32 - expo_z)) |
                ((temp << (32 - expo_z)) != 0));
        ww = (ww >> expo_z) | (zz << (32 - expo_z));
        zz = (zz >> expo_z);
      }

    } else {
      temp = 1;
      ww = 0;
      zz = 0;
    }
    if ((int)u < 0) {

      temp = (unsigned)(-(int)temp);
      s = (temp != 0);
      u = yy - s;
      s = u > yy;
      yy = u - ww;
      s += yy > u;
      xx = (xx - zz) - s;
      if (!(xx | yy | temp)) {

        if (mode == cudaRoundMinInf) {
          xx = 0x80000000;
        }
        cvt.i = xx;
        return cvt.f;
      }
      if ((int)xx < 0) {


        temp = ~temp;
        yy = ~yy;
        xx = ~xx;
        if (++temp == 0) {
          if (++yy == 0) {
            ++xx;
          }
        }
        expo_y ^= 0x80000000;
      }

      while (!(xx & 0x00800000)) {
        xx = (xx << 1) | (yy >> 31);
        yy = (yy << 1);
        expo_x--;
      }
    } else {

      yy = yy + ww;
      s = yy < ww;
      xx = xx + zz + s;
      if (xx & 0x01000000) {
        temp = temp | (yy << 31);
        yy = (yy >> 1) | (xx << 31);
        xx = ((xx & 0x80000000) | (xx >> 1)) & ~0x40000000;
        expo_x++;
      }
    }
  }
  temp = yy | (temp != 0);
  if (expo_x <= 0xFD) {

    xx |= expo_y;
    if (mode == cudaRoundNearest) {
      s = xx & 1;
      xx += (temp == 0x80000000) ? s : (temp >> 31);
    } else if (mode == cudaRoundPosInf) {
      xx += temp && !expo_y;
    } else if (mode == cudaRoundMinInf) {
      xx += temp && expo_y;
    }
    xx = xx + (expo_x << 23);
    cvt.i = xx;
    return cvt.f;
  } else if ((int)expo_x >= 126) {

    if (mode == cudaRoundNearest) {
      xx = expo_y | 0x7f800000;
    } else if (mode == cudaRoundZero) {
      xx = expo_y | 0x7F7FFFFF;
    } else if (mode == cudaRoundPosInf) {
      xx = expo_y ? 0xFF7FFFFF : 0x7f800000;
    } else if (mode == cudaRoundMinInf) {
      xx = expo_y ? 0xff800000 : 0x7f7fffff;
    }
    cvt.i = xx;
    return cvt.f;
  }

  expo_x = (unsigned int)(-(int)expo_x);
  if (expo_x > 25) {

    xx = 0;
    if (mode == cudaRoundPosInf) {
      xx += !expo_y;
    } else if (mode == cudaRoundMinInf) {
      xx += !!expo_y;
    }
    cvt.i = expo_y | xx;
    return cvt.f;
  }
  temp = (xx << (32 - expo_x)) | ((temp) ? 1 : 0);
  xx = xx >> expo_x;
  if (mode == cudaRoundNearest) {
    xx = xx + ((temp == 0x80000000) ? (xx & 1) : (temp >> 31));
  } else if (mode == cudaRoundPosInf) {
    xx = xx + (!expo_y && temp);
  } else if (mode == cudaRoundMinInf) {
    xx = xx + (expo_y && temp);
  }
  xx = expo_y + xx;
  cvt.i = xx;
  return cvt.f;
}


static float __internal_fadd_kernel2 (float a, float b, enum cudaRoundMode mode)

{
  volatile union __cudart_FloatUintCvt xx, yy;
  unsigned int expo_x;
  unsigned int expo_y;
  unsigned int temp;

  xx.f = a;
  yy.f = b;


  expo_y = yy.i << 1;
  if (expo_y > (xx.i << 1)) {
    expo_y = xx.i;
    xx.i = yy.i;
    yy.i = expo_y;
  }

  temp = 0xff;
  expo_x = temp & (xx.i >> 23);
  expo_x = expo_x - 1;
  expo_y = temp & (yy.i >> 23);
  expo_y = expo_y - 1;

  if ((expo_x <= 0xFD) &&
      (expo_y <= 0xFD)) {
add:
    expo_y = expo_x - expo_y;
    if (expo_y > 25) {
      expo_y = 31;
    }
    temp = xx.i ^ yy.i;
    xx.i = xx.i & ~0x7f000000;
    xx.i = xx.i | 0x00800000;
    yy.i = yy.i & ~0xff000000;
    yy.i = yy.i | 0x00800000;

    if ((int)temp < 0) {

      temp = 32 - expo_y;
      temp = (expo_y) ? (yy.i << temp) : 0;
      temp = (unsigned)(-((int)temp));
      xx.i = xx.i - (yy.i >> expo_y) - (temp ? 1 : 0);
      if (xx.i & 0x00800000) {
        if (expo_x <= 0xFD) {
          xx.i = xx.i + (expo_x << 23);
          if (mode == cudaRoundMinInf) {
            xx.i += (temp && (xx.i & 0x80000000));
          } else if (mode == cudaRoundPosInf) {
            xx.i += (temp && !(xx.i & 0x80000000));
          }
          return xx.f;
        }
      } else {
        if ((temp | (xx.i << 1)) == 0) {

          if (mode == cudaRoundMinInf) {
            xx.i = 0x80000000;
          } else if (mode == cudaRoundPosInf) {
            xx.i = 0;
          }
          return xx.f;
        }

        yy.i = xx.i & 0x80000000;
        do {
          xx.i = (xx.i << 1) | (temp >> 31);
          temp <<= 1;
          expo_x--;
        } while (!(xx.i & 0x00800000));
        xx.i = xx.i | yy.i;
      }
    } else {

      temp = 32 - expo_y;
      temp = (expo_y) ? (yy.i << temp) : 0;
      xx.i = xx.i + (yy.i >> expo_y);
      if (!(xx.i & 0x01000000)) {
        if (expo_x <= 0xFD) {
          xx.i = xx.i + (expo_x << 23);
          if (mode == cudaRoundMinInf) {
            xx.i += (temp && (xx.i & 0x80000000));
          } else if (mode == cudaRoundPosInf) {
            xx.i += (temp && !(xx.i & 0x80000000));
          }
          return xx.f;
        }
      } else {

        temp = (xx.i << 31) | (temp >> 1);
        xx.i = ((xx.i & 0x80000000) | (xx.i >> 1)) & ~0x40000000;
        expo_x++;
      }
    }
    if (expo_x <= 0xFD) {
      if (mode == cudaRoundMinInf) {
        xx.i += (temp && (xx.i & 0x80000000));
      } else if (mode == cudaRoundPosInf) {
        xx.i += (temp && !(xx.i & 0x80000000));
      }
      xx.i = xx.i + (expo_x << 23);
      return xx.f;
    }
    if ((int)expo_x >= 254) {

      temp = xx.i & 0x80000000;
      if (mode == cudaRoundMinInf) {
        xx.i = (temp ? 0xFF800000 : 0x7f7fffff);
      } else if (mode == cudaRoundPosInf) {
        xx.i = (temp ? 0xff7fffff : 0x7F800000);
      }
      return xx.f;
    }

    expo_y = expo_x + 32;
    yy.i = xx.i & 0x80000000;
    xx.i = xx.i & ~0xff000000;
    expo_x = (unsigned)(-((int)expo_x));
    temp = xx.i << expo_y | ((temp) ? 1 : 0);
    xx.i = yy.i | (xx.i >> expo_x);
    if (mode == cudaRoundMinInf) {
      xx.i += (temp && yy.i);
    } else if (mode == cudaRoundPosInf) {
      xx.i += (temp && !yy.i);
    }
    return xx.f;
  } else {

    if (!(yy.i << 1)) {
      if (mode == cudaRoundMinInf) {
        if (!(xx.i << 1)) {
          xx.i = xx.i | yy.i;
        }
      } else if (mode == cudaRoundPosInf) {
        if (xx.i == 0x80000000) {
          xx.i = yy.i;
        }
      }
      if ((xx.i << 1) > 0xff000000) {
        xx.i |= 0x00400000;
      }
      return xx.f;
    }
    if ((expo_y != 254) && (expo_x != 254)) {

      if (expo_x == (unsigned int) -1) {
        temp = xx.i & 0x80000000;
        xx.i = xx.i << 8;
        while (!(xx.i & 0x80000000)) {
          xx.i <<= 1;
          expo_x--;
        }
        expo_x++;
        xx.i = (xx.i >> 8) | temp;
      }
      if (expo_y == (unsigned int) -1) {
        temp = yy.i & 0x80000000;
        yy.i = yy.i << 8;
        while (!(yy.i & 0x80000000)) {
          yy.i <<= 1;
          expo_y--;
        }
        expo_y++;
        yy.i = (yy.i >> 8) | temp;
      }
      goto add;
    }
    expo_x = xx.i << 1;
    expo_y = yy.i << 1;

    if (expo_x > 0xff000000) {

      xx.i = xx.i | 0x00400000;
      return xx.f;
    }

    if (expo_y > 0xff000000) {

      xx.i = yy.i | 0x00400000;
      return xx.f;
    }
    if ((expo_x == 0xff000000) && (expo_y == 0xff000000)) {




      expo_x = xx.i ^ yy.i;
      xx.i = xx.i | ((expo_x) ? 0xffc00000 : 0);
      return xx.f;
    }

    if (expo_y == 0xff000000) {
      xx.i = yy.i;
    }
    return xx.f;
  }
}

static float __frcp_rn (float a)
{
  return __internal_frcp_kernel (a, cudaRoundNearest);
}

static float __frcp_rz (float a)
{
  return __internal_frcp_kernel (a, cudaRoundZero);
}

static float __frcp_rd (float a)
{
  return __internal_frcp_kernel (a, cudaRoundMinInf);
}

static float __frcp_ru (float a)
{
  return __internal_frcp_kernel (a, cudaRoundPosInf);
}

static float __fsqrt_rn (float a)
{
  return __internal_fsqrt_kernel (a, cudaRoundNearest);
}

static float __fsqrt_rz (float a)
{
  return __internal_fsqrt_kernel (a, cudaRoundZero);
}

static float __fsqrt_rd (float a)
{
  return __internal_fsqrt_kernel (a, cudaRoundMinInf);
}

static float __fsqrt_ru (float a)
{
  return __internal_fsqrt_kernel (a, cudaRoundPosInf);
}

static float __fdiv_rn (float a, float b)
{
  return __internal_fdiv_kernel (a, b, cudaRoundNearest);
}

static float __fdiv_rz (float a, float b)
{
  return __internal_fdiv_kernel (a, b, cudaRoundZero);
}

static float __fdiv_rd (float a, float b)
{
  return __internal_fdiv_kernel (a, b, cudaRoundMinInf);
}

static float __fdiv_ru (float a, float b)
{
  return __internal_fdiv_kernel (a, b, cudaRoundPosInf);
}

static float __fadd_rd (float a, float b)
{
  return __internal_fadd_kernel2 (a, b, cudaRoundMinInf);
}

static float __fadd_ru (float a, float b)
{
  return __internal_fadd_kernel2 (a, b, cudaRoundPosInf);
}

static float __fmul_rd (float a, float b)
{
  return __internal_fmul_kernel2 (a, b, cudaRoundMinInf);
}

static float __fmul_ru (float a, float b)
{
  return __internal_fmul_kernel2 (a, b, cudaRoundPosInf);
}

static float __fmaf_rn (float a, float b, float c)
{
  return __internal_fmaf_kernel (a, b, c, cudaRoundNearest);
}

static float __fmaf_rz (float a, float b, float c)
{
  return __internal_fmaf_kernel (a, b, c, cudaRoundZero);
}

static float __fmaf_ru (float a, float b, float c)
{
  return __internal_fmaf_kernel (a, b, c, cudaRoundPosInf);
}

static float __fmaf_rd (float a, float b, float c)
{
  return __internal_fmaf_kernel (a, b, c, cudaRoundMinInf);
}

static int __cuda___isnan(double a);
static int __cuda___isnanf(float a);
static int __double2int_rz(double);
static unsigned int __double2uint_rz(double);
static long long int __double2ll_rz(double);
static unsigned long long int __double2ull_rz(double);
# 3737 "/home/normal/cuda/bin/../include/device_functions.h" 3
static int __mulhi(int a, int b)
{
  long long int c = (long long int)a * (long long int)b;

  return (int)(c >> 32);
}

static unsigned int __umulhi(unsigned int a, unsigned int b)
{
  unsigned long long int c = (unsigned long long int)a * (unsigned long long int)b;

  return (unsigned int)(c >> 32);
}

static unsigned long long int __umul64hi(unsigned long long int a, unsigned long long int b)
{
  unsigned int a_lo = (unsigned int)a;
  unsigned long long int a_hi = a >> 32;
  unsigned int b_lo = (unsigned int)b;
  unsigned long long int b_hi = b >> 32;
  unsigned long long int m1 = a_lo * b_hi;
  unsigned long long int m2 = a_hi * b_lo;
  unsigned int carry;

  carry = (0ULL + __umulhi(a_lo, b_lo) + (unsigned int)m1 + (unsigned int)m2) >> 32;

  return a_hi * b_hi + (m1 >> 32) + (m2 >> 32) + carry;
}

static long long int __mul64hi(long long int a, long long int b)
{
  long long int res;
  res = __umul64hi(a, b);
  if (a < 0LL) res = res - b;
  if (b < 0LL) res = res - a;
  return res;
}

static float __saturatef(float a)
{
  if (__cuda___isnanf(a)) return 0.0f;
  return a >= 1.0f ? 1.0f : a <= 0.0f ? 0.0f : a;
}

static unsigned int __sad(int a, int b, unsigned int c)
{
  long long int diff = (long long int)a - (long long int)b;

  return (unsigned int)(__cuda_llabs(diff) + (long long int)c);
}

static unsigned int __usad(unsigned int a, unsigned int b, unsigned int c)
{
  long long int diff = (long long int)a - (long long int)b;

  return (unsigned int)(__cuda_llabs(diff) + (long long int)c);
}

static int __mul24(int a, int b)
{

  a &= 0xffffff;
  a = (a & 0x800000) != 0 ? a | ~0xffffff : a;
  b &= 0xffffff;
  b = (b & 0x800000) != 0 ? b | ~0xffffff : b;


  return a * b;
}

static unsigned int __umul24(unsigned int a, unsigned int b)
{

  a &= 0xffffff;
  b &= 0xffffff;


  return a * b;
}

static float __int_as_float(int a)
{
  volatile union __cudart_FloatIntCvt u;

  u.i = a;
  return u.f;
}

static int __float_as_int(float a)
{
  volatile union __cudart_FloatIntCvt u;

  u.f = a;
  return u.i;
}

static long long int __internal_float2ll_kernel(float a, long long int max, long long int min, long long int nan, enum cudaRoundMode rndMode)
{
  unsigned long long int res, t = 0ULL;
  int shift;
  unsigned int ia;

  if (sizeof(a) == sizeof(double) && __cuda___isnan((double)a)) return nan; if (sizeof(a) == sizeof(float) && __cuda___isnanf((float)a)) return nan; if (a >= max) return max; if (a <= min) return min;
  ia = __float_as_int(a);
  shift = 189 - ((ia >> 23) & 0xff);
  res = (unsigned long long int)(((ia << 8) | 0x80000000) >> 1) << 32;
  if (shift >= 64) {
    t = res;
    res = 0;
  } else if (shift) {
    t = res << (64 - shift);
    res = res >> shift;
  }
  if (rndMode == cudaRoundNearest && (long long int)t < 0LL) {
    res += t == 0x8000000000000000ULL ? res & 1ULL : 1ULL;
  }
  else if (rndMode == cudaRoundMinInf && t != 0ULL && ia > 0x80000000) {
    res++;
  }
  else if (rndMode == cudaRoundPosInf && t != 0ULL && (int)ia > 0) {
    res++;
  }
  if ((int)ia < 0) res = (unsigned long long int)-(long long int)res;
  return (long long int)res;
}

static int __internal_float2int(float a, enum cudaRoundMode rndMode)
{
  return (int)__internal_float2ll_kernel(a, 2147483647LL, -2147483648LL, 0LL, rndMode);
}

static int __float2int_rz(float a)
{



  return __internal_float2int(a, cudaRoundZero);

}

static int __float2int_ru(float a)
{
  return __internal_float2int(a, cudaRoundPosInf);
}

static int __float2int_rd(float a)
{
  return __internal_float2int(a, cudaRoundMinInf);
}

static int __float2int_rn(float a)
{
  return __internal_float2int(a, cudaRoundNearest);
}

static long long int __internal_float2ll(float a, enum cudaRoundMode rndMode)
{
  return __internal_float2ll_kernel(a, 9223372036854775807LL, -9223372036854775807LL -1LL, -9223372036854775807LL -1LL, rndMode);
}

static long long int __float2ll_rz(float a)
{



  return __internal_float2ll(a, cudaRoundZero);

}

static long long int __float2ll_ru(float a)
{
  return __internal_float2ll(a, cudaRoundPosInf);
}

static long long int __float2ll_rd(float a)
{
  return __internal_float2ll(a, cudaRoundMinInf);
}

static long long int __float2ll_rn(float a)
{
  return __internal_float2ll(a, cudaRoundNearest);
}

static unsigned long long int __internal_float2ull_kernel(float a, unsigned long long int max, unsigned long long int nan, enum cudaRoundMode rndMode)
{
  unsigned long long int res, t = 0ULL;
  int shift;
  unsigned int ia;

  if (sizeof(a) == sizeof(double) && __cuda___isnan((double)a)) return nan; if (sizeof(a) == sizeof(float) && __cuda___isnanf((float)a)) return nan; if (a >= max) return max; if (a <= 0LL) return 0LL;
  ia = __float_as_int(a);
  shift = 190 - ((ia >> 23) & 0xff);
  res = (unsigned long long int)((ia << 8) | 0x80000000) << 32;
  if (shift >= 64) {
    t = res >> (int)(shift > 64);
    res = 0;
  } else if (shift) {
    t = res << (64 - shift);
    res = res >> shift;
  }
  if (rndMode == cudaRoundNearest && (long long int)t < 0LL) {
    res += t == 0x8000000000000000ULL ? res & 1ULL : 1ULL;
  }
  else if (rndMode == cudaRoundPosInf && t != 0ULL) {
    res++;
  }
  return res;
}

static unsigned int __internal_float2uint(float a, enum cudaRoundMode rndMode)
{
  return (unsigned int)__internal_float2ull_kernel(a, 4294967295U, 0U, rndMode);
}

static unsigned int __float2uint_rz(float a)
{



  return __internal_float2uint(a, cudaRoundZero);

}

static unsigned int __float2uint_ru(float a)
{
  return __internal_float2uint(a, cudaRoundPosInf);
}

static unsigned int __float2uint_rd(float a)
{
  return __internal_float2uint(a, cudaRoundMinInf);
}

static unsigned int __float2uint_rn(float a)
{
  return __internal_float2uint(a, cudaRoundNearest);
}

static unsigned long long int __internal_float2ull(float a, enum cudaRoundMode rndMode)
{
  return __internal_float2ull_kernel(a, 18446744073709551615ULL, 9223372036854775808ULL, rndMode);
}

static unsigned long long int __float2ull_rz(float a)
{



  return __internal_float2ull(a, cudaRoundZero);

}

static unsigned long long int __float2ull_ru(float a)
{
  return __internal_float2ull(a, cudaRoundPosInf);
}

static unsigned long long int __float2ull_rd(float a)
{
  return __internal_float2ull(a, cudaRoundMinInf);
}

static unsigned long long int __float2ull_rn(float a)
{
  return __internal_float2ull(a, cudaRoundNearest);
}

static int __internal_normalize64(unsigned long long int *a)
{
  int lz = 0;

  if ((*a & 0xffffffff00000000ULL) == 0ULL) {
    *a <<= 32;
    lz += 32;
  }
  if ((*a & 0xffff000000000000ULL) == 0ULL) {
    *a <<= 16;
    lz += 16;
  }
  if ((*a & 0xff00000000000000ULL) == 0ULL) {
    *a <<= 8;
    lz += 8;
  }
  if ((*a & 0xf000000000000000ULL) == 0ULL) {
    *a <<= 4;
    lz += 4;
  }
  if ((*a & 0xC000000000000000ULL) == 0ULL) {
    *a <<= 2;
    lz += 2;
  }
  if ((*a & 0x8000000000000000ULL) == 0ULL) {
    *a <<= 1;
    lz += 1;
  }
  return lz;
}

static int __internal_normalize(unsigned int *a)
{
  unsigned long long int t = (unsigned long long int)*a;
  int lz = __internal_normalize64(&t);

  *a = (unsigned int)(t >> 32);

  return lz - 32;
}

static float __internal_int2float_kernel(int a, enum cudaRoundMode rndMode)
{
  volatile union __cudart_FloatUintCvt res;
  int shift;
  unsigned int t;
  res.i = a;
  if (a == 0) return res.f;
  if (a < 0) res.i = (unsigned int)-a;
  shift = __internal_normalize((unsigned int*)&res.i);
  t = res.i << 24;
  res.i = (res.i >> 8);
  res.i += (127 + 30 - shift) << 23;
  if (a < 0) res.i |= 0x80000000;
  if ((rndMode == cudaRoundNearest) && (t >= 0x80000000)) {
    res.i += (t == 0x80000000) ? (res.i & 1) : (t >> 31);
  }
  else if ((rndMode == cudaRoundMinInf) && t && (a < 0)) {
    res.i++;
  }
  else if ((rndMode == cudaRoundPosInf) && t && (a > 0)) {
    res.i++;
  }
  return res.f;
}

static float __int2float_rz(int a)
{
  return __internal_int2float_kernel(a, cudaRoundZero);
}

static float __int2float_ru(int a)
{
  return __internal_int2float_kernel(a, cudaRoundPosInf);
}

static float __int2float_rd(int a)
{
  return __internal_int2float_kernel(a, cudaRoundMinInf);
}

static float __int2float_rn(int a)
{



  return __internal_int2float_kernel(a, cudaRoundNearest);

}

static float __internal_uint2float_kernel(unsigned int a, enum cudaRoundMode rndMode)
{
  volatile union __cudart_FloatUintCvt res;
  int shift;
  unsigned int t;
  res.i = a;
  if (a == 0) return res.f;
  shift = __internal_normalize((unsigned int*)&res.i);
  t = res.i << 24;
  res.i = (res.i >> 8);
  res.i += (127 + 30 - shift) << 23;
  if ((rndMode == cudaRoundNearest) && (t >= 0x80000000)) {
    res.i += (t == 0x80000000) ? (res.i & 1) : (t >> 31);
  }
  else if ((rndMode == cudaRoundPosInf) && t) {
    res.i++;
  }
  return res.f;
}

static float __uint2float_rz(unsigned int a)
{
  return __internal_uint2float_kernel(a, cudaRoundZero);
}

static float __uint2float_ru(unsigned int a)
{
  return __internal_uint2float_kernel(a, cudaRoundPosInf);
}

static float __uint2float_rd(unsigned int a)
{
  return __internal_uint2float_kernel(a, cudaRoundMinInf);
}

static float __uint2float_rn(unsigned int a)
{



  return __internal_uint2float_kernel(a, cudaRoundNearest);

}

static float __ll2float_rn(long long int a)
{
  return (float)a;
}

static float __ull2float_rn(unsigned long long int a)
{



  unsigned long long int temp;
  unsigned int res, t;
  int shift;
  if (a == 0ULL) return 0.0f;
  temp = a;
  shift = __internal_normalize64(&temp);
  temp = (temp >> 8) | ((temp & 0xffULL) ? 1ULL : 0ULL);
  res = (unsigned int)(temp >> 32);
  t = (unsigned int)temp;
  res += (127 + 62 - shift) << 23;
  res += t == 0x80000000 ? res & 1 : t >> 31;
  return __int_as_float(res);

}

static float __internal_fmul_kernel(float a, float b, int rndNearest)
{
  unsigned long long product;
  volatile union __cudart_FloatUintCvt xx, yy;
  unsigned expo_x, expo_y;

  xx.f = a;
  yy.f = b;

  expo_y = 0xFF;
  expo_x = expo_y & (xx.i >> 23);
  expo_x = expo_x - 1;
  expo_y = expo_y & (yy.i >> 23);
  expo_y = expo_y - 1;

  if ((expo_x <= 0xFD) &&
      (expo_y <= 0xFD)) {
multiply:
    expo_x = expo_x + expo_y;
    expo_y = xx.i ^ yy.i;
    xx.i = xx.i & 0x00ffffff;
    yy.i = yy.i << 8;
    xx.i = xx.i | 0x00800000;
    yy.i = yy.i | 0x80000000;

    product = ((unsigned long long)xx.i) * yy.i;
    expo_x = expo_x - 127 + 2;
    expo_y = expo_y & 0x80000000;
    xx.i = (unsigned int)(product >> 32);
    yy.i = (unsigned int)(product & 0xffffffff);

    if (xx.i < 0x00800000) {
      xx.i = (xx.i << 1) | (yy.i >> 31);
      yy.i = (yy.i << 1);
      expo_x--;
    }
    if (expo_x <= 0xFD) {
      xx.i = xx.i | expo_y;
      xx.i = xx.i + (expo_x << 23);

      if (yy.i < 0x80000000) return xx.f;
      xx.i += (((yy.i == 0x80000000) ? (xx.i & 1) : (yy.i >> 31))
               && rndNearest);
      return xx.f;
    } else if ((int)expo_x >= 254) {

      xx.i = (expo_y | 0x7F800000) - (!rndNearest);
      return xx.f;
    } else {

      expo_x = ((unsigned int)-((int)expo_x));
      if (expo_x > 25) {

        xx.i = expo_y;
        return xx.f;
      } else {
        yy.i = (xx.i << (32 - expo_x)) | ((yy.i) ? 1 : 0);
        xx.i = expo_y + (xx.i >> expo_x);
        xx.i += (((yy.i == 0x80000000) ? (xx.i & 1) : (yy.i >> 31))
                 && rndNearest);
        return xx.f;
      }
    }
  } else {
    product = xx.i ^ yy.i;
    product = product & 0x80000000;
    if (!(xx.i & 0x7fffffff)) {
      if (expo_y != 254) {
        xx.i = (unsigned int)product;
        return xx.f;
      }
      expo_y = yy.i << 1;
      if (expo_y == 0xFF000000) {
        xx.i = expo_y | 0x00C00000;
      } else {
        xx.i = yy.i | 0x00400000;
      }
      return xx.f;
    }
    if (!(yy.i & 0x7fffffff)) {
      if (expo_x != 254) {
        xx.i = (unsigned int)product;
        return xx.f;
      }
      expo_x = xx.i << 1;
      if (expo_x == 0xFF000000) {
        xx.i = expo_x | 0x00C00000;
      } else {
        xx.i = xx.i | 0x00400000;
      }
      return xx.f;
    }
    if ((expo_y != 254) && (expo_x != 254)) {
      expo_y++;
      expo_x++;
      if (expo_x == 0) {
        expo_y |= xx.i & 0x80000000;




        xx.i = xx.i << 8;
        while (!(xx.i & 0x80000000)) {
          xx.i <<= 1;
          expo_x--;
        }
        xx.i = (xx.i >> 8) | (expo_y & 0x80000000);
        expo_y &= ~0x80000000;
        expo_y--;
        goto multiply;
      }
      if (expo_y == 0) {
        expo_x |= yy.i & 0x80000000;
        yy.i = yy.i << 8;
        while (!(yy.i & 0x80000000)) {
          yy.i <<= 1;
          expo_y--;
        }
        yy.i = (yy.i >> 8) | (expo_x & 0x80000000);
        expo_x &= ~0x80000000;
        expo_x--;
        goto multiply;
      }
    }
    expo_x = xx.i << 1;
    expo_y = yy.i << 1;

    if (expo_x > 0xFF000000) {

      xx.i = xx.i | 0x00400000;
      return xx.f;
    }

    if (expo_y > 0xFF000000) {

      xx.i = yy.i | 0x00400000;
      return xx.f;
    }
    xx.i = (unsigned int)product | 0x7f800000;
    return xx.f;
  }
}

static float __internal_fadd_kernel(float a, float b, int rndNearest)
{
  volatile union __cudart_FloatUintCvt xx, yy;
  unsigned int expo_x;
  unsigned int expo_y;
  unsigned int temp;

  xx.f = a;
  yy.f = b;


  expo_y = yy.i << 1;
  if (expo_y > (xx.i << 1)) {
    expo_y = xx.i;
    xx.i = yy.i;
    yy.i = expo_y;
  }

  temp = 0xff;
  expo_x = temp & (xx.i >> 23);
  expo_x = expo_x - 1;
  expo_y = temp & (yy.i >> 23);
  expo_y = expo_y - 1;

  if ((expo_x <= 0xFD) &&
      (expo_y <= 0xFD)) {

add:
    expo_y = expo_x - expo_y;
    if (expo_y > 25) {
      expo_y = 31;
    }
    temp = xx.i ^ yy.i;
    xx.i = xx.i & ~0x7f000000;
    xx.i = xx.i | 0x00800000;
    yy.i = yy.i & ~0xff000000;
    yy.i = yy.i | 0x00800000;

    if ((int)temp < 0) {

      temp = 32 - expo_y;
      temp = (expo_y) ? (yy.i << temp) : 0;
      temp = (unsigned int)(-((int)temp));
      xx.i = xx.i - (yy.i >> expo_y) - (temp ? 1 : 0);
      if (xx.i & 0x00800000) {
        if (expo_x <= 0xFD) {
          xx.i = xx.i & ~0x00800000;
          xx.i = (xx.i + (expo_x << 23)) + 0x00800000;
          if (temp < 0x80000000) return xx.f;
          xx.i += (((temp == 0x80000000) ? (xx.i & 1) : (temp >> 31))
                   && rndNearest);
          return xx.f;
        }
      } else {
        if ((temp | (xx.i << 1)) == 0) {

          xx.i = 0;
          return xx.f;
        }

        yy.i = xx.i & 0x80000000;
        do {
          xx.i = (xx.i << 1) | (temp >> 31);
          temp <<= 1;
          expo_x--;
        } while (!(xx.i & 0x00800000));
        xx.i = xx.i | yy.i;
      }
    } else {

      temp = 32 - expo_y;
      temp = (expo_y) ? (yy.i << temp) : 0;
      xx.i = xx.i + (yy.i >> expo_y);
      if (!(xx.i & 0x01000000)) {
        if (expo_x <= 0xFD) {
          expo_y = xx.i & 1;
          xx.i = xx.i + (expo_x << 23);
          if (temp < 0x80000000) return xx.f;
          xx.i += (((temp == 0x80000000) ? expo_y : (temp >> 31))
                   && rndNearest);
          return xx.f;
        }
      } else {

        temp = (xx.i << 31) | (temp >> 1);

        xx.i = ((xx.i & 0x80000000) | (xx.i >> 1)) & ~0x40000000;
        expo_x++;
      }
    }
    if (expo_x <= 0xFD) {
      expo_y = xx.i & 1;
      xx.i += (((temp == 0x80000000) ? expo_y : (temp >> 31))
               && rndNearest);
      xx.i = xx.i + (expo_x << 23);
      return xx.f;
    }
    if ((int)expo_x >= 254) {

        xx.i = ((xx.i & 0x80000000) | 0x7f800000) - (!rndNearest);
        return xx.f;
    }

    expo_y = expo_x + 32;
    yy.i = xx.i & 0x80000000;
    xx.i = xx.i & ~0xff000000;

    expo_x = (unsigned int)(-((int)expo_x));
    temp = xx.i << expo_y | ((temp) ? 1 : 0);
    xx.i = yy.i | (xx.i >> expo_x);
    xx.i += (((temp == 0x80000000) ? (xx.i & 1) : (temp >> 31))
             && rndNearest);
    return xx.f;
  } else {

    if (!(yy.i << 1)) {
      if (xx.i == 0x80000000) {
        xx.i = yy.i;
      }
      if ((xx.i << 1) > 0xff000000) {
        xx.i |= 0x00400000;
      }
      return xx.f;
    }
    if ((expo_y != 254) && (expo_x != 254)) {

      if (expo_x == (unsigned int) -1) {
        temp = xx.i & 0x80000000;
        xx.i = xx.i << 8;
        while (!(xx.i & 0x80000000)) {
          xx.i <<= 1;
          expo_x--;
        }
        expo_x++;
        xx.i = (xx.i >> 8) | temp;
      }
      if (expo_y == (unsigned int) -1) {
        temp = yy.i & 0x80000000;
        yy.i = yy.i << 8;
        while (!(yy.i & 0x80000000)) {
          yy.i <<= 1;
          expo_y--;
        }
        expo_y++;
        yy.i = (yy.i >> 8) | temp;
      }
      goto add;
    }
    expo_x = xx.i << 1;
    expo_y = yy.i << 1;

    if (expo_x > 0xff000000) {

      xx.i = xx.i | 0x00400000;
      return xx.f;
    }

    if (expo_y > 0xff000000) {

      xx.i = yy.i | 0x00400000;
      return xx.f;
    }
    if ((expo_x == 0xff000000) && (expo_y == 0xff000000)) {




      expo_x = xx.i ^ yy.i;
      xx.i = xx.i | ((expo_x) ? 0xffc00000 : 0);
      return xx.f;
    }

    if (expo_y == 0xff000000) {
      xx.i = yy.i;
    }
    return xx.f;
  }
}

static float __fadd_rz(float a, float b)
{
  return __internal_fadd_kernel(a, b, 0);
}

static float __fmul_rz(float a, float b)
{
  return __internal_fmul_kernel(a, b, 0);
}

static float __fadd_rn(float a, float b)
{
  return __internal_fadd_kernel(a, b, 1);
}

static float __fmul_rn(float a, float b)
{
  return __internal_fmul_kernel(a, b, 1);
}

static void __brkpt(int c)
{

}
# 4518 "/home/normal/cuda/bin/../include/device_functions.h" 3
extern int __cudaSynchronizeThreads(void**, void*);



static inline __attribute__((always_inline)) void __syncthreads(void)
{
  volatile int _ = 0;
  L: if (__cudaSynchronizeThreads((void**)&&L, (void*)&_)) goto L;
}
# 4537 "/home/normal/cuda/bin/../include/device_functions.h" 3
static void __prof_trigger(int a)
{
}

static void __threadfence(void)
{
}

static void __threadfence_block(void)
{
}



static void __trap(void)
{
  __builtin_trap();
}
# 4573 "/home/normal/cuda/bin/../include/device_functions.h" 3
static float __fdividef(float a, float b)
{






  if (__cuda_fabsf(b) > 8.507059173e37f) {
    if (__cuda_fabsf(a) <= 3.402823466e38f) {
      return ((a / b) / 3.402823466e38f) / 3.402823466e38f;
    } else {
      return __int_as_float(0xffc00000);
    }
  } else {
    return a / b;
  }

}

static float __sinf(float a)
{
  return sinf(a);
}

static float __cosf(float a)
{
  return cosf(a);
}

static float __log2f(float a)
{
  return log2f(a);
}







static float __internal_accurate_fdividef(float a, float b)
{
  if (__cuda_fabsf(b) > 8.507059173e37f) {
    a *= .25f;
    b *= .25f;
  }
  return __fdividef(a, b);
}

static float __tanf(float a)
{



  return __fdividef (__sinf(a), __cosf(a));

}

static void __sincosf(float a, float *sptr, float *cptr)
{



  *sptr = __sinf(a);
  *cptr = __cosf(a);

}

static float __expf(float a)
{



  return __cuda_exp2f(a * 1.442695041f);

}

static float __exp10f(float a)
{



  return __cuda_exp2f(a * 3.321928094f);

}

static float __log10f(float a)
{



  return 0.301029996f * __log2f(a);

}

static float __logf(float a)
{



  return 0.693147181f * __log2f(a);

}

static float __powf(float a, float b)
{



  return __cuda_exp2f(b * __log2f(a));

}

static float fdividef(float a, float b)
{





  return __internal_accurate_fdividef(a, b);

}

static int __clz(int a)
{
  return (a)?(158-(__float_as_int(__uint2float_rz((unsigned int)a))>>23)):32;
}

static int __clzll(long long int a)
{
  int ahi = ((int)((unsigned long long)a >> 32));
  int alo = ((int)((unsigned long long)a & 0xffffffffULL));
  int res;
  if (ahi) {
    res = 0;
  } else {
    res = 32;
    ahi = alo;
  }
  res = res + __clz(ahi);
  return res;
}

static int __popc(unsigned int a)
{
  a = a - ((a >> 1) & 0x55555555);
  a = (a & 0x33333333) + ((a >> 2) & 0x33333333);
  a = (a + (a >> 4)) & 0x0f0f0f0f;
  a = ((__umul24(a, 0x808080) << 1) + a) >> 24;
  return a;
}

static int __popcll(unsigned long long int a)
{
  unsigned int ahi = ((unsigned int)(a >> 32));
  unsigned int alo = ((unsigned int)(a & 0xffffffffULL));
  alo = alo - ((alo >> 1) & 0x55555555);
  alo = (alo & 0x33333333) + ((alo >> 2) & 0x33333333);
  ahi = ahi - ((ahi >> 1) & 0x55555555);
  ahi = (ahi & 0x33333333) + ((ahi >> 2) & 0x33333333);
  alo = alo + ahi;
  alo = (alo & 0x0f0f0f0f) + ((alo >> 4) & 0x0f0f0f0f);
  alo = ((__umul24(alo, 0x808080) << 1) + alo) >> 24;
  return alo;
}

static unsigned int __brev(unsigned int a)
{
  a = ((a >> 1) & 0x55555555) + ((a & 0x55555555) << 1);
  a = ((a >> 2) & 0x33333333) + ((a & 0x33333333) << 2);
  a = ((a >> 4) & 0x0F0F0F0F) + ((a & 0x0F0F0F0F) << 4);
  a = ((a >> 8) & 0x00FF00FF) + ((a & 0x00FF00FF) << 8);
  a = ( a >> 16 ) + ( a << 16);
  return a;
}

static unsigned long long int __brevll(unsigned long long int a)
{
  unsigned int hi = (unsigned int)(a >> 32);
  unsigned int lo = (unsigned int)(a & 0xffffffffULL);
  unsigned int t;
  t = __brev(lo);
  lo = __brev(hi);
  return ((unsigned long long int)t << 32) + (unsigned long long int)lo;
}

static int __ffs(int a)
{
  return 32 - __clz (a & -a);
}

static int __ffsll(long long int a)
{
  return 64 - __clzll (a & -a);
}
# 4779 "/home/normal/cuda/bin/../include/device_functions.h" 3
static double fdivide(double a, double b)
{
  return (double)fdividef((float)a, (float)b);
}



static int __double2int_rz(double a)
{
  return __float2int_rz((float)a);
}

static unsigned int __double2uint_rz(double a)
{
  return __float2uint_rz((float)a);
}

static long long int __double2ll_rz(double a)
{
  return __float2ll_rz((float)a);
}

static unsigned long long int __double2ull_rz(double a)
{
  return __float2ull_rz((float)a);
}
# 4856 "/home/normal/cuda/bin/../include/device_functions.h" 3
# 1 "/home/normal/cuda/bin/../include/sm_11_atomic_functions.h" 1 3
# 257 "/home/normal/cuda/bin/../include/sm_11_atomic_functions.h" 3
extern void __cudaMutexOperation(int lock);






static int __iAtomicAdd(int *address, int val)
{
  int old;

  __cudaMutexOperation(1); old = *address; *address = old + val; __cudaMutexOperation(0);



  return old;
}

static unsigned int __uAtomicAdd(unsigned int *address, unsigned int val)
{
  unsigned int old;

  __cudaMutexOperation(1); old = *address; *address = old + val; __cudaMutexOperation(0);




  return old;
}

static int __iAtomicExch(int *address, int val)
{
  int old;

  __cudaMutexOperation(1); old = *address; *address = val; __cudaMutexOperation(0);




  return old;
}

static unsigned int __uAtomicExch(unsigned int *address, unsigned int val)
{
  unsigned int old;

  __cudaMutexOperation(1); old = *address; *address = val; __cudaMutexOperation(0);




  return old;
}

static float __fAtomicExch(float *address, float val)
{
  float old;

  __cudaMutexOperation(1); old = *address; *address = val; __cudaMutexOperation(0);




  return old;
}

static int __iAtomicMin(int *address, int val)
{
  int old;

  __cudaMutexOperation(1); old = *address; *address = old < val ? old : val; __cudaMutexOperation(0);




  return old;
}

static unsigned int __uAtomicMin(unsigned int *address, unsigned int val)
{
  unsigned int old;

  __cudaMutexOperation(1); old = *address; *address = old < val ? old : val; __cudaMutexOperation(0);




  return old;
}

static int __iAtomicMax(int *address, int val)
{
  int old;

  __cudaMutexOperation(1); old = *address; *address = old > val ? old : val; __cudaMutexOperation(0);




  return old;
}

static unsigned int __uAtomicMax(unsigned int *address, unsigned int val)
{
  unsigned int old;

  __cudaMutexOperation(1); old = *address; *address = old > val ? old : val; __cudaMutexOperation(0);




  return old;
}

static unsigned int __uAtomicInc(unsigned int *address, unsigned int val)
{
  unsigned int old;

  __cudaMutexOperation(1); old = *address; *address = (old >= val) ? 0 : old + 1; __cudaMutexOperation(0);




  return old;
}

static unsigned int __uAtomicDec(unsigned int *address, unsigned int val)
{
  unsigned int old;

  __cudaMutexOperation(1); old = *address; *address = ((old == 0) | (old > val)) ? val : (old - 1); __cudaMutexOperation(0);




  return old;
}

static int __iAtomicAnd(int *address, int val)
{
  int old;

  __cudaMutexOperation(1); old = *address; *address = old & val; __cudaMutexOperation(0);




  return old;
}

static unsigned int __uAtomicAnd(unsigned int *address, unsigned int val)
{
  unsigned int old;

  __cudaMutexOperation(1); old = *address; *address = old & val; __cudaMutexOperation(0);




  return old;
}

static int __iAtomicOr(int *address, int val)
{
  int old;

  __cudaMutexOperation(1); old = *address; *address = old | val; __cudaMutexOperation(0);




  return old;
}

static unsigned int __uAtomicOr(unsigned int *address, unsigned int val)
{
  unsigned int old;

  __cudaMutexOperation(1); old = *address; *address = old | val; __cudaMutexOperation(0);




  return old;
}

static int __iAtomicXor(int *address, int val)
{
  int old;

  __cudaMutexOperation(1); old = *address; *address = old ^ val; __cudaMutexOperation(0);




  return old;
}

static unsigned int __uAtomicXor(unsigned int *address, unsigned int val)
{
  unsigned int old;

  __cudaMutexOperation(1); old = *address; *address = old ^ val; __cudaMutexOperation(0);




  return old;
}

static int __iAtomicCAS(int *address, int compare, int val)
{
  int old;

  __cudaMutexOperation(1); old = *address; *address = old == compare ? val : old; __cudaMutexOperation(0);




  return old;
}

static unsigned int __uAtomicCAS(unsigned int *address, unsigned int compare, unsigned int val)
{
  unsigned int old;

  __cudaMutexOperation(1); old = *address; *address = old == compare ? val : old; __cudaMutexOperation(0);




  return old;
}
# 4857 "/home/normal/cuda/bin/../include/device_functions.h" 2 3
# 1 "/home/normal/cuda/bin/../include/sm_12_atomic_functions.h" 1 3
# 118 "/home/normal/cuda/bin/../include/sm_12_atomic_functions.h" 3
extern void __cudaMutexOperation(int lock);






static unsigned long long int __ullAtomicAdd(unsigned long long int *address, unsigned long long int val)
{
  unsigned long long int old;

  __cudaMutexOperation(1); old = *address; *address = old + val; __cudaMutexOperation(0);



  return old;
}

static unsigned long long int __ullAtomicExch(unsigned long long int *address, unsigned long long int val)
{
  unsigned long long int old;

  __cudaMutexOperation(1); old = *address; *address = val; __cudaMutexOperation(0);



  return old;
}

static unsigned long long int __ullAtomicCAS(unsigned long long int *address, unsigned long long int compare, unsigned long long int val)
{
  unsigned long long int old;

  __cudaMutexOperation(1); old = *address; *address = old == compare ? val : old; __cudaMutexOperation(0);



  return old;
}





static int __any(int cond)
{
  return cond;
}

static int __all(int cond)
{
  return cond;
}
# 4858 "/home/normal/cuda/bin/../include/device_functions.h" 2 3
# 1 "/home/normal/cuda/bin/../include/sm_13_double_functions.h" 1 3
# 267 "/home/normal/cuda/bin/../include/sm_13_double_functions.h" 3
static double __longlong_as_double(long long int a)
{
  volatile union __cudart_DoubleLonglongCvt u;
  u.i = a;
  return u.d;
}

static long long int __double_as_longlong(double a)
{
  volatile union __cudart_DoubleLonglongCvt u;
  u.d = a;
  return u.i;
}

static float __internal_double2float_kernel(double a)
{
  volatile union __cudart_DoubleUlonglongCvt xx;
  volatile union __cudart_FloatUintCvt res;

  int shift;
  xx.d = a;
  if (xx.i == 0) return 0.0f;
  res.i = (((unsigned int) (xx.i >> 32)) & 0x80000000);
  if ((xx.i & 0x7ff0000000000000ULL) == 0x7ff0000000000000ULL) {
    if ((xx.i & 0x7fffffffffffffffULL) > 0x7ff0000000000000ULL) {

      res.i = 0x7f8fffff;
    } else {

      res.i |= 0x7f800000;
    }
    return res.f;
  }
  shift = ((int) ((xx.i >> 52) & 0x7ff)) - 1023;

  xx.i = (xx.i & 0x000fffffffffffffULL);
  if (shift >= 128) {
    res.i |= 0x7f7fffff;
    return res.f;
  }
  if (shift <= -127) {
    if (shift < -180) {

      xx.i = 0;
    } else {
      xx.i |= 0x0010000000000000ULL;
      xx.i >>= 127 + shift;
    }
  } else {
    res.i |= (unsigned int) (127 + shift) << 23;
  }
  res.i |= ((unsigned int) (xx.i >> 29)) & 0x007fffff;
  xx.i &= 0x1fffffff;
  return res.f;
}

static double __internal_ll2double_kernel(long long int a, enum cudaRoundMode rndMode)
{
  volatile union __cudart_DoubleUlonglongCvt res;
  int shift;
  unsigned int t;
  res.i = a;
  if (a == 0) return res.d;
  if (a < 0) res.i = (unsigned long long int)-a;
  shift = __internal_normalize64((unsigned long long int*)&res.i);
  t = ((unsigned int) res.i) << 21;
  res.i >>= 11;
  res.i += ((unsigned long long int)(1023 + 62 - shift)) << 52;
  if (a < 0) res.i |= 0x8000000000000000ULL;
  if ((rndMode == cudaRoundNearest) && (t >= 0x80000000)) {
    res.i += (t == 0x80000000) ? (res.i & 1) : 1;
  }
  else if ((rndMode == cudaRoundMinInf) && t && (a < 0)) {
    res.i++;
  }
  else if ((rndMode == cudaRoundPosInf) && t && (a > 0)) {
    res.i++;
  }
  return res.d;
}

static double __internal_ull2double_kernel(unsigned long long int a, enum cudaRoundMode rndMode)
{
  volatile union __cudart_DoubleUlonglongCvt res;
  int shift;
  unsigned int t;
  res.i = a;
  if (a == 0) return res.d;
  shift = __internal_normalize64((unsigned long long int *)&res.i);
  t = ((unsigned int) res.i) << 21;
  res.i >>= 11;
  res.i += ((unsigned long long int)(1023 + 62 - shift)) << 52;
  if ((rndMode == cudaRoundNearest) && (t >= 0x80000000)) {
    res.i += (t == 0x80000000) ? (res.i & 1) : 1;
  }
  else if ((rndMode == cudaRoundPosInf) && t) {
    res.i++;
  }
  return res.d;
}

static long long int __internal_double2ll_kernel(double a, long long int max, long long int min, long long int nan, enum cudaRoundMode rndMode)
{
  volatile union __cudart_DoubleUlonglongCvt xx, res;
  unsigned long long int t = 0;
  int shift;

  xx.d = a;
  if (sizeof(a) == sizeof(double) && __cuda___isnan((double)a)) return nan; if (sizeof(a) == sizeof(float) && __cuda___isnanf((float)a)) return nan; if (a >= max) return max; if (a <= min) return min;
  shift = (int) (1023 + 62 - ((xx.i >> 52) & 0x7ff));
  res.i = ((xx.i << 11) | 0x8000000000000000ULL) >> 1;
  if (shift >= 64) {
    t = res.i;
    res.i = 0;
  } else if (shift) {
    t = res.i << (64 - shift);
    res.i = res.i >> shift;
  }
  if ((rndMode == cudaRoundNearest) && (t >= 0x8000000000000000ULL)) {
    res.i += (t == 0x8000000000000000ULL) ? (res.i & 1) : 1;
  }
  else if ((rndMode == cudaRoundMinInf) && t &&
          (xx.i > 0x8000000000000000ULL)) {
    res.i++;
  }
  else if ((rndMode == cudaRoundPosInf) && t && ((long long int)xx.i > 0)) {
    res.i++;
  }
  if ((long long int)xx.i < 0) {
    res.i = (unsigned long long int)(-(long long int)res.i);
  }
  return res.i;
}

static unsigned long long int __internal_double2ull_kernel(double a, unsigned long long int max, unsigned long long int nan, enum cudaRoundMode rndMode)
{
  volatile union __cudart_DoubleUlonglongCvt xx, res;
  unsigned long long int t = 0;
  int shift;

  xx.d = a;
  if (sizeof(a) == sizeof(double) && __cuda___isnan((double)a)) return nan; if (sizeof(a) == sizeof(float) && __cuda___isnanf((float)a)) return nan; if (a >= max) return max; if (a <= 0LL) return 0LL;

  if (a == 0.0) return 0LL;
  shift = (int) (1023 + 63 - ((xx.i >> 52) & 0x7ff));
  res.i = ((xx.i << 11) | 0x8000000000000000ULL);
  if (shift >= 64) {
    t = res.i >> (int)(shift > 64);
    res.i = 0;
  } else if (shift) {
    t = res.i << (64 - shift);
    res.i = res.i >> shift;
  }
  if ((rndMode == cudaRoundNearest) && (t >= 0x8000000000000000ULL)) {
    res.i += (t == 0x8000000000000000ULL) ? (res.i & 1) : 1;
  }
  else if ((rndMode == cudaRoundPosInf) && t) {
    res.i++;
  }
  return res.i;
}

static int __double2hiint(double a)
{
  volatile union __cudart_DoubleInthiloCvt cvt;

  cvt.d = a;
  return cvt.i[1];
}

static int __double2loint(double a)
{
  volatile union __cudart_DoubleInthiloCvt cvt;

  cvt.d = a;
  return cvt.i[0];
}

static double __hiloint2double(int a, int b)
{
  volatile union __cudart_DoubleInthiloCvt cvt;

  cvt.i[0] = b;
  cvt.i[1] = a;
  return cvt.d;
}

static float __double2float_rn(double a)
{
  return (float)a;
}

static float __double2float_rz(double a)
{
  return __internal_double2float_kernel(a);
}

static int __internal_double2int(double a, enum cudaRoundMode rndMode)
{
  return (int)__internal_double2ll_kernel(a, 2147483647LL, -2147483648LL, -2147483648LL, rndMode);
}

static int __double2int_rn(double a)
{
  return __internal_double2int(a, cudaRoundNearest);
}

static int __double2int_ru(double a)
{
  return __internal_double2int(a, cudaRoundPosInf);
}

static int __double2int_rd(double a)
{
  return __internal_double2int(a, cudaRoundMinInf);
}

static unsigned int __internal_double2uint(double a, enum cudaRoundMode rndMode)
{
  return (unsigned int)__internal_double2ull_kernel(a, 4294967295ULL, 2147483648ULL, rndMode);
}

static unsigned int __double2uint_rn(double a)
{
  return __internal_double2uint(a, cudaRoundNearest);
}

static unsigned int __double2uint_ru(double a)
{
  return __internal_double2uint(a, cudaRoundPosInf);
}

static unsigned int __double2uint_rd(double a)
{
  return __internal_double2uint(a, cudaRoundMinInf);
}

static long long int __internal_double2ll(double a, enum cudaRoundMode rndMode)
{
  return __internal_double2ll_kernel(a, 9223372036854775807LL, -9223372036854775807LL -1LL, -9223372036854775807LL -1LL, rndMode);
}

static long long int __double2ll_rn(double a)
{
  return __internal_double2ll(a, cudaRoundNearest);
}

static long long int __double2ll_ru(double a)
{
  return __internal_double2ll(a, cudaRoundPosInf);
}

static long long int __double2ll_rd(double a)
{
  return __internal_double2ll(a, cudaRoundMinInf);
}

static unsigned long long int __internal_double2ull(double a, enum cudaRoundMode rndMode)
{
  return __internal_double2ull_kernel(a, 18446744073709551615ULL, 9223372036854775808ULL, rndMode);
}

static unsigned long long int __double2ull_rn(double a)
{
  return __internal_double2ull(a, cudaRoundNearest);
}

static unsigned long long int __double2ull_ru(double a)
{
  return __internal_double2ull(a, cudaRoundPosInf);
}

static unsigned long long int __double2ull_rd(double a)
{
  return __internal_double2ull(a, cudaRoundMinInf);
}

static double __int2double_rn(int a)
{
  return (double)a;
}

static double __uint2double_rn(unsigned int a)
{
  return (double)a;
}

static double __ll2double_rn(long long int a)
{
  return (double)a;
}

static double __ll2double_rz(long long int a)
{
  return __internal_ll2double_kernel(a, cudaRoundZero);
}

static double __ll2double_rd(long long int a)
{
  return __internal_ll2double_kernel(a, cudaRoundMinInf);
}

static double __ll2double_ru(long long int a)
{
  return __internal_ll2double_kernel(a, cudaRoundPosInf);
}

static double __ull2double_rn(unsigned long long int a)
{
  return __internal_ull2double_kernel(a, cudaRoundNearest);
}

static double __ull2double_rz(unsigned long long int a)
{
  return __internal_ull2double_kernel(a, cudaRoundZero);
}

static double __ull2double_rd(unsigned long long int a)
{
  return __internal_ull2double_kernel(a, cudaRoundMinInf);
}

static double __ull2double_ru(unsigned long long int a)
{
  return __internal_ull2double_kernel(a, cudaRoundPosInf);
}





static double __internal_fma_kernel(double x, double y, double z, enum cudaRoundMode rndMode)
{



  struct __cudart_UintUint xx, yy, zz, ww;
  unsigned int s, t, u, prod0, prod1, prod2, prod3, expo_x, expo_y, expo_z;

  xx.hi = __double2hiint(x);
  xx.lo = __double2loint(x);
  yy.hi = __double2hiint(y);
  yy.lo = __double2loint(y);
  zz.hi = __double2hiint(z);
  zz.lo = __double2loint(z);

  expo_z = 0x7FF;
  t = xx.hi >> 20;
  expo_x = expo_z & t;
  expo_x = expo_x - 1;
  t = yy.hi >> 20;
  expo_y = expo_z & t;
  expo_y = expo_y - 1;
  t = zz.hi >> 20;
  expo_z = expo_z & t;
  expo_z = expo_z - 1;

  if (!((expo_x <= 0x7FD) &&
        (expo_y <= 0x7FD) &&
        (expo_z <= 0x7FD))) {





    if (((yy.hi << 1) | (yy.lo != 0)) > 0xffe00000) {
      yy.hi |= 0x00080000;
      return __hiloint2double(yy.hi, yy.lo);
    }
    if (((zz.hi << 1) | (zz.lo != 0)) > 0xffe00000) {
      zz.hi |= 0x00080000;
      return __hiloint2double(zz.hi, zz.lo);
    }
    if (((xx.hi << 1) | (xx.lo != 0)) > 0xffe00000) {
      xx.hi |= 0x00080000;
      return __hiloint2double(xx.hi, xx.lo);
    }
# 656 "/home/normal/cuda/bin/../include/sm_13_double_functions.h" 3
    if (((((xx.hi << 1) | xx.lo) == 0) &&
         (((yy.hi << 1) | (yy.lo != 0)) == 0xffe00000)) ||
        ((((yy.hi << 1) | yy.lo) == 0) &&
         (((xx.hi << 1) | (xx.lo != 0)) == 0xffe00000))) {
      xx.hi = 0xfff80000;
      xx.lo = 0x00000000;
      return __hiloint2double(xx.hi, xx.lo);
    }
    if (((zz.hi << 1) | (zz.lo != 0)) == 0xffe00000) {
      if ((((yy.hi << 1) | (yy.lo != 0)) == 0xffe00000) ||
          (((xx.hi << 1) | (xx.lo != 0)) == 0xffe00000)) {
        if ((int)(xx.hi ^ yy.hi ^ zz.hi) < 0) {
          xx.hi = 0xfff80000;
          xx.lo = 0x00000000;
          return __hiloint2double(xx.hi, xx.lo);
        }
      }
    }




    if (((xx.hi << 1) | (xx.lo != 0)) == 0xffe00000) {
      xx.hi = xx.hi ^ (yy.hi & 0x80000000);
      return __hiloint2double(xx.hi, xx.lo);
    }
    if (((yy.hi << 1) | (yy.lo != 0)) == 0xffe00000) {
      yy.hi = yy.hi ^ (xx.hi & 0x80000000);
      return __hiloint2double(yy.hi, yy.lo);
    }
    if (((zz.hi << 1) | (zz.lo != 0)) == 0xffe00000) {
      return __hiloint2double(zz.hi, zz.lo);
    }





    if ((zz.hi == 0x80000000) && (zz.lo == 0)) {
      if ((((xx.hi << 1) | xx.lo) == 0) ||
          (((yy.hi << 1) | yy.lo) == 0)) {
        if ((int)(xx.hi ^ yy.hi) < 0) {
          return __hiloint2double(zz.hi, zz.lo);
        }
      }
    }



    if ((((zz.hi << 1) | zz.lo) == 0) &&
        ((((xx.hi << 1) | xx.lo) == 0) ||
         (((yy.hi << 1) | yy.lo) == 0))) {
      if (rndMode == cudaRoundMinInf) {
        return __hiloint2double((xx.hi ^ yy.hi ^ zz.hi) & 0x80000000, zz.lo);
      } else {
        zz.hi &= 0x7fffffff;
        return __hiloint2double(zz.hi, zz.lo);
      }
    }




    if ((((xx.hi << 1) | xx.lo) == 0) ||
        (((yy.hi << 1) | yy.lo) == 0)) {
      return __hiloint2double(zz.hi, zz.lo);
    }

    if (expo_x == 0xffffffff) {
      expo_x++;
      t = xx.hi & 0x80000000;
      s = xx.lo >> 21;
      xx.lo = xx.lo << 11;
      xx.hi = xx.hi << 11;
      xx.hi = xx.hi | s;
      if (!xx.hi) {
        xx.hi = xx.lo;
        xx.lo = 0;
        expo_x -= 32;
      }
      while ((int)xx.hi > 0) {
        s = xx.lo >> 31;
        xx.lo = xx.lo + xx.lo;
        xx.hi = xx.hi + xx.hi;
        xx.hi = xx.hi | s;
        expo_x--;
      }
      xx.lo = (xx.lo >> 11);
      xx.lo |= (xx.hi << 21);
      xx.hi = (xx.hi >> 11) | t;
    }
    if (expo_y == 0xffffffff) {
      expo_y++;
      t = yy.hi & 0x80000000;
      s = yy.lo >> 21;
      yy.lo = yy.lo << 11;
      yy.hi = yy.hi << 11;
      yy.hi = yy.hi | s;
      if (!yy.hi) {
        yy.hi = yy.lo;
        yy.lo = 0;
        expo_y -= 32;
      }
      while ((int)yy.hi > 0) {
        s = yy.lo >> 31;
        yy.lo = yy.lo + yy.lo;
        yy.hi = yy.hi + yy.hi;
        yy.hi = yy.hi | s;
        expo_y--;
      }
      yy.lo = (yy.lo >> 11);
      yy.lo |= (yy.hi << 21);
      yy.hi = (yy.hi >> 11) | t;
    }
    if (expo_z == 0xffffffff) {
      expo_z++;
      t = zz.hi & 0x80000000;
      s = zz.lo >> 21;
      zz.lo = zz.lo << 11;
      zz.hi = zz.hi << 11;
      zz.hi = zz.hi | s;
      if (!zz.hi) {
        zz.hi = zz.lo;
        zz.lo = 0;
        expo_z -= 32;
      }
      while ((int)zz.hi > 0) {
        s = zz.lo >> 31;
        zz.lo = zz.lo + zz.lo;
        zz.hi = zz.hi + zz.hi;
        zz.hi = zz.hi | s;
        expo_z--;
      }
      zz.lo = (zz.lo >> 11);
      zz.lo |= (zz.hi << 21);
      zz.hi = (zz.hi >> 11) | t;
    }
  }

  expo_x = expo_x + expo_y;
  expo_y = xx.hi ^ yy.hi;
  t = xx.lo >> 21;
  xx.lo = xx.lo << 11;
  xx.hi = xx.hi << 11;
  xx.hi = xx.hi | t;
  yy.hi = yy.hi & 0x000fffff;
  xx.hi = xx.hi | 0x80000000;
  yy.hi = yy.hi | 0x00100000;

  prod0 = xx.lo * yy.lo;
  prod1 = __umulhi (xx.lo, yy.lo);
  prod2 = xx.hi * yy.lo;
  prod3 = xx.lo * yy.hi;
  prod1 += prod2;
  t = prod1 < prod2;
  prod1 += prod3;
  t += prod1 < prod3;
  prod2 = __umulhi (xx.hi, yy.lo);
  prod3 = __umulhi (xx.lo, yy.hi);
  prod2 += prod3;
  s = prod2 < prod3;
  prod3 = xx.hi * yy.hi;
  prod2 += prod3;
  s += prod2 < prod3;
  prod2 += t;
  s += prod2 < t;
  prod3 = __umulhi (xx.hi, yy.hi) + s;

  yy.lo = prod0;
  yy.hi = prod1;
  xx.lo = prod2;
  xx.hi = prod3;
  expo_x = expo_x - (1023 - 2);
  expo_y = expo_y & 0x80000000;

  if (xx.hi < 0x00100000) {
    s = xx.lo >> 31;
    s = (xx.hi << 1) + s;
    xx.hi = s;
    s = yy.hi >> 31;
    s = (xx.lo << 1) + s;
    xx.lo = s;
    s = yy.lo >> 31;
    s = (yy.hi << 1) + s;
    yy.hi = s;
    s = yy.lo << 1;
    yy.lo = s;
    expo_x--;
  }

  t = 0;
  if (((zz.hi << 1) | zz.lo) != 0) {

    s = zz.hi & 0x80000000;

    zz.hi &= 0x000fffff;
    zz.hi |= 0x00100000;
    ww.hi = 0;
    ww.lo = 0;


    if ((int)expo_z > (int)expo_x) {
      t = expo_z;
      expo_z = expo_x;
      expo_x = t;
      t = zz.hi;
      zz.hi = xx.hi;
      xx.hi = t;
      t = zz.lo;
      zz.lo = xx.lo;
      xx.lo = t;
      t = ww.hi;
      ww.hi = yy.hi;
      yy.hi = t;
      t = ww.lo;
      ww.lo = yy.lo;
      yy.lo = t;
      t = expo_y;
      expo_y = s;
      s = t;
    }



    expo_z = expo_x - expo_z;
    u = expo_y ^ s;
    if (expo_z <= 107) {

      t = 0;
      while (expo_z >= 32) {
        t = ww.lo | (t != 0);
        ww.lo = ww.hi;
        ww.hi = zz.lo;
        zz.lo = zz.hi;
        zz.hi = 0;
        expo_z -= 32;
      }
      if (expo_z) {
        t = (t >> expo_z) | (ww.lo << (32 - expo_z)) |
                ((t << (32 - expo_z)) != 0);
        ww.lo = (ww.lo >> expo_z) | (ww.hi << (32 - expo_z));
        ww.hi = (ww.hi >> expo_z) | (zz.lo << (32 - expo_z));
        zz.lo = (zz.lo >> expo_z) | (zz.hi << (32 - expo_z));
        zz.hi = (zz.hi >> expo_z);
      }
    } else {
      t = 1;
      ww.lo = 0;
      ww.hi = 0;
      zz.lo = 0;
      zz.hi = 0;
    }
    if ((int)u < 0) {

      t = (unsigned)(-(int)t);
      s = (t != 0);
      u = yy.lo - s;
      s = u > yy.lo;
      yy.lo = u - ww.lo;
      s += yy.lo > u;
      u = yy.hi - s;
      s = u > yy.hi;
      yy.hi = u - ww.hi;
      s += yy.hi > u;
      u = xx.lo - s;
      s = u > xx.lo;
      xx.lo = u - zz.lo;
      s += xx.lo > u;
      xx.hi = (xx.hi - zz.hi) - s;
      if (!(xx.hi | xx.lo | yy.hi | yy.lo | t)) {

        if (rndMode == cudaRoundMinInf) {
          return __hiloint2double(0x80000000, xx.lo);
        } else {
          return __hiloint2double(xx.hi, xx.lo);
        }
      }
      if ((int)xx.hi < 0) {



        t = ~t;
        yy.lo = ~yy.lo;
        yy.hi = ~yy.hi;
        xx.lo = ~xx.lo;
        xx.hi = ~xx.hi;
        if (++t == 0) {
          if (++yy.lo == 0) {
            if (++yy.hi == 0) {
              if (++xx.lo == 0) {
              ++xx.hi;
              }
            }
          }
        }
        expo_y ^= 0x80000000;
      }


      while (!(xx.hi & 0x00100000)) {
        xx.hi = (xx.hi << 1) | (xx.lo >> 31);
        xx.lo = (xx.lo << 1) | (yy.hi >> 31);
        yy.hi = (yy.hi << 1) | (yy.lo >> 31);
        yy.lo = (yy.lo << 1);
        expo_x--;
      }
    } else {

      yy.lo = yy.lo + ww.lo;
      s = yy.lo < ww.lo;
      yy.hi = yy.hi + s;
      u = yy.hi < s;
      yy.hi = yy.hi + ww.hi;
      u += yy.hi < ww.hi;
      xx.lo = xx.lo + u;
      s = xx.lo < u;
      xx.lo = xx.lo + zz.lo;
      s += xx.lo < zz.lo;
      xx.hi = xx.hi + zz.hi + s;
      if (xx.hi & 0x00200000) {
        t = t | (yy.lo << 31);
        yy.lo = (yy.lo >> 1) | (yy.hi << 31);
        yy.hi = (yy.hi >> 1) | (xx.lo << 31);
        xx.lo = (xx.lo >> 1) | (xx.hi << 31);
        xx.hi = ((xx.hi & 0x80000000) | (xx.hi >> 1)) & ~0x40000000;
        expo_x++;
      }
    }
  }
  t = yy.lo | (t != 0);
  t = yy.hi | (t != 0);

  xx.hi |= expo_y;
  if (expo_x <= 0x7FD) {

    xx.hi = xx.hi & ~0x00100000;
    s = xx.lo & 1;
    u = xx.lo;
    if (rndMode == cudaRoundNearest) {
      xx.lo += (t == 0x80000000) ? s : (t >> 31);
    } else if (((rndMode == cudaRoundPosInf) && t && (!expo_y)) ||
               ((rndMode == cudaRoundMinInf) && t && expo_y)) {
      xx.lo += 1;
    }
    xx.hi += (u > xx.lo);
    xx.hi += ((expo_x + 1) << 20);
    return __hiloint2double(xx.hi, xx.lo);
  } else if ((int)expo_x >= 2046) {

    if ((rndMode == cudaRoundNearest) ||
        ((rndMode == cudaRoundPosInf) && (!expo_y)) ||
        ((rndMode == cudaRoundMinInf) && expo_y)) {
      xx.hi = (xx.hi & 0x80000000) | 0x7ff00000;
      xx.lo = 0;
    } else {
      xx.hi = (xx.hi & 0x80000000) | 0x7fefffff;
      xx.lo = 0xffffffff;
    }
    return __hiloint2double(xx.hi, xx.lo);
  }

  expo_x = (unsigned)(-(int)expo_x);
  if (expo_x > 54) {

    if (((rndMode == cudaRoundPosInf) && (!expo_y)) ||
        ((rndMode == cudaRoundMinInf) && expo_y)) {
      return __hiloint2double(xx.hi & 0x80000000, 1);
    } else {
      return __hiloint2double(xx.hi & 0x80000000, 0);
    }
  }
  yy.hi = xx.hi & 0x80000000;
  xx.hi = xx.hi & ~0xffe00000;
  if (expo_x >= 32) {
    t = xx.lo | (t != 0);
    xx.lo = xx.hi;
    xx.hi = 0;
    expo_x -= 32;
  }
  if (expo_x) {
    t = (t >> expo_x) | (xx.lo << (32 - expo_x)) | (t != 0);
    xx.lo = (xx.lo >> expo_x) | (xx.hi << (32 - expo_x));
    xx.hi = (xx.hi >> expo_x);
  }
  expo_x = xx.lo & 1;
  u = xx.lo;
  if (rndMode == cudaRoundNearest) {
    xx.lo += (t == 0x80000000) ? expo_x : (t >> 31);
  } else if (((rndMode == cudaRoundPosInf) && t && (!expo_y)) ||
             ((rndMode == cudaRoundMinInf) && t && expo_y)) {
    xx.lo += 1;
  }
  xx.hi += (u > xx.lo);
  xx.hi |= yy.hi;
  return __hiloint2double(xx.hi, xx.lo);
}

static double __fma_rn(double x, double y, double z)
{
  return __internal_fma_kernel(x, y, z, cudaRoundNearest);
}

static double __fma_rd(double x, double y, double z)
{
  return __internal_fma_kernel(x, y, z, cudaRoundMinInf);
}

static double __fma_ru(double x, double y, double z)
{
  return __internal_fma_kernel(x, y, z, cudaRoundPosInf);
}

static double __fma_rz(double x, double y, double z)
{
  return __internal_fma_kernel(x, y, z, cudaRoundZero);
}

static double __dadd_rz(double a, double b)
{
  return __fma_rz(a, 1.0, b);
}

static double __dadd_ru(double a, double b)
{
  return __fma_ru(a, 1.0, b);
}

static double __dadd_rd(double a, double b)
{
  return __fma_rd(a, 1.0, b);
}

static double __dmul_rz(double a, double b)
{
  return __fma_rz(a, b, __hiloint2double(0x80000000, 0x00000000));
}

static double __dmul_ru(double a, double b)
{
  return __fma_ru(a, b, __hiloint2double(0x80000000, 0x00000000));
}

static double __dmul_rd(double a, double b)
{
  return __fma_rd(a, b, 0.0);
}

static double __dadd_rn(double a, double b)
{
  return __fma_rn(a, 1.0, b);
}

static double __dmul_rn(double a, double b)
{
  return __fma_rn(a, b, __hiloint2double(0x80000000, 0x00000000));
}
# 4859 "/home/normal/cuda/bin/../include/device_functions.h" 2 3
# 1 "/home/normal/cuda/bin/../include/texture_fetch_functions.h" 1 3
# 1910 "/home/normal/cuda/bin/../include/texture_fetch_functions.h" 3
extern void __cudaTextureFetch(const void *tex, void *index, int integer, void *val);

static int4 __itexfetchi(const void *tex, int4 index)
{
  int4 val;

  __cudaTextureFetch(tex, (void*)&index, 1, (void*)&val);

  return val;
}

static uint4 __utexfetchi(const void *tex, int4 index)
{
  uint4 val;

  __cudaTextureFetch(tex, (void*)&index, 1, (void*)&val);

  return val;
}

static float4 __ftexfetchi(const void *tex, int4 index)
{
  float4 val;

  __cudaTextureFetch(tex, (void*)&index, 1, (void*)&val);

  return val;
}

static int4 __itexfetch(const void *tex, float4 index, int dim)
{
  int4 val;

  __cudaTextureFetch(tex, (void*)&index, 0, (void*)&val);

  return val;
}

static uint4 __utexfetch(const void *tex, float4 index, int dim)
{
  uint4 val;

  __cudaTextureFetch(tex, (void*)&index, 0, (void*)&val);

  return val;
}

static float4 __ftexfetch(const void *tex, float4 index, int dim)
{
  float4 val;

  __cudaTextureFetch(tex, (void*)&index, 0, (void*)&val);

  return val;
}
# 4860 "/home/normal/cuda/bin/../include/device_functions.h" 2 3
# 945 "/home/normal/cuda/bin/../include/math_functions.h" 2 3


static int __cuda___signbitf(float a)
{
  return (int)((unsigned int)__float_as_int(a) >> 31);
}




static float __cuda_copysignf(float a, float b)
{
  return __int_as_float((__float_as_int(b) & 0x80000000) |
                        (__float_as_int(a) & ~0x80000000));
}
# 969 "/home/normal/cuda/bin/../include/math_functions.h" 3
extern __attribute__((__weak__)) int min(int a, int b); int min(int a, int b)
{
  return a < b ? a : b;
}

extern __attribute__((__weak__)) unsigned int umin(unsigned int a, unsigned int b); unsigned int umin(unsigned int a, unsigned int b)
{
  return a < b ? a : b;
}

extern __attribute__((__weak__)) int max(int a, int b); int max(int a, int b)
{
  return a > b ? a : b;
}

extern __attribute__((__weak__)) unsigned int umax(unsigned int a, unsigned int b); unsigned int umax(unsigned int a, unsigned int b)
{
  return a > b ? a : b;
}
# 1055 "/home/normal/cuda/bin/../include/math_functions.h" 3
static float __internal_nearbyintf(float a)
{
  float fa = fabsf(a);

  if (fa >= 8388608.0f) {
    return a;
  } else {
    volatile float u = 8388608.0f + fa;

    u = u - 8388608.0f;
    return copysignf(u, a);
  }
}

static float __internal_fminf(float a, float b)
{
  volatile union {
    float f;
    unsigned int i;
  } cvta, cvtb;
  int nana, nanb;

  cvta.f = a;
  cvtb.f = b;
  nana = ((cvta.i << 1) > 0xff000000);
  nanb = ((cvtb.i << 1) > 0xff000000);
  if (nana && nanb) return a + b;
  if (nana) return b;
  if (nanb) return a;
  if ((cvta.i | cvtb.i) == 0x80000000) {
    return __int_as_float(0x80000000);
  }
  return a < b ? a : b;
}

static float __internal_fmaxf(float a, float b)
{
  volatile union {
    float f;
    unsigned int i;
  } cvta, cvtb;
  int nana, nanb;

  cvta.f = a;
  cvtb.f = b;
  nana = ((cvta.i << 1) > 0xff000000);
  nanb = ((cvtb.i << 1) > 0xff000000);
  if (nana && nanb) return a + b;
  if (nana) return b;
  if (nanb) return a;
  if ((cvta.f == 0.0f) && (cvtb.f == 0.0f)) {
    cvta.i &= cvtb.i;
    return cvta.f;
  }
  return a > b ? a : b;
}
# 1151 "/home/normal/cuda/bin/../include/math_functions.h" 3
static long int __cuda_labs(long int a)
{
  return labs(a);
}

static float __cuda_ceilf(float a)
{
  return ceilf(a);
}

static float __cuda_floorf(float a)
{
  return floorf(a);
}

static float __cuda_sqrtf(float a)
{
  return sqrtf(a);
}

static float __cuda_rsqrtf(float a)
{
  return 1.0f / sqrtf(a);
}

static float __cuda_truncf(float a)
{
  return truncf(a);
}

static int __cuda_max(int a, int b)
{
  return max(a, b);
}

static int __cuda_min(int a, int b)
{
  return min(a, b);
}

static unsigned int __cuda_umax(unsigned int a, unsigned int b)
{
  return umax(a, b);
}

static unsigned int __cuda_umin(unsigned int a, unsigned int b)
{
  return umin(a, b);
}

static long long int __cuda_llrintf(float a)
{



  return __float2ll_rn(a);

}

static long int __cuda_lrintf(float a)
{




  return (long int)__cuda_llrintf(a);




}

static float __cuda_nearbyintf(float a)
{





  return __internal_nearbyintf(a);

}

static float __cuda_fmaxf(float a, float b)
{





  return __internal_fmaxf(a, b);

}

static float __cuda_fminf(float a, float b)
{





  return __internal_fminf(a, b);

}
# 1272 "/home/normal/cuda/bin/../include/math_functions.h" 3
static int __cuda___finitef(float a)
{
  return __cuda_fabsf(a) < __int_as_float(0x7f800000);
}
# 1286 "/home/normal/cuda/bin/../include/math_functions.h" 3
static int __cuda___isinff(float a)
{
  return __cuda_fabsf(a) == __int_as_float(0x7f800000);
}

static int __cuda___isnanf(float a)
{
  return !(__cuda_fabsf(a) <= __int_as_float(0x7f800000));
}

static float __cuda_nextafterf(float a, float b)
{
  unsigned int ia;
  unsigned int ib;
  ia = __float_as_int(a);
  ib = __float_as_int(b);




  if (__cuda___isnanf(a) || __cuda___isnanf(b)) return a + b;
  if (__int_as_float (ia | ib) == 0.0f) return __int_as_float(ib);





  if (__int_as_float(ia) == 0.0f) {
    return __cuda_copysignf(__int_as_float(0x00000001), b);
  }

  if ((a < b) && (a < 0.0f)) ia--;
  if ((a < b) && (a > 0.0f)) ia++;
  if ((a > b) && (a < 0.0f)) ia++;
  if ((a > b) && (a > 0.0f)) ia--;
  a = __int_as_float(ia);





  return a;
}

static float __cuda_nanf(const char *tagp)
{

  return __int_as_float(0x7fffffff);
}

static float __internal_fmad(float a, float b, float c)
{
  return a * b + c;
}


static float __internal_atanhf_kernel(float a_1, float a_2)
{
  float a, a2, t;

  a = a_1 + a_2;
  a2 = a * a;
  t = 1.566305595598990E-001f/64.0f;
  t = __internal_fmad (t, a2, 1.995081856004762E-001f/16.0f);
  t = __internal_fmad (t, a2, 3.333382699617026E-001f/4.0f);
  t = t * a2;
  t = __internal_fmad (t, a, a_2);
  t = t + a_1;
  return t;
}




static float __internal_atanf_kernel(float a)
{
  float t4, t0, t1;

  t4 = a * a;
  t0 = -5.674867153f;
  t0 = __internal_fmad (t4, -0.823362947f, t0);
  t0 = __internal_fmad (t0, t4, -6.565555096f);
  t0 = t0 * t4;
  t0 = t0 * a;
  t1 = t4 + 11.33538818f;
  t1 = __internal_fmad (t1, t4, 28.84246826f);
  t1 = __internal_fmad (t1, t4, 19.69667053f);
  t1 = 1.0f / t1;
  a = __internal_fmad (t0, t1, a);
  return a;
}


static float __internal_tan_kernel(float a)
{
  float a2, s, t;

  a2 = a * a;
  t = __internal_fmad (4.114678393115178E-003f, a2, -8.231194034909670E-001f);
  s = a2 - 2.469348886157666E+000f;
  s = 1.0f / s;
  t = t * s;
  t = t * a2;
  t = __internal_fmad (t, a, a);
  return t;
}

static float __internal_accurate_logf(float a)
{
  float t;
  float z;
  float m;
  int ia, e;
  ia = __float_as_int(a);

  if ((ia < 0x00800000) || (ia > 0x7f7fffff)) {
    return __logf(a);
  }

  m = __int_as_float((ia & 0x807fffff) | 0x3f800000);
  e = ((unsigned)ia >> 23) - 127;
  if (m > 1.414213562f) {
    m = m * 0.5f;
    e = e + 1;
  }
  t = m - 1.0f;
  z = m + 1.0f;
  z = __fdividef (t, z);
  z = -t * z;
  z = __internal_atanhf_kernel(t, z);
  z = __internal_fmad ((float)e, 0.693147181f, z);
  return z;
}

static float2 __internal_log_ep(float a)
{
  float2 res;
  int expo;
  float m;
  float log_hi, log_lo;
  float t_hi, t_lo;
  float f, g, u, v, q;



  float r, s, e;

  expo = (__float_as_int(a) >> 23) & 0xff;


  if (expo == 0) {
    a *= 16777216.0f;
    expo = (__float_as_int(a) >> 23) & 0xff;
    expo -= 24;
  }

  expo -= 127;
  m = __int_as_float((__float_as_int(a) & 0x807fffff) | 0x3f800000);
  if (m > 1.414213562f) {
    m = m * 0.5f;
    expo = expo + 1;
  }






  f = m - 1.0f;
  g = m + 1.0f;
  g = 1.0f / g;
  u = 2.0f * f * g;
  v = u * u;
  q = 1.49356810919559350E-001f/64.0f;
  q = __internal_fmad (q, v, 1.99887797540072460E-001f/16.0f);
  q = __internal_fmad (q, v, 3.33333880955515580E-001f/4.0f);
  q = q * v;
  q = q * u;
  log_hi = __int_as_float(__float_as_int(u) & 0xfffff000);
  v = __int_as_float(__float_as_int(f) & 0xfffff000);
  u = 2.0f * (f - log_hi);
  f = f - v;
  u = __internal_fmad (-log_hi, v, u);
  u = __internal_fmad (-log_hi, f, u);
  u = g * u;



  r = log_hi + u;
  s = u - (r - log_hi);
  log_hi = r;
  log_lo = s;

  r = log_hi + q;
  s = ((log_hi - r) + q) + log_lo;
  log_hi = e = r + s;
  log_lo = (r - e) + s;


  t_hi = expo * 0.6931457519f;
  t_lo = expo * 1.4286067653e-6f;


  r = t_hi + log_hi;
  s = (((t_hi - r) + log_hi) + log_lo) + t_lo;
  res.y = e = r + s;
  res.x = (r - e) + s;
  return res;
}

static float __internal_accurate_log2f(float a)
{
  return 1.442695041f * __internal_accurate_logf(a);
}




static float2 __internal_dsmul (float2 x, float2 y)
{
    float2 z;

    volatile float up, vp, u1, u2, v1, v2, mh, ml;



    up = x.y * 4097.0f;
    u1 = (x.y - up) + up;
    u2 = x.y - u1;
    vp = y.y * 4097.0f;
    v1 = (y.y - vp) + vp;
    v2 = y.y - v1;
    mh = __fmul_rn(x.y,y.y);
    ml = (((u1 * v1 - mh) + u1 * v2) + u2 * v1) + u2 * v2;
    ml = (__fmul_rn(x.y,y.x) + __fmul_rn(x.x,y.y)) + ml;
    z.y = up = mh + ml;
    z.x = (mh - up) + ml;
    return z;
}


static unsigned int __cudart_i2opi_f [] = {
  0x3c439041,
  0xdb629599,
  0xf534ddc0,
  0xfc2757d1,
  0x4e441529,
  0xa2f9836e,
};


static float __internal_trig_reduction_kernel(float a, int *quadrant)
{
  float j;
  int q;
  if (__cuda_fabsf(a) > 48039.0f) {

    unsigned int ia = __float_as_int(a);
    unsigned int s = ia & 0x80000000;
    unsigned int result[7];
    unsigned int phi, plo;
    unsigned int hi, lo;
    unsigned int e;
    int idx;
    e = ((ia >> 23) & 0xff) - 128;
    ia = (ia << 8) | 0x80000000;

    idx = 4 - (e >> 5);
    hi = 0;



    for (q = 0; q < 6; q++) {
      plo = __cudart_i2opi_f[q] * ia;
      phi = __umulhi (__cudart_i2opi_f[q], ia);
      lo = hi + plo;
      hi = phi + (lo < plo);
      result[q] = lo;
    }
    result[q] = hi;
    e = e & 31;



    hi = result[idx+2];
    lo = result[idx+1];
    if (e) {
      q = 32 - e;
      hi = (hi << e) + (lo >> q);
      lo = (lo << e) + (result[idx] >> q);
    }
    q = hi >> 30;

    hi = (hi << 2) + (lo >> 30);
    lo = (lo << 2);
    e = (hi + (lo > 0)) > 0x80000000;
    q += e;
    if (s) q = -q;
    if (e) {
      unsigned int t;
      hi = ~hi;
      lo = -(int)lo;
      t = (lo == 0);
      hi += t;
      s = s ^ 0x80000000;
    }
    *quadrant = q;

    e = 0;
    while ((int)hi > 0) {
      hi = (hi << 1) + (lo >> 31);
      lo = (lo << 1);
      e--;
    }
    lo = hi * 0xc90fdaa2;
    hi = __umulhi(hi, 0xc90fdaa2);
    if ((int)hi > 0) {
      hi = (hi << 1) + (lo >> 31);
      lo = (lo << 1);
      e--;
    }
    hi = hi + (lo > 0);
    ia = s | (((e + 126) << 23) + (hi >> 8) + ((hi << 24) >= 0x80000000));
    return __int_as_float(ia);
  }
  q = __float2int_rn (a * 0.636619772f);
  j = (float)q;
  a = __internal_fmad (-j, 1.5703125000000000e+000f, a);
  a = __internal_fmad (-j, 4.8351287841796875e-004f, a);
  a = __internal_fmad (-j, 3.1385570764541626e-007f, a);
  a = __internal_fmad (-j, 6.0771005065061922e-011f, a);
  *quadrant = q;
  return a;
}
# 1630 "/home/normal/cuda/bin/../include/math_functions.h" 3
static float __internal_expf_kernel(float a, float scale)
{
  float j, z;

  j = __cuda_truncf(a * 1.442695041f);
  z = __internal_fmad (j, -0.6931457519f, a);
  z = __internal_fmad (j, -1.4286067653e-6f, z);
  z = z * 1.442695041f;
  z = __cuda_exp2f(z) * __cuda_exp2f(j + scale);
  return z;
}

static float __internal_accurate_expf(float a)
{
  float z;

  z = __internal_expf_kernel(a, 0.0f);
  if (a < -105.0f) z = 0.0f;
  if (a > 105.0f) z = __int_as_float(0x7f800000);
  return z;
}

static float __internal_accurate_exp10f(float a)
{
  float j, z;

  j = __cuda_truncf(a * 3.321928094f);
  z = __internal_fmad (j, -3.0102920532226563e-001f, a);
  z = __internal_fmad (j, -7.9034171557301747e-007f, z);
  z = z * 3.321928094f;
  z = __cuda_exp2f(z) * __cuda_exp2f(j);
  if (a < -46.0f) z = 0.0f;
  if (a > 46.0f) z = __int_as_float(0x7f800000);
  return z;
}

static float __internal_lgammaf_pos(float a)
{
  float sum;
  float s, t;

  if (a == __int_as_float(0x7f800000)) {
    return a;
  }
  if (a >= 3.0f) {
    if (a >= 7.8f) {



      s = 1.0f / a;
      t = s * s;
      sum = 0.77783067e-3f;
      sum = __internal_fmad (sum, t, -0.2777655457e-2f);
      sum = __internal_fmad (sum, t, 0.83333273853e-1f);
      sum = __internal_fmad (sum, s, 0.918938533204672f);
      s = 0.5f * __internal_accurate_logf(a);
      t = a - 0.5f;
      s = s * t;
      t = s - a;
      s = __fadd_rn(s, sum);
      t = t + s;
      return t;
    } else {
      a = a - 3.0f;
      s = -7.488903254816711E+002f;
      s = __internal_fmad (s, a, -1.234974215949363E+004f);
      s = __internal_fmad (s, a, -4.106137688064877E+004f);
      s = __internal_fmad (s, a, -4.831066242492429E+004f);
      s = __internal_fmad (s, a, -1.430333998207429E+005f);
      t = a - 2.592509840117874E+002f;
      t = __internal_fmad (t, a, -1.077717972228532E+004f);
      t = __internal_fmad (t, a, -9.268505031444956E+004f);
      t = __internal_fmad (t, a, -2.063535768623558E+005f);
      t = __fdividef (s, t);
      t = t + a;
      return t;
    }
  } else if (a >= 1.5f) {
    a = a - 2.0f;
    t = 4.959849168282574E-005f;
    t = __internal_fmad (t, a, -2.208948403848352E-004f);
    t = __internal_fmad (t, a, 5.413142447864599E-004f);
    t = __internal_fmad (t, a, -1.204516976842832E-003f);
    t = __internal_fmad (t, a, 2.884251838546602E-003f);
    t = __internal_fmad (t, a, -7.382757963931180E-003f);
    t = __internal_fmad (t, a, 2.058131963026755E-002f);
    t = __internal_fmad (t, a, -6.735248600734503E-002f);
    t = __internal_fmad (t, a, 3.224670187176319E-001f);
    t = __internal_fmad (t, a, 4.227843368636472E-001f);
    t = t * a;
    return t;
  } else if (a >= 0.7f) {
    a = 1.0f - a;
    t = 4.588266515364258E-002f;
    t = __internal_fmad (t, a, 1.037396712740616E-001f);
    t = __internal_fmad (t, a, 1.228036339653591E-001f);
    t = __internal_fmad (t, a, 1.275242157462838E-001f);
    t = __internal_fmad (t, a, 1.432166835245778E-001f);
    t = __internal_fmad (t, a, 1.693435824224152E-001f);
    t = __internal_fmad (t, a, 2.074079329483975E-001f);
    t = __internal_fmad (t, a, 2.705875136435339E-001f);
    t = __internal_fmad (t, a, 4.006854436743395E-001f);
    t = __internal_fmad (t, a, 8.224669796332661E-001f);
    t = __internal_fmad (t, a, 5.772156651487230E-001f);
    t = t * a;
    return t;
  } else {
    t = 3.587515669447039E-003f;
    t = __internal_fmad (t, a, -5.471285428060787E-003f);
    t = __internal_fmad (t, a, -4.462712795343244E-002f);
    t = __internal_fmad (t, a, 1.673177015593242E-001f);
    t = __internal_fmad (t, a, -4.213597883575600E-002f);
    t = __internal_fmad (t, a, -6.558672843439567E-001f);
    t = __internal_fmad (t, a, 5.772153712885004E-001f);
    t = t * a;
    t = __internal_fmad (t, a, a);
    return -__internal_accurate_logf(t);
  }
}


static float __internal_sin_kernel(float x)
{
  float x2, z;

  x2 = x * x;
  z = -1.95152959e-4f;
  z = __internal_fmad (z, x2, 8.33216087e-3f);
  z = __internal_fmad (z, x2, -1.66666546e-1f);
  z = z * x2;
  z = __internal_fmad (z, x, x);
  return z;
}


static float __internal_cos_kernel(float x)
{
  float x2, z;

  x2 = x * x;
  z = 2.44331571e-5f;
  z = __internal_fmad (z, x2, -1.38873163e-3f);
  z = __internal_fmad (z, x2, 4.16666457e-2f);
  z = __internal_fmad (z, x2, -5.00000000e-1f);
  z = __internal_fmad (z, x2, 1.00000000e+0f);
  return z;
}

static float __internal_accurate_sinf(float a)
{
  float z;
  int i;

  if ((__cuda___isinff(a)) || (a == 0.0f)) {
    return __fmul_rn (a, 0.0f);
  }
  z = __internal_trig_reduction_kernel(a, &i);

  if (i & 1) {
    z = __internal_cos_kernel(z);
  } else {
    z = __internal_sin_kernel(z);
  }
  if (i & 2) {
    z = -z;
  }
  return z;
}







static float __cuda_rintf(float a)
{



  return __cuda_nearbyintf(a);

}

static float __cuda_sinf(float a)
{





  return __internal_accurate_sinf(a);

}

static float __cuda_cosf(float a)
{





  float z;
  int i;

  if (__cuda___isinff(a)) {
    return __fadd_rn (a, -a);
  }
  z = __internal_trig_reduction_kernel(a, &i);

  i++;
  if (i & 1) {
    z = __internal_cos_kernel(z);
  } else {
    z = __internal_sin_kernel(z);
  }
  if (i & 2) {
    z = -z;
  }
  return z;

}

static float __cuda_tanf(float a)
{





  float z;
  int i;

  if (__cuda___isinff(a)) {
    return __int_as_float(0x7fffffff);
  }
  z = __internal_trig_reduction_kernel(a, &i);

  z = __internal_tan_kernel(z);
  if (i & 1) {
    z = - (1.0f / z);
  }
  return z;

}

static float __cuda_log2f(float a)
{





  return __internal_accurate_log2f(a);

}

static float __cuda_expf(float a)
{





  return __internal_accurate_expf(a);

}

static float __cuda_exp10f(float a)
{





  return __internal_accurate_exp10f(a);

}

static float __cuda_coshf(float a)
{
  float z;

  a = __cuda_fabsf(a);
  z = __internal_expf_kernel(a, -2.0f);
  z = __internal_fmad (2.0f, z, __fdividef (0.125f, z));
  if (a >= 90.0f) {
    z = __int_as_float(0x7f800000);
  }
  return z;
}

static float __cuda_sinhf(float a)
{
  float s, z;

  s = a;
  a = __cuda_fabsf(a);
  if (a < 1.0f) {
    float a2 = a * a;

    z = 2.816951222e-6f;
    z = __internal_fmad (z, a2, 1.983615978e-4f);
    z = __internal_fmad (z, a2, 8.333350058e-3f);
    z = __internal_fmad (z, a2, 1.666666650e-1f);
    z = z * a2;
    z = __internal_fmad (z, a, a);
  } else {
    z = __internal_expf_kernel(a, -2.0f);
    z = __internal_fmad (2.0f, z, -__fdividef (0.125f, z));
    if (a >= 90.0f) {
      z = __int_as_float(0x7f800000);
    }
  }
  return __cuda_copysignf(z, s);
}

static float __cuda_tanhf(float a)
{
  float s, t;

  t = __cuda_fabsf(a);
  if (t < 0.55f) {
    float z, z2;
    z = t;
    z2 = z * z;
    t = 1.643758066599993e-2f;
    t = __internal_fmad (t, z2, -5.267181327760551e-2f);
    t = __internal_fmad (t, z2, 1.332072505223051e-1f);
    t = __internal_fmad (t, z2, -3.333294663641083e-1f);
    t = t * z2;
    s = __internal_fmad (t, z, z);
  } else {
    s = 1.0f - __fdividef(2.0f,(__internal_expf_kernel(2.0f * t, 0.0f)+1.0f));
    if (t >= 88.0f) {
      s = 1.0f;
    }
  }
  return __cuda_copysignf(s, a);
}

static float __cuda_atan2f(float a, float b)
{



  float t0, t1, t3, fa, fb;



  fb = __cuda_fabsf(b);
  fa = __cuda_fabsf(a);

  if (fa == 0.0f && fb == 0.0f) {
    t3 = __cuda___signbitf(b) ? 3.141592654f : 0;
  } else if ((fa == __int_as_float(0x7f800000)) && (fb == __int_as_float(0x7f800000))) {
    t3 = __cuda___signbitf(b) ? 2.356194490f : 0.785398163f;
  } else {

    if (fb < fa) {
      t0 = fa;
      t1 = fb;
    } else {
      t0 = fb;
      t1 = fa;
    }
    t3 = __internal_accurate_fdividef(t1, t0);
    t3 = __internal_atanf_kernel(t3);

    if (fa > fb) t3 = 1.570796327f - t3;
    if (b < 0.0f) t3 = 3.141592654f - t3;
  }
  t3 = __cuda_copysignf(t3, a);

  return t3;

}

static float __cuda_atanf(float a)
{
  float t0, t1;


  t0 = __cuda_fabsf(a);
  t1 = t0;
  if (t0 > 1.0f) {
    t1 = 1.0f / t1;
  }

  t1 = __internal_atanf_kernel(t1);

  if (t0 > 1.0f) {
    t1 = 1.570796327f - t1;
  }
  return __cuda_copysignf(t1, a);
}


static float __internal_asinf_kernel(float a)
{
  float t2, t3, t4;

  t2 = a * a;
  t3 = -0.501162291f;
  t3 = __internal_fmad (t3, t2, 0.915201485f);
  t3 = t3 * t2;
  t3 = t3 * a;
  t4 = t2 - 5.478654385f;
  t4 = __internal_fmad (t4, t2, 5.491230488f);
  t4 = 1.0f / t4;
  a = __internal_fmad (t3, t4, a);
  return a;
}

static float __cuda_asinf(float a)
{
  float t0, t1, t2;

  t0 = __cuda_fabsf(a);
  t2 = 1.0f - t0;
  t2 = 0.5f * t2;
  t2 = __cuda_sqrtf(t2);
  t1 = t0 > 0.575f ? t2 : t0;
  t1 = __internal_asinf_kernel(t1);
  t2 = __internal_fmad (-2.0f, t1, 1.570796327f);
  if (t0 > 0.575f) {
    t1 = t2;
  }
  return __cuda_copysignf(t1, a);
}

static float __cuda_acosf(float a)
{
  float t0, t1, t2;

  t0 = __cuda_fabsf(a);
  t2 = 1.0f - t0;
  t2 = 0.5f * t2;
  t2 = __cuda_sqrtf(t2);
  t1 = t0 > 0.575f ? t2 : t0;
  t1 = __internal_asinf_kernel(t1);
  t1 = t0 > 0.575f ? 2.0f * t1 : 1.570796327f - t1;
  if (__cuda___signbitf(a)) {
    t1 = 3.141592654f - t1;
  }
  return t1;
}

static float __cuda_logf(float a)
{





  return __internal_accurate_logf(a);

}

static float __cuda_log10f(float a)
{





  return 0.434294482f * __internal_accurate_logf(a);

}

static float __cuda_log1pf(float a)
{



  float t;




  if (a >= -0.394f && a <= 0.65f) {

    t = a + 2.0f;
    t = __fdividef (a, t);
    t = -a * t;
    t = __internal_atanhf_kernel (a, t);
  } else {
    t = __internal_accurate_logf (1.0f + a);
  }
  return t;

}

static float __cuda_acoshf(float a)
{



  float t;

  t = a - 1.0f;
  if (__cuda_fabsf(t) > 8388608.0f) {

    return 0.693147181f + __internal_accurate_logf(a);
  } else {
    t = t + __cuda_sqrtf(__internal_fmad (a, t, t));
    return __cuda_log1pf(t);
  }

}

static float __cuda_asinhf(float a)
{



  float fa, oofa, t;

  fa = __cuda_fabsf(a);
  if (fa > 8.507059173e37f) {
    t = 0.693147181f + __logf(fa);
  } else {
    oofa = 1.0f / fa;
    t =fa+__fdividef (fa,(oofa+__cuda_sqrtf(__internal_fmad(oofa,oofa,1.0f))));
    t = __cuda_log1pf(t);
  }
  return __cuda_copysignf(t, a);

}

static float __cuda_atanhf(float a)
{



  float fa, t;

  fa = __cuda_fabsf(a);
  t = __fdividef ((2.0f * fa), (1.0f - fa));
  t = 0.5f * __cuda_log1pf(t);
  return __cuda_copysignf(t, a);

}

static float __cuda_expm1f(float a)
{
  float t, z, j, u;

  t = __cuda_rintf (a * 1.442695041f);
  z = __internal_fmad (-t, 0.6931457519f, a);
  z = __internal_fmad (-t, 1.4286067653e-6f, z);

  if (__cuda_fabsf(a) < 0.41f) {
    z = a;
    t = 0.0f;
  }

  j = t;
  if (t == 128.0f) j = j - 1.0f;

  u = 1.38795078474044430E-003f;
  u = __internal_fmad (u, z, 8.38241261853264930E-003f);
  u = __internal_fmad (u, z, 4.16678317762833940E-002f);
  u = __internal_fmad (u, z, 1.66663978874356580E-001f);
  u = __internal_fmad (u, z, 4.99999940395997040E-001f);
  u = u * z;
  u = __internal_fmad (u, z, z);
  if (a == 0.0f) u = a;

  z = __cuda_exp2f (j);
  a = z - 1.0f;
  if (a != 0.0f) u = __internal_fmad (u, z, a);
  if (t == 128.0f) u = u + u;

  if (j > 128.0f) u = __int_as_float(0x7f800000);
  if (j < -25.0f) u = -1.0f;
  return u;
}

static float __cuda_hypotf(float a, float b)
{



  float v, w, t;

  a = __cuda_fabsf(a);
  b = __cuda_fabsf(b);

  if (a > b) {
    v = a;
    w = b;
  } else {
    v = b;
    w = a;
  }
  t = __internal_accurate_fdividef(w, v);
  t = __internal_fmad (t, t, 1.0f);
  t = v * __cuda_sqrtf(t);
  if (v == 0.0f) {
    t = v + w;
  }
  if ((v == __int_as_float(0x7f800000)) || (w == __int_as_float(0x7f800000))) {
    t = __int_as_float(0x7f800000);
  }
  return t;

}

static float __cuda_cbrtf(float a)
{



  float s, t;

  s = __cuda_fabsf(a);
  if ((a == 0.0f) || (s == __int_as_float(0x7f800000))) {
    return a;
  }
  t = __cuda_exp2f(0.333333333f * __log2f(s));
  t = t-(t-(__fdividef(s,(t*t))))*0.333333333f;
  if (__cuda___signbitf(a)) {
    t = -t;
  }
  return t;

}

static float __cuda_erff(float a)
{
  float t, r, q;

  t = __cuda_fabsf(a);
  if (t < 1.0f) {
    t = t * t;
    r = -5.58510127926029810E-004f;
    r = __internal_fmad (r, t, 4.90688891415893070E-003f);
    r = __internal_fmad (r, t, -2.67027980930150640E-002f);
    r = __internal_fmad (r, t, 1.12799056505903940E-001f);
    r = __internal_fmad (r, t, -3.76122956138427440E-001f);
    r = __internal_fmad (r, t, 1.12837911712623450E+000f);
    a = a * r;
  } else if (t <= __int_as_float(0x7f800000)) {



    q = __internal_fmad (t, 0.3275911f, 1.0f);
    q = 1.0f / q;
    r = 1.061405429f;
    r = __internal_fmad (r, q, -1.453152027f);
    r = __internal_fmad (r, q, 1.421413741f);
    r = __internal_fmad (r, q, -0.284496736f);
    r = __internal_fmad (r, q, 0.254829592f);
    r = r * q;
    q = __internal_expf_kernel(-a * a, 0.0f);
    r = __internal_fmad (-q, r, 1.0f);
    if (t >= 5.5f) {
      r = 1.0f;
    }
    a = __int_as_float (__float_as_int(r) | (__float_as_int(a) & 0x80000000));
  }
  return a;
}

static float __cuda_erfinvf (float a)
{
  float fa, t;

  fa = fabsf(a);
  if (fa >= 1.0f) {
    t = __cuda_rsqrtf (__int_as_float (0xffc00000));
    if (fa == 1.0f) {
      t = a * __int_as_float(0x7f800000);
    }
  } else if (fa > 0.9375f) {




    float p, q;

    t = __cuda_log1pf(-fa);
    t = __cuda_rsqrtf(-t);
    p = -1.64441567910e-1f;
    p = __internal_fmad (p, t, 6.80544246825e-1f);
    p = __internal_fmad (p, t, -1.12808139162e+0f);
    p = __internal_fmad (p, t, 6.90969348887e-1f);
    p = __internal_fmad (p, t, 1.38271964963e+0f);
    p = __internal_fmad (p, t, 1.55047000312e-1f);
    q = t + 1.38522814199e+0f;
    q = __internal_fmad (q, t, 1.55024849822e-1f);
    q = q * t;
    t = __fdividef (p, q);
    if (a < 0.0f) t = -t;
  } else if (fa > 0.75f) {




    float p, q;

    t = __internal_fmad (a, a, -0.87890625f);
    p = -7.1986748896e+0f;
    p = __internal_fmad (p, t, +1.3411974175e+1f);
    p = __internal_fmad (p, t, -5.1381573203e+0f);
    p = __internal_fmad (p, t, 4.9633374831e-1f);
    q = t -1.1436535838e+1f;
    q = __internal_fmad (q, t, 1.3568885572e+1f);
    q = __internal_fmad (q, t, -4.1747509256e+0f);
    q = __internal_fmad (q, t, 3.5327242323e-1f);
    p = __fdividef (p, q);
    t = a * p;
  } else {
    float a2;

    a2 = a * a;
    t = 6.1046168794766742E-001f;
    t = __internal_fmad (t, a2, -8.9504882462753121E-001f);
    t = __internal_fmad (t, a2, 7.0224162369928511E-001f);
    t = __internal_fmad (t, a2, -1.9993784895823222E-001f);
    t = __internal_fmad (t, a2, 1.1920613463949599E-001f);
    t = __internal_fmad (t, a2, 8.0131492246997685E-002f);
    t = __internal_fmad (t, a2, 1.2793154958377403E-001f);
    t = __internal_fmad (t, a2, 2.3200529172828793E-001f);
    t = __internal_fmad (t, a2, 8.8622695604694379E-001f);
    t = t * a;
  }
  return t;
}

static float __cuda_erfcf(float a)
{
  if (a <= 0.55f) {
    return 1.0f - __cuda_erff(a);
  } else if (a > 10.0f) {
    return 0.0f;
  } else {
    float p;
    float q;
    float h;
    float l;




    p = 4.014893410762552E-006f;
    p = __internal_fmad (p, a, 5.640401259462436E-001f);
    p = __internal_fmad (p, a, 2.626649872281140E+000f);
    p = __internal_fmad (p, a, 5.486372652389673E+000f);
    p = __internal_fmad (p, a, 5.250714831459401E+000f);
    q = a + 4.651376250488319E+000f;
    q = __internal_fmad (q, a, 1.026302828878470E+001f);
    q = __internal_fmad (q, a, 1.140762166021288E+001f);
    q = __internal_fmad (q, a, 5.251211619089947E+000f);

    h = 1.0f / q;
    q = __internal_fmad (-q * h, h, 2.0f * h);
    p = p * q;

    h = __int_as_float(__float_as_int(a) & 0xfffff000);
    l = __fadd_rn (a, -h);
    q = __fmul_rn (-h, h);
    q = __internal_expf_kernel(q, 0.0f);
    a = a + h;
    l = l * a;
    h = __internal_expf_kernel(-l, 0.0f);
    q = q * h;
    p = p * q;
    return p;
  }
}

static float __cuda_erfcinvf (float a)
{
  float t;
  if (a <= 0.0f) {
    t = __int_as_float(0x7fffffff);
    if (a == 0.0f) {
      t = (1.0f - a) * __int_as_float(0x7f800000);
    }
  }
  else if (a >= 0.0625f) {
    t = __cuda_erfinvf (1.0f - a);
  }
  else {
    float p, q;
    t = __cuda_logf(a);
    t = __cuda_rsqrtf(-t);
    p = -1.64441567910e-1f;
    p = __internal_fmad (p, t, 6.80544246825e-1f);
    p = __internal_fmad (p, t, -1.12808139162e+0f);
    p = __internal_fmad (p, t, 6.90969348887e-1f);
    p = __internal_fmad (p, t, 1.38271964963e+0f);
    p = __internal_fmad (p, t, 1.55047000312e-1f);
    q = t + 1.38522814199e+0f;
    q = __internal_fmad (q, t, 1.55024849822e-1f);
    q = q * t;
    t = __fdividef (p, q);
  }
  return t;
}

static float __cuda_lgammaf(float a)
{
  float t;
  float i;
  int quot;
  t = __internal_lgammaf_pos(__cuda_fabsf(a));
  if (a >= 0.0f) return t;
  a = __cuda_fabsf(a);
  i = __cuda_floorf(a);
  if (a == i) return __int_as_float(0x7f800000);
  if (a < 1e-19f) return -__internal_accurate_logf(a);
  i = __cuda_rintf (2.0f * a);
  quot = (int)i;
  i = __internal_fmad (-i, 0.5f, a);
  i = i * 3.141592654f;
  if (quot & 1) {
    i = __internal_cos_kernel(i);
  } else {
    i = __internal_sin_kernel(i);
  }
  i = __cuda_fabsf(i);
  t = 1.144729886f - __internal_accurate_logf(i * a) - t;
  return t;
}

static float __cuda_ldexpf(float a, int b)
{



  float fa = __cuda_fabsf(a);

  if ((fa == 0.0f) || (fa == __int_as_float(0x7f800000)) || (b == 0)) {
    if (!(fa > 0.0f)) a = a + a;
    return a;
  } else if (__cuda_abs(b) < 126) {
    return a * __cuda_exp2f((float)b);
  } else if (__cuda_abs(b) < 252) {
    int bhalf = b / 2;
    return a * __cuda_exp2f((float)bhalf) * __cuda_exp2f((float)(b - bhalf));
  } else {
    int bquarter = b / 4;
    float t = __cuda_exp2f((float)bquarter);
    return a * t * t * t * __cuda_exp2f((float)(b - 3 * bquarter));
  }

}

static float __cuda_scalbnf(float a, int b)
{




  return __cuda_ldexpf(a, b);

}

static float __cuda_scalblnf(float a, long int b)
{



  int t;
  if (b > 2147483647L) {
    t = 2147483647;
  } else if (b < (-2147483647 - 1)) {
    t = (-2147483647 - 1);
  } else {
    t = (int)b;
  }
  return __cuda_scalbnf(a, t);

}

static float __cuda_frexpf(float a, int *b)
{
  float fa = __cuda_fabsf(a);
  unsigned int expo;
  unsigned int denorm;

  if (fa < 1.175494351e-38f) {
    a *= 16777216.0f;
    denorm = 24;
  } else {
    denorm = 0;
  }
  expo = ((__float_as_int(a) >> 23) & 0xff);
  if ((fa == 0.0f) || (expo == 0xff)) {
    expo = 0;
    a = a + a;
  } else {
    expo = expo - denorm - 126;
    a = __int_as_float(((__float_as_int(a) & 0x807fffff) | 0x3f000000));
  }
  *b = expo;
  return a;
}

static float __cuda_modff(float a, float *b)
{



  float t;
  if (__cuda___finitef(a)) {
    t = __cuda_truncf(a);
    *b = t;
    t = a - t;
    return __cuda_copysignf(t, a);
  } else if (__cuda___isinff(a)) {
    t = 0.0f;
    *b = a;
    return __cuda_copysignf(t, a);
  } else {
    *b = a;
    return a;
  }

}

static float __cuda_fmodf(float a, float b)
{



  float orig_a = a;
  float orig_b = b;
  a = __cuda_fabsf(a);
  b = __cuda_fabsf(b);
  if (!((a <= __int_as_float(0x7f800000)) && (b <= __int_as_float(0x7f800000)))) {
    return orig_a + orig_b;
  }
  if ((a == __int_as_float(0x7f800000)) || (b == 0.0f)) {
    return __cuda_rsqrtf (__int_as_float (0xffc00000));
  } else if (a >= b) {


    int expoa = (a < 1.175494351e-38f) ?
        ((int)__log2f(a)) : (((__float_as_int(a) >> 23) & 0xff) - 127);
    int expob = (b < 1.175494351e-38f) ?
        ((int)__log2f(b)) : (((__float_as_int(b) >> 23) & 0xff) - 127);
    int scale = expoa - expob;
    float scaled_b = __cuda_ldexpf(b, scale);
    if (scaled_b <= 0.5f * a) {
      scaled_b *= 2.0f;
    }







    while (scaled_b >= b) {
      if (a >= scaled_b) {
        a -= scaled_b;
      }
      scaled_b *= 0.5f;
    }
    return __cuda_copysignf(a, orig_a);
  } else {
    if (!(a > 0.0f)) orig_a = orig_a + orig_a;
    return orig_a;
  }

}

static float __cuda_remainderf(float a, float b)
{

  float twoa = 0.0f;
  unsigned int quot0 = 0;
  float orig_a = a;
  float orig_b = b;

  a = __cuda_fabsf(a);
  b = __cuda_fabsf(b);
  if (!((a <= __int_as_float(0x7f800000)) && (b <= __int_as_float(0x7f800000)))) {
    return orig_a + orig_b;
  }
  if ((a == __int_as_float(0x7f800000)) || (b == 0.0f)) {
    return __cuda_rsqrtf (__int_as_float (0xffc00000));
  } else if (a >= b) {

    int expoa = (a < 1.175494351e-38f) ?
        ((int)__log2f(a)) : (((__float_as_int(a) >> 23) & 0xff) - 127);
    int expob = (b < 1.175494351e-38f) ?
        ((int)__log2f(b)) : (((__float_as_int(b) >> 23) & 0xff) - 127);
    int scale = expoa - expob;
    float scaled_b = __cuda_ldexpf(b, scale);
    if (scaled_b <= 0.5f * a) {
      scaled_b *= 2.0f;
    }
# 2638 "/home/normal/cuda/bin/../include/math_functions.h" 3
    while (scaled_b >= b) {
      quot0 = 0;
      if (a >= scaled_b) {
        twoa = (2.0f * a - scaled_b) - scaled_b;
        a -= scaled_b;
        quot0 = 1;
      }
      scaled_b *= 0.5f;
    }
  }


  twoa = 2.0f * a;
  if ((twoa > b) || ((twoa == b) && quot0)) {
    a -= b;
    a = __cuda_copysignf (a, -1.0f);
  }
# 2670 "/home/normal/cuda/bin/../include/math_functions.h" 3
  a = __int_as_float((__float_as_int(orig_a) & 0x80000000)^
                     __float_as_int(a));
  return a;
}

static float __cuda_remquof(float a, float b, int* quo)
{
  float twoa = 0.0f;
  unsigned int quot = 0;
  unsigned int sign;
  float orig_a = a;
  float orig_b = b;


  sign = 0 - (__cuda___signbitf(a) != __cuda___signbitf(b));
  a = __cuda_fabsf(a);
  b = __cuda_fabsf(b);
  if (!((a <= __int_as_float(0x7f800000)) && (b <= __int_as_float(0x7f800000)))) {
    *quo = quot;
    return orig_a + orig_b;
  }
  if ((a == __int_as_float(0x7f800000)) || (b == 0.0f)) {
    *quo = quot;
    return __cuda_rsqrtf (__int_as_float (0xffc00000));
  } else if (a >= b) {


    int expoa = (a < 1.175494351e-38f) ?
        ((int)__log2f(a)) : (((__float_as_int(a) >> 23) & 0xff) - 127);
    int expob = (b < 1.175494351e-38f) ?
        ((int)__log2f(b)) : (((__float_as_int(b) >> 23) & 0xff) - 127);
    int scale = expoa - expob;
    float scaled_b = __cuda_ldexpf(b, scale);
    if (scaled_b <= 0.5f * a) {
      scaled_b *= 2.0f;
    }
# 2723 "/home/normal/cuda/bin/../include/math_functions.h" 3
    while (scaled_b >= b) {
      quot <<= 1;
      if (a >= scaled_b) {
        twoa = (2.0f * a - scaled_b) - scaled_b;
        a -= scaled_b;
        quot += 1;
      }
      scaled_b *= 0.5f;
    }
  }


  twoa = 2.0f * a;
  if ((twoa > b) || ((twoa == b) && (quot & 1))) {
    quot++;
    a -= b;
    a = __cuda_copysignf (a, -1.0f);
  }
# 2758 "/home/normal/cuda/bin/../include/math_functions.h" 3
  a = __int_as_float((__float_as_int(orig_a) & 0x80000000)^
                     __float_as_int(a));
  quot = quot & (~((~0)<<3));
  quot = quot ^ sign;
  quot = quot - sign;
  *quo = quot;
  return a;
}

static float __cuda_fmaf(float a, float b, float c)
{
  return __fmaf_rn(a, b, c);
}

static float __internal_accurate_powf(float a, float b)
{
  float2 loga, prod;



  float t;



  loga = __internal_log_ep(a);


  if (__cuda_fabsf(b) > 1.0e34f) b *= 1.220703125e-4f;
  prod.y = b;
  prod.x = 0.0f;
  prod = __internal_dsmul (prod, loga);


  if (__float_as_int(prod.y) == 0x42b17218) {
    prod.y = __int_as_float(__float_as_int(prod.y) - 1);
    prod.x = prod.x + __int_as_float(0x37000000);
  }


  t = __cuda_expf(prod.y);

  if (t != __int_as_float(0x7f800000)) {



    t = __internal_fmad (t, prod.x, t);
  }
  return t;
}

static float __cuda_powif(float a, int b)
{
  unsigned int e = __cuda_abs(b);
  float r = 1.0f;

  while (1) {
    if ((e & 1) != 0) {
      r = r * a;
    }
    e = e >> 1;
    if (e == 0) {
      return b < 0 ? 1.0f / r : r;
    }
    a = a * a;
  }
}

static double __cuda_powi(double a, int b)
{
  unsigned int e = __cuda_abs(b);
  double r = 1.0;

  while (1) {
    if ((e & 1) != 0) {
      r = r * a;
    }
    e = e >> 1;
    if (e == 0) {
      return b < 0 ? 1.0 / r : r;
    }
    a = a * a;
  }
}

static float __cuda_powf(float a, float b)
{





  int bIsOddInteger;
  float t;
  if (a == 1.0f || b == 0.0f) {
    return 1.0f;
  }
  if (__cuda___isnanf(a) || __cuda___isnanf(b)) {
    return a + b;
  }
  if (a == __int_as_float(0x7f800000)) {
    return __cuda___signbitf(b) ? 0.0f : __int_as_float(0x7f800000);
  }
  if (__cuda___isinff(b)) {
    if (a == -1.0f) {
      return 1.0f;
    }
    t = (__cuda_fabsf(a) > 1.0f) ? __int_as_float(0x7f800000) : 0.0f;
    if (b < 0.0f) {
      t = 1.0f / t;
    }
    return t;
  }
  bIsOddInteger = (b - (2.0f * floorf(0.5f * b))) == 1.0f;
  if (a == 0.0f) {
    t = bIsOddInteger ? a : 0.0f;
    if (b < 0.0f) {
      t = 1.0f / t;
    }
    return t;
  }
  if (a == -__int_as_float(0x7f800000)) {
    t = - ((b < 0.0f) ? (1.0f / a) : a);
    if (bIsOddInteger) {
      t = __int_as_float(__float_as_int(t) ^ 0x80000000);
    }
    return t;
  }
  if ((a < 0.0f) && (b != __cuda_truncf(b))) {
    return __cuda_rsqrtf(__int_as_float(0xffc00000));
  }
  t = __cuda_fabsf(a);
  t = __internal_accurate_powf(t, b);
  if ((a < 0.0f) && bIsOddInteger) {
    t = __int_as_float(__float_as_int(t) ^ 0x80000000);
  }
  return t;

}


static float __internal_tgammaf_kernel(float a)
{
  float t;
  t = -1.05767296987211380E-003f;
  t = __internal_fmad (t, a, 7.09279059435508670E-003f);
  t = __internal_fmad (t, a, -9.65347121958557050E-003f);
  t = __internal_fmad (t, a, -4.21736613253687960E-002f);
  t = __internal_fmad (t, a, 1.66542401247154280E-001f);
  t = __internal_fmad (t, a, -4.20043267827838460E-002f);
  t = __internal_fmad (t, a, -6.55878234051332940E-001f);
  t = __internal_fmad (t, a, 5.77215696929794240E-001f);
  t = __internal_fmad (t, a, 1.00000000000000000E+000f);
  return t;
}





static float __cuda_tgammaf(float a)
{
  float s, xx, x=a;
  if (x >= 0.0f) {
    if (x > 36.0f) x = 36.0f;
    s = 1.0f;
    xx = x;
    if (x > 34.03f) {
      xx -= 1.0f;
    }
    while (xx > 1.5f) {
      xx = xx - 1.0f;
      s = s * xx;
    }
    if (x >= 0.5f) {
      xx = xx - 1.0f;
    }
    xx = __internal_tgammaf_kernel(xx);
    if (x < 0.5f) {
      xx = xx * x;
    }
    s = __fdividef(s, xx);
    if (x > 34.03f) {

      xx = x - 1.0f;
      s = s * xx;
    }
    return s;
  } else {
    if (x == __cuda_floorf(x)) {
      x = __int_as_float(0x7fffffff);

      return x;

    }
    if (x < -41.1f) x = -41.1f;
    xx = x;
    if (x < -34.03f) {
      xx += 6.0f;
    }
    s = xx;
    while (xx < -0.5f) {
      xx = xx + 1.0f;
      s = s * xx;
    }
    xx = __internal_tgammaf_kernel(xx);
    s = s * xx;
    s = 1.0f / s;
    if (x < -34.03f) {
      xx = x;
      xx *= (x + 1.0f);
      xx *= (x + 2.0f);
      xx *= (x + 3.0f);
      xx *= (x + 4.0f);
      xx *= (x + 5.0f);
      xx = 1.0f / xx;
      s = s * xx;
      if ((a < -42.0f) && !(((int)a)&1)) {
        s = __int_as_float(0x80000000);
      }
    }
    return s;
  }
}

static float __cuda_roundf(float a)
{



  float fa = __cuda_fabsf(a);
  float u = __cuda_copysignf (0.5f, a);
  u = __cuda_truncf (a + u);
  if (fa > 8388608.0f) u = a;
  if (fa < 0.5f) u = __cuda_truncf (a);
  return u;

}

static long long int __internal_llroundf_kernel(float a)
{
  unsigned long long int res, t = 0LL;
  int shift;
  unsigned int ia = __float_as_int(a);
  if ((ia << 1) > 0xff000000) return 0LL;
  if ((int)ia >= 0x5f000000) return 0x7fffffffffffffffLL;
  if (ia >= 0xdf000000) return 0x8000000000000000LL;
  shift = 189 - ((ia >> 23) & 0xff);
  res = ((long long int)(((ia << 8) | 0x80000000) >> 1)) << 32;
  if (shift >= 64) {
    t = res;
    res = 0;
  } else if (shift) {
    t = res << (64 - shift);
    res = res >> shift;
  }
  if (t >= 0x8000000000000000LL) {
    res++;
  }
  if ((int)ia < 0) res = (unsigned long long int)(-(long long int)res);
  return (long long int)res;
}

static long long int __cuda_llroundf(float a)
{



  return __internal_llroundf_kernel(a);

}

static long int __cuda_lroundf(float a)
{




  return (long int)__cuda_llroundf(a);
# 3045 "/home/normal/cuda/bin/../include/math_functions.h" 3
}

static float __cuda_fdimf(float a, float b)
{
  float t;
  t = a - b;
  if (a <= b) {
    t = 0.0f;
  }
  return t;
}

static int __cuda_ilogbf(float a)
{
  unsigned int i;
  int expo;
  a = __cuda_fabsf(a);
  if (a <= 1.175494351e-38f) {

    if (a == 0.0f) {
      expo = -((int)((unsigned int)-1 >> 1))-1;
    } else {
      expo = -126;
      i = __float_as_int(a);
      i = i << 8;
      while ((int)i >= 0) {
        expo--;
        i = i + i;
      }
    }
  } else {
    i = __float_as_int(a);
    expo = ((int)((i >> 23) & 0xff)) - 127;
    if ((i == 0x7f800000)) {
      expo = ((int)((unsigned int)-1 >> 1));
    }
    if ((i > 0x7f800000)) {
      expo = -((int)((unsigned int)-1 >> 1))-1;
    }
  }
  return expo;
}

static float __cuda_logbf(float a)
{



  unsigned int i;
  int expo;
  float res;

  if (__cuda___isnanf(a)) return a + a;

  a = __cuda_fabsf(a);
  if (a <= 1.175494351e-38f) {

    if (a == 0.0f) {
      res = -__int_as_float(0x7f800000);
    } else {
      expo = -126;
      i = __float_as_int(a);
      i = i << 8;
      while ((int)i >= 0) {
        expo--;
        i = i + i;
      }
      res = (float)expo;
    }
  } else {
    i = __float_as_int(a);
    expo = ((int)((i >> 23) & 0xff)) - 127;
    res = (float)expo;
    if ((i >= 0x7f800000)) {

      res = a + a;
    }
  }
  return res;

}

static void __cuda_sincosf(float a, float *sptr, float *cptr)
{





  float t, u, s, c;
  int quadrant;
  if (__cuda___isinff(a)) {
    *sptr = __int_as_float(0x7fffffff);
    *cptr = __int_as_float(0x7fffffff);
    return;
  }
  if (a == 0.0f) {
    *sptr = a;
    *cptr = 1.0f;
    return;
  }
  t = __internal_trig_reduction_kernel(a, &quadrant);
  u = __internal_cos_kernel(t);
  t = __internal_sin_kernel(t);
  if (quadrant & 1) {
    s = u;
    c = t;
  } else {
    s = t;
    c = u;
  }
  if (quadrant & 2) {
    s = -s;
  }
  quadrant++;
  if (quadrant & 2) {
    c = -c;
  }
  *sptr = s;
  *cptr = c;

}
# 3176 "/home/normal/cuda/bin/../include/math_functions.h" 3
extern __attribute__((__weak__)) double rsqrt(double a); double rsqrt(double a)
{
  return 1.0 / sqrt(a);
}

extern __attribute__((__weak__)) float rsqrtf(float a); float rsqrtf(float a)
{
  return (float)rsqrt((double)a);
}
# 3728 "/home/normal/cuda/bin/../include/math_functions.h" 3
# 1 "/home/normal/cuda/bin/../include/math_functions_dbl_ptx1.h" 1 3
# 45 "/home/normal/cuda/bin/../include/math_functions_dbl_ptx1.h" 3
static double __cuda_fabs(double a)
{
  return (float)__cuda_fabsf((float)a);
}

static double __cuda_fmax(double a, double b)
{
  return (float)__cuda_fmaxf((float)a, (float)b);
}

static double __cuda_fmin(double a, double b)
{
  return (float)__cuda_fminf((float)a, (float)b);
}

static int __cuda___finite(double a)
{
  return __cuda___finitef((float)a);
}

static int __cuda___isinf(double a)
{
  return __cuda___isinff((float)a);
}

static int __cuda___isnan(double a)
{
  return __cuda___isnanf((float)a);
}

static int __cuda___signbit(double a)
{
  return __cuda___signbitf((float)a);
}

static double __cuda_sqrt(double a)
{
  return (double)__cuda_sqrtf((float)a);
}

static double __cuda_rsqrt(double a)
{
  return (double)__cuda_rsqrtf((float)a);
}

static double __cuda_ceil(double a)
{
  return (double)__cuda_ceilf((float)a);
}

static double __cuda_trunc(double a)
{
  return (double)__cuda_truncf((float)a);
}

static double __cuda_floor(double a)
{
  return (double)__cuda_floorf((float)a);
}

static double __cuda_copysign(double a, double b)
{
  return (double)__cuda_copysignf((float)a, (float)b);
}

static double __cuda_sin(double a)
{
  return (double)__cuda_sinf((float)a);
}

static double __cuda_cos(double a)
{
  return (double)__cuda_cosf((float)a);
}

static void __cuda_sincos(double a, double *sptr, double *cptr)
{
  float fs, fc;

  __cuda_sincosf((float)a, &fs, &fc);

  *sptr = (double)fs;
  *cptr = (double)fc;
}

static double __cuda_tan(double a)
{
  return (double)__cuda_tanf((float)a);
}

static double __cuda_exp(double a)
{
  return (double)__cuda_expf((float)a);
}

static double __cuda_exp2(double a)
{
  return (double)__cuda_exp2f((float)a);
}

static double __cuda_exp10(double a)
{
  return (double)__cuda_exp10f((float)a);
}

static double __cuda_expm1(double a)
{
  return (double)__cuda_expm1f((float)a);
}

static double __cuda_cosh(double a)
{
  return (double)__cuda_coshf((float)a);
}

static double __cuda_sinh(double a)
{
  return (double)__cuda_sinhf((float)a);
}

static double __cuda_tanh(double a)
{
  return (double)__cuda_tanhf((float)a);
}

static double __cuda_asin(double a)
{
  return (double)__cuda_asinf((float)a);
}

static double __cuda_acos(double a)
{
  return (double)__cuda_acosf((float)a);
}

static double __cuda_atan(double a)
{
  return (double)__cuda_atanf((float)a);
}

static double __cuda_atan2(double a, double b)
{
  return (double)__cuda_atan2f((float)a, (float)b);
}

static double __cuda_log(double a)
{
  return (double)__cuda_logf((float)a);
}

static double __cuda_log2(double a)
{
  return (double)__cuda_log2f((float)a);
}

static double __cuda_log10(double a)
{
  return (double)__cuda_log10f((float)a);
}

static double __cuda_log1p(double a)
{
  return (double)__cuda_log1pf((float)a);
}

static double __cuda_acosh(double a)
{
  return (double)__cuda_acoshf((float)a);
}

static double __cuda_asinh(double a)
{
  return (double)__cuda_asinhf((float)a);
}

static double __cuda_atanh(double a)
{
  return (double)__cuda_atanhf((float)a);
}

static double __cuda_hypot(double a, double b)
{
  return (double)__cuda_hypotf((float)a, (float)b);
}

static double __cuda_cbrt(double a)
{
  return (double)__cuda_cbrtf((float)a);
}

static double __cuda_erf(double a)
{
  return (double)__cuda_erff((float)a);
}

static double __cuda_erfinv(double a)
{
  return (double)__cuda_erfinvf((float)a);
}

static double __cuda_erfc(double a)
{
  return (double)__cuda_erfcf((float)a);
}

static double __cuda_erfcinv(double a)
{
  return (double)__cuda_erfcinvf((float)a);
}

static double __cuda_lgamma(double a)
{
  return (double)__cuda_lgammaf((float)a);
}

static double __cuda_tgamma(double a)
{
  return (double)__cuda_tgammaf((float)a);
}

static double __cuda_ldexp(double a, int b)
{
  return (double)__cuda_ldexpf((float)a, b);
}

static double __cuda_scalbn(double a, int b)
{
  return (double)__cuda_scalbnf((float)a, b);
}

static double __cuda_scalbln(double a, long b)
{
  return (double)__cuda_scalblnf((float)a, b);
}

static double __cuda_frexp(double a, int *b)
{
  return (double)__cuda_frexpf((float)a, b);
}

static double __cuda_modf(double a, double *b)
{
  float fb;
  float fa = __cuda_modff((float)a, &fb);

  *b = (double)fb;

  return (double)fa;
}

static double __cuda_fmod(double a, double b)
{
  return (double)__cuda_fmodf((float)a, (float)b);
}

static double __cuda_remainder(double a, double b)
{
  return (double)__cuda_remainderf((float)a, (float)b);
}

static double __cuda_remquo(double a, double b, int *c)
{
  return (double)__cuda_remquof((float)a, (float)b, c);
}

static double __cuda_nextafter(double a, double b)
{
  return (double)__cuda_nextafterf((float)a, (float)b);
}

static double __cuda_nan(const char *tagp)
{
  return (double)__cuda_nanf(tagp);
}

static double __cuda_pow(double a, double b)
{
  return (double)__cuda_powf((float)a, (float)b);
}

static double __cuda_round(double a)
{
  return (double)__cuda_roundf((float)a);
}

static long __cuda_lround(double a)
{
  return __cuda_lroundf((float)a);
}

static long long __cuda_llround(double a)
{
  return __cuda_llroundf((float)a);
}

static double __cuda_rint(double a)
{
  return (double)__cuda_rintf((float)a);
}

static long __cuda_lrint(double a)
{
  return __cuda_lrintf((float)a);
}

static long long __cuda_llrint(double a)
{
  return __cuda_llrintf((float)a);
}

static double __cuda_nearbyint(double a)
{
  return (double)__cuda_nearbyintf((float)a);
}

static double __cuda_fdim(double a, double b)
{
  return (double)__cuda_fdimf((float)a, (float)b);
}

static int __cuda_ilogb(double a)
{
  return __cuda_ilogbf((float)a);
}

static double __cuda_logb(double a)
{
  return (double)__cuda_logbf((float)a);
}

static double __cuda_fma(double a, double b, double c)
{
  return (double)__cuda_fmaf((float)a, (float)b, (float)c);
}
# 3729 "/home/normal/cuda/bin/../include/math_functions.h" 2 3
# 94 "/home/normal/cuda/bin/../include/common_functions.h" 2
# 227 "/home/normal/cuda/bin/../include/crt/host_runtime.h" 2
# 6 "/tmp/tmpxft_00005f60_00000000-1_dct8x8.cudafe1.stub.c" 2
struct __T20 {float *__par0;int __par1;int __par2;int __par3;int __dummy_field;};
struct __T21 {float *__par0;int __par1;int __par2;int __par3;int __dummy_field;};
struct __T22 {float *__par0;int __par1;int __dummy_field;};
struct __T23 {float *__par0;int __par1;int __dummy_field;};
struct __T24 {short *__par0;int __par1;int __dummy_field;};
struct __T25 {short *__par0;int __par1;int __dummy_field;};
struct __T26 {float *__par0;int __par1;int __dummy_field;};
struct __T27 {short *__par0;int __par1;int __dummy_field;};
static void __sti____cudaRegisterAll_42_tmpxft_00005f60_00000000_16_dct8x8_cpp1_ii_TexSrc(void) __attribute__((__constructor__));
void __device_stub__Z14CUDAkernel1DCTPfiii(float *__par0, int __par1, int __par2, int __par3){auto struct __T20 *__T28;
char __[256]; *(char**)&__T28 = __;if (cudaSetupArgument((void*)(char*)&__par0, sizeof(__par0), (size_t)&__T28->__par0 - (size_t)__T28) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par1, sizeof(__par1), (size_t)&__T28->__par1 - (size_t)__T28) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par2, sizeof(__par2), (size_t)&__T28->__par2 - (size_t)__T28) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par3, sizeof(__par3), (size_t)&__T28->__par3 - (size_t)__T28) != cudaSuccess) return;{ volatile static char *__f; __f = ((char *)((void ( *)(float *, int, int, int))CUDAkernel1DCT__entry)); (void)cudaLaunch(((char *)((void ( *)(float *, int, int, int))CUDAkernel1DCT__entry))); };}

}
void CUDAkernel1DCT__entry( float * __cuda_0,int __cuda_1,int __cuda_2,int __cuda_3)
{__device_stub__Z14CUDAkernel1DCTPfiii( __cuda_0, __cuda_1, __cuda_2, __cuda_3);}
extern "C"{

void __device_stub__Z15CUDAkernel1IDCTPfiii(float *__par0, int __par1, int __par2, int __par3){auto struct __T21 *__T29;
char __[256]; *(char**)&__T29 = __;if (cudaSetupArgument((void*)(char*)&__par0, sizeof(__par0), (size_t)&__T29->__par0 - (size_t)__T29) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par1, sizeof(__par1), (size_t)&__T29->__par1 - (size_t)__T29) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par2, sizeof(__par2), (size_t)&__T29->__par2 - (size_t)__T29) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par3, sizeof(__par3), (size_t)&__T29->__par3 - (size_t)__T29) != cudaSuccess) return;{ volatile static char *__f; __f = ((char *)((void ( *)(float *, int, int, int))CUDAkernel1IDCT__entry)); (void)cudaLaunch(((char *)((void ( *)(float *, int, int, int))CUDAkernel1IDCT__entry))); };}

}
void CUDAkernel1IDCT__entry( float * __cuda_0,int __cuda_1,int __cuda_2,int __cuda_3)
{__device_stub__Z15CUDAkernel1IDCTPfiii( __cuda_0, __cuda_1, __cuda_2, __cuda_3);}
extern "C"{

void __device_stub__Z14CUDAkernel2DCTPfi(float *__par0, int __par1){auto struct __T22 *__T210;
char __[256]; *(char**)&__T210 = __;if (cudaSetupArgument((void*)(char*)&__par0, sizeof(__par0), (size_t)&__T210->__par0 - (size_t)__T210) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par1, sizeof(__par1), (size_t)&__T210->__par1 - (size_t)__T210) != cudaSuccess) return;{ volatile static char *__f; __f = ((char *)((void ( *)(float *, int))CUDAkernel2DCT__entry)); (void)cudaLaunch(((char *)((void ( *)(float *, int))CUDAkernel2DCT__entry))); };}

}
void CUDAkernel2DCT__entry( float * __cuda_0,int __cuda_1)
{__device_stub__Z14CUDAkernel2DCTPfi( __cuda_0, __cuda_1);}
extern "C"{

void __device_stub__Z15CUDAkernel2IDCTPfi(float *__par0, int __par1){auto struct __T23 *__T211;
char __[256]; *(char**)&__T211 = __;if (cudaSetupArgument((void*)(char*)&__par0, sizeof(__par0), (size_t)&__T211->__par0 - (size_t)__T211) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par1, sizeof(__par1), (size_t)&__T211->__par1 - (size_t)__T211) != cudaSuccess) return;{ volatile static char *__f; __f = ((char *)((void ( *)(float *, int))CUDAkernel2IDCT__entry)); (void)cudaLaunch(((char *)((void ( *)(float *, int))CUDAkernel2IDCT__entry))); };}

}
void CUDAkernel2IDCT__entry( float * __cuda_0,int __cuda_1)
{__device_stub__Z15CUDAkernel2IDCTPfi( __cuda_0, __cuda_1);}
extern "C"{

void __device_stub__Z18CUDAkernelShortDCTPsi(short *__par0, int __par1){auto struct __T24 *__T236;
char __[256]; *(char**)&__T236 = __;if (cudaSetupArgument((void*)(char*)&__par0, sizeof(__par0), (size_t)&__T236->__par0 - (size_t)__T236) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par1, sizeof(__par1), (size_t)&__T236->__par1 - (size_t)__T236) != cudaSuccess) return;{ volatile static char *__f; __f = ((char *)((void ( *)(short *, int))CUDAkernelShortDCT__entry)); (void)cudaLaunch(((char *)((void ( *)(short *, int))CUDAkernelShortDCT__entry))); };}

}
void CUDAkernelShortDCT__entry( short * __cuda_0,int __cuda_1)
{__device_stub__Z18CUDAkernelShortDCTPsi( __cuda_0, __cuda_1);}
extern "C"{

void __device_stub__Z19CUDAkernelShortIDCTPsi(short *__par0, int __par1){auto struct __T25 *__T237;
char __[256]; *(char**)&__T237 = __;if (cudaSetupArgument((void*)(char*)&__par0, sizeof(__par0), (size_t)&__T237->__par0 - (size_t)__T237) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par1, sizeof(__par1), (size_t)&__T237->__par1 - (size_t)__T237) != cudaSuccess) return;{ volatile static char *__f; __f = ((char *)((void ( *)(short *, int))CUDAkernelShortIDCT__entry)); (void)cudaLaunch(((char *)((void ( *)(short *, int))CUDAkernelShortIDCT__entry))); };}

}
void CUDAkernelShortIDCT__entry( short * __cuda_0,int __cuda_1)
{__device_stub__Z19CUDAkernelShortIDCTPsi( __cuda_0, __cuda_1);}
extern "C"{

void __device_stub__Z27CUDAkernelQuantizationFloatPfi(float *__par0, int __par1){auto struct __T26 *__T238;
char __[256]; *(char**)&__T238 = __;if (cudaSetupArgument((void*)(char*)&__par0, sizeof(__par0), (size_t)&__T238->__par0 - (size_t)__T238) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par1, sizeof(__par1), (size_t)&__T238->__par1 - (size_t)__T238) != cudaSuccess) return;{ volatile static char *__f; __f = ((char *)((void ( *)(float *, int))CUDAkernelQuantizationFloat__entry)); (void)cudaLaunch(((char *)((void ( *)(float *, int))CUDAkernelQuantizationFloat__entry))); };}

}
void CUDAkernelQuantizationFloat__entry( float * __cuda_0,int __cuda_1)
{__device_stub__Z27CUDAkernelQuantizationFloatPfi( __cuda_0, __cuda_1);}
extern "C"{

void __device_stub__Z27CUDAkernelQuantizationShortPsi(short *__par0, int __par1){auto struct __T27 *__T239;
char __[256]; *(char**)&__T239 = __;if (cudaSetupArgument((void*)(char*)&__par0, sizeof(__par0), (size_t)&__T239->__par0 - (size_t)__T239) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par1, sizeof(__par1), (size_t)&__T239->__par1 - (size_t)__T239) != cudaSuccess) return;{ volatile static char *__f; __f = ((char *)((void ( *)(short *, int))CUDAkernelQuantizationShort__entry)); (void)cudaLaunch(((char *)((void ( *)(short *, int))CUDAkernelQuantizationShort__entry))); };}

}
void CUDAkernelQuantizationShort__entry( short * __cuda_0,int __cuda_1)
{__device_stub__Z27CUDAkernelQuantizationShortPsi( __cuda_0, __cuda_1);}
extern "C"{
# 103 "/tmp/tmpxft_00005f60_00000000-1_dct8x8.cudafe1.stub.c"
static void __sti____cudaRegisterAll_42_tmpxft_00005f60_00000000_16_dct8x8_cpp1_ii_TexSrc(void){__cudaFatCubinHandle = __cudaRegisterFatBinary((void*)(&__fatDeviceText)); atexit(__cudaUnregisterBinaryUtil);__cudaRegisterFunction(__cudaFatCubinHandle, (const char*)((void ( *)(short *, int))CUDAkernelQuantizationShort__entry), (char*)"_Z27CUDAkernelQuantizationShortPsi", "_Z27CUDAkernelQuantizationShortPsi", (-1), (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0);__cudaRegisterFunction(__cudaFatCubinHandle, (const char*)((void ( *)(float *, int))CUDAkernelQuantizationFloat__entry), (char*)"_Z27CUDAkernelQuantizationFloatPfi", "_Z27CUDAkernelQuantizationFloatPfi", (-1), (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0);__cudaRegisterFunction(__cudaFatCubinHandle, (const char*)((void ( *)(short *, int))CUDAkernelShortIDCT__entry), (char*)"_Z19CUDAkernelShortIDCTPsi", "_Z19CUDAkernelShortIDCTPsi", (-1), (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0);__cudaRegisterFunction(__cudaFatCubinHandle, (const char*)((void ( *)(short *, int))CUDAkernelShortDCT__entry), (char*)"_Z18CUDAkernelShortDCTPsi", "_Z18CUDAkernelShortDCTPsi", (-1), (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0);__cudaRegisterFunction(__cudaFatCubinHandle, (const char*)((void ( *)(float *, int))CUDAkernel2IDCT__entry), (char*)"_Z15CUDAkernel2IDCTPfi", "_Z15CUDAkernel2IDCTPfi", (-1), (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0);__cudaRegisterFunction(__cudaFatCubinHandle, (const char*)((void ( *)(float *, int))CUDAkernel2DCT__entry), (char*)"_Z14CUDAkernel2DCTPfi", "_Z14CUDAkernel2DCTPfi", (-1), (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0);__cudaRegisterFunction(__cudaFatCubinHandle, (const char*)((void ( *)(float *, int, int, int))CUDAkernel1IDCT__entry), (char*)"_Z15CUDAkernel1IDCTPfiii", "_Z15CUDAkernel1IDCTPfiii", (-1), (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0);__cudaRegisterFunction(__cudaFatCubinHandle, (const char*)((void ( *)(float *, int, int, int))CUDAkernel1DCT__entry), (char*)"_Z14CUDAkernel1DCTPfiii", "_Z14CUDAkernel1DCTPfiii", (-1), (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0);__cudaRegisterTexture(__cudaFatCubinHandle, (const struct textureReference*)&TexSrc, 0, "TexSrc", 2, 0, 0);__cudaRegisterVar(__cudaFatCubinHandle, (char*)&__shadow_DCTv8matrix, (char*)"DCTv8matrix", "DCTv8matrix", 0, 256, 1, 0);__cudaRegisterSharedVar(__cudaFatCubinHandle, (void**)"CurBlockLocal1", 256, 4, 0);__cudaRegisterSharedVar(__cudaFatCubinHandle, (void**)"CurBlockLocal2", 256, 4, 0);__cudaRegisterVar(__cudaFatCubinHandle, (char*)&__shadow_C_a, (char*)"C_a", "C_a", 0, 4, 1, 0);__cudaRegisterVar(__cudaFatCubinHandle, (char*)&__shadow_C_b, (char*)"C_b", "C_b", 0, 4, 1, 0);__cudaRegisterVar(__cudaFatCubinHandle, (char*)&__shadow_C_c, (char*)"C_c", "C_c", 0, 4, 1, 0);__cudaRegisterVar(__cudaFatCubinHandle, (char*)&__shadow_C_d, (char*)"C_d", "C_d", 0, 4, 1, 0);__cudaRegisterVar(__cudaFatCubinHandle, (char*)&__shadow_C_e, (char*)"C_e", "C_e", 0, 4, 1, 0);__cudaRegisterVar(__cudaFatCubinHandle, (char*)&__shadow_C_f, (char*)"C_f", "C_f", 0, 4, 1, 0);__cudaRegisterVar(__cudaFatCubinHandle, (char*)&__shadow_C_norm, (char*)"C_norm", "C_norm", 0, 4, 1, 0);__cudaRegisterVar(__cudaFatCubinHandle, (char*)&__shadow_Q, (char*)"Q", "Q", 0, 128, 1, 0);}

}
# 657 "dct8x8.cu" 2
