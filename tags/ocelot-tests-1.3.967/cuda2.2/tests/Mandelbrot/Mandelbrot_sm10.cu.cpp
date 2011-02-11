# 1 "/tmp/tmpxft_000018e5_00000000-1_Mandelbrot_sm10.cudafe1.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/tmp/tmpxft_000018e5_00000000-1_Mandelbrot_sm10.cudafe1.cpp"
# 1 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
# 46 "/usr/local/cuda/bin/../include/device_types.h"
# 149 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h" 3
typedef long ptrdiff_t;
# 211 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h" 3
typedef unsigned long size_t;
# 1 "/usr/local/cuda/bin/../include/crt/host_runtime.h" 1 3
# 69 "/usr/local/cuda/bin/../include/crt/host_runtime.h" 3
# 1 "/usr/local/cuda/bin/../include/builtin_types.h" 1 3
# 42 "/usr/local/cuda/bin/../include/builtin_types.h" 3
# 1 "/usr/local/cuda/bin/../include/device_types.h" 1 3
# 46 "/usr/local/cuda/bin/../include/device_types.h" 3
enum cudaRoundMode
{
  cudaRoundNearest,
  cudaRoundZero,
  cudaRoundPosInf,
  cudaRoundMinInf
};
# 43 "/usr/local/cuda/bin/../include/builtin_types.h" 2 3
# 1 "/usr/local/cuda/bin/../include/driver_types.h" 1 3
# 96 "/usr/local/cuda/bin/../include/driver_types.h" 3
enum cudaError
{





  cudaSuccess = 0,





  cudaErrorMissingConfiguration = 1,





  cudaErrorMemoryAllocation = 2,





  cudaErrorInitializationError = 3,
# 131 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorLaunchFailure = 4,
# 140 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorPriorLaunchFailure = 5,
# 150 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorLaunchTimeout = 6,
# 159 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorLaunchOutOfResources = 7,





  cudaErrorInvalidDeviceFunction = 8,
# 174 "/usr/local/cuda/bin/../include/driver_types.h" 3
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
# 255 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorAddressOfConstant = 22,
# 264 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorTextureFetchFailed = 23,
# 273 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorTextureNotBound = 24,
# 282 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorSynchronizationError = 25,





  cudaErrorInvalidFilterSetting = 26,





  cudaErrorInvalidNormSetting = 27,







  cudaErrorMixedDeviceExecution = 28,







  cudaErrorCudartUnloading = 29,




  cudaErrorUnknown = 30,





  cudaErrorNotYetImplemented = 31,
# 330 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorMemoryValueTooLarge = 32,






  cudaErrorInvalidResourceHandle = 33,







  cudaErrorNotReady = 34,






  cudaErrorInsufficientDriver = 35,
# 365 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorSetOnActiveProcess = 36,





  cudaErrorInvalidSurface = 37,





  cudaErrorNoDevice = 38,





  cudaErrorECCUncorrectable = 39,




  cudaErrorSharedObjectSymbolNotFound = 40,




  cudaErrorSharedObjectInitFailed = 41,





  cudaErrorUnsupportedLimit = 42,





  cudaErrorDuplicateVariableName = 43,





  cudaErrorDuplicateTextureName = 44,





  cudaErrorDuplicateSurfaceName = 45,
# 426 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorDevicesUnavailable = 46,




  cudaErrorInvalidKernelImage = 47,







  cudaErrorNoKernelImageForDevice = 48,
# 448 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorIncompatibleDriverContext = 49,




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





struct cudaGraphicsResource;





enum cudaGraphicsRegisterFlags
{
  cudaGraphicsRegisterFlagsNone = 0
};





enum cudaGraphicsMapFlags
{
  cudaGraphicsMapFlagsNone = 0,
  cudaGraphicsMapFlagsReadOnly = 1,
  cudaGraphicsMapFlagsWriteDiscard = 2
};





enum cudaGraphicsCubeFace {
  cudaGraphicsCubeFacePositiveX = 0x00,
  cudaGraphicsCubeFaceNegativeX = 0x01,
  cudaGraphicsCubeFacePositiveY = 0x02,
  cudaGraphicsCubeFaceNegativeY = 0x03,
  cudaGraphicsCubeFacePositiveZ = 0x04,
  cudaGraphicsCubeFaceNegativeZ = 0x05
};





struct cudaFuncAttributes
{





   size_t sharedSizeBytes;





   size_t constSizeBytes;




   size_t localSizeBytes;






   int maxThreadsPerBlock;




   int numRegs;






   int ptxVersion;






   int binaryVersion;

   int __cudaReserved[6];
};





enum cudaFuncCache
{
  cudaFuncCachePreferNone = 0,
  cudaFuncCachePreferShared = 1,
  cudaFuncCachePreferL1 = 2
};





enum cudaComputeMode
{
  cudaComputeModeDefault = 0,
  cudaComputeModeExclusive = 1,
  cudaComputeModeProhibited = 2
};





enum cudaLimit
{
    cudaLimitStackSize = 0x00,
    cudaLimitPrintfFifoSize = 0x01,
    cudaLimitMallocHeapSize = 0x02
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
  int maxTexture1D;
  int maxTexture2D[2];
  int maxTexture3D[3];
  int maxTexture2DArray[3];
  size_t surfaceAlignment;
  int concurrentKernels;
  int ECCEnabled;
  int pciBusID;
  int pciDeviceID;
  int tccDriver;
  int __cudaReserved[21];
};
# 768 "/usr/local/cuda/bin/../include/driver_types.h" 3
typedef enum cudaError cudaError_t;





typedef struct CUstream_st *cudaStream_t;





typedef struct CUevent_st *cudaEvent_t;





typedef struct cudaGraphicsResource *cudaGraphicsResource_t;





typedef struct CUuuid_st cudaUUID_t;
# 44 "/usr/local/cuda/bin/../include/builtin_types.h" 2 3
# 1 "/usr/local/cuda/bin/../include/surface_types.h" 1 3
# 63 "/usr/local/cuda/bin/../include/surface_types.h" 3
enum cudaSurfaceBoundaryMode
{
  cudaBoundaryModeZero = 0,
  cudaBoundaryModeClamp = 1,
  cudaBoundaryModeTrap = 2
};





enum cudaSurfaceFormatMode
{
  cudaFormatModeForced = 0,
  cudaFormatModeAuto = 1
};





struct surfaceReference
{



  struct cudaChannelFormatDesc channelDesc;
};
# 45 "/usr/local/cuda/bin/../include/builtin_types.h" 2 3
# 1 "/usr/local/cuda/bin/../include/texture_types.h" 1 3
# 63 "/usr/local/cuda/bin/../include/texture_types.h" 3
enum cudaTextureAddressMode
{
  cudaAddressModeWrap = 0,
  cudaAddressModeClamp = 1,
  cudaAddressModeMirror = 2,
  cudaAddressModeBorder = 3
};





enum cudaTextureFilterMode
{
  cudaFilterModePoint = 0,
  cudaFilterModeLinear = 1
};





enum cudaTextureReadMode
{
  cudaReadModeElementType = 0,
  cudaReadModeNormalizedFloat = 1
};





struct textureReference
{



  int normalized;



  enum cudaTextureFilterMode filterMode;



  enum cudaTextureAddressMode addressMode[3];



  struct cudaChannelFormatDesc channelDesc;
  int __cudaReserved[16];
};
# 46 "/usr/local/cuda/bin/../include/builtin_types.h" 2 3
# 1 "/usr/local/cuda/bin/../include/vector_types.h" 1 3
# 45 "/usr/local/cuda/bin/../include/vector_types.h" 3
# 1 "/usr/local/cuda/bin/../include/builtin_types.h" 1 3
# 46 "/usr/local/cuda/bin/../include/builtin_types.h" 3
# 1 "/usr/local/cuda/bin/../include/vector_types.h" 1 3
# 46 "/usr/local/cuda/bin/../include/builtin_types.h" 2 3
# 46 "/usr/local/cuda/bin/../include/vector_types.h" 2 3
# 1 "/usr/local/cuda/bin/../include/host_defines.h" 1 3
# 47 "/usr/local/cuda/bin/../include/vector_types.h" 2 3
# 75 "/usr/local/cuda/bin/../include/vector_types.h" 3
struct char1
{
  signed char x;
};


struct uchar1
{
  unsigned char x;
};


struct __attribute__((aligned(2))) char2
{
  signed char x, y;
};


struct __attribute__((aligned(2))) uchar2
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


struct __attribute__((aligned(4))) char4
{
  signed char x, y, z, w;
};


struct __attribute__((aligned(4))) uchar4
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


struct __attribute__((aligned(4))) short2
{
  short x, y;
};


struct __attribute__((aligned(4))) ushort2
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


struct __attribute__((aligned(8))) short4 { short x; short y; short z; short w; };


struct __attribute__((aligned(8))) ushort4 { unsigned short x; unsigned short y; unsigned short z; unsigned short w; };


struct int1
{
  int x;
};


struct uint1
{
  unsigned int x;
};


struct __attribute__((aligned(8))) int2 { int x; int y; };


struct __attribute__((aligned(8))) uint2 { unsigned int x; unsigned int y; };


struct int3
{
  int x, y, z;
};


struct uint3
{
  unsigned int x, y, z;
};


struct __attribute__((aligned(16))) int4
{
  int x, y, z, w;
};


struct __attribute__((aligned(16))) uint4
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
# 229 "/usr/local/cuda/bin/../include/vector_types.h" 3
struct __attribute__((aligned(2*sizeof(long int)))) long2
{
  long int x, y;
};


struct __attribute__((aligned(2*sizeof(unsigned long int)))) ulong2
{
  unsigned long int x, y;
};




struct long3
{
  long int x, y, z;
};


struct ulong3
{
  unsigned long int x, y, z;
};


struct __attribute__((aligned(16))) long4
{
  long int x, y, z, w;
};


struct __attribute__((aligned(16))) ulong4
{
  unsigned long int x, y, z, w;
};


struct float1
{
  float x;
};


struct __attribute__((aligned(8))) float2 { float x; float y; };


struct float3
{
  float x, y, z;
};


struct __attribute__((aligned(16))) float4
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


struct __attribute__((aligned(16))) longlong2
{
  long long int x, y;
};


struct __attribute__((aligned(16))) ulonglong2
{
  unsigned long long int x, y;
};


struct longlong3
{
  long long int x, y, z;
};


struct ulonglong3
{
  unsigned long long int x, y, z;
};


struct __attribute__((aligned(16))) longlong4
{
  long long int x, y, z ,w;
};


struct __attribute__((aligned(16))) ulonglong4
{
  unsigned long long int x, y, z, w;
};


struct double1
{
  double x;
};


struct __attribute__((aligned(16))) double2
{
  double x, y;
};


struct double3
{
  double x, y, z;
};


struct __attribute__((aligned(16))) double4
{
  double x, y, z, w;
};
# 366 "/usr/local/cuda/bin/../include/vector_types.h" 3
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

typedef struct longlong3 longlong3;

typedef struct ulonglong3 ulonglong3;

typedef struct longlong4 longlong4;

typedef struct ulonglong4 ulonglong4;

typedef struct double1 double1;

typedef struct double2 double2;

typedef struct double3 double3;

typedef struct double4 double4;
# 469 "/usr/local/cuda/bin/../include/vector_types.h" 3
struct dim3
{
    unsigned int x, y, z;

    dim3(unsigned int vx = 1, unsigned int vy = 1, unsigned int vz = 1) : x(vx), y(vy), z(vz) {}
    dim3(uint3 v) : x(v.x), y(v.y), z(v.z) {}
    operator uint3(void) { uint3 t; t.x = x; t.y = y; t.z = z; return t; }

};


typedef struct dim3 dim3;
# 46 "/usr/local/cuda/bin/../include/builtin_types.h" 2 3
# 70 "/usr/local/cuda/bin/../include/crt/host_runtime.h" 2 3
# 1 "/usr/local/cuda/bin/../include/crt/storage_class.h" 1 3
# 71 "/usr/local/cuda/bin/../include/crt/host_runtime.h" 2 3
# 213 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h" 2 3
# 96 "/usr/local/cuda/bin/../include/driver_types.h"
# 466 "/usr/local/cuda/bin/../include/driver_types.h"
# 478 "/usr/local/cuda/bin/../include/driver_types.h"
# 491 "/usr/local/cuda/bin/../include/driver_types.h"
# 497 "/usr/local/cuda/bin/../include/driver_types.h"
# 510 "/usr/local/cuda/bin/../include/driver_types.h"
# 523 "/usr/local/cuda/bin/../include/driver_types.h"
# 535 "/usr/local/cuda/bin/../include/driver_types.h"
# 546 "/usr/local/cuda/bin/../include/driver_types.h"
# 564 "/usr/local/cuda/bin/../include/driver_types.h"
# 570 "/usr/local/cuda/bin/../include/driver_types.h"
# 579 "/usr/local/cuda/bin/../include/driver_types.h"
# 590 "/usr/local/cuda/bin/../include/driver_types.h"
# 603 "/usr/local/cuda/bin/../include/driver_types.h"
# 656 "/usr/local/cuda/bin/../include/driver_types.h"
# 667 "/usr/local/cuda/bin/../include/driver_types.h"
# 678 "/usr/local/cuda/bin/../include/driver_types.h"
# 689 "/usr/local/cuda/bin/../include/driver_types.h"
# 768 "/usr/local/cuda/bin/../include/driver_types.h"
# 774 "/usr/local/cuda/bin/../include/driver_types.h"
# 780 "/usr/local/cuda/bin/../include/driver_types.h"
# 786 "/usr/local/cuda/bin/../include/driver_types.h"
# 792 "/usr/local/cuda/bin/../include/driver_types.h"
# 63 "/usr/local/cuda/bin/../include/surface_types.h"
# 74 "/usr/local/cuda/bin/../include/surface_types.h"
# 84 "/usr/local/cuda/bin/../include/surface_types.h"
# 63 "/usr/local/cuda/bin/../include/texture_types.h"
# 75 "/usr/local/cuda/bin/../include/texture_types.h"
# 85 "/usr/local/cuda/bin/../include/texture_types.h"
# 95 "/usr/local/cuda/bin/../include/texture_types.h"
# 75 "/usr/local/cuda/bin/../include/vector_types.h"
# 81 "/usr/local/cuda/bin/../include/vector_types.h"
# 87 "/usr/local/cuda/bin/../include/vector_types.h"
# 93 "/usr/local/cuda/bin/../include/vector_types.h"
# 99 "/usr/local/cuda/bin/../include/vector_types.h"
# 105 "/usr/local/cuda/bin/../include/vector_types.h"
# 111 "/usr/local/cuda/bin/../include/vector_types.h"
# 117 "/usr/local/cuda/bin/../include/vector_types.h"
# 123 "/usr/local/cuda/bin/../include/vector_types.h"
# 129 "/usr/local/cuda/bin/../include/vector_types.h"
# 135 "/usr/local/cuda/bin/../include/vector_types.h"
# 141 "/usr/local/cuda/bin/../include/vector_types.h"
# 147 "/usr/local/cuda/bin/../include/vector_types.h"
# 153 "/usr/local/cuda/bin/../include/vector_types.h"
# 159 "/usr/local/cuda/bin/../include/vector_types.h"
# 162 "/usr/local/cuda/bin/../include/vector_types.h"
# 165 "/usr/local/cuda/bin/../include/vector_types.h"
# 171 "/usr/local/cuda/bin/../include/vector_types.h"
# 177 "/usr/local/cuda/bin/../include/vector_types.h"
# 180 "/usr/local/cuda/bin/../include/vector_types.h"
# 183 "/usr/local/cuda/bin/../include/vector_types.h"
# 189 "/usr/local/cuda/bin/../include/vector_types.h"
# 195 "/usr/local/cuda/bin/../include/vector_types.h"
# 201 "/usr/local/cuda/bin/../include/vector_types.h"
# 207 "/usr/local/cuda/bin/../include/vector_types.h"
# 213 "/usr/local/cuda/bin/../include/vector_types.h"
# 229 "/usr/local/cuda/bin/../include/vector_types.h"
# 235 "/usr/local/cuda/bin/../include/vector_types.h"
# 243 "/usr/local/cuda/bin/../include/vector_types.h"
# 249 "/usr/local/cuda/bin/../include/vector_types.h"
# 255 "/usr/local/cuda/bin/../include/vector_types.h"
# 261 "/usr/local/cuda/bin/../include/vector_types.h"
# 267 "/usr/local/cuda/bin/../include/vector_types.h"
# 273 "/usr/local/cuda/bin/../include/vector_types.h"
# 276 "/usr/local/cuda/bin/../include/vector_types.h"
# 282 "/usr/local/cuda/bin/../include/vector_types.h"
# 288 "/usr/local/cuda/bin/../include/vector_types.h"
# 294 "/usr/local/cuda/bin/../include/vector_types.h"
# 300 "/usr/local/cuda/bin/../include/vector_types.h"
# 306 "/usr/local/cuda/bin/../include/vector_types.h"
# 312 "/usr/local/cuda/bin/../include/vector_types.h"
# 318 "/usr/local/cuda/bin/../include/vector_types.h"
# 324 "/usr/local/cuda/bin/../include/vector_types.h"
# 330 "/usr/local/cuda/bin/../include/vector_types.h"
# 336 "/usr/local/cuda/bin/../include/vector_types.h"
# 342 "/usr/local/cuda/bin/../include/vector_types.h"
# 348 "/usr/local/cuda/bin/../include/vector_types.h"
# 354 "/usr/local/cuda/bin/../include/vector_types.h"
# 366 "/usr/local/cuda/bin/../include/vector_types.h"
# 368 "/usr/local/cuda/bin/../include/vector_types.h"
# 370 "/usr/local/cuda/bin/../include/vector_types.h"
# 372 "/usr/local/cuda/bin/../include/vector_types.h"
# 374 "/usr/local/cuda/bin/../include/vector_types.h"
# 376 "/usr/local/cuda/bin/../include/vector_types.h"
# 378 "/usr/local/cuda/bin/../include/vector_types.h"
# 380 "/usr/local/cuda/bin/../include/vector_types.h"
# 382 "/usr/local/cuda/bin/../include/vector_types.h"
# 384 "/usr/local/cuda/bin/../include/vector_types.h"
# 386 "/usr/local/cuda/bin/../include/vector_types.h"
# 388 "/usr/local/cuda/bin/../include/vector_types.h"
# 390 "/usr/local/cuda/bin/../include/vector_types.h"
# 392 "/usr/local/cuda/bin/../include/vector_types.h"
# 394 "/usr/local/cuda/bin/../include/vector_types.h"
# 396 "/usr/local/cuda/bin/../include/vector_types.h"
# 398 "/usr/local/cuda/bin/../include/vector_types.h"
# 400 "/usr/local/cuda/bin/../include/vector_types.h"
# 402 "/usr/local/cuda/bin/../include/vector_types.h"
# 404 "/usr/local/cuda/bin/../include/vector_types.h"
# 406 "/usr/local/cuda/bin/../include/vector_types.h"
# 408 "/usr/local/cuda/bin/../include/vector_types.h"
# 410 "/usr/local/cuda/bin/../include/vector_types.h"
# 412 "/usr/local/cuda/bin/../include/vector_types.h"
# 414 "/usr/local/cuda/bin/../include/vector_types.h"
# 416 "/usr/local/cuda/bin/../include/vector_types.h"
# 418 "/usr/local/cuda/bin/../include/vector_types.h"
# 420 "/usr/local/cuda/bin/../include/vector_types.h"
# 422 "/usr/local/cuda/bin/../include/vector_types.h"
# 424 "/usr/local/cuda/bin/../include/vector_types.h"
# 426 "/usr/local/cuda/bin/../include/vector_types.h"
# 428 "/usr/local/cuda/bin/../include/vector_types.h"
# 430 "/usr/local/cuda/bin/../include/vector_types.h"
# 432 "/usr/local/cuda/bin/../include/vector_types.h"
# 434 "/usr/local/cuda/bin/../include/vector_types.h"
# 436 "/usr/local/cuda/bin/../include/vector_types.h"
# 438 "/usr/local/cuda/bin/../include/vector_types.h"
# 440 "/usr/local/cuda/bin/../include/vector_types.h"
# 442 "/usr/local/cuda/bin/../include/vector_types.h"
# 444 "/usr/local/cuda/bin/../include/vector_types.h"
# 446 "/usr/local/cuda/bin/../include/vector_types.h"
# 448 "/usr/local/cuda/bin/../include/vector_types.h"
# 450 "/usr/local/cuda/bin/../include/vector_types.h"
# 452 "/usr/local/cuda/bin/../include/vector_types.h"
# 454 "/usr/local/cuda/bin/../include/vector_types.h"
# 456 "/usr/local/cuda/bin/../include/vector_types.h"
# 458 "/usr/local/cuda/bin/../include/vector_types.h"
# 460 "/usr/local/cuda/bin/../include/vector_types.h"
# 469 "/usr/local/cuda/bin/../include/vector_types.h"
# 480 "/usr/local/cuda/bin/../include/vector_types.h"
# 115 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadExit();
# 131 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadSynchronize();
# 183 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadSetLimit(cudaLimit, size_t);
# 207 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadGetLimit(size_t *, cudaLimit);
# 237 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadGetCacheConfig(cudaFuncCache *);
# 278 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadSetCacheConfig(cudaFuncCache);
# 330 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetLastError();
# 373 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaPeekAtLastError();
# 387 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" const char *cudaGetErrorString(cudaError_t);
# 418 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetDeviceCount(int *);
# 536 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetDeviceProperties(cudaDeviceProp *, int);
# 555 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaChooseDevice(int *, const cudaDeviceProp *);
# 579 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetDevice(int);
# 597 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetDevice(int *);
# 626 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetValidDevices(int *, int);
# 677 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetDeviceFlags(unsigned);
# 703 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamCreate(cudaStream_t *);
# 719 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamDestroy(cudaStream_t);
# 753 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamWaitEvent(cudaStream_t, cudaEvent_t, unsigned);
# 771 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamSynchronize(cudaStream_t);
# 789 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamQuery(cudaStream_t);
# 821 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventCreate(cudaEvent_t *);
# 852 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventCreateWithFlags(cudaEvent_t *, unsigned);
# 885 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventRecord(cudaEvent_t, cudaStream_t = 0);
# 914 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventQuery(cudaEvent_t);
# 946 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventSynchronize(cudaEvent_t);
# 966 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventDestroy(cudaEvent_t);
# 1007 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventElapsedTime(float *, cudaEvent_t, cudaEvent_t);
# 1046 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaConfigureCall(dim3, dim3, size_t = (0), cudaStream_t = 0);
# 1073 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetupArgument(const void *, size_t, size_t);
# 1119 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaFuncSetCacheConfig(const char *, cudaFuncCache);
# 1154 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaLaunch(const char *);
# 1187 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaFuncGetAttributes(cudaFuncAttributes *, const char *);
# 1209 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetDoubleForDevice(double *);
# 1231 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetDoubleForHost(double *);
# 1263 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMalloc(void **, size_t);
# 1292 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMallocHost(void **, size_t);
# 1331 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMallocPitch(void **, size_t *, size_t, size_t);
# 1370 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMallocArray(cudaArray **, const cudaChannelFormatDesc *, size_t, size_t = (0), unsigned = (0));
# 1394 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaFree(void *);
# 1414 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaFreeHost(void *);
# 1436 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaFreeArray(cudaArray *);
# 1495 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaHostAlloc(void **, size_t, unsigned);
# 1522 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaHostGetDevicePointer(void **, void *, unsigned);
# 1541 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaHostGetFlags(unsigned *, void *);
# 1576 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMalloc3D(cudaPitchedPtr *, cudaExtent);
# 1626 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMalloc3DArray(cudaArray **, const cudaChannelFormatDesc *, cudaExtent, unsigned = (0));
# 1723 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy3D(const cudaMemcpy3DParms *);
# 1828 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy3DAsync(const cudaMemcpy3DParms *, cudaStream_t = 0);
# 1847 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemGetInfo(size_t *, size_t *);
# 1880 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy(void *, const void *, size_t, cudaMemcpyKind);
# 1913 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyToArray(cudaArray *, size_t, size_t, const void *, size_t, cudaMemcpyKind);
# 1946 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyFromArray(void *, const cudaArray *, size_t, size_t, size_t, cudaMemcpyKind);
# 1981 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyArrayToArray(cudaArray *, size_t, size_t, const cudaArray *, size_t, size_t, size_t, cudaMemcpyKind = cudaMemcpyDeviceToDevice);
# 2023 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2D(void *, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind);
# 2064 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DToArray(cudaArray *, size_t, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind);
# 2105 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DFromArray(void *, size_t, const cudaArray *, size_t, size_t, size_t, size_t, cudaMemcpyKind);
# 2144 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DArrayToArray(cudaArray *, size_t, size_t, const cudaArray *, size_t, size_t, size_t, size_t, cudaMemcpyKind = cudaMemcpyDeviceToDevice);
# 2179 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyToSymbol(const char *, const void *, size_t, size_t = (0), cudaMemcpyKind = cudaMemcpyHostToDevice);
# 2213 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyFromSymbol(void *, const char *, size_t, size_t = (0), cudaMemcpyKind = cudaMemcpyDeviceToHost);
# 2256 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyAsync(void *, const void *, size_t, cudaMemcpyKind, cudaStream_t = 0);
# 2298 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyToArrayAsync(cudaArray *, size_t, size_t, const void *, size_t, cudaMemcpyKind, cudaStream_t = 0);
# 2340 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyFromArrayAsync(void *, const cudaArray *, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t = 0);
# 2391 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DAsync(void *, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t = 0);
# 2441 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DToArrayAsync(cudaArray *, size_t, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t = 0);
# 2491 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DFromArrayAsync(void *, size_t, const cudaArray *, size_t, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t = 0);
# 2535 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyToSymbolAsync(const char *, const void *, size_t, size_t, cudaMemcpyKind, cudaStream_t = 0);
# 2578 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyFromSymbolAsync(void *, const char *, size_t, size_t, cudaMemcpyKind, cudaStream_t = 0);
# 2600 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset(void *, int, size_t);
# 2626 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset2D(void *, size_t, int, size_t, size_t);
# 2665 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset3D(cudaPitchedPtr, int, cudaExtent);
# 2692 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemsetAsync(void *, int, size_t, cudaStream_t = 0);
# 2724 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset2DAsync(void *, size_t, int, size_t, size_t, cudaStream_t = 0);
# 2769 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset3DAsync(cudaPitchedPtr, int, cudaExtent, cudaStream_t = 0);
# 2796 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetSymbolAddress(void **, const char *);
# 2819 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetSymbolSize(size_t *, const char *);
# 2865 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsUnregisterResource(cudaGraphicsResource_t);
# 2897 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsResourceSetMapFlags(cudaGraphicsResource_t, unsigned);
# 2932 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsMapResources(int, cudaGraphicsResource_t *, cudaStream_t = 0);
# 2963 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsUnmapResources(int, cudaGraphicsResource_t *, cudaStream_t = 0);
# 2992 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsResourceGetMappedPointer(void **, size_t *, cudaGraphicsResource_t);
# 3026 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsSubResourceGetMappedArray(cudaArray **, cudaGraphicsResource_t, unsigned, unsigned);
# 3059 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetChannelDesc(cudaChannelFormatDesc *, const cudaArray *);
# 3094 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaChannelFormatDesc cudaCreateChannelDesc(int, int, int, int, cudaChannelFormatKind);
# 3136 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaBindTexture(size_t *, const textureReference *, const void *, const cudaChannelFormatDesc *, size_t = (((2147483647) * 2U) + 1U));
# 3179 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaBindTexture2D(size_t *, const textureReference *, const void *, const cudaChannelFormatDesc *, size_t, size_t, size_t);
# 3207 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaBindTextureToArray(const textureReference *, const cudaArray *, const cudaChannelFormatDesc *);
# 3228 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaUnbindTexture(const textureReference *);
# 3253 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetTextureAlignmentOffset(size_t *, const textureReference *);
# 3277 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetTextureReference(const textureReference **, const char *);
# 3310 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaBindSurfaceToArray(const surfaceReference *, const cudaArray *, const cudaChannelFormatDesc *);
# 3328 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetSurfaceReference(const surfaceReference **, const char *);
# 3355 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaDriverGetVersion(int *);
# 3372 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaRuntimeGetVersion(int *);
# 3377 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetExportTable(const void **, const cudaUUID_t *);
# 93 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template< class T> inline cudaChannelFormatDesc cudaCreateChannelDesc()
# 94 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 95 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(0, 0, 0, 0, cudaChannelFormatKindNone);
# 96 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 98 "/usr/local/cuda/bin/../include/channel_descriptor.h"
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf()
# 99 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 100 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 102 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat);
# 103 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 105 "/usr/local/cuda/bin/../include/channel_descriptor.h"
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf1()
# 106 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 107 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 109 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat);
# 110 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 112 "/usr/local/cuda/bin/../include/channel_descriptor.h"
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf2()
# 113 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 114 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 116 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindFloat);
# 117 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 119 "/usr/local/cuda/bin/../include/channel_descriptor.h"
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf4()
# 120 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 121 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 123 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindFloat);
# 124 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 126 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char> ()
# 127 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 128 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(char)) * 8);
# 133 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 135 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 137 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< signed char> ()
# 138 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 139 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(signed char)) * 8);
# 141 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 142 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 144 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned char> ()
# 145 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 146 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned char)) * 8);
# 148 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 149 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 151 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char1> ()
# 152 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 153 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(signed char)) * 8);
# 155 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 156 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 158 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar1> ()
# 159 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 160 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned char)) * 8);
# 162 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 163 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 165 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char2> ()
# 166 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 167 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(signed char)) * 8);
# 169 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned);
# 170 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 172 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar2> ()
# 173 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 174 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned char)) * 8);
# 176 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned);
# 177 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 179 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char4> ()
# 180 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 181 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(signed char)) * 8);
# 183 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned);
# 184 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 186 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar4> ()
# 187 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 188 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned char)) * 8);
# 190 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned);
# 191 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 193 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short> ()
# 194 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 195 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(short)) * 8);
# 197 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 198 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 200 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned short> ()
# 201 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 202 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 204 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 205 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 207 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short1> ()
# 208 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 209 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(short)) * 8);
# 211 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 212 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 214 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort1> ()
# 215 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 216 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 218 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 219 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 221 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short2> ()
# 222 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 223 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(short)) * 8);
# 225 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned);
# 226 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 228 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort2> ()
# 229 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 230 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 232 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned);
# 233 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 235 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short4> ()
# 236 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 237 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(short)) * 8);
# 239 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned);
# 240 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 242 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort4> ()
# 243 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 244 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 246 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned);
# 247 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 249 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int> ()
# 250 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 251 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(int)) * 8);
# 253 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 254 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 256 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned> ()
# 257 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 258 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned)) * 8);
# 260 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 261 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 263 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int1> ()
# 264 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 265 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(int)) * 8);
# 267 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 268 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 270 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint1> ()
# 271 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 272 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned)) * 8);
# 274 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 275 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 277 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int2> ()
# 278 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 279 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(int)) * 8);
# 281 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned);
# 282 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 284 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint2> ()
# 285 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 286 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned)) * 8);
# 288 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned);
# 289 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 291 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int4> ()
# 292 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 293 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(int)) * 8);
# 295 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned);
# 296 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 298 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint4> ()
# 299 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 300 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned)) * 8);
# 302 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned);
# 303 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 365 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float> ()
# 366 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 367 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(float)) * 8);
# 369 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat);
# 370 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 372 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float1> ()
# 373 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 374 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(float)) * 8);
# 376 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat);
# 377 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 379 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float2> ()
# 380 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 381 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(float)) * 8);
# 383 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindFloat);
# 384 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 386 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float4> ()
# 387 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 388 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(float)) * 8);
# 390 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindFloat);
# 391 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 65 "/usr/local/cuda/bin/../include/driver_functions.h"
static inline cudaPitchedPtr make_cudaPitchedPtr(void *d, size_t p, size_t xsz, size_t ysz)
# 66 "/usr/local/cuda/bin/../include/driver_functions.h"
{
# 67 "/usr/local/cuda/bin/../include/driver_functions.h"
cudaPitchedPtr s;
# 69 "/usr/local/cuda/bin/../include/driver_functions.h"
(s.ptr) = d;
# 70 "/usr/local/cuda/bin/../include/driver_functions.h"
(s.pitch) = p;
# 71 "/usr/local/cuda/bin/../include/driver_functions.h"
(s.xsize) = xsz;
# 72 "/usr/local/cuda/bin/../include/driver_functions.h"
(s.ysize) = ysz;
# 74 "/usr/local/cuda/bin/../include/driver_functions.h"
return s;
# 75 "/usr/local/cuda/bin/../include/driver_functions.h"
}
# 92 "/usr/local/cuda/bin/../include/driver_functions.h"
static inline cudaPos make_cudaPos(size_t x, size_t y, size_t z)
# 93 "/usr/local/cuda/bin/../include/driver_functions.h"
{
# 94 "/usr/local/cuda/bin/../include/driver_functions.h"
cudaPos p;
# 96 "/usr/local/cuda/bin/../include/driver_functions.h"
(p.x) = x;
# 97 "/usr/local/cuda/bin/../include/driver_functions.h"
(p.y) = y;
# 98 "/usr/local/cuda/bin/../include/driver_functions.h"
(p.z) = z;
# 100 "/usr/local/cuda/bin/../include/driver_functions.h"
return p;
# 101 "/usr/local/cuda/bin/../include/driver_functions.h"
}
# 118 "/usr/local/cuda/bin/../include/driver_functions.h"
static inline cudaExtent make_cudaExtent(size_t w, size_t h, size_t d)
# 119 "/usr/local/cuda/bin/../include/driver_functions.h"
{
# 120 "/usr/local/cuda/bin/../include/driver_functions.h"
cudaExtent e;
# 122 "/usr/local/cuda/bin/../include/driver_functions.h"
(e.width) = w;
# 123 "/usr/local/cuda/bin/../include/driver_functions.h"
(e.height) = h;
# 124 "/usr/local/cuda/bin/../include/driver_functions.h"
(e.depth) = d;
# 126 "/usr/local/cuda/bin/../include/driver_functions.h"
return e;
# 127 "/usr/local/cuda/bin/../include/driver_functions.h"
}
# 55 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline char1 make_char1(signed char x)
# 56 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 57 "/usr/local/cuda/bin/../include/vector_functions.h"
char1 t; (t.x) = x; return t;
# 58 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 60 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline uchar1 make_uchar1(unsigned char x)
# 61 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 62 "/usr/local/cuda/bin/../include/vector_functions.h"
uchar1 t; (t.x) = x; return t;
# 63 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 65 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline char2 make_char2(signed char x, signed char y)
# 66 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 67 "/usr/local/cuda/bin/../include/vector_functions.h"
char2 t; (t.x) = x; (t.y) = y; return t;
# 68 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 70 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline uchar2 make_uchar2(unsigned char x, unsigned char y)
# 71 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 72 "/usr/local/cuda/bin/../include/vector_functions.h"
uchar2 t; (t.x) = x; (t.y) = y; return t;
# 73 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 75 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline char3 make_char3(signed char x, signed char y, signed char z)
# 76 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 77 "/usr/local/cuda/bin/../include/vector_functions.h"
char3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 78 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 80 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline uchar3 make_uchar3(unsigned char x, unsigned char y, unsigned char z)
# 81 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 82 "/usr/local/cuda/bin/../include/vector_functions.h"
uchar3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 83 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 85 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline char4 make_char4(signed char x, signed char y, signed char z, signed char w)
# 86 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 87 "/usr/local/cuda/bin/../include/vector_functions.h"
char4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 88 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 90 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline uchar4 make_uchar4(unsigned char x, unsigned char y, unsigned char z, unsigned char w)
# 91 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 92 "/usr/local/cuda/bin/../include/vector_functions.h"
uchar4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 93 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 95 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline short1 make_short1(short x)
# 96 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 97 "/usr/local/cuda/bin/../include/vector_functions.h"
short1 t; (t.x) = x; return t;
# 98 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 100 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ushort1 make_ushort1(unsigned short x)
# 101 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 102 "/usr/local/cuda/bin/../include/vector_functions.h"
ushort1 t; (t.x) = x; return t;
# 103 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 105 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline short2 make_short2(short x, short y)
# 106 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 107 "/usr/local/cuda/bin/../include/vector_functions.h"
short2 t; (t.x) = x; (t.y) = y; return t;
# 108 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 110 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ushort2 make_ushort2(unsigned short x, unsigned short y)
# 111 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 112 "/usr/local/cuda/bin/../include/vector_functions.h"
ushort2 t; (t.x) = x; (t.y) = y; return t;
# 113 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 115 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline short3 make_short3(short x, short y, short z)
# 116 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 117 "/usr/local/cuda/bin/../include/vector_functions.h"
short3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 118 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 120 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ushort3 make_ushort3(unsigned short x, unsigned short y, unsigned short z)
# 121 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 122 "/usr/local/cuda/bin/../include/vector_functions.h"
ushort3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 123 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 125 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline short4 make_short4(short x, short y, short z, short w)
# 126 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 127 "/usr/local/cuda/bin/../include/vector_functions.h"
short4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 128 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 130 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ushort4 make_ushort4(unsigned short x, unsigned short y, unsigned short z, unsigned short w)
# 131 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 132 "/usr/local/cuda/bin/../include/vector_functions.h"
ushort4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 133 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 135 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline int1 make_int1(int x)
# 136 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 137 "/usr/local/cuda/bin/../include/vector_functions.h"
int1 t; (t.x) = x; return t;
# 138 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 140 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline uint1 make_uint1(unsigned x)
# 141 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 142 "/usr/local/cuda/bin/../include/vector_functions.h"
uint1 t; (t.x) = x; return t;
# 143 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 145 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline int2 make_int2(int x, int y)
# 146 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 147 "/usr/local/cuda/bin/../include/vector_functions.h"
int2 t; (t.x) = x; (t.y) = y; return t;
# 148 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 150 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline uint2 make_uint2(unsigned x, unsigned y)
# 151 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 152 "/usr/local/cuda/bin/../include/vector_functions.h"
uint2 t; (t.x) = x; (t.y) = y; return t;
# 153 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 155 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline int3 make_int3(int x, int y, int z)
# 156 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 157 "/usr/local/cuda/bin/../include/vector_functions.h"
int3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 158 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 160 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline uint3 make_uint3(unsigned x, unsigned y, unsigned z)
# 161 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 162 "/usr/local/cuda/bin/../include/vector_functions.h"
uint3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 163 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 165 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline int4 make_int4(int x, int y, int z, int w)
# 166 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 167 "/usr/local/cuda/bin/../include/vector_functions.h"
int4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 168 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 170 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline uint4 make_uint4(unsigned x, unsigned y, unsigned z, unsigned w)
# 171 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 172 "/usr/local/cuda/bin/../include/vector_functions.h"
uint4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 173 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 175 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline long1 make_long1(long x)
# 176 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 177 "/usr/local/cuda/bin/../include/vector_functions.h"
long1 t; (t.x) = x; return t;
# 178 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 180 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ulong1 make_ulong1(unsigned long x)
# 181 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 182 "/usr/local/cuda/bin/../include/vector_functions.h"
ulong1 t; (t.x) = x; return t;
# 183 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 185 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline long2 make_long2(long x, long y)
# 186 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 187 "/usr/local/cuda/bin/../include/vector_functions.h"
long2 t; (t.x) = x; (t.y) = y; return t;
# 188 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 190 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ulong2 make_ulong2(unsigned long x, unsigned long y)
# 191 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 192 "/usr/local/cuda/bin/../include/vector_functions.h"
ulong2 t; (t.x) = x; (t.y) = y; return t;
# 193 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 195 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline long3 make_long3(long x, long y, long z)
# 196 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 197 "/usr/local/cuda/bin/../include/vector_functions.h"
long3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 198 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 200 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ulong3 make_ulong3(unsigned long x, unsigned long y, unsigned long z)
# 201 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 202 "/usr/local/cuda/bin/../include/vector_functions.h"
ulong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 203 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 205 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline long4 make_long4(long x, long y, long z, long w)
# 206 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 207 "/usr/local/cuda/bin/../include/vector_functions.h"
long4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 208 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 210 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ulong4 make_ulong4(unsigned long x, unsigned long y, unsigned long z, unsigned long w)
# 211 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 212 "/usr/local/cuda/bin/../include/vector_functions.h"
ulong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 213 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 215 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline float1 make_float1(float x)
# 216 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 217 "/usr/local/cuda/bin/../include/vector_functions.h"
float1 t; (t.x) = x; return t;
# 218 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 220 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline float2 make_float2(float x, float y)
# 221 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 222 "/usr/local/cuda/bin/../include/vector_functions.h"
float2 t; (t.x) = x; (t.y) = y; return t;
# 223 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 225 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline float3 make_float3(float x, float y, float z)
# 226 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 227 "/usr/local/cuda/bin/../include/vector_functions.h"
float3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 228 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 230 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline float4 make_float4(float x, float y, float z, float w)
# 231 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 232 "/usr/local/cuda/bin/../include/vector_functions.h"
float4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 233 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 235 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline longlong1 make_longlong1(long long x)
# 236 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 237 "/usr/local/cuda/bin/../include/vector_functions.h"
longlong1 t; (t.x) = x; return t;
# 238 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 240 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ulonglong1 make_ulonglong1(unsigned long long x)
# 241 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 242 "/usr/local/cuda/bin/../include/vector_functions.h"
ulonglong1 t; (t.x) = x; return t;
# 243 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 245 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline longlong2 make_longlong2(long long x, long long y)
# 246 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 247 "/usr/local/cuda/bin/../include/vector_functions.h"
longlong2 t; (t.x) = x; (t.y) = y; return t;
# 248 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 250 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ulonglong2 make_ulonglong2(unsigned long long x, unsigned long long y)
# 251 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 252 "/usr/local/cuda/bin/../include/vector_functions.h"
ulonglong2 t; (t.x) = x; (t.y) = y; return t;
# 253 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 255 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline longlong3 make_longlong3(long long x, long long y, long long z)
# 256 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 257 "/usr/local/cuda/bin/../include/vector_functions.h"
longlong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 258 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 260 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ulonglong3 make_ulonglong3(unsigned long long x, unsigned long long y, unsigned long long z)
# 261 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 262 "/usr/local/cuda/bin/../include/vector_functions.h"
ulonglong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 263 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 265 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline longlong4 make_longlong4(long long x, long long y, long long z, long long w)
# 266 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 267 "/usr/local/cuda/bin/../include/vector_functions.h"
longlong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 268 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 270 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ulonglong4 make_ulonglong4(unsigned long long x, unsigned long long y, unsigned long long z, unsigned long long w)
# 271 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 272 "/usr/local/cuda/bin/../include/vector_functions.h"
ulonglong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 273 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 275 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline double1 make_double1(double x)
# 276 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 277 "/usr/local/cuda/bin/../include/vector_functions.h"
double1 t; (t.x) = x; return t;
# 278 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 280 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline double2 make_double2(double x, double y)
# 281 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 282 "/usr/local/cuda/bin/../include/vector_functions.h"
double2 t; (t.x) = x; (t.y) = y; return t;
# 283 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 285 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline double3 make_double3(double x, double y, double z)
# 286 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 287 "/usr/local/cuda/bin/../include/vector_functions.h"
double3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 288 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 290 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline double4 make_double4(double x, double y, double z, double w)
# 291 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 292 "/usr/local/cuda/bin/../include/vector_functions.h"
double4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 293 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 44 "/usr/include/string.h" 3
extern "C" __attribute__((weak)) void *memcpy(void *__restrict__, const void *__restrict__, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 49 "/usr/include/string.h" 3
extern "C" void *memmove(void *, const void *, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 57 "/usr/include/string.h" 3
extern "C" void *memccpy(void *__restrict__, const void *__restrict__, int, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 65 "/usr/include/string.h" 3
extern "C" __attribute__((weak)) void *memset(void *, int, size_t) throw() __attribute__((nonnull(1)));
# 68 "/usr/include/string.h" 3
extern "C" int memcmp(const void *, const void *, size_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 75 "/usr/include/string.h" 3
extern void *memchr(void *, int, size_t) throw() __asm__("memchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 77 "/usr/include/string.h" 3
extern const void *memchr(const void *, int, size_t) throw() __asm__("memchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 104 "/usr/include/string.h" 3
void *rawmemchr(void *, int) throw() __asm__("rawmemchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 106 "/usr/include/string.h" 3
const void *rawmemchr(const void *, int) throw() __asm__("rawmemchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 115 "/usr/include/string.h" 3
void *memrchr(void *, int, size_t) throw() __asm__("memrchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 117 "/usr/include/string.h" 3
const void *memrchr(const void *, int, size_t) throw() __asm__("memrchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 128 "/usr/include/string.h" 3
extern "C" char *strcpy(char *__restrict__, const char *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 131 "/usr/include/string.h" 3
extern "C" char *strncpy(char *__restrict__, const char *__restrict__, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 136 "/usr/include/string.h" 3
extern "C" char *strcat(char *__restrict__, const char *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 139 "/usr/include/string.h" 3
extern "C" char *strncat(char *__restrict__, const char *__restrict__, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 143 "/usr/include/string.h" 3
extern "C" int strcmp(const char *, const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 146 "/usr/include/string.h" 3
extern "C" int strncmp(const char *, const char *, size_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 150 "/usr/include/string.h" 3
extern "C" int strcoll(const char *, const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 153 "/usr/include/string.h" 3
extern "C" size_t strxfrm(char *__restrict__, const char *__restrict__, size_t) throw() __attribute__((nonnull(2)));
# 40 "/usr/include/xlocale.h" 3
extern "C" { typedef
# 28 "/usr/include/xlocale.h" 3
struct __locale_struct {
# 31 "/usr/include/xlocale.h" 3
struct __locale_data *__locales[13];
# 34 "/usr/include/xlocale.h" 3
const unsigned short *__ctype_b;
# 35 "/usr/include/xlocale.h" 3
const int *__ctype_tolower;
# 36 "/usr/include/xlocale.h" 3
const int *__ctype_toupper;
# 39 "/usr/include/xlocale.h" 3
const char *__names[13];
# 40 "/usr/include/xlocale.h" 3
} *__locale_t; }
# 43 "/usr/include/xlocale.h" 3
extern "C" { typedef __locale_t locale_t; }
# 165 "/usr/include/string.h" 3
extern "C" int strcoll_l(const char *, const char *, __locale_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) __attribute__((nonnull(3)));
# 168 "/usr/include/string.h" 3
extern "C" size_t strxfrm_l(char *, const char *, size_t, __locale_t) throw() __attribute__((nonnull(2))) __attribute__((nonnull(4)));
# 175 "/usr/include/string.h" 3
extern "C" char *strdup(const char *) throw() __attribute__((__malloc__)) __attribute__((nonnull(1)));
# 183 "/usr/include/string.h" 3
extern "C" char *strndup(const char *, size_t) throw() __attribute__((__malloc__)) __attribute__((nonnull(1)));
# 215 "/usr/include/string.h" 3
extern char *strchr(char *, int) throw() __asm__("strchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 217 "/usr/include/string.h" 3
extern const char *strchr(const char *, int) throw() __asm__("strchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 242 "/usr/include/string.h" 3
extern char *strrchr(char *, int) throw() __asm__("strrchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 244 "/usr/include/string.h" 3
extern const char *strrchr(const char *, int) throw() __asm__("strrchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 271 "/usr/include/string.h" 3
char *strchrnul(char *, int) throw() __asm__("strchrnul") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 273 "/usr/include/string.h" 3
const char *strchrnul(const char *, int) throw() __asm__("strchrnul") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 284 "/usr/include/string.h" 3
extern "C" size_t strcspn(const char *, const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 288 "/usr/include/string.h" 3
extern "C" size_t strspn(const char *, const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 294 "/usr/include/string.h" 3
extern char *strpbrk(char *, const char *) throw() __asm__("strpbrk") __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 296 "/usr/include/string.h" 3
extern const char *strpbrk(const char *, const char *) throw() __asm__("strpbrk") __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 321 "/usr/include/string.h" 3
extern char *strstr(char *, const char *) throw() __asm__("strstr") __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 323 "/usr/include/string.h" 3
extern const char *strstr(const char *, const char *) throw() __asm__("strstr") __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 348 "/usr/include/string.h" 3
extern "C" char *strtok(char *__restrict__, const char *__restrict__) throw() __attribute__((nonnull(2)));
# 354 "/usr/include/string.h" 3
extern "C" char *__strtok_r(char *__restrict__, const char *__restrict__, char **__restrict__) throw() __attribute__((nonnull(2))) __attribute__((nonnull(3)));
# 359 "/usr/include/string.h" 3
extern "C" char *strtok_r(char *__restrict__, const char *__restrict__, char **__restrict__) throw() __attribute__((nonnull(2))) __attribute__((nonnull(3)));
# 367 "/usr/include/string.h" 3
char *strcasestr(char *, const char *) throw() __asm__("strcasestr") __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 369 "/usr/include/string.h" 3
const char *strcasestr(const char *, const char *) throw() __asm__("strcasestr") __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 382 "/usr/include/string.h" 3
extern "C" void *memmem(const void *, size_t, const void *, size_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(3)));
# 388 "/usr/include/string.h" 3
extern "C" void *__mempcpy(void *__restrict__, const void *__restrict__, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 391 "/usr/include/string.h" 3
extern "C" void *mempcpy(void *__restrict__, const void *__restrict__, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 399 "/usr/include/string.h" 3
extern "C" size_t strlen(const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1)));
# 406 "/usr/include/string.h" 3
extern "C" size_t strnlen(const char *, size_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1)));
# 413 "/usr/include/string.h" 3
extern "C" char *strerror(int) throw();
# 438 "/usr/include/string.h" 3
extern "C" char *strerror_r(int, char *, size_t) throw() __attribute__((nonnull(2)));
# 445 "/usr/include/string.h" 3
extern "C" char *strerror_l(int, __locale_t) throw();
# 451 "/usr/include/string.h" 3
extern "C" void __bzero(void *, size_t) throw() __attribute__((nonnull(1)));
# 455 "/usr/include/string.h" 3
extern "C" void bcopy(const void *, void *, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 459 "/usr/include/string.h" 3
extern "C" void bzero(void *, size_t) throw() __attribute__((nonnull(1)));
# 462 "/usr/include/string.h" 3
extern "C" int bcmp(const void *, const void *, size_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 469 "/usr/include/string.h" 3
extern char *index(char *, int) throw() __asm__("index") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 471 "/usr/include/string.h" 3
extern const char *index(const char *, int) throw() __asm__("index") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 497 "/usr/include/string.h" 3
extern char *rindex(char *, int) throw() __asm__("rindex") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 499 "/usr/include/string.h" 3
extern const char *rindex(const char *, int) throw() __asm__("rindex") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 523 "/usr/include/string.h" 3
extern "C" int ffs(int) throw() __attribute__((__const__));
# 528 "/usr/include/string.h" 3
extern "C" int ffsl(long) throw() __attribute__((__const__));
# 530 "/usr/include/string.h" 3
extern "C" int ffsll(long long) throw() __attribute__((__const__));
# 536 "/usr/include/string.h" 3
extern "C" int strcasecmp(const char *, const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 540 "/usr/include/string.h" 3
extern "C" int strncasecmp(const char *, const char *, size_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 547 "/usr/include/string.h" 3
extern "C" int strcasecmp_l(const char *, const char *, __locale_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) __attribute__((nonnull(3)));
# 551 "/usr/include/string.h" 3
extern "C" int strncasecmp_l(const char *, const char *, size_t, __locale_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) __attribute__((nonnull(4)));
# 559 "/usr/include/string.h" 3
extern "C" char *strsep(char **__restrict__, const char *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 566 "/usr/include/string.h" 3
extern "C" char *strsignal(int) throw();
# 569 "/usr/include/string.h" 3
extern "C" char *__stpcpy(char *__restrict__, const char *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 571 "/usr/include/string.h" 3
extern "C" char *stpcpy(char *__restrict__, const char *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 576 "/usr/include/string.h" 3
extern "C" char *__stpncpy(char *__restrict__, const char *__restrict__, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 579 "/usr/include/string.h" 3
extern "C" char *stpncpy(char *__restrict__, const char *__restrict__, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 586 "/usr/include/string.h" 3
extern "C" int strverscmp(const char *, const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 590 "/usr/include/string.h" 3
extern "C" char *strfry(char *) throw() __attribute__((nonnull(1)));
# 593 "/usr/include/string.h" 3
extern "C" void *memfrob(void *, size_t) throw() __attribute__((nonnull(1)));
# 601 "/usr/include/string.h" 3
char *basename(char *) throw() __asm__("basename") __attribute__((nonnull(1)));
# 603 "/usr/include/string.h" 3
const char *basename(const char *) throw() __asm__("basename") __attribute__((nonnull(1)));
# 31 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned char __u_char; }
# 32 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned short __u_short; }
# 33 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __u_int; }
# 34 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __u_long; }
# 37 "/usr/include/bits/types.h" 3
extern "C" { typedef signed char __int8_t; }
# 38 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned char __uint8_t; }
# 39 "/usr/include/bits/types.h" 3
extern "C" { typedef signed short __int16_t; }
# 40 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned short __uint16_t; }
# 41 "/usr/include/bits/types.h" 3
extern "C" { typedef signed int __int32_t; }
# 42 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __uint32_t; }
# 44 "/usr/include/bits/types.h" 3
extern "C" { typedef signed long __int64_t; }
# 45 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __uint64_t; }
# 53 "/usr/include/bits/types.h" 3
extern "C" { typedef long __quad_t; }
# 54 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __u_quad_t; }
# 134 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __dev_t; }
# 135 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __uid_t; }
# 136 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __gid_t; }
# 137 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __ino_t; }
# 138 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __ino64_t; }
# 139 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __mode_t; }
# 140 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __nlink_t; }
# 141 "/usr/include/bits/types.h" 3
extern "C" { typedef long __off_t; }
# 142 "/usr/include/bits/types.h" 3
extern "C" { typedef long __off64_t; }
# 143 "/usr/include/bits/types.h" 3
extern "C" { typedef int __pid_t; }
# 144 "/usr/include/bits/types.h" 3
extern "C" { typedef struct { int __val[2]; } __fsid_t; }
# 145 "/usr/include/bits/types.h" 3
extern "C" { typedef long __clock_t; }
# 146 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __rlim_t; }
# 147 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __rlim64_t; }
# 148 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __id_t; }
# 149 "/usr/include/bits/types.h" 3
extern "C" { typedef long __time_t; }
# 150 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __useconds_t; }
# 151 "/usr/include/bits/types.h" 3
extern "C" { typedef long __suseconds_t; }
# 153 "/usr/include/bits/types.h" 3
extern "C" { typedef int __daddr_t; }
# 154 "/usr/include/bits/types.h" 3
extern "C" { typedef long __swblk_t; }
# 155 "/usr/include/bits/types.h" 3
extern "C" { typedef int __key_t; }
# 158 "/usr/include/bits/types.h" 3
extern "C" { typedef int __clockid_t; }
# 161 "/usr/include/bits/types.h" 3
extern "C" { typedef void *__timer_t; }
# 164 "/usr/include/bits/types.h" 3
extern "C" { typedef long __blksize_t; }
# 169 "/usr/include/bits/types.h" 3
extern "C" { typedef long __blkcnt_t; }
# 170 "/usr/include/bits/types.h" 3
extern "C" { typedef long __blkcnt64_t; }
# 173 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __fsblkcnt_t; }
# 174 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __fsblkcnt64_t; }
# 177 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __fsfilcnt_t; }
# 178 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __fsfilcnt64_t; }
# 180 "/usr/include/bits/types.h" 3
extern "C" { typedef long __ssize_t; }
# 184 "/usr/include/bits/types.h" 3
extern "C" { typedef __off64_t __loff_t; }
# 185 "/usr/include/bits/types.h" 3
extern "C" { typedef __quad_t *__qaddr_t; }
# 186 "/usr/include/bits/types.h" 3
extern "C" { typedef char *__caddr_t; }
# 189 "/usr/include/bits/types.h" 3
extern "C" { typedef long __intptr_t; }
# 192 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __socklen_t; }
# 60 "/usr/include/time.h" 3
extern "C" { typedef __clock_t clock_t; }
# 76 "/usr/include/time.h" 3
extern "C" { typedef __time_t time_t; }
# 92 "/usr/include/time.h" 3
extern "C" { typedef __clockid_t clockid_t; }
# 104 "/usr/include/time.h" 3
extern "C" { typedef __timer_t timer_t; }
# 120 "/usr/include/time.h" 3
extern "C" { struct timespec {
# 122 "/usr/include/time.h" 3
__time_t tv_sec;
# 123 "/usr/include/time.h" 3
long tv_nsec;
# 124 "/usr/include/time.h" 3
}; }
# 133 "/usr/include/time.h" 3
extern "C" { struct tm {
# 135 "/usr/include/time.h" 3
int tm_sec;
# 136 "/usr/include/time.h" 3
int tm_min;
# 137 "/usr/include/time.h" 3
int tm_hour;
# 138 "/usr/include/time.h" 3
int tm_mday;
# 139 "/usr/include/time.h" 3
int tm_mon;
# 140 "/usr/include/time.h" 3
int tm_year;
# 141 "/usr/include/time.h" 3
int tm_wday;
# 142 "/usr/include/time.h" 3
int tm_yday;
# 143 "/usr/include/time.h" 3
int tm_isdst;
# 146 "/usr/include/time.h" 3
long tm_gmtoff;
# 147 "/usr/include/time.h" 3
const char *tm_zone;
# 152 "/usr/include/time.h" 3
}; }
# 161 "/usr/include/time.h" 3
extern "C" { struct itimerspec {
# 163 "/usr/include/time.h" 3
timespec it_interval;
# 164 "/usr/include/time.h" 3
timespec it_value;
# 165 "/usr/include/time.h" 3
}; }
# 168 "/usr/include/time.h" 3
struct sigevent;
# 174 "/usr/include/time.h" 3
extern "C" { typedef __pid_t pid_t; }
# 183 "/usr/include/time.h" 3
extern "C" __attribute__((weak)) clock_t clock() throw();
# 186 "/usr/include/time.h" 3
extern "C" time_t time(time_t *) throw();
# 189 "/usr/include/time.h" 3
extern "C" double difftime(time_t, time_t) throw() __attribute__((__const__));
# 193 "/usr/include/time.h" 3
extern "C" time_t mktime(tm *) throw();
# 199 "/usr/include/time.h" 3
extern "C" size_t strftime(char *__restrict__, size_t, const char *__restrict__, const tm *__restrict__) throw();
# 207 "/usr/include/time.h" 3
extern "C" char *strptime(const char *__restrict__, const char *__restrict__, tm *) throw();
# 217 "/usr/include/time.h" 3
extern "C" size_t strftime_l(char *__restrict__, size_t, const char *__restrict__, const tm *__restrict__, __locale_t) throw();
# 224 "/usr/include/time.h" 3
extern "C" char *strptime_l(const char *__restrict__, const char *__restrict__, tm *, __locale_t) throw();
# 233 "/usr/include/time.h" 3
extern "C" tm *gmtime(const time_t *) throw();
# 237 "/usr/include/time.h" 3
extern "C" tm *localtime(const time_t *) throw();
# 243 "/usr/include/time.h" 3
extern "C" tm *gmtime_r(const time_t *__restrict__, tm *__restrict__) throw();
# 248 "/usr/include/time.h" 3
extern "C" tm *localtime_r(const time_t *__restrict__, tm *__restrict__) throw();
# 255 "/usr/include/time.h" 3
extern "C" char *asctime(const tm *) throw();
# 258 "/usr/include/time.h" 3
extern "C" char *ctime(const time_t *) throw();
# 266 "/usr/include/time.h" 3
extern "C" char *asctime_r(const tm *__restrict__, char *__restrict__) throw();
# 270 "/usr/include/time.h" 3
extern "C" char *ctime_r(const time_t *__restrict__, char *__restrict__) throw();
# 276 "/usr/include/time.h" 3
extern "C" { extern char *__tzname[2]; }
# 277 "/usr/include/time.h" 3
extern "C" { extern int __daylight; }
# 278 "/usr/include/time.h" 3
extern "C" { extern long __timezone; }
# 283 "/usr/include/time.h" 3
extern "C" { extern char *tzname[2]; }
# 287 "/usr/include/time.h" 3
extern "C" void tzset() throw();
# 291 "/usr/include/time.h" 3
extern "C" { extern int daylight; }
# 292 "/usr/include/time.h" 3
extern "C" { extern long timezone; }
# 298 "/usr/include/time.h" 3
extern "C" int stime(const time_t *) throw();
# 313 "/usr/include/time.h" 3
extern "C" time_t timegm(tm *) throw();
# 316 "/usr/include/time.h" 3
extern "C" time_t timelocal(tm *) throw();
# 319 "/usr/include/time.h" 3
extern "C" int dysize(int) throw() __attribute__((__const__));
# 328 "/usr/include/time.h" 3
extern "C" int nanosleep(const timespec *, timespec *);
# 333 "/usr/include/time.h" 3
extern "C" int clock_getres(clockid_t, timespec *) throw();
# 336 "/usr/include/time.h" 3
extern "C" int clock_gettime(clockid_t, timespec *) throw();
# 339 "/usr/include/time.h" 3
extern "C" int clock_settime(clockid_t, const timespec *) throw();
# 347 "/usr/include/time.h" 3
extern "C" int clock_nanosleep(clockid_t, int, const timespec *, timespec *);
# 352 "/usr/include/time.h" 3
extern "C" int clock_getcpuclockid(pid_t, clockid_t *) throw();
# 357 "/usr/include/time.h" 3
extern "C" int timer_create(clockid_t, sigevent *__restrict__, timer_t *__restrict__) throw();
# 362 "/usr/include/time.h" 3
extern "C" int timer_delete(timer_t) throw();
# 365 "/usr/include/time.h" 3
extern "C" int timer_settime(timer_t, int, const itimerspec *__restrict__, itimerspec *__restrict__) throw();
# 370 "/usr/include/time.h" 3
extern "C" int timer_gettime(timer_t, itimerspec *) throw();
# 374 "/usr/include/time.h" 3
extern "C" int timer_getoverrun(timer_t) throw();
# 390 "/usr/include/time.h" 3
extern "C" { extern int getdate_err; }
# 399 "/usr/include/time.h" 3
extern "C" tm *getdate(const char *);
# 413 "/usr/include/time.h" 3
extern "C" int getdate_r(const char *__restrict__, tm *__restrict__);
# 57 "/usr/local/cuda/bin/../include/common_functions.h"
extern "C" __attribute__((weak)) clock_t clock() throw();
# 59 "/usr/local/cuda/bin/../include/common_functions.h"
extern "C" __attribute__((weak)) void *memset(void *, int, size_t) throw() __attribute__((nonnull(1)));
# 61 "/usr/local/cuda/bin/../include/common_functions.h"
extern "C" __attribute__((weak)) void *memcpy(void *, const void *, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 66 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int abs(int) throw() __attribute__((__const__));
# 68 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long labs(long) throw() __attribute__((__const__));
# 70 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long long llabs(long long) throw() __attribute__((__const__));
# 72 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double fabs(double) throw() __attribute__((__const__));
# 74 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float fabsf(float) throw() __attribute__((__const__));
# 77 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int min(int, int);
# 79 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) unsigned umin(unsigned, unsigned);
# 81 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long long llmin(long long, long long);
# 83 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) unsigned long long ullmin(unsigned long long, unsigned long long);
# 85 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float fminf(float, float) throw();
# 87 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double fmin(double, double) throw();
# 90 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int max(int, int);
# 92 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) unsigned umax(unsigned, unsigned);
# 94 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long long llmax(long long, long long);
# 96 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) unsigned long long ullmax(unsigned long long, unsigned long long);
# 98 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float fmaxf(float, float) throw();
# 100 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double fmax(double, double) throw();
# 103 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double sin(double) throw();
# 105 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float sinf(float) throw();
# 108 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double cos(double) throw();
# 110 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float cosf(float) throw();
# 113 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) void sincos(double, double *, double *) throw();
# 115 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) void sincosf(float, float *, float *) throw();
# 118 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double tan(double) throw();
# 120 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float tanf(float) throw();
# 123 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double sqrt(double) throw();
# 125 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float sqrtf(float) throw();
# 128 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double rsqrt(double);
# 130 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float rsqrtf(float);
# 133 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double exp2(double) throw();
# 135 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float exp2f(float) throw();
# 138 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double exp10(double) throw();
# 140 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float exp10f(float) throw();
# 143 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double expm1(double) throw();
# 145 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float expm1f(float) throw();
# 148 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double log2(double) throw();
# 150 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float log2f(float) throw();
# 153 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double log10(double) throw();
# 155 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float log10f(float) throw();
# 158 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double log(double) throw();
# 160 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float logf(float) throw();
# 163 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double log1p(double) throw();
# 165 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float log1pf(float) throw();
# 168 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double floor(double) throw() __attribute__((__const__));
# 170 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float floorf(float) throw() __attribute__((__const__));
# 173 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double exp(double) throw();
# 175 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float expf(float) throw();
# 178 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double cosh(double) throw();
# 180 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float coshf(float) throw();
# 183 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double sinh(double) throw();
# 185 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float sinhf(float) throw();
# 188 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double tanh(double) throw();
# 190 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float tanhf(float) throw();
# 193 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double acosh(double) throw();
# 195 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float acoshf(float) throw();
# 198 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double asinh(double) throw();
# 200 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float asinhf(float) throw();
# 203 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double atanh(double) throw();
# 205 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float atanhf(float) throw();
# 208 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double ldexp(double, int) throw();
# 210 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float ldexpf(float, int) throw();
# 213 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double logb(double) throw();
# 215 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float logbf(float) throw();
# 218 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int ilogb(double) throw();
# 220 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int ilogbf(float) throw();
# 223 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double scalbn(double, int) throw();
# 225 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float scalbnf(float, int) throw();
# 228 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double scalbln(double, long) throw();
# 230 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float scalblnf(float, long) throw();
# 233 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double frexp(double, int *) throw();
# 235 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float frexpf(float, int *) throw();
# 238 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double round(double) throw() __attribute__((__const__));
# 240 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float roundf(float) throw() __attribute__((__const__));
# 243 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long lround(double) throw();
# 245 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long lroundf(float) throw();
# 248 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long long llround(double) throw();
# 250 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long long llroundf(float) throw();
# 253 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double rint(double) throw();
# 255 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float rintf(float) throw();
# 258 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long lrint(double) throw();
# 260 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long lrintf(float) throw();
# 263 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long long llrint(double) throw();
# 265 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long long llrintf(float) throw();
# 268 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double nearbyint(double) throw();
# 270 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float nearbyintf(float) throw();
# 273 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double ceil(double) throw() __attribute__((__const__));
# 275 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float ceilf(float) throw() __attribute__((__const__));
# 278 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double trunc(double) throw() __attribute__((__const__));
# 280 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float truncf(float) throw() __attribute__((__const__));
# 283 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double fdim(double, double) throw();
# 285 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float fdimf(float, float) throw();
# 288 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double atan2(double, double) throw();
# 290 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float atan2f(float, float) throw();
# 293 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double atan(double) throw();
# 295 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float atanf(float) throw();
# 298 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double asin(double) throw();
# 300 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float asinf(float) throw();
# 303 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double acos(double) throw();
# 305 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float acosf(float) throw();
# 308 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double hypot(double, double) throw();
# 310 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float hypotf(float, float) throw();
# 313 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double cbrt(double) throw();
# 315 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float cbrtf(float) throw();
# 318 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double rcbrt(double);
# 320 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float rcbrtf(float);
# 323 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double sinpi(double);
# 325 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float sinpif(float);
# 328 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double pow(double, double) throw();
# 330 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float powf(float, float) throw();
# 333 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double modf(double, double *) throw();
# 335 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float modff(float, float *) throw();
# 338 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double fmod(double, double) throw();
# 340 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float fmodf(float, float) throw();
# 343 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double remainder(double, double) throw();
# 345 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float remainderf(float, float) throw();
# 348 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double remquo(double, double, int *) throw();
# 350 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float remquof(float, float, int *) throw();
# 353 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double erf(double) throw();
# 355 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float erff(float) throw();
# 358 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double erfinv(double);
# 360 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float erfinvf(float);
# 363 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double erfc(double) throw();
# 365 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float erfcf(float) throw();
# 368 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double erfcinv(double);
# 370 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float erfcinvf(float);
# 373 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double lgamma(double) throw();
# 375 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float lgammaf(float) throw();
# 378 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double tgamma(double) throw();
# 380 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float tgammaf(float) throw();
# 383 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double copysign(double, double) throw() __attribute__((__const__));
# 385 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float copysignf(float, float) throw() __attribute__((__const__));
# 388 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double nextafter(double, double) throw() __attribute__((__const__));
# 390 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float nextafterf(float, float) throw() __attribute__((__const__));
# 393 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double nan(const char *) throw() __attribute__((__const__));
# 395 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float nanf(const char *) throw() __attribute__((__const__));
# 398 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __isinf(double) throw() __attribute__((__const__));
# 400 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __isinff(float) throw() __attribute__((__const__));
# 403 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __isnan(double) throw() __attribute__((__const__));
# 405 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __isnanf(float) throw() __attribute__((__const__));
# 419 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __finite(double) throw() __attribute__((__const__));
# 421 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __finitef(float) throw() __attribute__((__const__));
# 423 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __signbit(double) throw() __attribute__((__const__));
# 428 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __signbitf(float) throw() __attribute__((__const__));
# 431 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double fma(double, double, double) throw();
# 433 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float fmaf(float, float, float) throw();
# 441 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __signbitl(long double) throw() __attribute__((__const__));
# 443 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __isinfl(long double) throw() __attribute__((__const__));
# 445 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __isnanl(long double) throw() __attribute__((__const__));
# 455 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __finitel(long double) throw() __attribute__((__const__));
# 31 "/usr/include/bits/mathdef.h" 3
extern "C" { typedef float float_t; }
# 32 "/usr/include/bits/mathdef.h" 3
extern "C" { typedef double double_t; }
# 55 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double acos(double) throw(); extern "C" double __acos(double) throw();
# 57 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double asin(double) throw(); extern "C" double __asin(double) throw();
# 59 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double atan(double) throw(); extern "C" double __atan(double) throw();
# 61 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double atan2(double, double) throw(); extern "C" double __atan2(double, double) throw();
# 64 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double cos(double) throw(); extern "C" double __cos(double) throw();
# 66 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double sin(double) throw(); extern "C" double __sin(double) throw();
# 68 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double tan(double) throw(); extern "C" double __tan(double) throw();
# 73 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double cosh(double) throw(); extern "C" double __cosh(double) throw();
# 75 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double sinh(double) throw(); extern "C" double __sinh(double) throw();
# 77 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double tanh(double) throw(); extern "C" double __tanh(double) throw();
# 82 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) void sincos(double, double *, double *) throw(); extern "C" void __sincos(double, double *, double *) throw();
# 89 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double acosh(double) throw(); extern "C" double __acosh(double) throw();
# 91 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double asinh(double) throw(); extern "C" double __asinh(double) throw();
# 93 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double atanh(double) throw(); extern "C" double __atanh(double) throw();
# 101 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double exp(double) throw(); extern "C" double __exp(double) throw();
# 104 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double frexp(double, int *) throw(); extern "C" double __frexp(double, int *) throw();
# 107 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double ldexp(double, int) throw(); extern "C" double __ldexp(double, int) throw();
# 110 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double log(double) throw(); extern "C" double __log(double) throw();
# 113 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double log10(double) throw(); extern "C" double __log10(double) throw();
# 116 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double modf(double, double *) throw(); extern "C" double __modf(double, double *) throw();
# 121 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double exp10(double) throw(); extern "C" double __exp10(double) throw();
# 123 "/usr/include/bits/mathcalls.h" 3
extern "C" double pow10(double) throw(); extern "C" double __pow10(double) throw();
# 129 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double expm1(double) throw(); extern "C" double __expm1(double) throw();
# 132 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double log1p(double) throw(); extern "C" double __log1p(double) throw();
# 135 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double logb(double) throw(); extern "C" double __logb(double) throw();
# 142 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double exp2(double) throw(); extern "C" double __exp2(double) throw();
# 145 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double log2(double) throw(); extern "C" double __log2(double) throw();
# 154 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double pow(double, double) throw(); extern "C" double __pow(double, double) throw();
# 157 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double sqrt(double) throw(); extern "C" double __sqrt(double) throw();
# 163 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double hypot(double, double) throw(); extern "C" double __hypot(double, double) throw();
# 170 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double cbrt(double) throw(); extern "C" double __cbrt(double) throw();
# 179 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double ceil(double) throw() __attribute__((__const__)); extern "C" double __ceil(double) throw() __attribute__((__const__));
# 182 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double fabs(double) throw() __attribute__((__const__)); extern "C" double __fabs(double) throw() __attribute__((__const__));
# 185 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double floor(double) throw() __attribute__((__const__)); extern "C" double __floor(double) throw() __attribute__((__const__));
# 188 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double fmod(double, double) throw(); extern "C" double __fmod(double, double) throw();
# 193 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __isinf(double) throw() __attribute__((__const__));
# 196 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __finite(double) throw() __attribute__((__const__));
# 202 "/usr/include/bits/mathcalls.h" 3
extern "C" int isinf(double) throw() __attribute__((__const__));
# 205 "/usr/include/bits/mathcalls.h" 3
extern "C" int finite(double) throw() __attribute__((__const__));
# 208 "/usr/include/bits/mathcalls.h" 3
extern "C" double drem(double, double) throw(); extern "C" double __drem(double, double) throw();
# 212 "/usr/include/bits/mathcalls.h" 3
extern "C" double significand(double) throw(); extern "C" double __significand(double) throw();
# 218 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double copysign(double, double) throw() __attribute__((__const__)); extern "C" double __copysign(double, double) throw() __attribute__((__const__));
# 225 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double nan(const char *) throw() __attribute__((__const__)); extern "C" double __nan(const char *) throw() __attribute__((__const__));
# 231 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __isnan(double) throw() __attribute__((__const__));
# 235 "/usr/include/bits/mathcalls.h" 3
extern "C" int isnan(double) throw() __attribute__((__const__));
# 238 "/usr/include/bits/mathcalls.h" 3
extern "C" double j0(double) throw(); extern "C" double __j0(double) throw();
# 239 "/usr/include/bits/mathcalls.h" 3
extern "C" double j1(double) throw(); extern "C" double __j1(double) throw();
# 240 "/usr/include/bits/mathcalls.h" 3
extern "C" double jn(int, double) throw(); extern "C" double __jn(int, double) throw();
# 241 "/usr/include/bits/mathcalls.h" 3
extern "C" double y0(double) throw(); extern "C" double __y0(double) throw();
# 242 "/usr/include/bits/mathcalls.h" 3
extern "C" double y1(double) throw(); extern "C" double __y1(double) throw();
# 243 "/usr/include/bits/mathcalls.h" 3
extern "C" double yn(int, double) throw(); extern "C" double __yn(int, double) throw();
# 250 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double erf(double) throw(); extern "C" double __erf(double) throw();
# 251 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double erfc(double) throw(); extern "C" double __erfc(double) throw();
# 252 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double lgamma(double) throw(); extern "C" double __lgamma(double) throw();
# 259 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double tgamma(double) throw(); extern "C" double __tgamma(double) throw();
# 265 "/usr/include/bits/mathcalls.h" 3
extern "C" double gamma(double) throw(); extern "C" double __gamma(double) throw();
# 272 "/usr/include/bits/mathcalls.h" 3
extern "C" double lgamma_r(double, int *) throw(); extern "C" double __lgamma_r(double, int *) throw();
# 280 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double rint(double) throw(); extern "C" double __rint(double) throw();
# 283 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double nextafter(double, double) throw() __attribute__((__const__)); extern "C" double __nextafter(double, double) throw() __attribute__((__const__));
# 285 "/usr/include/bits/mathcalls.h" 3
extern "C" double nexttoward(double, long double) throw() __attribute__((__const__)); extern "C" double __nexttoward(double, long double) throw() __attribute__((__const__));
# 289 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double remainder(double, double) throw(); extern "C" double __remainder(double, double) throw();
# 293 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double scalbn(double, int) throw(); extern "C" double __scalbn(double, int) throw();
# 297 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int ilogb(double) throw(); extern "C" int __ilogb(double) throw();
# 302 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double scalbln(double, long) throw(); extern "C" double __scalbln(double, long) throw();
# 306 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double nearbyint(double) throw(); extern "C" double __nearbyint(double) throw();
# 310 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double round(double) throw() __attribute__((__const__)); extern "C" double __round(double) throw() __attribute__((__const__));
# 314 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double trunc(double) throw() __attribute__((__const__)); extern "C" double __trunc(double) throw() __attribute__((__const__));
# 319 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double remquo(double, double, int *) throw(); extern "C" double __remquo(double, double, int *) throw();
# 326 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) long lrint(double) throw(); extern "C" long __lrint(double) throw();
# 327 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) long long llrint(double) throw(); extern "C" long long __llrint(double) throw();
# 331 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) long lround(double) throw(); extern "C" long __lround(double) throw();
# 332 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) long long llround(double) throw(); extern "C" long long __llround(double) throw();
# 336 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double fdim(double, double) throw(); extern "C" double __fdim(double, double) throw();
# 339 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double fmax(double, double) throw(); extern "C" double __fmax(double, double) throw();
# 342 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double fmin(double, double) throw(); extern "C" double __fmin(double, double) throw();
# 346 "/usr/include/bits/mathcalls.h" 3
extern "C" int __fpclassify(double) throw() __attribute__((__const__));
# 350 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __signbit(double) throw() __attribute__((__const__));
# 355 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double fma(double, double, double) throw(); extern "C" double __fma(double, double, double) throw();
# 364 "/usr/include/bits/mathcalls.h" 3
extern "C" double scalb(double, double) throw(); extern "C" double __scalb(double, double) throw();
# 55 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float acosf(float) throw(); extern "C" float __acosf(float) throw();
# 57 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float asinf(float) throw(); extern "C" float __asinf(float) throw();
# 59 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float atanf(float) throw(); extern "C" float __atanf(float) throw();
# 61 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float atan2f(float, float) throw(); extern "C" float __atan2f(float, float) throw();
# 64 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float cosf(float) throw();
# 66 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float sinf(float) throw();
# 68 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float tanf(float) throw();
# 73 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float coshf(float) throw(); extern "C" float __coshf(float) throw();
# 75 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float sinhf(float) throw(); extern "C" float __sinhf(float) throw();
# 77 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float tanhf(float) throw(); extern "C" float __tanhf(float) throw();
# 82 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) void sincosf(float, float *, float *) throw();
# 89 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float acoshf(float) throw(); extern "C" float __acoshf(float) throw();
# 91 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float asinhf(float) throw(); extern "C" float __asinhf(float) throw();
# 93 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float atanhf(float) throw(); extern "C" float __atanhf(float) throw();
# 101 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float expf(float) throw();
# 104 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float frexpf(float, int *) throw(); extern "C" float __frexpf(float, int *) throw();
# 107 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float ldexpf(float, int) throw(); extern "C" float __ldexpf(float, int) throw();
# 110 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float logf(float) throw();
# 113 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float log10f(float) throw();
# 116 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float modff(float, float *) throw(); extern "C" float __modff(float, float *) throw();
# 121 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float exp10f(float) throw();
# 123 "/usr/include/bits/mathcalls.h" 3
extern "C" float pow10f(float) throw(); extern "C" float __pow10f(float) throw();
# 129 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float expm1f(float) throw(); extern "C" float __expm1f(float) throw();
# 132 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float log1pf(float) throw(); extern "C" float __log1pf(float) throw();
# 135 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float logbf(float) throw(); extern "C" float __logbf(float) throw();
# 142 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float exp2f(float) throw(); extern "C" float __exp2f(float) throw();
# 145 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float log2f(float) throw();
# 154 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float powf(float, float) throw();
# 157 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float sqrtf(float) throw(); extern "C" float __sqrtf(float) throw();
# 163 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float hypotf(float, float) throw(); extern "C" float __hypotf(float, float) throw();
# 170 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float cbrtf(float) throw(); extern "C" float __cbrtf(float) throw();
# 179 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float ceilf(float) throw() __attribute__((__const__)); extern "C" float __ceilf(float) throw() __attribute__((__const__));
# 182 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float fabsf(float) throw() __attribute__((__const__)); extern "C" float __fabsf(float) throw() __attribute__((__const__));
# 185 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float floorf(float) throw() __attribute__((__const__)); extern "C" float __floorf(float) throw() __attribute__((__const__));
# 188 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float fmodf(float, float) throw(); extern "C" float __fmodf(float, float) throw();
# 193 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __isinff(float) throw() __attribute__((__const__));
# 196 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __finitef(float) throw() __attribute__((__const__));
# 202 "/usr/include/bits/mathcalls.h" 3
extern "C" int isinff(float) throw() __attribute__((__const__));
# 205 "/usr/include/bits/mathcalls.h" 3
extern "C" int finitef(float) throw() __attribute__((__const__));
# 208 "/usr/include/bits/mathcalls.h" 3
extern "C" float dremf(float, float) throw(); extern "C" float __dremf(float, float) throw();
# 212 "/usr/include/bits/mathcalls.h" 3
extern "C" float significandf(float) throw(); extern "C" float __significandf(float) throw();
# 218 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float copysignf(float, float) throw() __attribute__((__const__)); extern "C" float __copysignf(float, float) throw() __attribute__((__const__));
# 225 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float nanf(const char *) throw() __attribute__((__const__)); extern "C" float __nanf(const char *) throw() __attribute__((__const__));
# 231 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __isnanf(float) throw() __attribute__((__const__));
# 235 "/usr/include/bits/mathcalls.h" 3
extern "C" int isnanf(float) throw() __attribute__((__const__));
# 238 "/usr/include/bits/mathcalls.h" 3
extern "C" float j0f(float) throw(); extern "C" float __j0f(float) throw();
# 239 "/usr/include/bits/mathcalls.h" 3
extern "C" float j1f(float) throw(); extern "C" float __j1f(float) throw();
# 240 "/usr/include/bits/mathcalls.h" 3
extern "C" float jnf(int, float) throw(); extern "C" float __jnf(int, float) throw();
# 241 "/usr/include/bits/mathcalls.h" 3
extern "C" float y0f(float) throw(); extern "C" float __y0f(float) throw();
# 242 "/usr/include/bits/mathcalls.h" 3
extern "C" float y1f(float) throw(); extern "C" float __y1f(float) throw();
# 243 "/usr/include/bits/mathcalls.h" 3
extern "C" float ynf(int, float) throw(); extern "C" float __ynf(int, float) throw();
# 250 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float erff(float) throw(); extern "C" float __erff(float) throw();
# 251 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float erfcf(float) throw(); extern "C" float __erfcf(float) throw();
# 252 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float lgammaf(float) throw(); extern "C" float __lgammaf(float) throw();
# 259 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float tgammaf(float) throw(); extern "C" float __tgammaf(float) throw();
# 265 "/usr/include/bits/mathcalls.h" 3
extern "C" float gammaf(float) throw(); extern "C" float __gammaf(float) throw();
# 272 "/usr/include/bits/mathcalls.h" 3
extern "C" float lgammaf_r(float, int *) throw(); extern "C" float __lgammaf_r(float, int *) throw();
# 280 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float rintf(float) throw(); extern "C" float __rintf(float) throw();
# 283 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float nextafterf(float, float) throw() __attribute__((__const__)); extern "C" float __nextafterf(float, float) throw() __attribute__((__const__));
# 285 "/usr/include/bits/mathcalls.h" 3
extern "C" float nexttowardf(float, long double) throw() __attribute__((__const__)); extern "C" float __nexttowardf(float, long double) throw() __attribute__((__const__));
# 289 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float remainderf(float, float) throw(); extern "C" float __remainderf(float, float) throw();
# 293 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float scalbnf(float, int) throw(); extern "C" float __scalbnf(float, int) throw();
# 297 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int ilogbf(float) throw(); extern "C" int __ilogbf(float) throw();
# 302 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float scalblnf(float, long) throw(); extern "C" float __scalblnf(float, long) throw();
# 306 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float nearbyintf(float) throw(); extern "C" float __nearbyintf(float) throw();
# 310 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float roundf(float) throw() __attribute__((__const__)); extern "C" float __roundf(float) throw() __attribute__((__const__));
# 314 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float truncf(float) throw() __attribute__((__const__)); extern "C" float __truncf(float) throw() __attribute__((__const__));
# 319 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float remquof(float, float, int *) throw(); extern "C" float __remquof(float, float, int *) throw();
# 326 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) long lrintf(float) throw(); extern "C" long __lrintf(float) throw();
# 327 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) long long llrintf(float) throw(); extern "C" long long __llrintf(float) throw();
# 331 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) long lroundf(float) throw(); extern "C" long __lroundf(float) throw();
# 332 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) long long llroundf(float) throw(); extern "C" long long __llroundf(float) throw();
# 336 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float fdimf(float, float) throw(); extern "C" float __fdimf(float, float) throw();
# 339 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float fmaxf(float, float) throw(); extern "C" float __fmaxf(float, float) throw();
# 342 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float fminf(float, float) throw(); extern "C" float __fminf(float, float) throw();
# 346 "/usr/include/bits/mathcalls.h" 3
extern "C" int __fpclassifyf(float) throw() __attribute__((__const__));
# 350 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __signbitf(float) throw() __attribute__((__const__));
# 355 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float fmaf(float, float, float) throw(); extern "C" float __fmaf(float, float, float) throw();
# 364 "/usr/include/bits/mathcalls.h" 3
extern "C" float scalbf(float, float) throw(); extern "C" float __scalbf(float, float) throw();
# 55 "/usr/include/bits/mathcalls.h" 3
extern "C" long double acosl(long double) throw(); extern "C" long double __acosl(long double) throw();
# 57 "/usr/include/bits/mathcalls.h" 3
extern "C" long double asinl(long double) throw(); extern "C" long double __asinl(long double) throw();
# 59 "/usr/include/bits/mathcalls.h" 3
extern "C" long double atanl(long double) throw(); extern "C" long double __atanl(long double) throw();
# 61 "/usr/include/bits/mathcalls.h" 3
extern "C" long double atan2l(long double, long double) throw(); extern "C" long double __atan2l(long double, long double) throw();
# 64 "/usr/include/bits/mathcalls.h" 3
extern "C" long double cosl(long double) throw(); extern "C" long double __cosl(long double) throw();
# 66 "/usr/include/bits/mathcalls.h" 3
extern "C" long double sinl(long double) throw(); extern "C" long double __sinl(long double) throw();
# 68 "/usr/include/bits/mathcalls.h" 3
extern "C" long double tanl(long double) throw(); extern "C" long double __tanl(long double) throw();
# 73 "/usr/include/bits/mathcalls.h" 3
extern "C" long double coshl(long double) throw(); extern "C" long double __coshl(long double) throw();
# 75 "/usr/include/bits/mathcalls.h" 3
extern "C" long double sinhl(long double) throw(); extern "C" long double __sinhl(long double) throw();
# 77 "/usr/include/bits/mathcalls.h" 3
extern "C" long double tanhl(long double) throw(); extern "C" long double __tanhl(long double) throw();
# 82 "/usr/include/bits/mathcalls.h" 3
extern "C" void sincosl(long double, long double *, long double *) throw(); extern "C" void __sincosl(long double, long double *, long double *) throw();
# 89 "/usr/include/bits/mathcalls.h" 3
extern "C" long double acoshl(long double) throw(); extern "C" long double __acoshl(long double) throw();
# 91 "/usr/include/bits/mathcalls.h" 3
extern "C" long double asinhl(long double) throw(); extern "C" long double __asinhl(long double) throw();
# 93 "/usr/include/bits/mathcalls.h" 3
extern "C" long double atanhl(long double) throw(); extern "C" long double __atanhl(long double) throw();
# 101 "/usr/include/bits/mathcalls.h" 3
extern "C" long double expl(long double) throw(); extern "C" long double __expl(long double) throw();
# 104 "/usr/include/bits/mathcalls.h" 3
extern "C" long double frexpl(long double, int *) throw(); extern "C" long double __frexpl(long double, int *) throw();
# 107 "/usr/include/bits/mathcalls.h" 3
extern "C" long double ldexpl(long double, int) throw(); extern "C" long double __ldexpl(long double, int) throw();
# 110 "/usr/include/bits/mathcalls.h" 3
extern "C" long double logl(long double) throw(); extern "C" long double __logl(long double) throw();
# 113 "/usr/include/bits/mathcalls.h" 3
extern "C" long double log10l(long double) throw(); extern "C" long double __log10l(long double) throw();
# 116 "/usr/include/bits/mathcalls.h" 3
extern "C" long double modfl(long double, long double *) throw(); extern "C" long double __modfl(long double, long double *) throw();
# 121 "/usr/include/bits/mathcalls.h" 3
extern "C" long double exp10l(long double) throw(); extern "C" long double __exp10l(long double) throw();
# 123 "/usr/include/bits/mathcalls.h" 3
extern "C" long double pow10l(long double) throw(); extern "C" long double __pow10l(long double) throw();
# 129 "/usr/include/bits/mathcalls.h" 3
extern "C" long double expm1l(long double) throw(); extern "C" long double __expm1l(long double) throw();
# 132 "/usr/include/bits/mathcalls.h" 3
extern "C" long double log1pl(long double) throw(); extern "C" long double __log1pl(long double) throw();
# 135 "/usr/include/bits/mathcalls.h" 3
extern "C" long double logbl(long double) throw(); extern "C" long double __logbl(long double) throw();
# 142 "/usr/include/bits/mathcalls.h" 3
extern "C" long double exp2l(long double) throw(); extern "C" long double __exp2l(long double) throw();
# 145 "/usr/include/bits/mathcalls.h" 3
extern "C" long double log2l(long double) throw(); extern "C" long double __log2l(long double) throw();
# 154 "/usr/include/bits/mathcalls.h" 3
extern "C" long double powl(long double, long double) throw(); extern "C" long double __powl(long double, long double) throw();
# 157 "/usr/include/bits/mathcalls.h" 3
extern "C" long double sqrtl(long double) throw(); extern "C" long double __sqrtl(long double) throw();
# 163 "/usr/include/bits/mathcalls.h" 3
extern "C" long double hypotl(long double, long double) throw(); extern "C" long double __hypotl(long double, long double) throw();
# 170 "/usr/include/bits/mathcalls.h" 3
extern "C" long double cbrtl(long double) throw(); extern "C" long double __cbrtl(long double) throw();
# 179 "/usr/include/bits/mathcalls.h" 3
extern "C" long double ceill(long double) throw() __attribute__((__const__)); extern "C" long double __ceill(long double) throw() __attribute__((__const__));
# 182 "/usr/include/bits/mathcalls.h" 3
extern "C" long double fabsl(long double) throw() __attribute__((__const__)); extern "C" long double __fabsl(long double) throw() __attribute__((__const__));
# 185 "/usr/include/bits/mathcalls.h" 3
extern "C" long double floorl(long double) throw() __attribute__((__const__)); extern "C" long double __floorl(long double) throw() __attribute__((__const__));
# 188 "/usr/include/bits/mathcalls.h" 3
extern "C" long double fmodl(long double, long double) throw(); extern "C" long double __fmodl(long double, long double) throw();
# 193 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __isinfl(long double) throw() __attribute__((__const__));
# 196 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __finitel(long double) throw() __attribute__((__const__));
# 202 "/usr/include/bits/mathcalls.h" 3
extern "C" int isinfl(long double) throw() __attribute__((__const__));
# 205 "/usr/include/bits/mathcalls.h" 3
extern "C" int finitel(long double) throw() __attribute__((__const__));
# 208 "/usr/include/bits/mathcalls.h" 3
extern "C" long double dreml(long double, long double) throw(); extern "C" long double __dreml(long double, long double) throw();
# 212 "/usr/include/bits/mathcalls.h" 3
extern "C" long double significandl(long double) throw(); extern "C" long double __significandl(long double) throw();
# 218 "/usr/include/bits/mathcalls.h" 3
extern "C" long double copysignl(long double, long double) throw() __attribute__((__const__)); extern "C" long double __copysignl(long double, long double) throw() __attribute__((__const__));
# 225 "/usr/include/bits/mathcalls.h" 3
extern "C" long double nanl(const char *) throw() __attribute__((__const__)); extern "C" long double __nanl(const char *) throw() __attribute__((__const__));
# 231 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __isnanl(long double) throw() __attribute__((__const__));
# 235 "/usr/include/bits/mathcalls.h" 3
extern "C" int isnanl(long double) throw() __attribute__((__const__));
# 238 "/usr/include/bits/mathcalls.h" 3
extern "C" long double j0l(long double) throw(); extern "C" long double __j0l(long double) throw();
# 239 "/usr/include/bits/mathcalls.h" 3
extern "C" long double j1l(long double) throw(); extern "C" long double __j1l(long double) throw();
# 240 "/usr/include/bits/mathcalls.h" 3
extern "C" long double jnl(int, long double) throw(); extern "C" long double __jnl(int, long double) throw();
# 241 "/usr/include/bits/mathcalls.h" 3
extern "C" long double y0l(long double) throw(); extern "C" long double __y0l(long double) throw();
# 242 "/usr/include/bits/mathcalls.h" 3
extern "C" long double y1l(long double) throw(); extern "C" long double __y1l(long double) throw();
# 243 "/usr/include/bits/mathcalls.h" 3
extern "C" long double ynl(int, long double) throw(); extern "C" long double __ynl(int, long double) throw();
# 250 "/usr/include/bits/mathcalls.h" 3
extern "C" long double erfl(long double) throw(); extern "C" long double __erfl(long double) throw();
# 251 "/usr/include/bits/mathcalls.h" 3
extern "C" long double erfcl(long double) throw(); extern "C" long double __erfcl(long double) throw();
# 252 "/usr/include/bits/mathcalls.h" 3
extern "C" long double lgammal(long double) throw(); extern "C" long double __lgammal(long double) throw();
# 259 "/usr/include/bits/mathcalls.h" 3
extern "C" long double tgammal(long double) throw(); extern "C" long double __tgammal(long double) throw();
# 265 "/usr/include/bits/mathcalls.h" 3
extern "C" long double gammal(long double) throw(); extern "C" long double __gammal(long double) throw();
# 272 "/usr/include/bits/mathcalls.h" 3
extern "C" long double lgammal_r(long double, int *) throw(); extern "C" long double __lgammal_r(long double, int *) throw();
# 280 "/usr/include/bits/mathcalls.h" 3
extern "C" long double rintl(long double) throw(); extern "C" long double __rintl(long double) throw();
# 283 "/usr/include/bits/mathcalls.h" 3
extern "C" long double nextafterl(long double, long double) throw() __attribute__((__const__)); extern "C" long double __nextafterl(long double, long double) throw() __attribute__((__const__));
# 285 "/usr/include/bits/mathcalls.h" 3
extern "C" long double nexttowardl(long double, long double) throw() __attribute__((__const__)); extern "C" long double __nexttowardl(long double, long double) throw() __attribute__((__const__));
# 289 "/usr/include/bits/mathcalls.h" 3
extern "C" long double remainderl(long double, long double) throw(); extern "C" long double __remainderl(long double, long double) throw();
# 293 "/usr/include/bits/mathcalls.h" 3
extern "C" long double scalbnl(long double, int) throw(); extern "C" long double __scalbnl(long double, int) throw();
# 297 "/usr/include/bits/mathcalls.h" 3
extern "C" int ilogbl(long double) throw(); extern "C" int __ilogbl(long double) throw();
# 302 "/usr/include/bits/mathcalls.h" 3
extern "C" long double scalblnl(long double, long) throw(); extern "C" long double __scalblnl(long double, long) throw();
# 306 "/usr/include/bits/mathcalls.h" 3
extern "C" long double nearbyintl(long double) throw(); extern "C" long double __nearbyintl(long double) throw();
# 310 "/usr/include/bits/mathcalls.h" 3
extern "C" long double roundl(long double) throw() __attribute__((__const__)); extern "C" long double __roundl(long double) throw() __attribute__((__const__));
# 314 "/usr/include/bits/mathcalls.h" 3
extern "C" long double truncl(long double) throw() __attribute__((__const__)); extern "C" long double __truncl(long double) throw() __attribute__((__const__));
# 319 "/usr/include/bits/mathcalls.h" 3
extern "C" long double remquol(long double, long double, int *) throw(); extern "C" long double __remquol(long double, long double, int *) throw();
# 326 "/usr/include/bits/mathcalls.h" 3
extern "C" long lrintl(long double) throw(); extern "C" long __lrintl(long double) throw();
# 327 "/usr/include/bits/mathcalls.h" 3
extern "C" long long llrintl(long double) throw(); extern "C" long long __llrintl(long double) throw();
# 331 "/usr/include/bits/mathcalls.h" 3
extern "C" long lroundl(long double) throw(); extern "C" long __lroundl(long double) throw();
# 332 "/usr/include/bits/mathcalls.h" 3
extern "C" long long llroundl(long double) throw(); extern "C" long long __llroundl(long double) throw();
# 336 "/usr/include/bits/mathcalls.h" 3
extern "C" long double fdiml(long double, long double) throw(); extern "C" long double __fdiml(long double, long double) throw();
# 339 "/usr/include/bits/mathcalls.h" 3
extern "C" long double fmaxl(long double, long double) throw(); extern "C" long double __fmaxl(long double, long double) throw();
# 342 "/usr/include/bits/mathcalls.h" 3
extern "C" long double fminl(long double, long double) throw(); extern "C" long double __fminl(long double, long double) throw();
# 346 "/usr/include/bits/mathcalls.h" 3
extern "C" int __fpclassifyl(long double) throw() __attribute__((__const__));
# 350 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __signbitl(long double) throw() __attribute__((__const__));
# 355 "/usr/include/bits/mathcalls.h" 3
extern "C" long double fmal(long double, long double, long double) throw(); extern "C" long double __fmal(long double, long double, long double) throw();
# 364 "/usr/include/bits/mathcalls.h" 3
extern "C" long double scalbl(long double, long double) throw(); extern "C" long double __scalbl(long double, long double) throw();
# 161 "/usr/include/math.h" 3
extern "C" { extern int signgam; }
# 203 "/usr/include/math.h" 3
enum {
# 204 "/usr/include/math.h" 3
FP_NAN,
# 206 "/usr/include/math.h" 3
FP_INFINITE,
# 208 "/usr/include/math.h" 3
FP_ZERO,
# 210 "/usr/include/math.h" 3
FP_SUBNORMAL,
# 212 "/usr/include/math.h" 3
FP_NORMAL
# 214 "/usr/include/math.h" 3
};
# 302 "/usr/include/math.h" 3
extern "C" { typedef
# 296 "/usr/include/math.h" 3
enum {
# 297 "/usr/include/math.h" 3
_IEEE_ = (-1),
# 298 "/usr/include/math.h" 3
_SVID_ = 0,
# 299 "/usr/include/math.h" 3
_XOPEN_,
# 300 "/usr/include/math.h" 3
_POSIX_,
# 301 "/usr/include/math.h" 3
_ISOC_
# 302 "/usr/include/math.h" 3
} _LIB_VERSION_TYPE; }
# 307 "/usr/include/math.h" 3
extern "C" { extern _LIB_VERSION_TYPE _LIB_VERSION; }
# 318 "/usr/include/math.h" 3
extern "C" { struct __exception {
# 323 "/usr/include/math.h" 3
int type;
# 324 "/usr/include/math.h" 3
char *name;
# 325 "/usr/include/math.h" 3
double arg1;
# 326 "/usr/include/math.h" 3
double arg2;
# 327 "/usr/include/math.h" 3
double retval;
# 328 "/usr/include/math.h" 3
}; }
# 331 "/usr/include/math.h" 3
extern "C" int matherr(__exception *) throw();
# 67 "/usr/include/bits/waitstatus.h" 3
extern "C" { union wait {
# 69 "/usr/include/bits/waitstatus.h" 3
int w_status;
# 71 "/usr/include/bits/waitstatus.h" 3
struct {
# 73 "/usr/include/bits/waitstatus.h" 3
unsigned __w_termsig:7;
# 74 "/usr/include/bits/waitstatus.h" 3
unsigned __w_coredump:1;
# 75 "/usr/include/bits/waitstatus.h" 3
unsigned __w_retcode:8;
# 76 "/usr/include/bits/waitstatus.h" 3
unsigned:16;
# 84 "/usr/include/bits/waitstatus.h" 3
} __wait_terminated;
# 86 "/usr/include/bits/waitstatus.h" 3
struct {
# 88 "/usr/include/bits/waitstatus.h" 3
unsigned __w_stopval:8;
# 89 "/usr/include/bits/waitstatus.h" 3
unsigned __w_stopsig:8;
# 90 "/usr/include/bits/waitstatus.h" 3
unsigned:16;
# 97 "/usr/include/bits/waitstatus.h" 3
} __wait_stopped;
# 98 "/usr/include/bits/waitstatus.h" 3
}; }
# 102 "/usr/include/stdlib.h" 3
extern "C" { typedef
# 99 "/usr/include/stdlib.h" 3
struct {
# 100 "/usr/include/stdlib.h" 3
int quot;
# 101 "/usr/include/stdlib.h" 3
int rem;
# 102 "/usr/include/stdlib.h" 3
} div_t; }
# 110 "/usr/include/stdlib.h" 3
extern "C" { typedef
# 107 "/usr/include/stdlib.h" 3
struct {
# 108 "/usr/include/stdlib.h" 3
long quot;
# 109 "/usr/include/stdlib.h" 3
long rem;
# 110 "/usr/include/stdlib.h" 3
} ldiv_t; }
# 122 "/usr/include/stdlib.h" 3
extern "C" { typedef
# 119 "/usr/include/stdlib.h" 3
struct {
# 120 "/usr/include/stdlib.h" 3
long long quot;
# 121 "/usr/include/stdlib.h" 3
long long rem;
# 122 "/usr/include/stdlib.h" 3
} lldiv_t; }
# 140 "/usr/include/stdlib.h" 3
extern "C" size_t __ctype_get_mb_cur_max() throw();
# 145 "/usr/include/stdlib.h" 3
extern "C" double atof(const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1)));
# 148 "/usr/include/stdlib.h" 3
extern "C" int atoi(const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1)));
# 151 "/usr/include/stdlib.h" 3
extern "C" long atol(const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1)));
# 158 "/usr/include/stdlib.h" 3
extern "C" long long atoll(const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1)));
# 165 "/usr/include/stdlib.h" 3
extern "C" double strtod(const char *__restrict__, char **__restrict__) throw() __attribute__((nonnull(1)));
# 173 "/usr/include/stdlib.h" 3
extern "C" float strtof(const char *__restrict__, char **__restrict__) throw() __attribute__((nonnull(1)));
# 176 "/usr/include/stdlib.h" 3
extern "C" long double strtold(const char *__restrict__, char **__restrict__) throw() __attribute__((nonnull(1)));
# 184 "/usr/include/stdlib.h" 3
extern "C" long strtol(const char *__restrict__, char **__restrict__, int) throw() __attribute__((nonnull(1)));
# 188 "/usr/include/stdlib.h" 3
extern "C" unsigned long strtoul(const char *__restrict__, char **__restrict__, int) throw() __attribute__((nonnull(1)));
# 196 "/usr/include/stdlib.h" 3
extern "C" long long strtoq(const char *__restrict__, char **__restrict__, int) throw() __attribute__((nonnull(1)));
# 201 "/usr/include/stdlib.h" 3
extern "C" unsigned long long strtouq(const char *__restrict__, char **__restrict__, int) throw() __attribute__((nonnull(1)));
# 210 "/usr/include/stdlib.h" 3
extern "C" long long strtoll(const char *__restrict__, char **__restrict__, int) throw() __attribute__((nonnull(1)));
# 215 "/usr/include/stdlib.h" 3
extern "C" unsigned long long strtoull(const char *__restrict__, char **__restrict__, int) throw() __attribute__((nonnull(1)));
# 240 "/usr/include/stdlib.h" 3
extern "C" long strtol_l(const char *__restrict__, char **__restrict__, int, __locale_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(4)));
# 244 "/usr/include/stdlib.h" 3
extern "C" unsigned long strtoul_l(const char *__restrict__, char **__restrict__, int, __locale_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(4)));
# 250 "/usr/include/stdlib.h" 3
extern "C" long long strtoll_l(const char *__restrict__, char **__restrict__, int, __locale_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(4)));
# 256 "/usr/include/stdlib.h" 3
extern "C" unsigned long long strtoull_l(const char *__restrict__, char **__restrict__, int, __locale_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(4)));
# 261 "/usr/include/stdlib.h" 3
extern "C" double strtod_l(const char *__restrict__, char **__restrict__, __locale_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(3)));
# 265 "/usr/include/stdlib.h" 3
extern "C" float strtof_l(const char *__restrict__, char **__restrict__, __locale_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(3)));
# 269 "/usr/include/stdlib.h" 3
extern "C" long double strtold_l(const char *__restrict__, char **__restrict__, __locale_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(3)));
# 311 "/usr/include/stdlib.h" 3
extern "C" char *l64a(long) throw();
# 314 "/usr/include/stdlib.h" 3
extern "C" long a64l(const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1)));
# 34 "/usr/include/sys/types.h" 3
extern "C" { typedef __u_char u_char; }
# 35 "/usr/include/sys/types.h" 3
extern "C" { typedef __u_short u_short; }
# 36 "/usr/include/sys/types.h" 3
extern "C" { typedef __u_int u_int; }
# 37 "/usr/include/sys/types.h" 3
extern "C" { typedef __u_long u_long; }
# 38 "/usr/include/sys/types.h" 3
extern "C" { typedef __quad_t quad_t; }
# 39 "/usr/include/sys/types.h" 3
extern "C" { typedef __u_quad_t u_quad_t; }
# 40 "/usr/include/sys/types.h" 3
extern "C" { typedef __fsid_t fsid_t; }
# 45 "/usr/include/sys/types.h" 3
extern "C" { typedef __loff_t loff_t; }
# 49 "/usr/include/sys/types.h" 3
extern "C" { typedef __ino_t ino_t; }
# 56 "/usr/include/sys/types.h" 3
extern "C" { typedef __ino64_t ino64_t; }
# 61 "/usr/include/sys/types.h" 3
extern "C" { typedef __dev_t dev_t; }
# 66 "/usr/include/sys/types.h" 3
extern "C" { typedef __gid_t gid_t; }
# 71 "/usr/include/sys/types.h" 3
extern "C" { typedef __mode_t mode_t; }
# 76 "/usr/include/sys/types.h" 3
extern "C" { typedef __nlink_t nlink_t; }
# 81 "/usr/include/sys/types.h" 3
extern "C" { typedef __uid_t uid_t; }
# 87 "/usr/include/sys/types.h" 3
extern "C" { typedef __off_t off_t; }
# 94 "/usr/include/sys/types.h" 3
extern "C" { typedef __off64_t off64_t; }
# 105 "/usr/include/sys/types.h" 3
extern "C" { typedef __id_t id_t; }
# 110 "/usr/include/sys/types.h" 3
extern "C" { typedef __ssize_t ssize_t; }
# 116 "/usr/include/sys/types.h" 3
extern "C" { typedef __daddr_t daddr_t; }
# 117 "/usr/include/sys/types.h" 3
extern "C" { typedef __caddr_t caddr_t; }
# 123 "/usr/include/sys/types.h" 3
extern "C" { typedef __key_t key_t; }
# 137 "/usr/include/sys/types.h" 3
extern "C" { typedef __useconds_t useconds_t; }
# 141 "/usr/include/sys/types.h" 3
extern "C" { typedef __suseconds_t suseconds_t; }
# 151 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned long ulong; }
# 152 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned short ushort; }
# 153 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned uint; }
# 195 "/usr/include/sys/types.h" 3
extern "C" { typedef signed char int8_t; }
# 196 "/usr/include/sys/types.h" 3
extern "C" { typedef short int16_t; }
# 197 "/usr/include/sys/types.h" 3
extern "C" { typedef int int32_t; }
# 198 "/usr/include/sys/types.h" 3
extern "C" { typedef long int64_t; }
# 201 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned char u_int8_t; }
# 202 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned short u_int16_t; }
# 203 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned u_int32_t; }
# 204 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned long u_int64_t; }
# 206 "/usr/include/sys/types.h" 3
extern "C" { typedef int register_t; }
# 24 "/usr/include/bits/sigset.h" 3
extern "C" { typedef int __sig_atomic_t; }
# 32 "/usr/include/bits/sigset.h" 3
extern "C" { typedef
# 30 "/usr/include/bits/sigset.h" 3
struct {
# 31 "/usr/include/bits/sigset.h" 3
unsigned long __val[((1024) / ((8) * sizeof(unsigned long)))];
# 32 "/usr/include/bits/sigset.h" 3
} __sigset_t; }
# 38 "/usr/include/sys/select.h" 3
extern "C" { typedef __sigset_t sigset_t; }
# 75 "/usr/include/bits/time.h" 3
extern "C" { struct timeval {
# 77 "/usr/include/bits/time.h" 3
__time_t tv_sec;
# 78 "/usr/include/bits/time.h" 3
__suseconds_t tv_usec;
# 79 "/usr/include/bits/time.h" 3
}; }
# 55 "/usr/include/sys/select.h" 3
extern "C" { typedef long __fd_mask; }
# 78 "/usr/include/sys/select.h" 3
extern "C" { typedef
# 68 "/usr/include/sys/select.h" 3
struct {
# 72 "/usr/include/sys/select.h" 3
__fd_mask fds_bits[(1024 / (8 * ((int)sizeof(__fd_mask))))];
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
# 34 "/usr/include/sys/sysmacros.h" 3
extern "C" unsigned gnu_dev_minor(unsigned long long) throw();
# 37 "/usr/include/sys/sysmacros.h" 3
extern "C" unsigned long long gnu_dev_makedev(unsigned, unsigned) throw();
# 229 "/usr/include/sys/types.h" 3
extern "C" { typedef __blksize_t blksize_t; }
# 236 "/usr/include/sys/types.h" 3
extern "C" { typedef __blkcnt_t blkcnt_t; }
# 240 "/usr/include/sys/types.h" 3
extern "C" { typedef __fsblkcnt_t fsblkcnt_t; }
# 244 "/usr/include/sys/types.h" 3
extern "C" { typedef __fsfilcnt_t fsfilcnt_t; }
# 263 "/usr/include/sys/types.h" 3
extern "C" { typedef __blkcnt64_t blkcnt64_t; }
# 264 "/usr/include/sys/types.h" 3
extern "C" { typedef __fsblkcnt64_t fsblkcnt64_t; }
# 265 "/usr/include/sys/types.h" 3
extern "C" { typedef __fsfilcnt64_t fsfilcnt64_t; }
# 50 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef unsigned long pthread_t; }
# 57 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 54 "/usr/include/bits/pthreadtypes.h" 3
union {
# 55 "/usr/include/bits/pthreadtypes.h" 3
char __size[56];
# 56 "/usr/include/bits/pthreadtypes.h" 3
long __align;
# 57 "/usr/include/bits/pthreadtypes.h" 3
} pthread_attr_t; }
# 65 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 61 "/usr/include/bits/pthreadtypes.h" 3
struct __pthread_internal_list {
# 63 "/usr/include/bits/pthreadtypes.h" 3
__pthread_internal_list *__prev;
# 64 "/usr/include/bits/pthreadtypes.h" 3
__pthread_internal_list *__next;
# 65 "/usr/include/bits/pthreadtypes.h" 3
} __pthread_list_t; }
# 104 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 77 "/usr/include/bits/pthreadtypes.h" 3
union {
# 78 "/usr/include/bits/pthreadtypes.h" 3
struct __pthread_mutex_s {
# 80 "/usr/include/bits/pthreadtypes.h" 3
int __lock;
# 81 "/usr/include/bits/pthreadtypes.h" 3
unsigned __count;
# 82 "/usr/include/bits/pthreadtypes.h" 3
int __owner;
# 84 "/usr/include/bits/pthreadtypes.h" 3
unsigned __nusers;
# 88 "/usr/include/bits/pthreadtypes.h" 3
int __kind;
# 90 "/usr/include/bits/pthreadtypes.h" 3
int __spins;
# 91 "/usr/include/bits/pthreadtypes.h" 3
__pthread_list_t __list;
# 101 "/usr/include/bits/pthreadtypes.h" 3
} __data;
# 102 "/usr/include/bits/pthreadtypes.h" 3
char __size[40];
# 103 "/usr/include/bits/pthreadtypes.h" 3
long __align;
# 104 "/usr/include/bits/pthreadtypes.h" 3
} pthread_mutex_t; }
# 110 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 107 "/usr/include/bits/pthreadtypes.h" 3
union {
# 108 "/usr/include/bits/pthreadtypes.h" 3
char __size[4];
# 109 "/usr/include/bits/pthreadtypes.h" 3
int __align;
# 110 "/usr/include/bits/pthreadtypes.h" 3
} pthread_mutexattr_t; }
# 130 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 116 "/usr/include/bits/pthreadtypes.h" 3
union {
# 118 "/usr/include/bits/pthreadtypes.h" 3
struct {
# 119 "/usr/include/bits/pthreadtypes.h" 3
int __lock;
# 120 "/usr/include/bits/pthreadtypes.h" 3
unsigned __futex;
# 121 "/usr/include/bits/pthreadtypes.h" 3
__extension__ unsigned long long __total_seq;
# 122 "/usr/include/bits/pthreadtypes.h" 3
__extension__ unsigned long long __wakeup_seq;
# 123 "/usr/include/bits/pthreadtypes.h" 3
__extension__ unsigned long long __woken_seq;
# 124 "/usr/include/bits/pthreadtypes.h" 3
void *__mutex;
# 125 "/usr/include/bits/pthreadtypes.h" 3
unsigned __nwaiters;
# 126 "/usr/include/bits/pthreadtypes.h" 3
unsigned __broadcast_seq;
# 127 "/usr/include/bits/pthreadtypes.h" 3
} __data;
# 128 "/usr/include/bits/pthreadtypes.h" 3
char __size[48];
# 129 "/usr/include/bits/pthreadtypes.h" 3
__extension__ long long __align;
# 130 "/usr/include/bits/pthreadtypes.h" 3
} pthread_cond_t; }
# 136 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 133 "/usr/include/bits/pthreadtypes.h" 3
union {
# 134 "/usr/include/bits/pthreadtypes.h" 3
char __size[4];
# 135 "/usr/include/bits/pthreadtypes.h" 3
int __align;
# 136 "/usr/include/bits/pthreadtypes.h" 3
} pthread_condattr_t; }
# 140 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef unsigned pthread_key_t; }
# 144 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef int pthread_once_t; }
# 189 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 151 "/usr/include/bits/pthreadtypes.h" 3
union {
# 154 "/usr/include/bits/pthreadtypes.h" 3
struct {
# 155 "/usr/include/bits/pthreadtypes.h" 3
int __lock;
# 156 "/usr/include/bits/pthreadtypes.h" 3
unsigned __nr_readers;
# 157 "/usr/include/bits/pthreadtypes.h" 3
unsigned __readers_wakeup;
# 158 "/usr/include/bits/pthreadtypes.h" 3
unsigned __writer_wakeup;
# 159 "/usr/include/bits/pthreadtypes.h" 3
unsigned __nr_readers_queued;
# 160 "/usr/include/bits/pthreadtypes.h" 3
unsigned __nr_writers_queued;
# 161 "/usr/include/bits/pthreadtypes.h" 3
int __writer;
# 162 "/usr/include/bits/pthreadtypes.h" 3
int __shared;
# 163 "/usr/include/bits/pthreadtypes.h" 3
unsigned long __pad1;
# 164 "/usr/include/bits/pthreadtypes.h" 3
unsigned long __pad2;
# 167 "/usr/include/bits/pthreadtypes.h" 3
unsigned __flags;
# 168 "/usr/include/bits/pthreadtypes.h" 3
} __data;
# 187 "/usr/include/bits/pthreadtypes.h" 3
char __size[56];
# 188 "/usr/include/bits/pthreadtypes.h" 3
long __align;
# 189 "/usr/include/bits/pthreadtypes.h" 3
} pthread_rwlock_t; }
# 195 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 192 "/usr/include/bits/pthreadtypes.h" 3
union {
# 193 "/usr/include/bits/pthreadtypes.h" 3
char __size[8];
# 194 "/usr/include/bits/pthreadtypes.h" 3
long __align;
# 195 "/usr/include/bits/pthreadtypes.h" 3
} pthread_rwlockattr_t; }
# 201 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef volatile int pthread_spinlock_t; }
# 210 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 207 "/usr/include/bits/pthreadtypes.h" 3
union {
# 208 "/usr/include/bits/pthreadtypes.h" 3
char __size[32];
# 209 "/usr/include/bits/pthreadtypes.h" 3
long __align;
# 210 "/usr/include/bits/pthreadtypes.h" 3
} pthread_barrier_t; }
# 216 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 213 "/usr/include/bits/pthreadtypes.h" 3
union {
# 214 "/usr/include/bits/pthreadtypes.h" 3
char __size[4];
# 215 "/usr/include/bits/pthreadtypes.h" 3
int __align;
# 216 "/usr/include/bits/pthreadtypes.h" 3
} pthread_barrierattr_t; }
# 327 "/usr/include/stdlib.h" 3
extern "C" long random() throw();
# 330 "/usr/include/stdlib.h" 3
extern "C" void srandom(unsigned) throw();
# 336 "/usr/include/stdlib.h" 3
extern "C" char *initstate(unsigned, char *, size_t) throw() __attribute__((nonnull(2)));
# 341 "/usr/include/stdlib.h" 3
extern "C" char *setstate(char *) throw() __attribute__((nonnull(1)));
# 349 "/usr/include/stdlib.h" 3
extern "C" { struct random_data {
# 351 "/usr/include/stdlib.h" 3
int32_t *fptr;
# 352 "/usr/include/stdlib.h" 3
int32_t *rptr;
# 353 "/usr/include/stdlib.h" 3
int32_t *state;
# 354 "/usr/include/stdlib.h" 3
int rand_type;
# 355 "/usr/include/stdlib.h" 3
int rand_deg;
# 356 "/usr/include/stdlib.h" 3
int rand_sep;
# 357 "/usr/include/stdlib.h" 3
int32_t *end_ptr;
# 358 "/usr/include/stdlib.h" 3
}; }
# 360 "/usr/include/stdlib.h" 3
extern "C" int random_r(random_data *__restrict__, int32_t *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 363 "/usr/include/stdlib.h" 3
extern "C" int srandom_r(unsigned, random_data *) throw() __attribute__((nonnull(2)));
# 366 "/usr/include/stdlib.h" 3
extern "C" int initstate_r(unsigned, char *__restrict__, size_t, random_data *__restrict__) throw() __attribute__((nonnull(2))) __attribute__((nonnull(4)));
# 371 "/usr/include/stdlib.h" 3
extern "C" int setstate_r(char *__restrict__, random_data *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 380 "/usr/include/stdlib.h" 3
extern "C" int rand() throw();
# 382 "/usr/include/stdlib.h" 3
extern "C" void srand(unsigned) throw();
# 387 "/usr/include/stdlib.h" 3
extern "C" int rand_r(unsigned *) throw();
# 395 "/usr/include/stdlib.h" 3
extern "C" double drand48() throw();
# 396 "/usr/include/stdlib.h" 3
extern "C" double erand48(unsigned short [3]) throw() __attribute__((nonnull(1)));
# 399 "/usr/include/stdlib.h" 3
extern "C" long lrand48() throw();
# 400 "/usr/include/stdlib.h" 3
extern "C" long nrand48(unsigned short [3]) throw() __attribute__((nonnull(1)));
# 404 "/usr/include/stdlib.h" 3
extern "C" long mrand48() throw();
# 405 "/usr/include/stdlib.h" 3
extern "C" long jrand48(unsigned short [3]) throw() __attribute__((nonnull(1)));
# 409 "/usr/include/stdlib.h" 3
extern "C" void srand48(long) throw();
# 410 "/usr/include/stdlib.h" 3
extern "C" unsigned short *seed48(unsigned short [3]) throw() __attribute__((nonnull(1)));
# 412 "/usr/include/stdlib.h" 3
extern "C" void lcong48(unsigned short [7]) throw() __attribute__((nonnull(1)));
# 418 "/usr/include/stdlib.h" 3
extern "C" { struct drand48_data {
# 420 "/usr/include/stdlib.h" 3
unsigned short __x[3];
# 421 "/usr/include/stdlib.h" 3
unsigned short __old_x[3];
# 422 "/usr/include/stdlib.h" 3
unsigned short __c;
# 423 "/usr/include/stdlib.h" 3
unsigned short __init;
# 424 "/usr/include/stdlib.h" 3
unsigned long long __a;
# 425 "/usr/include/stdlib.h" 3
}; }
# 428 "/usr/include/stdlib.h" 3
extern "C" int drand48_r(drand48_data *__restrict__, double *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 430 "/usr/include/stdlib.h" 3
extern "C" int erand48_r(unsigned short [3], drand48_data *__restrict__, double *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 435 "/usr/include/stdlib.h" 3
extern "C" int lrand48_r(drand48_data *__restrict__, long *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 438 "/usr/include/stdlib.h" 3
extern "C" int nrand48_r(unsigned short [3], drand48_data *__restrict__, long *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 444 "/usr/include/stdlib.h" 3
extern "C" int mrand48_r(drand48_data *__restrict__, long *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 447 "/usr/include/stdlib.h" 3
extern "C" int jrand48_r(unsigned short [3], drand48_data *__restrict__, long *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 453 "/usr/include/stdlib.h" 3
extern "C" int srand48_r(long, drand48_data *) throw() __attribute__((nonnull(2)));
# 456 "/usr/include/stdlib.h" 3
extern "C" int seed48_r(unsigned short [3], drand48_data *) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 459 "/usr/include/stdlib.h" 3
extern "C" int lcong48_r(unsigned short [7], drand48_data *) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 471 "/usr/include/stdlib.h" 3
extern "C" void *malloc(size_t) throw() __attribute__((__malloc__));
# 473 "/usr/include/stdlib.h" 3
extern "C" void *calloc(size_t, size_t) throw() __attribute__((__malloc__));
# 485 "/usr/include/stdlib.h" 3
extern "C" void *realloc(void *, size_t) throw() __attribute__((__warn_unused_result__));
# 488 "/usr/include/stdlib.h" 3
extern "C" void free(void *) throw();
# 493 "/usr/include/stdlib.h" 3
extern "C" void cfree(void *) throw();
# 33 "/usr/include/alloca.h" 3
extern "C" void *alloca(size_t) throw();
# 503 "/usr/include/stdlib.h" 3
extern "C" void *valloc(size_t) throw() __attribute__((__malloc__));
# 508 "/usr/include/stdlib.h" 3
extern "C" int posix_memalign(void **, size_t, size_t) throw() __attribute__((nonnull(1)));
# 514 "/usr/include/stdlib.h" 3
extern "C" void abort() throw() __attribute__((__noreturn__));
# 518 "/usr/include/stdlib.h" 3
extern "C" int atexit(void (*)(void)) throw() __attribute__((nonnull(1)));
# 525 "/usr/include/stdlib.h" 3
int at_quick_exit(void (*)(void)) throw() __asm__("at_quick_exit") __attribute__((nonnull(1)));
# 536 "/usr/include/stdlib.h" 3
extern "C" int on_exit(void (*)(int, void *), void *) throw() __attribute__((nonnull(1)));
# 544 "/usr/include/stdlib.h" 3
extern "C" void exit(int) throw() __attribute__((__noreturn__));
# 552 "/usr/include/stdlib.h" 3
extern "C" void quick_exit(int) throw() __attribute__((__noreturn__));
# 560 "/usr/include/stdlib.h" 3
extern "C" void _Exit(int) throw() __attribute__((__noreturn__));
# 567 "/usr/include/stdlib.h" 3
extern "C" char *getenv(const char *) throw() __attribute__((nonnull(1)));
# 572 "/usr/include/stdlib.h" 3
extern "C" char *__secure_getenv(const char *) throw() __attribute__((nonnull(1)));
# 579 "/usr/include/stdlib.h" 3
extern "C" int putenv(char *) throw() __attribute__((nonnull(1)));
# 585 "/usr/include/stdlib.h" 3
extern "C" int setenv(const char *, const char *, int) throw() __attribute__((nonnull(2)));
# 589 "/usr/include/stdlib.h" 3
extern "C" int unsetenv(const char *) throw() __attribute__((nonnull(1)));
# 596 "/usr/include/stdlib.h" 3
extern "C" int clearenv() throw();
# 606 "/usr/include/stdlib.h" 3
extern "C" char *mktemp(char *) throw() __attribute__((nonnull(1)));
# 620 "/usr/include/stdlib.h" 3
extern "C" int mkstemp(char *) __attribute__((nonnull(1)));
# 630 "/usr/include/stdlib.h" 3
extern "C" int mkstemp64(char *) __attribute__((nonnull(1)));
# 642 "/usr/include/stdlib.h" 3
extern "C" int mkstemps(char *, int) __attribute__((nonnull(1)));
# 652 "/usr/include/stdlib.h" 3
extern "C" int mkstemps64(char *, int) __attribute__((nonnull(1)));
# 663 "/usr/include/stdlib.h" 3
extern "C" char *mkdtemp(char *) throw() __attribute__((nonnull(1)));
# 674 "/usr/include/stdlib.h" 3
extern "C" int mkostemp(char *, int) __attribute__((nonnull(1)));
# 684 "/usr/include/stdlib.h" 3
extern "C" int mkostemp64(char *, int) __attribute__((nonnull(1)));
# 694 "/usr/include/stdlib.h" 3
extern "C" int mkostemps(char *, int, int) __attribute__((nonnull(1)));
# 706 "/usr/include/stdlib.h" 3
extern "C" int mkostemps64(char *, int, int) __attribute__((nonnull(1)));
# 717 "/usr/include/stdlib.h" 3
extern "C" int system(const char *);
# 724 "/usr/include/stdlib.h" 3
extern "C" char *canonicalize_file_name(const char *) throw() __attribute__((nonnull(1)));
# 734 "/usr/include/stdlib.h" 3
extern "C" char *realpath(const char *__restrict__, char *__restrict__) throw();
# 742 "/usr/include/stdlib.h" 3
extern "C" { typedef int (*__compar_fn_t)(const void *, const void *); }
# 745 "/usr/include/stdlib.h" 3
extern "C" { typedef __compar_fn_t comparison_fn_t; }
# 749 "/usr/include/stdlib.h" 3
extern "C" { typedef int (*__compar_d_fn_t)(const void *, const void *, void *); }
# 755 "/usr/include/stdlib.h" 3
extern "C" void *bsearch(const void *, const void *, size_t, size_t, __compar_fn_t) __attribute__((nonnull(1))) __attribute__((nonnull(2))) __attribute__((nonnull(5)));
# 761 "/usr/include/stdlib.h" 3
extern "C" void qsort(void *, size_t, size_t, __compar_fn_t) __attribute__((nonnull(1))) __attribute__((nonnull(4)));
# 764 "/usr/include/stdlib.h" 3
extern "C" void qsort_r(void *, size_t, size_t, __compar_d_fn_t, void *) __attribute__((nonnull(1))) __attribute__((nonnull(4)));
# 771 "/usr/include/stdlib.h" 3
extern "C" __attribute__((weak)) int abs(int) throw() __attribute__((__const__));
# 772 "/usr/include/stdlib.h" 3
extern "C" __attribute__((weak)) long labs(long) throw() __attribute__((__const__));
# 776 "/usr/include/stdlib.h" 3
extern "C" __attribute__((weak)) long long llabs(long long) throw() __attribute__((__const__));
# 785 "/usr/include/stdlib.h" 3
extern "C" div_t div(int, int) throw() __attribute__((__const__));
# 787 "/usr/include/stdlib.h" 3
extern "C" ldiv_t ldiv(long, long) throw() __attribute__((__const__));
# 793 "/usr/include/stdlib.h" 3
extern "C" lldiv_t lldiv(long long, long long) throw() __attribute__((__const__));
# 808 "/usr/include/stdlib.h" 3
extern "C" char *ecvt(double, int, int *__restrict__, int *__restrict__) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4)));
# 814 "/usr/include/stdlib.h" 3
extern "C" char *fcvt(double, int, int *__restrict__, int *__restrict__) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4)));
# 820 "/usr/include/stdlib.h" 3
extern "C" char *gcvt(double, int, char *) throw() __attribute__((nonnull(3)));
# 826 "/usr/include/stdlib.h" 3
extern "C" char *qecvt(long double, int, int *__restrict__, int *__restrict__) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4)));
# 829 "/usr/include/stdlib.h" 3
extern "C" char *qfcvt(long double, int, int *__restrict__, int *__restrict__) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4)));
# 832 "/usr/include/stdlib.h" 3
extern "C" char *qgcvt(long double, int, char *) throw() __attribute__((nonnull(3)));
# 838 "/usr/include/stdlib.h" 3
extern "C" int ecvt_r(double, int, int *__restrict__, int *__restrict__, char *__restrict__, size_t) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4))) __attribute__((nonnull(5)));
# 841 "/usr/include/stdlib.h" 3
extern "C" int fcvt_r(double, int, int *__restrict__, int *__restrict__, char *__restrict__, size_t) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4))) __attribute__((nonnull(5)));
# 845 "/usr/include/stdlib.h" 3
extern "C" int qecvt_r(long double, int, int *__restrict__, int *__restrict__, char *__restrict__, size_t) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4))) __attribute__((nonnull(5)));
# 849 "/usr/include/stdlib.h" 3
extern "C" int qfcvt_r(long double, int, int *__restrict__, int *__restrict__, char *__restrict__, size_t) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4))) __attribute__((nonnull(5)));
# 860 "/usr/include/stdlib.h" 3
extern "C" int mblen(const char *, size_t) throw();
# 863 "/usr/include/stdlib.h" 3
extern "C" int mbtowc(wchar_t *__restrict__, const char *__restrict__, size_t) throw();
# 867 "/usr/include/stdlib.h" 3
extern "C" int wctomb(char *, wchar_t) throw();
# 871 "/usr/include/stdlib.h" 3
extern "C" size_t mbstowcs(wchar_t *__restrict__, const char *__restrict__, size_t) throw();
# 874 "/usr/include/stdlib.h" 3
extern "C" size_t wcstombs(char *__restrict__, const wchar_t *__restrict__, size_t) throw();
# 885 "/usr/include/stdlib.h" 3
extern "C" int rpmatch(const char *) throw() __attribute__((nonnull(1)));
# 896 "/usr/include/stdlib.h" 3
extern "C" int getsubopt(char **__restrict__, char *const *__restrict__, char **__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2))) __attribute__((nonnull(3)));
# 905 "/usr/include/stdlib.h" 3
extern "C" void setkey(const char *) throw() __attribute__((nonnull(1)));
# 913 "/usr/include/stdlib.h" 3
extern "C" int posix_openpt(int);
# 921 "/usr/include/stdlib.h" 3
extern "C" int grantpt(int) throw();
# 925 "/usr/include/stdlib.h" 3
extern "C" int unlockpt(int) throw();
# 930 "/usr/include/stdlib.h" 3
extern "C" char *ptsname(int) throw();
# 937 "/usr/include/stdlib.h" 3
extern "C" int ptsname_r(int, char *, size_t) throw() __attribute__((nonnull(2)));
# 941 "/usr/include/stdlib.h" 3
extern "C" int getpt();
# 948 "/usr/include/stdlib.h" 3
extern "C" int getloadavg(double [], int) throw() __attribute__((nonnull(1)));
# 69 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
namespace __gnu_cxx __attribute__((visibility("default"))) {
# 71 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Iterator, class _Container> class __normal_iterator;
# 74 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
}
# 76 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
namespace std __attribute__((visibility("default"))) {
# 78 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __true_type { };
# 79 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __false_type { };
# 81 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< bool __T0>
# 82 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __truth_type {
# 83 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type; };
# 86 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __truth_type< true> {
# 87 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type; };
# 91 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Sp, class _Tp>
# 92 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __traitor {
# 94 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = (((bool)_Sp::__value) || ((bool)_Tp::__value))};
# 95 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef typename __truth_type< __value> ::__type __type;
# 96 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 99 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class , class >
# 100 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __are_same {
# 102 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 103 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 104 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 106 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 107 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __are_same< _Tp, _Tp> {
# 109 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 110 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 111 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 114 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 115 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_void {
# 117 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 118 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 119 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 122 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_void< void> {
# 124 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 125 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 126 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 131 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 132 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_integer {
# 134 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 135 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 136 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 142 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< bool> {
# 144 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 145 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 146 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 149 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< char> {
# 151 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 152 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 153 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 156 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< signed char> {
# 158 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 159 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 160 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 163 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< unsigned char> {
# 165 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 166 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 167 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 171 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< wchar_t> {
# 173 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 174 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 175 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 195 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< short> {
# 197 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 198 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 199 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 202 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< unsigned short> {
# 204 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 205 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 206 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 209 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< int> {
# 211 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 212 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 213 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 216 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< unsigned> {
# 218 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 219 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 220 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 223 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< long> {
# 225 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 226 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 227 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 230 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< unsigned long> {
# 232 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 233 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 234 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 237 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< long long> {
# 239 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 240 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 241 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 244 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< unsigned long long> {
# 246 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 247 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 248 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 253 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 254 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_floating {
# 256 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 257 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 258 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 262 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_floating< float> {
# 264 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 265 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 266 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 269 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_floating< double> {
# 271 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 272 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 273 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 276 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_floating< long double> {
# 278 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 279 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 280 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 285 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 286 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_pointer {
# 288 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 289 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 290 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 292 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 293 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_pointer< _Tp *> {
# 295 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 296 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 297 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 302 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 303 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_normal_iterator {
# 305 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 306 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 307 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 309 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Iterator, class _Container>
# 310 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_normal_iterator< __gnu_cxx::__normal_iterator< _Iterator, _Container> > {
# 313 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 314 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 315 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 320 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 321 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_arithmetic : public __traitor< __is_integer< _Tp> , __is_floating< _Tp> > {
# 323 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 328 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 329 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_fundamental : public __traitor< __is_void< _Tp> , __is_arithmetic< _Tp> > {
# 331 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 336 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 337 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_scalar : public __traitor< __is_arithmetic< _Tp> , __is_pointer< _Tp> > {
# 339 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 344 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 345 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_char {
# 347 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 348 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 349 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 352 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_char< char> {
# 354 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 355 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 356 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 360 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_char< wchar_t> {
# 362 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 363 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 364 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 367 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 368 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_byte {
# 370 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 371 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 372 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 375 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_byte< char> {
# 377 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 378 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 379 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 382 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_byte< signed char> {
# 384 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 385 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 386 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 389 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_byte< unsigned char> {
# 391 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 392 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 393 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 398 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 399 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_move_iterator {
# 401 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 402 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 403 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 417 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
}
# 37 "/usr/include/c++/4.4/ext/type_traits.h" 3
namespace __gnu_cxx __attribute__((visibility("default"))) {
# 40 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< bool __T1, class >
# 41 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __enable_if {
# 42 "/usr/include/c++/4.4/ext/type_traits.h" 3
};
# 44 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Tp>
# 45 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __enable_if< true, _Tp> {
# 46 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef _Tp __type; };
# 50 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< bool _Cond, class _Iftrue, class _Iffalse>
# 51 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __conditional_type {
# 52 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef _Iftrue __type; };
# 54 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Iftrue, class _Iffalse>
# 55 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __conditional_type< false, _Iftrue, _Iffalse> {
# 56 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef _Iffalse __type; };
# 60 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Tp>
# 61 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __add_unsigned {
# 64 "/usr/include/c++/4.4/ext/type_traits.h" 3
private: typedef __enable_if< std::__is_integer< _Tp> ::__value, _Tp> __if_type;
# 67 "/usr/include/c++/4.4/ext/type_traits.h" 3
public: typedef typename __enable_if< std::__is_integer< _Tp> ::__value, _Tp> ::__type __type;
# 68 "/usr/include/c++/4.4/ext/type_traits.h" 3
};
# 71 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __add_unsigned< char> {
# 72 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef unsigned char __type; };
# 75 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __add_unsigned< signed char> {
# 76 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef unsigned char __type; };
# 79 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __add_unsigned< short> {
# 80 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef unsigned short __type; };
# 83 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __add_unsigned< int> {
# 84 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef unsigned __type; };
# 87 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __add_unsigned< long> {
# 88 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef unsigned long __type; };
# 91 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __add_unsigned< long long> {
# 92 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef unsigned long long __type; };
# 96 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __add_unsigned< bool> ;
# 99 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __add_unsigned< wchar_t> ;
# 103 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Tp>
# 104 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __remove_unsigned {
# 107 "/usr/include/c++/4.4/ext/type_traits.h" 3
private: typedef __enable_if< std::__is_integer< _Tp> ::__value, _Tp> __if_type;
# 110 "/usr/include/c++/4.4/ext/type_traits.h" 3
public: typedef typename __enable_if< std::__is_integer< _Tp> ::__value, _Tp> ::__type __type;
# 111 "/usr/include/c++/4.4/ext/type_traits.h" 3
};
# 114 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __remove_unsigned< char> {
# 115 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef signed char __type; };
# 118 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __remove_unsigned< unsigned char> {
# 119 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef signed char __type; };
# 122 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __remove_unsigned< unsigned short> {
# 123 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef short __type; };
# 126 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __remove_unsigned< unsigned> {
# 127 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef int __type; };
# 130 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __remove_unsigned< unsigned long> {
# 131 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef long __type; };
# 134 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __remove_unsigned< unsigned long long> {
# 135 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef long long __type; };
# 139 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __remove_unsigned< bool> ;
# 142 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __remove_unsigned< wchar_t> ;
# 146 "/usr/include/c++/4.4/ext/type_traits.h" 3
template < typename _Type >
    inline bool
    __is_null_pointer ( _Type * __ptr )
    { return __ptr == 0; }
# 151 "/usr/include/c++/4.4/ext/type_traits.h" 3
template < typename _Type >
    inline bool
    __is_null_pointer ( _Type )
    { return false; }
# 158 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Tp, bool __T2 = std::__is_integer< _Tp> ::__value>
# 159 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __promote {
# 160 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef double __type; };
# 162 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Tp>
# 163 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __promote< _Tp, false> {
# 164 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef _Tp __type; };
# 166 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Tp, class _Up>
# 167 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __promote_2 {
# 170 "/usr/include/c++/4.4/ext/type_traits.h" 3
private: typedef typename __promote< _Tp, std::__is_integer< _Tp> ::__value> ::__type __type1;
# 171 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef typename __promote< _Up, std::__is_integer< _Up> ::__value> ::__type __type2;
# 174 "/usr/include/c++/4.4/ext/type_traits.h" 3
public: typedef __typeof__(__type1() + __type2()) __type;
# 175 "/usr/include/c++/4.4/ext/type_traits.h" 3
};
# 177 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Tp, class _Up, class _Vp>
# 178 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __promote_3 {
# 181 "/usr/include/c++/4.4/ext/type_traits.h" 3
private: typedef typename __promote< _Tp, std::__is_integer< _Tp> ::__value> ::__type __type1;
# 182 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef typename __promote< _Up, std::__is_integer< _Up> ::__value> ::__type __type2;
# 183 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef typename __promote< _Vp, std::__is_integer< _Vp> ::__value> ::__type __type3;
# 186 "/usr/include/c++/4.4/ext/type_traits.h" 3
public: typedef __typeof__((__type1() + __type2()) + __type3()) __type;
# 187 "/usr/include/c++/4.4/ext/type_traits.h" 3
};
# 189 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Tp, class _Up, class _Vp, class _Wp>
# 190 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __promote_4 {
# 193 "/usr/include/c++/4.4/ext/type_traits.h" 3
private: typedef typename __promote< _Tp, std::__is_integer< _Tp> ::__value> ::__type __type1;
# 194 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef typename __promote< _Up, std::__is_integer< _Up> ::__value> ::__type __type2;
# 195 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef typename __promote< _Vp, std::__is_integer< _Vp> ::__value> ::__type __type3;
# 196 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef typename __promote< _Wp, std::__is_integer< _Wp> ::__value> ::__type __type4;
# 199 "/usr/include/c++/4.4/ext/type_traits.h" 3
public: typedef __typeof__(((__type1() + __type2()) + __type3()) + __type4()) __type;
# 200 "/usr/include/c++/4.4/ext/type_traits.h" 3
};
# 202 "/usr/include/c++/4.4/ext/type_traits.h" 3
}
# 77 "/usr/include/c++/4.4/cmath" 3
namespace std __attribute__((visibility("default"))) {
# 81 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    _Tp __cmath_power ( _Tp, unsigned int );
# 84 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline _Tp
    __pow_helper ( _Tp __x, int __n )
    {
      return __n < 0
        ? _Tp ( 1 ) / __cmath_power ( __x, - __n )
        : __cmath_power ( __x, __n );
    }
# 94 "/usr/include/c++/4.4/cmath" 3
inline double abs(double __x)
# 95 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_fabs(__x); }
# 98 "/usr/include/c++/4.4/cmath" 3
inline float abs(float __x)
# 99 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_fabsf(__x); }
# 102 "/usr/include/c++/4.4/cmath" 3
inline long double abs(long double __x)
# 103 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_fabsl(__x); }
# 105 "/usr/include/c++/4.4/cmath" 3
using ::acos;
# 108 "/usr/include/c++/4.4/cmath" 3
inline float acos(float __x)
# 109 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_acosf(__x); }
# 112 "/usr/include/c++/4.4/cmath" 3
inline long double acos(long double __x)
# 113 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_acosl(__x); }
# 115 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    acos ( _Tp __x )
    { return __builtin_acos ( __x ); }
# 121 "/usr/include/c++/4.4/cmath" 3
using ::asin;
# 124 "/usr/include/c++/4.4/cmath" 3
inline float asin(float __x)
# 125 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_asinf(__x); }
# 128 "/usr/include/c++/4.4/cmath" 3
inline long double asin(long double __x)
# 129 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_asinl(__x); }
# 131 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    asin ( _Tp __x )
    { return __builtin_asin ( __x ); }
# 137 "/usr/include/c++/4.4/cmath" 3
using ::atan;
# 140 "/usr/include/c++/4.4/cmath" 3
inline float atan(float __x)
# 141 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_atanf(__x); }
# 144 "/usr/include/c++/4.4/cmath" 3
inline long double atan(long double __x)
# 145 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_atanl(__x); }
# 147 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    atan ( _Tp __x )
    { return __builtin_atan ( __x ); }
# 153 "/usr/include/c++/4.4/cmath" 3
using ::atan2;
# 156 "/usr/include/c++/4.4/cmath" 3
inline float atan2(float __y, float __x)
# 157 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_atan2f(__y, __x); }
# 160 "/usr/include/c++/4.4/cmath" 3
inline long double atan2(long double __y, long double __x)
# 161 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_atan2l(__y, __x); }
# 163 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp, typename _Up >
    inline
    typename __gnu_cxx :: __promote_2 <
    typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value
        && __is_arithmetic < _Up > :: __value,
        _Tp > :: __type, _Up > :: __type
    atan2 ( _Tp __y, _Up __x )
    {
      typedef typename __gnu_cxx :: __promote_2 < _Tp, _Up > :: __type __type;
      return atan2 ( __type ( __y ), __type ( __x ) );
    }
# 175 "/usr/include/c++/4.4/cmath" 3
using ::ceil;
# 178 "/usr/include/c++/4.4/cmath" 3
inline float ceil(float __x)
# 179 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_ceilf(__x); }
# 182 "/usr/include/c++/4.4/cmath" 3
inline long double ceil(long double __x)
# 183 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_ceill(__x); }
# 185 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    ceil ( _Tp __x )
    { return __builtin_ceil ( __x ); }
# 191 "/usr/include/c++/4.4/cmath" 3
using ::cos;
# 194 "/usr/include/c++/4.4/cmath" 3
inline float cos(float __x)
# 195 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_cosf(__x); }
# 198 "/usr/include/c++/4.4/cmath" 3
inline long double cos(long double __x)
# 199 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_cosl(__x); }
# 201 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    cos ( _Tp __x )
    { return __builtin_cos ( __x ); }
# 207 "/usr/include/c++/4.4/cmath" 3
using ::cosh;
# 210 "/usr/include/c++/4.4/cmath" 3
inline float cosh(float __x)
# 211 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_coshf(__x); }
# 214 "/usr/include/c++/4.4/cmath" 3
inline long double cosh(long double __x)
# 215 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_coshl(__x); }
# 217 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    cosh ( _Tp __x )
    { return __builtin_cosh ( __x ); }
# 223 "/usr/include/c++/4.4/cmath" 3
using ::exp;
# 226 "/usr/include/c++/4.4/cmath" 3
inline float exp(float __x)
# 227 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_expf(__x); }
# 230 "/usr/include/c++/4.4/cmath" 3
inline long double exp(long double __x)
# 231 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_expl(__x); }
# 233 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    exp ( _Tp __x )
    { return __builtin_exp ( __x ); }
# 239 "/usr/include/c++/4.4/cmath" 3
using ::fabs;
# 242 "/usr/include/c++/4.4/cmath" 3
inline float fabs(float __x)
# 243 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_fabsf(__x); }
# 246 "/usr/include/c++/4.4/cmath" 3
inline long double fabs(long double __x)
# 247 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_fabsl(__x); }
# 249 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    fabs ( _Tp __x )
    { return __builtin_fabs ( __x ); }
# 255 "/usr/include/c++/4.4/cmath" 3
using ::floor;
# 258 "/usr/include/c++/4.4/cmath" 3
inline float floor(float __x)
# 259 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_floorf(__x); }
# 262 "/usr/include/c++/4.4/cmath" 3
inline long double floor(long double __x)
# 263 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_floorl(__x); }
# 265 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    floor ( _Tp __x )
    { return __builtin_floor ( __x ); }
# 271 "/usr/include/c++/4.4/cmath" 3
using ::fmod;
# 274 "/usr/include/c++/4.4/cmath" 3
inline float fmod(float __x, float __y)
# 275 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_fmodf(__x, __y); }
# 278 "/usr/include/c++/4.4/cmath" 3
inline long double fmod(long double __x, long double __y)
# 279 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_fmodl(__x, __y); }
# 281 "/usr/include/c++/4.4/cmath" 3
using ::frexp;
# 284 "/usr/include/c++/4.4/cmath" 3
inline float frexp(float __x, int *__exp)
# 285 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_frexpf(__x, __exp); }
# 288 "/usr/include/c++/4.4/cmath" 3
inline long double frexp(long double __x, int *__exp)
# 289 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_frexpl(__x, __exp); }
# 291 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    frexp ( _Tp __x, int * __exp )
    { return __builtin_frexp ( __x, __exp ); }
# 297 "/usr/include/c++/4.4/cmath" 3
using ::ldexp;
# 300 "/usr/include/c++/4.4/cmath" 3
inline float ldexp(float __x, int __exp)
# 301 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_ldexpf(__x, __exp); }
# 304 "/usr/include/c++/4.4/cmath" 3
inline long double ldexp(long double __x, int __exp)
# 305 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_ldexpl(__x, __exp); }
# 307 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
  ldexp ( _Tp __x, int __exp )
  { return __builtin_ldexp ( __x, __exp ); }
# 313 "/usr/include/c++/4.4/cmath" 3
using ::log;
# 316 "/usr/include/c++/4.4/cmath" 3
inline float log(float __x)
# 317 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_logf(__x); }
# 320 "/usr/include/c++/4.4/cmath" 3
inline long double log(long double __x)
# 321 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_logl(__x); }
# 323 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    log ( _Tp __x )
    { return __builtin_log ( __x ); }
# 329 "/usr/include/c++/4.4/cmath" 3
using ::log10;
# 332 "/usr/include/c++/4.4/cmath" 3
inline float log10(float __x)
# 333 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_log10f(__x); }
# 336 "/usr/include/c++/4.4/cmath" 3
inline long double log10(long double __x)
# 337 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_log10l(__x); }
# 339 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    log10 ( _Tp __x )
    { return __builtin_log10 ( __x ); }
# 345 "/usr/include/c++/4.4/cmath" 3
using ::modf;
# 348 "/usr/include/c++/4.4/cmath" 3
inline float modf(float __x, float *__iptr)
# 349 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_modff(__x, __iptr); }
# 352 "/usr/include/c++/4.4/cmath" 3
inline long double modf(long double __x, long double *__iptr)
# 353 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_modfl(__x, __iptr); }
# 355 "/usr/include/c++/4.4/cmath" 3
using ::pow;
# 358 "/usr/include/c++/4.4/cmath" 3
inline float pow(float __x, float __y)
# 359 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_powf(__x, __y); }
# 362 "/usr/include/c++/4.4/cmath" 3
inline long double pow(long double __x, long double __y)
# 363 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_powl(__x, __y); }
# 369 "/usr/include/c++/4.4/cmath" 3
inline double pow(double __x, int __i)
# 370 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_powi(__x, __i); }
# 373 "/usr/include/c++/4.4/cmath" 3
inline float pow(float __x, int __n)
# 374 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_powif(__x, __n); }
# 377 "/usr/include/c++/4.4/cmath" 3
inline long double pow(long double __x, int __n)
# 378 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_powil(__x, __n); }
# 381 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp, typename _Up >
    inline
    typename __gnu_cxx :: __promote_2 <
    typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value
        && __is_arithmetic < _Up > :: __value,
        _Tp > :: __type, _Up > :: __type
    pow ( _Tp __x, _Up __y )
    {
      typedef typename __gnu_cxx :: __promote_2 < _Tp, _Up > :: __type __type;
      return pow ( __type ( __x ), __type ( __y ) );
    }
# 393 "/usr/include/c++/4.4/cmath" 3
using ::sin;
# 396 "/usr/include/c++/4.4/cmath" 3
inline float sin(float __x)
# 397 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_sinf(__x); }
# 400 "/usr/include/c++/4.4/cmath" 3
inline long double sin(long double __x)
# 401 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_sinl(__x); }
# 403 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    sin ( _Tp __x )
    { return __builtin_sin ( __x ); }
# 409 "/usr/include/c++/4.4/cmath" 3
using ::sinh;
# 412 "/usr/include/c++/4.4/cmath" 3
inline float sinh(float __x)
# 413 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_sinhf(__x); }
# 416 "/usr/include/c++/4.4/cmath" 3
inline long double sinh(long double __x)
# 417 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_sinhl(__x); }
# 419 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    sinh ( _Tp __x )
    { return __builtin_sinh ( __x ); }
# 425 "/usr/include/c++/4.4/cmath" 3
using ::sqrt;
# 428 "/usr/include/c++/4.4/cmath" 3
inline float sqrt(float __x)
# 429 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_sqrtf(__x); }
# 432 "/usr/include/c++/4.4/cmath" 3
inline long double sqrt(long double __x)
# 433 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_sqrtl(__x); }
# 435 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    sqrt ( _Tp __x )
    { return __builtin_sqrt ( __x ); }
# 441 "/usr/include/c++/4.4/cmath" 3
using ::tan;
# 444 "/usr/include/c++/4.4/cmath" 3
inline float tan(float __x)
# 445 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_tanf(__x); }
# 448 "/usr/include/c++/4.4/cmath" 3
inline long double tan(long double __x)
# 449 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_tanl(__x); }
# 451 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    tan ( _Tp __x )
    { return __builtin_tan ( __x ); }
# 457 "/usr/include/c++/4.4/cmath" 3
using ::tanh;
# 460 "/usr/include/c++/4.4/cmath" 3
inline float tanh(float __x)
# 461 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_tanhf(__x); }
# 464 "/usr/include/c++/4.4/cmath" 3
inline long double tanh(long double __x)
# 465 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_tanhl(__x); }
# 467 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    tanh ( _Tp __x )
    { return __builtin_tanh ( __x ); }
# 473 "/usr/include/c++/4.4/cmath" 3
}
# 492 "/usr/include/c++/4.4/cmath" 3
namespace std __attribute__((visibility("default"))) {
# 494 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    fpclassify ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_fpclassify ( FP_NAN, FP_INFINITE, FP_NORMAL,
      FP_SUBNORMAL, FP_ZERO, __type ( __f ) );
    }
# 504 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isfinite ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isfinite ( __type ( __f ) );
    }
# 513 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isinf ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isinf ( __type ( __f ) );
    }
# 522 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isnan ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isnan ( __type ( __f ) );
    }
# 531 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isnormal ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isnormal ( __type ( __f ) );
    }
# 540 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    signbit ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_signbit ( __type ( __f ) );
    }
# 549 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isgreater ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isgreater ( __type ( __f1 ), __type ( __f2 ) );
    }
# 558 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isgreaterequal ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isgreaterequal ( __type ( __f1 ), __type ( __f2 ) );
    }
# 567 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isless ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isless ( __type ( __f1 ), __type ( __f2 ) );
    }
# 576 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    islessequal ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_islessequal ( __type ( __f1 ), __type ( __f2 ) );
    }
# 585 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    islessgreater ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_islessgreater ( __type ( __f1 ), __type ( __f2 ) );
    }
# 594 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isunordered ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isunordered ( __type ( __f1 ), __type ( __f2 ) );
    }
# 603 "/usr/include/c++/4.4/cmath" 3
}
# 35 "/usr/include/c++/4.4/bits/cmath.tcc" 3
namespace std __attribute__((visibility("default"))) {
# 37 "/usr/include/c++/4.4/bits/cmath.tcc" 3
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
# 53 "/usr/include/c++/4.4/bits/cmath.tcc" 3
}
# 49 "/usr/include/c++/4.4/cstddef" 3
namespace std __attribute__((visibility("default"))) {
# 51 "/usr/include/c++/4.4/cstddef" 3
using ::ptrdiff_t;
# 52 "/usr/include/c++/4.4/cstddef" 3
using ::size_t;
# 54 "/usr/include/c++/4.4/cstddef" 3
}
# 100 "/usr/include/c++/4.4/cstdlib" 3
namespace std __attribute__((visibility("default"))) {
# 102 "/usr/include/c++/4.4/cstdlib" 3
using ::div_t;
# 103 "/usr/include/c++/4.4/cstdlib" 3
using ::ldiv_t;
# 105 "/usr/include/c++/4.4/cstdlib" 3
using ::abort;
# 106 "/usr/include/c++/4.4/cstdlib" 3
using ::abs;
# 107 "/usr/include/c++/4.4/cstdlib" 3
using ::atexit;
# 108 "/usr/include/c++/4.4/cstdlib" 3
using ::atof;
# 109 "/usr/include/c++/4.4/cstdlib" 3
using ::atoi;
# 110 "/usr/include/c++/4.4/cstdlib" 3
using ::atol;
# 111 "/usr/include/c++/4.4/cstdlib" 3
using ::bsearch;
# 112 "/usr/include/c++/4.4/cstdlib" 3
using ::calloc;
# 113 "/usr/include/c++/4.4/cstdlib" 3
using ::div;
# 114 "/usr/include/c++/4.4/cstdlib" 3
using ::exit;
# 115 "/usr/include/c++/4.4/cstdlib" 3
using ::free;
# 116 "/usr/include/c++/4.4/cstdlib" 3
using ::getenv;
# 117 "/usr/include/c++/4.4/cstdlib" 3
using ::labs;
# 118 "/usr/include/c++/4.4/cstdlib" 3
using ::ldiv;
# 119 "/usr/include/c++/4.4/cstdlib" 3
using ::malloc;
# 121 "/usr/include/c++/4.4/cstdlib" 3
using ::mblen;
# 122 "/usr/include/c++/4.4/cstdlib" 3
using ::mbstowcs;
# 123 "/usr/include/c++/4.4/cstdlib" 3
using ::mbtowc;
# 125 "/usr/include/c++/4.4/cstdlib" 3
using ::qsort;
# 126 "/usr/include/c++/4.4/cstdlib" 3
using ::rand;
# 127 "/usr/include/c++/4.4/cstdlib" 3
using ::realloc;
# 128 "/usr/include/c++/4.4/cstdlib" 3
using ::srand;
# 129 "/usr/include/c++/4.4/cstdlib" 3
using ::strtod;
# 130 "/usr/include/c++/4.4/cstdlib" 3
using ::strtol;
# 131 "/usr/include/c++/4.4/cstdlib" 3
using ::strtoul;
# 132 "/usr/include/c++/4.4/cstdlib" 3
using ::system;
# 134 "/usr/include/c++/4.4/cstdlib" 3
using ::wcstombs;
# 135 "/usr/include/c++/4.4/cstdlib" 3
using ::wctomb;
# 139 "/usr/include/c++/4.4/cstdlib" 3
inline long abs(long __i) { return labs(__i); }
# 142 "/usr/include/c++/4.4/cstdlib" 3
inline ldiv_t div(long __i, long __j) { return ldiv(__i, __j); }
# 144 "/usr/include/c++/4.4/cstdlib" 3
}
# 157 "/usr/include/c++/4.4/cstdlib" 3
namespace __gnu_cxx __attribute__((visibility("default"))) {
# 160 "/usr/include/c++/4.4/cstdlib" 3
using ::lldiv_t;
# 166 "/usr/include/c++/4.4/cstdlib" 3
using ::_Exit;
# 170 "/usr/include/c++/4.4/cstdlib" 3
inline long long abs(long long __x) { return (__x >= (0)) ? __x : (-__x); }
# 173 "/usr/include/c++/4.4/cstdlib" 3
using ::llabs;
# 176 "/usr/include/c++/4.4/cstdlib" 3
inline lldiv_t div(long long __n, long long __d)
# 177 "/usr/include/c++/4.4/cstdlib" 3
{ lldiv_t __q; (__q.quot) = (__n / __d); (__q.rem) = (__n % __d); return __q; }
# 179 "/usr/include/c++/4.4/cstdlib" 3
using ::lldiv;
# 190 "/usr/include/c++/4.4/cstdlib" 3
using ::atoll;
# 191 "/usr/include/c++/4.4/cstdlib" 3
using ::strtoll;
# 192 "/usr/include/c++/4.4/cstdlib" 3
using ::strtoull;
# 194 "/usr/include/c++/4.4/cstdlib" 3
using ::strtof;
# 195 "/usr/include/c++/4.4/cstdlib" 3
using ::strtold;
# 197 "/usr/include/c++/4.4/cstdlib" 3
}
# 199 "/usr/include/c++/4.4/cstdlib" 3
namespace std __attribute__((visibility("default"))) {
# 202 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::lldiv_t;
# 204 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::_Exit;
# 205 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::abs;
# 207 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::llabs;
# 208 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::div;
# 209 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::lldiv;
# 211 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::atoll;
# 212 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::strtof;
# 213 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::strtoll;
# 214 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::strtoull;
# 215 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::strtold;
# 217 "/usr/include/c++/4.4/cstdlib" 3
}
# 497 "/usr/local/cuda/bin/../include/math_functions.h"
namespace __gnu_cxx {
# 499 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline long long abs(long long) __attribute__((visibility("default")));
# 500 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 502 "/usr/local/cuda/bin/../include/math_functions.h"
namespace std {
# 504 "/usr/local/cuda/bin/../include/math_functions.h"
template< class T> extern inline T __pow_helper(T, int);
# 505 "/usr/local/cuda/bin/../include/math_functions.h"
template< class T> extern inline T __cmath_power(T, unsigned);
# 506 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 508 "/usr/local/cuda/bin/../include/math_functions.h"
using std::abs;
# 509 "/usr/local/cuda/bin/../include/math_functions.h"
using std::fabs;
# 510 "/usr/local/cuda/bin/../include/math_functions.h"
using std::ceil;
# 511 "/usr/local/cuda/bin/../include/math_functions.h"
using std::floor;
# 512 "/usr/local/cuda/bin/../include/math_functions.h"
using std::sqrt;
# 513 "/usr/local/cuda/bin/../include/math_functions.h"
using std::pow;
# 514 "/usr/local/cuda/bin/../include/math_functions.h"
using std::log;
# 515 "/usr/local/cuda/bin/../include/math_functions.h"
using std::log10;
# 516 "/usr/local/cuda/bin/../include/math_functions.h"
using std::fmod;
# 517 "/usr/local/cuda/bin/../include/math_functions.h"
using std::modf;
# 518 "/usr/local/cuda/bin/../include/math_functions.h"
using std::exp;
# 519 "/usr/local/cuda/bin/../include/math_functions.h"
using std::frexp;
# 520 "/usr/local/cuda/bin/../include/math_functions.h"
using std::ldexp;
# 521 "/usr/local/cuda/bin/../include/math_functions.h"
using std::asin;
# 522 "/usr/local/cuda/bin/../include/math_functions.h"
using std::sin;
# 523 "/usr/local/cuda/bin/../include/math_functions.h"
using std::sinh;
# 524 "/usr/local/cuda/bin/../include/math_functions.h"
using std::acos;
# 525 "/usr/local/cuda/bin/../include/math_functions.h"
using std::cos;
# 526 "/usr/local/cuda/bin/../include/math_functions.h"
using std::cosh;
# 527 "/usr/local/cuda/bin/../include/math_functions.h"
using std::atan;
# 528 "/usr/local/cuda/bin/../include/math_functions.h"
using std::atan2;
# 529 "/usr/local/cuda/bin/../include/math_functions.h"
using std::tan;
# 530 "/usr/local/cuda/bin/../include/math_functions.h"
using std::tanh;
# 584 "/usr/local/cuda/bin/../include/math_functions.h"
namespace std {
# 587 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline long abs(long) __attribute__((visibility("default")));
# 588 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float abs(float) __attribute__((visibility("default")));
# 589 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline double abs(double) __attribute__((visibility("default")));
# 590 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float fabs(float) __attribute__((visibility("default")));
# 591 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float ceil(float) __attribute__((visibility("default")));
# 592 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float floor(float) __attribute__((visibility("default")));
# 593 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float sqrt(float) __attribute__((visibility("default")));
# 594 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float pow(float, float) __attribute__((visibility("default")));
# 595 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float pow(float, int) __attribute__((visibility("default")));
# 596 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline double pow(double, int) __attribute__((visibility("default")));
# 597 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float log(float) __attribute__((visibility("default")));
# 598 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float log10(float) __attribute__((visibility("default")));
# 599 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float fmod(float, float) __attribute__((visibility("default")));
# 600 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float modf(float, float *) __attribute__((visibility("default")));
# 601 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float exp(float) __attribute__((visibility("default")));
# 602 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float frexp(float, int *) __attribute__((visibility("default")));
# 603 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float ldexp(float, int) __attribute__((visibility("default")));
# 604 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float asin(float) __attribute__((visibility("default")));
# 605 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float sin(float) __attribute__((visibility("default")));
# 606 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float sinh(float) __attribute__((visibility("default")));
# 607 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float acos(float) __attribute__((visibility("default")));
# 608 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float cos(float) __attribute__((visibility("default")));
# 609 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float cosh(float) __attribute__((visibility("default")));
# 610 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float atan(float) __attribute__((visibility("default")));
# 611 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float atan2(float, float) __attribute__((visibility("default")));
# 612 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float tan(float) __attribute__((visibility("default")));
# 613 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float tanh(float) __attribute__((visibility("default")));
# 616 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 619 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float logb(float a)
# 620 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 621 "/usr/local/cuda/bin/../include/math_functions.h"
return logbf(a);
# 622 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 624 "/usr/local/cuda/bin/../include/math_functions.h"
static inline int ilogb(float a)
# 625 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 626 "/usr/local/cuda/bin/../include/math_functions.h"
return ilogbf(a);
# 627 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 629 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float scalbn(float a, int b)
# 630 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 631 "/usr/local/cuda/bin/../include/math_functions.h"
return scalbnf(a, b);
# 632 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 634 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float scalbln(float a, long b)
# 635 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 636 "/usr/local/cuda/bin/../include/math_functions.h"
return scalblnf(a, b);
# 637 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 639 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float exp2(float a)
# 640 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 641 "/usr/local/cuda/bin/../include/math_functions.h"
return exp2f(a);
# 642 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 644 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float exp10(float a)
# 645 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 646 "/usr/local/cuda/bin/../include/math_functions.h"
return exp10f(a);
# 647 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 649 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float expm1(float a)
# 650 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 651 "/usr/local/cuda/bin/../include/math_functions.h"
return expm1f(a);
# 652 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 654 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float log2(float a)
# 655 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 656 "/usr/local/cuda/bin/../include/math_functions.h"
return log2f(a);
# 657 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 659 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float log1p(float a)
# 660 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 661 "/usr/local/cuda/bin/../include/math_functions.h"
return log1pf(a);
# 662 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 664 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float rsqrt(float a)
# 665 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 666 "/usr/local/cuda/bin/../include/math_functions.h"
return rsqrtf(a);
# 667 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 669 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float acosh(float a)
# 670 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 671 "/usr/local/cuda/bin/../include/math_functions.h"
return acoshf(a);
# 672 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 674 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float asinh(float a)
# 675 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 676 "/usr/local/cuda/bin/../include/math_functions.h"
return asinhf(a);
# 677 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 679 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float atanh(float a)
# 680 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 681 "/usr/local/cuda/bin/../include/math_functions.h"
return atanhf(a);
# 682 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 684 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float hypot(float a, float b)
# 685 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 686 "/usr/local/cuda/bin/../include/math_functions.h"
return hypotf(a, b);
# 687 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 689 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float cbrt(float a)
# 690 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 691 "/usr/local/cuda/bin/../include/math_functions.h"
return cbrtf(a);
# 692 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 694 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float rcbrt(float a)
# 695 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 696 "/usr/local/cuda/bin/../include/math_functions.h"
return rcbrtf(a);
# 697 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 699 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float sinpi(float a)
# 700 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 701 "/usr/local/cuda/bin/../include/math_functions.h"
return sinpif(a);
# 702 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 704 "/usr/local/cuda/bin/../include/math_functions.h"
static inline void sincos(float a, float *sptr, float *cptr)
# 705 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 706 "/usr/local/cuda/bin/../include/math_functions.h"
sincosf(a, sptr, cptr);
# 707 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 709 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float erf(float a)
# 710 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 711 "/usr/local/cuda/bin/../include/math_functions.h"
return erff(a);
# 712 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 714 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float erfinv(float a)
# 715 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 716 "/usr/local/cuda/bin/../include/math_functions.h"
return erfinvf(a);
# 717 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 719 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float erfc(float a)
# 720 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 721 "/usr/local/cuda/bin/../include/math_functions.h"
return erfcf(a);
# 722 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 724 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float erfcinv(float a)
# 725 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 726 "/usr/local/cuda/bin/../include/math_functions.h"
return erfcinvf(a);
# 727 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 729 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float lgamma(float a)
# 730 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 731 "/usr/local/cuda/bin/../include/math_functions.h"
return lgammaf(a);
# 732 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 734 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float tgamma(float a)
# 735 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 736 "/usr/local/cuda/bin/../include/math_functions.h"
return tgammaf(a);
# 737 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 739 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float copysign(float a, float b)
# 740 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 741 "/usr/local/cuda/bin/../include/math_functions.h"
return copysignf(a, b);
# 742 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 744 "/usr/local/cuda/bin/../include/math_functions.h"
static inline double copysign(double a, float b)
# 745 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 746 "/usr/local/cuda/bin/../include/math_functions.h"
return copysign(a, (double)b);
# 747 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 749 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float copysign(float a, double b)
# 750 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 751 "/usr/local/cuda/bin/../include/math_functions.h"
return copysignf(a, (float)b);
# 752 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 754 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float nextafter(float a, float b)
# 755 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 756 "/usr/local/cuda/bin/../include/math_functions.h"
return nextafterf(a, b);
# 757 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 759 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float remainder(float a, float b)
# 760 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 761 "/usr/local/cuda/bin/../include/math_functions.h"
return remainderf(a, b);
# 762 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 764 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float remquo(float a, float b, int *quo)
# 765 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 766 "/usr/local/cuda/bin/../include/math_functions.h"
return remquof(a, b, quo);
# 767 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 769 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float round(float a)
# 770 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 771 "/usr/local/cuda/bin/../include/math_functions.h"
return roundf(a);
# 772 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 774 "/usr/local/cuda/bin/../include/math_functions.h"
static inline long lround(float a)
# 775 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 776 "/usr/local/cuda/bin/../include/math_functions.h"
return lroundf(a);
# 777 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 779 "/usr/local/cuda/bin/../include/math_functions.h"
static inline long long llround(float a)
# 780 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 781 "/usr/local/cuda/bin/../include/math_functions.h"
return llroundf(a);
# 782 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 784 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float trunc(float a)
# 785 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 786 "/usr/local/cuda/bin/../include/math_functions.h"
return truncf(a);
# 787 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 789 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float rint(float a)
# 790 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 791 "/usr/local/cuda/bin/../include/math_functions.h"
return rintf(a);
# 792 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 794 "/usr/local/cuda/bin/../include/math_functions.h"
static inline long lrint(float a)
# 795 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 796 "/usr/local/cuda/bin/../include/math_functions.h"
return lrintf(a);
# 797 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 799 "/usr/local/cuda/bin/../include/math_functions.h"
static inline long long llrint(float a)
# 800 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 801 "/usr/local/cuda/bin/../include/math_functions.h"
return llrintf(a);
# 802 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 804 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float nearbyint(float a)
# 805 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 806 "/usr/local/cuda/bin/../include/math_functions.h"
return nearbyintf(a);
# 807 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 809 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float fdim(float a, float b)
# 810 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 811 "/usr/local/cuda/bin/../include/math_functions.h"
return fdimf(a, b);
# 812 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 814 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float fma(float a, float b, float c)
# 815 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 816 "/usr/local/cuda/bin/../include/math_functions.h"
return fmaf(a, b, c);
# 817 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 819 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float fmax(float a, float b)
# 820 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 821 "/usr/local/cuda/bin/../include/math_functions.h"
return fmaxf(a, b);
# 822 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 824 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float fmin(float a, float b)
# 825 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 826 "/usr/local/cuda/bin/../include/math_functions.h"
return fminf(a, b);
# 827 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 829 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned min(unsigned a, unsigned b)
# 830 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 831 "/usr/local/cuda/bin/../include/math_functions.h"
return umin(a, b);
# 832 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 834 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned min(int a, unsigned b)
# 835 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 836 "/usr/local/cuda/bin/../include/math_functions.h"
return umin((unsigned)a, b);
# 837 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 839 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned min(unsigned a, int b)
# 840 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 841 "/usr/local/cuda/bin/../include/math_functions.h"
return umin(a, (unsigned)b);
# 842 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 844 "/usr/local/cuda/bin/../include/math_functions.h"
static inline long long min(long long a, long long b)
# 845 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 846 "/usr/local/cuda/bin/../include/math_functions.h"
return llmin(a, b);
# 847 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 849 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned long long min(unsigned long long a, unsigned long long b)
# 850 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 851 "/usr/local/cuda/bin/../include/math_functions.h"
return ullmin(a, b);
# 852 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 854 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned long long min(long long a, unsigned long long b)
# 855 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 856 "/usr/local/cuda/bin/../include/math_functions.h"
return ullmin((unsigned long long)a, b);
# 857 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 859 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned long long min(unsigned long long a, long long b)
# 860 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 861 "/usr/local/cuda/bin/../include/math_functions.h"
return ullmin(a, (unsigned long long)b);
# 862 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 864 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float min(float a, float b)
# 865 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 866 "/usr/local/cuda/bin/../include/math_functions.h"
return fminf(a, b);
# 867 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 869 "/usr/local/cuda/bin/../include/math_functions.h"
static inline double min(double a, double b)
# 870 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 871 "/usr/local/cuda/bin/../include/math_functions.h"
return fmin(a, b);
# 872 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 874 "/usr/local/cuda/bin/../include/math_functions.h"
static inline double min(float a, double b)
# 875 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 876 "/usr/local/cuda/bin/../include/math_functions.h"
return fmin((double)a, b);
# 877 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 879 "/usr/local/cuda/bin/../include/math_functions.h"
static inline double min(double a, float b)
# 880 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 881 "/usr/local/cuda/bin/../include/math_functions.h"
return fmin(a, (double)b);
# 882 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 884 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned max(unsigned a, unsigned b)
# 885 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 886 "/usr/local/cuda/bin/../include/math_functions.h"
return umax(a, b);
# 887 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 889 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned max(int a, unsigned b)
# 890 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 891 "/usr/local/cuda/bin/../include/math_functions.h"
return umax((unsigned)a, b);
# 892 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 894 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned max(unsigned a, int b)
# 895 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 896 "/usr/local/cuda/bin/../include/math_functions.h"
return umax(a, (unsigned)b);
# 897 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 899 "/usr/local/cuda/bin/../include/math_functions.h"
static inline long long max(long long a, long long b)
# 900 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 901 "/usr/local/cuda/bin/../include/math_functions.h"
return llmax(a, b);
# 902 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 904 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned long long max(unsigned long long a, unsigned long long b)
# 905 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 906 "/usr/local/cuda/bin/../include/math_functions.h"
return ullmax(a, b);
# 907 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 909 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned long long max(long long a, unsigned long long b)
# 910 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 911 "/usr/local/cuda/bin/../include/math_functions.h"
return ullmax((unsigned long long)a, b);
# 912 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 914 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned long long max(unsigned long long a, long long b)
# 915 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 916 "/usr/local/cuda/bin/../include/math_functions.h"
return ullmax(a, (unsigned long long)b);
# 917 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 919 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float max(float a, float b)
# 920 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 921 "/usr/local/cuda/bin/../include/math_functions.h"
return fmaxf(a, b);
# 922 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 924 "/usr/local/cuda/bin/../include/math_functions.h"
static inline double max(double a, double b)
# 925 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 926 "/usr/local/cuda/bin/../include/math_functions.h"
return fmax(a, b);
# 927 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 929 "/usr/local/cuda/bin/../include/math_functions.h"
static inline double max(float a, double b)
# 930 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 931 "/usr/local/cuda/bin/../include/math_functions.h"
return fmax((double)a, b);
# 932 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 934 "/usr/local/cuda/bin/../include/math_functions.h"
static inline double max(double a, float b)
# 935 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 936 "/usr/local/cuda/bin/../include/math_functions.h"
return fmax(a, (double)b);
# 937 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 60 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
template< class T, int dim = 1>
# 61 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
struct surface : public surfaceReference {
# 63 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
surface()
# 64 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
{
# 65 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
(channelDesc) = cudaCreateChannelDesc< T> ();
# 66 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
}
# 68 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
surface(cudaChannelFormatDesc desc)
# 69 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
{
# 70 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
(channelDesc) = desc;
# 71 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
}
# 72 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
};
# 75 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
template< int dim>
# 76 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
struct surface< void, dim> : public surfaceReference {
# 78 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
surface()
# 79 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
{
# 80 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
(channelDesc) = cudaCreateChannelDesc< void> ();
# 81 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
}
# 82 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
};
# 60 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
template< class T, int dim = 1, cudaTextureReadMode mode = cudaReadModeElementType>
# 61 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
struct texture : public textureReference {
# 63 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
texture(int norm = 0, cudaTextureFilterMode
# 64 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
fMode = cudaFilterModePoint, cudaTextureAddressMode
# 65 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
aMode = cudaAddressModeClamp)
# 66 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
{
# 67 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
(normalized) = norm;
# 68 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
(filterMode) = fMode;
# 69 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
((addressMode)[0]) = aMode;
# 70 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
((addressMode)[1]) = aMode;
# 71 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
((addressMode)[2]) = aMode;
# 72 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
(channelDesc) = cudaCreateChannelDesc< T> ();
# 73 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
}
# 75 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
texture(int norm, cudaTextureFilterMode
# 76 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
fMode, cudaTextureAddressMode
# 77 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
aMode, cudaChannelFormatDesc
# 78 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
desc)
# 79 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
{
# 80 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
(normalized) = norm;
# 81 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
(filterMode) = fMode;
# 82 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
((addressMode)[0]) = aMode;
# 83 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
((addressMode)[1]) = aMode;
# 84 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
((addressMode)[2]) = aMode;
# 85 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
(channelDesc) = desc;
# 86 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
}
# 87 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
};
# 324 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline int mulhi(int a, int b)
# 325 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 327 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 329 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned mulhi(unsigned a, unsigned b)
# 330 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 332 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 334 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned mulhi(int a, unsigned b)
# 335 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 337 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 339 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned mulhi(unsigned a, int b)
# 340 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 342 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 344 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline long long mul64hi(long long a, long long b)
# 345 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 347 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 349 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned long long mul64hi(unsigned long long a, unsigned long long b)
# 350 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 352 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 354 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned long long mul64hi(long long a, unsigned long long b)
# 355 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 357 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 359 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned long long mul64hi(unsigned long long a, long long b)
# 360 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 362 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 364 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline int float_as_int(float a)
# 365 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 367 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 369 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline float int_as_float(int a)
# 370 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 372 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 374 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline float saturate(float a)
# 375 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 377 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 379 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline int mul24(int a, int b)
# 380 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 382 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 384 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned umul24(unsigned a, unsigned b)
# 385 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 387 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 389 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline void trap()
# 390 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 392 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 394 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline void brkpt(int c)
# 395 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 397 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 399 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline void syncthreads()
# 400 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 402 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 404 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline void prof_trigger(int e)
# 405 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 422 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 424 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline void threadfence(bool global = true)
# 425 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 427 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 429 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline int float2int(float a, cudaRoundMode mode = cudaRoundZero)
# 430 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 435 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 437 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned float2uint(float a, cudaRoundMode mode = cudaRoundZero)
# 438 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 443 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 445 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline float int2float(int a, cudaRoundMode mode = cudaRoundNearest)
# 446 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 451 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 453 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline float uint2float(unsigned a, cudaRoundMode mode = cudaRoundNearest)
# 454 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 459 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 102 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicAdd(int *address, int val)
# 103 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 105 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 107 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicAdd(unsigned *address, unsigned val)
# 108 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 110 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 112 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicSub(int *address, int val)
# 113 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 115 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 117 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicSub(unsigned *address, unsigned val)
# 118 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 120 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 122 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicExch(int *address, int val)
# 123 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 125 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 127 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicExch(unsigned *address, unsigned val)
# 128 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 130 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 132 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline float atomicExch(float *address, float val)
# 133 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 135 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 137 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicMin(int *address, int val)
# 138 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 140 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 142 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicMin(unsigned *address, unsigned val)
# 143 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 145 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 147 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicMax(int *address, int val)
# 148 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 150 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 152 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicMax(unsigned *address, unsigned val)
# 153 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 155 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 157 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicInc(unsigned *address, unsigned val)
# 158 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 160 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 162 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicDec(unsigned *address, unsigned val)
# 163 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 165 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 167 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicAnd(int *address, int val)
# 168 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 170 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 172 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicAnd(unsigned *address, unsigned val)
# 173 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 175 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 177 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicOr(int *address, int val)
# 178 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 180 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 182 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicOr(unsigned *address, unsigned val)
# 183 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 185 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 187 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicXor(int *address, int val)
# 188 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 190 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 192 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicXor(unsigned *address, unsigned val)
# 193 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 195 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 197 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicCAS(int *address, int compare, int val)
# 198 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 200 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 202 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicCAS(unsigned *address, unsigned compare, unsigned val)
# 203 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 205 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 75 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicAdd(unsigned long long *address, unsigned long long val)
# 76 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
{int volatile ___ = 1;
# 78 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
exit(___);}
# 80 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicExch(unsigned long long *address, unsigned long long val)
# 81 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
{int volatile ___ = 1;
# 83 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
exit(___);}
# 85 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicCAS(unsigned long long *address, unsigned long long compare, unsigned long long val)
# 86 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
{int volatile ___ = 1;
# 88 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
exit(___);}
# 90 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
__attribute__((unused)) static inline bool any(bool cond)
# 91 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
{int volatile ___ = 1;
# 93 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
exit(___);}
# 95 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
__attribute__((unused)) static inline bool all(bool cond)
# 96 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
{int volatile ___ = 1;
# 98 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
exit(___);}
# 170 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double fma(double a, double b, double c, cudaRoundMode mode)
# 171 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 176 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 178 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double dmul(double a, double b, cudaRoundMode mode = cudaRoundNearest)
# 179 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 184 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 186 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double dadd(double a, double b, cudaRoundMode mode = cudaRoundNearest)
# 187 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 192 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 194 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline int double2int(double a, cudaRoundMode mode = cudaRoundZero)
# 195 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 200 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 202 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline unsigned double2uint(double a, cudaRoundMode mode = cudaRoundZero)
# 203 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 208 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 210 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline long long double2ll(double a, cudaRoundMode mode = cudaRoundZero)
# 211 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 216 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 218 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline unsigned long long double2ull(double a, cudaRoundMode mode = cudaRoundZero)
# 219 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 224 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 226 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double ll2double(long long a, cudaRoundMode mode = cudaRoundNearest)
# 227 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 232 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 234 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double ull2double(unsigned long long a, cudaRoundMode mode = cudaRoundNearest)
# 235 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 240 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 242 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double int2double(int a, cudaRoundMode mode = cudaRoundNearest)
# 243 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 245 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 247 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double uint2double(unsigned a, cudaRoundMode mode = cudaRoundNearest)
# 248 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 250 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 252 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double float2double(float a, cudaRoundMode mode = cudaRoundNearest)
# 253 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 255 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 66 "/usr/local/cuda/bin/../include/sm_20_atomic_functions.h"
__attribute__((unused)) static inline float atomicAdd(float *address, float val)
# 67 "/usr/local/cuda/bin/../include/sm_20_atomic_functions.h"
{int volatile ___ = 1;
# 69 "/usr/local/cuda/bin/../include/sm_20_atomic_functions.h"
exit(___);}
# 124 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
__attribute__((unused)) static inline unsigned ballot(bool pred)
# 125 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
{int volatile ___ = 1;
# 127 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
exit(___);}
# 129 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
__attribute__((unused)) static inline int syncthreads_count(bool pred)
# 130 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
{int volatile ___ = 1;
# 132 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
exit(___);}
# 134 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
__attribute__((unused)) static inline bool syncthreads_and(bool pred)
# 135 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
{int volatile ___ = 1;
# 137 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
exit(___);}
# 139 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
__attribute__((unused)) static inline bool syncthreads_or(bool pred)
# 140 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
{int volatile ___ = 1;
# 142 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
exit(___);}
# 97 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 98 "/usr/local/cuda/bin/../include/surface_functions.h"
surf1Dread(T *res, surface< void, 1> surf, int x, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 99 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 106 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 108 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline T
# 109 "/usr/local/cuda/bin/../include/surface_functions.h"
surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 110 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 116 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 118 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 119 "/usr/local/cuda/bin/../include/surface_functions.h"
surf1Dread(T *res, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 120 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 122 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 125 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline char surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 126 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 128 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 131 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline signed char surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 132 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 134 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 137 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned char surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 138 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 140 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 143 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline char1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 144 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 146 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 149 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uchar1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 150 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 152 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 155 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline char2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 156 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 160 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 163 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uchar2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 164 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 166 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 169 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline char4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 170 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 174 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 177 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uchar4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 178 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 180 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 183 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline short surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 184 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 186 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 189 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned short surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 190 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 192 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 195 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline short1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 196 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 198 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 201 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ushort1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 202 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 204 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 207 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline short2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 208 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 212 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 215 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ushort2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 216 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 218 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 221 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline short4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 222 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 226 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 229 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ushort4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 230 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 232 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 235 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline int surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 236 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 238 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 241 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 242 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 244 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 247 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline int1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 248 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 250 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 253 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uint1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 254 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 256 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 259 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline int2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 260 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 264 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 267 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uint2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 268 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 270 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 273 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline int4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 274 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 278 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 281 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uint4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 282 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 284 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 287 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline long long surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 288 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 290 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 293 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned long long surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 294 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 296 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 299 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline longlong1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 300 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 302 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 305 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ulonglong1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 306 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 308 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 311 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline longlong2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 312 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 316 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 319 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ulonglong2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 320 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 322 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 385 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline float surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 386 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 388 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 391 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline float1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 392 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 394 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 397 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline float2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 398 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 402 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 405 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline float4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 406 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 410 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 457 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 458 "/usr/local/cuda/bin/../include/surface_functions.h"
surf2Dread(T *res, surface< void, 2> surf, int x, int y, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 459 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 466 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 468 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline T
# 469 "/usr/local/cuda/bin/../include/surface_functions.h"
surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 470 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 476 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 478 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 479 "/usr/local/cuda/bin/../include/surface_functions.h"
surf2Dread(T *res, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 480 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 482 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 485 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline char surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 486 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 488 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 491 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline signed char surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 492 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 494 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 497 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned char surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 498 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 500 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 503 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline char1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 504 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 506 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 509 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uchar1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 510 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 512 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 515 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline char2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 516 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 520 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 523 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uchar2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 524 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 526 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 529 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline char4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 530 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 534 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 537 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uchar4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 538 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 540 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 543 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline short surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 544 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 546 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 549 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned short surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 550 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 552 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 555 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline short1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 556 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 558 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 561 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ushort1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 562 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 564 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 567 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline short2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 568 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 572 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 575 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ushort2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 576 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 578 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 581 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline short4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 582 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 586 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 589 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ushort4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 590 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 592 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 595 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline int surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 596 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 598 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 601 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 602 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 604 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 607 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline int1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 608 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 610 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 613 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uint1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 614 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 616 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 619 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline int2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 620 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 624 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 627 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uint2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 628 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 630 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 633 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline int4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 634 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 638 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 641 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uint4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 642 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 644 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 647 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline long long surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 648 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 650 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 653 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned long long surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 654 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 656 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 659 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline longlong1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 660 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 662 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 665 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ulonglong1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 666 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 668 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 671 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline longlong2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 672 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 676 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 679 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ulonglong2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 680 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 682 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 745 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline float surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 746 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 748 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 751 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline float1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 752 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 754 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 757 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline float2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 758 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 762 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 765 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline float4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 766 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 770 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 817 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 818 "/usr/local/cuda/bin/../include/surface_functions.h"
surf1Dwrite(T val, surface< void, 1> surf, int x, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 819 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 837 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 839 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 840 "/usr/local/cuda/bin/../include/surface_functions.h"
surf1Dwrite(T val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 841 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 843 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 846 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(char val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 847 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 849 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 851 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(signed char val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 852 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 854 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 856 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(unsigned char val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 857 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 859 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 861 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(char1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 862 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 864 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 866 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uchar1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 867 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 869 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 871 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(char2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 872 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 874 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 876 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uchar2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 877 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 879 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 881 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(char4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 882 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 884 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 886 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uchar4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 887 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 889 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 891 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(short val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 892 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 894 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 896 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(unsigned short val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 897 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 899 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 901 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(short1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 902 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 904 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 906 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ushort1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 907 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 909 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 911 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(short2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 912 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 914 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 916 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ushort2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 917 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 919 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 921 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(short4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 922 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 924 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 926 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ushort4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 927 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 929 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 931 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(int val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 932 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 934 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 936 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(unsigned val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 937 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 939 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 941 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(int1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 942 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 944 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 946 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uint1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 947 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 949 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 951 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(int2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 952 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 954 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 956 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uint2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 957 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 959 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 961 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(int4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 962 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 964 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 966 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uint4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 967 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 969 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 971 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(long long val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 972 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 974 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 976 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(unsigned long long val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 977 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 979 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 981 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(longlong1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 982 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 984 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 986 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ulonglong1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 987 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 989 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 991 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(longlong2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 992 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 994 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 996 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ulonglong2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 997 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 999 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1045 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(float val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1046 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1048 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1050 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(float1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1051 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1053 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1055 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(float2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1056 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1058 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1060 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(float4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1061 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1063 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1110 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 1111 "/usr/local/cuda/bin/../include/surface_functions.h"
surf2Dwrite(T val, surface< void, 2> surf, int x, int y, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1112 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1130 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1132 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 1133 "/usr/local/cuda/bin/../include/surface_functions.h"
surf2Dwrite(T val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1134 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1136 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1139 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(char val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1140 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1142 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1144 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(signed char val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1145 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1147 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1149 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(unsigned char val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1150 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1152 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1154 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(char1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1155 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1157 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1159 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uchar1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1160 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1162 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1164 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(char2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1165 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1167 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1169 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uchar2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1170 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1172 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1174 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(char4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1175 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1177 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1179 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uchar4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1180 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1182 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1184 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(short val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1185 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1187 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1189 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(unsigned short val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1190 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1192 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1194 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(short1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1195 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1197 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1199 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ushort1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1200 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1202 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1204 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(short2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1205 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1207 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1209 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ushort2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1210 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1212 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1214 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(short4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1215 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1217 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1219 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ushort4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1220 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1222 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1224 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(int val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1225 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1227 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1229 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(unsigned val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1230 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1232 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1234 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(int1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1235 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1237 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1239 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uint1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1240 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1242 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1244 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(int2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1245 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1247 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1249 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uint2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1250 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1252 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1254 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(int4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1255 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1257 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1259 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uint4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1260 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1262 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1264 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(long long val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1265 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1267 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1269 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(unsigned long long val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1270 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1272 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1274 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(longlong1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1275 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1277 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1279 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ulonglong1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1280 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1282 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1284 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(longlong2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1285 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1287 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1289 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ulonglong2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1290 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1292 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1338 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(float val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1339 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1341 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1343 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(float1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1344 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1346 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1348 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(float2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1349 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1351 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1353 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(float4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1354 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1356 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 61 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
template< class T, cudaTextureReadMode readMode> __attribute__((unused)) extern uint4 __utexfetchi(texture< T, 1, readMode> , int4);
# 63 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
template< class T, cudaTextureReadMode readMode> __attribute__((unused)) extern int4 __itexfetchi(texture< T, 1, readMode> , int4);
# 65 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
template< class T, cudaTextureReadMode readMode> __attribute__((unused)) extern float4 __ftexfetchi(texture< T, 1, readMode> , int4);
# 68 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
template< class T, int dim, cudaTextureReadMode readMode> __attribute__((unused)) extern uint4 __utexfetch(texture< T, dim, readMode> , float4, int = dim);
# 70 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
template< class T, int dim, cudaTextureReadMode readMode> __attribute__((unused)) extern int4 __itexfetch(texture< T, dim, readMode> , float4, int = dim);
# 72 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
template< class T, int dim, cudaTextureReadMode readMode> __attribute__((unused)) extern float4 __ftexfetch(texture< T, dim, readMode> , float4, int = dim);
# 80 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char tex1Dfetch(texture< char, 1, cudaReadModeElementType> t, int x)
# 81 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 89 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 91 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char tex1Dfetch(texture< signed char, 1, cudaReadModeElementType> t, int x)
# 92 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 96 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 98 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char tex1Dfetch(texture< unsigned char, 1, cudaReadModeElementType> t, int x)
# 99 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 103 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 105 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 tex1Dfetch(texture< char1, 1, cudaReadModeElementType> t, int x)
# 106 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 110 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 112 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 tex1Dfetch(texture< uchar1, 1, cudaReadModeElementType> t, int x)
# 113 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 117 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 119 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 tex1Dfetch(texture< char2, 1, cudaReadModeElementType> t, int x)
# 120 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 124 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 126 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 tex1Dfetch(texture< uchar2, 1, cudaReadModeElementType> t, int x)
# 127 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 131 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 133 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex1Dfetch(texture< char4, 1, cudaReadModeElementType> t, int x)
# 134 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 138 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 140 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex1Dfetch(texture< uchar4, 1, cudaReadModeElementType> t, int x)
# 141 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 145 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 153 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short tex1Dfetch(texture< short, 1, cudaReadModeElementType> t, int x)
# 154 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 158 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 160 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short tex1Dfetch(texture< unsigned short, 1, cudaReadModeElementType> t, int x)
# 161 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 165 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 167 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 tex1Dfetch(texture< short1, 1, cudaReadModeElementType> t, int x)
# 168 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 172 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 174 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 tex1Dfetch(texture< ushort1, 1, cudaReadModeElementType> t, int x)
# 175 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 179 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 181 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 tex1Dfetch(texture< short2, 1, cudaReadModeElementType> t, int x)
# 182 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 186 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 188 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 tex1Dfetch(texture< ushort2, 1, cudaReadModeElementType> t, int x)
# 189 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 193 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 195 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex1Dfetch(texture< short4, 1, cudaReadModeElementType> t, int x)
# 196 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 200 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 202 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex1Dfetch(texture< ushort4, 1, cudaReadModeElementType> t, int x)
# 203 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 207 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 215 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int tex1Dfetch(texture< int, 1, cudaReadModeElementType> t, int x)
# 216 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 220 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 222 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned tex1Dfetch(texture< unsigned, 1, cudaReadModeElementType> t, int x)
# 223 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 227 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 229 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 tex1Dfetch(texture< int1, 1, cudaReadModeElementType> t, int x)
# 230 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 234 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 236 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 tex1Dfetch(texture< uint1, 1, cudaReadModeElementType> t, int x)
# 237 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 241 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 243 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 tex1Dfetch(texture< int2, 1, cudaReadModeElementType> t, int x)
# 244 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 248 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 250 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 tex1Dfetch(texture< uint2, 1, cudaReadModeElementType> t, int x)
# 251 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 255 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 257 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex1Dfetch(texture< int4, 1, cudaReadModeElementType> t, int x)
# 258 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 262 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 264 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex1Dfetch(texture< uint4, 1, cudaReadModeElementType> t, int x)
# 265 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 269 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 343 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< float, 1, cudaReadModeElementType> t, int x)
# 344 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 348 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 350 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1Dfetch(texture< float1, 1, cudaReadModeElementType> t, int x)
# 351 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 355 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 357 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1Dfetch(texture< float2, 1, cudaReadModeElementType> t, int x)
# 358 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 362 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 364 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1Dfetch(texture< float4, 1, cudaReadModeElementType> t, int x)
# 365 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 369 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 377 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< char, 1, cudaReadModeNormalizedFloat> t, int x)
# 378 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 387 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 389 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< signed char, 1, cudaReadModeNormalizedFloat> t, int x)
# 390 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 395 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 397 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< unsigned char, 1, cudaReadModeNormalizedFloat> t, int x)
# 398 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 403 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 405 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1Dfetch(texture< char1, 1, cudaReadModeNormalizedFloat> t, int x)
# 406 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 411 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 413 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1Dfetch(texture< uchar1, 1, cudaReadModeNormalizedFloat> t, int x)
# 414 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 419 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 421 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1Dfetch(texture< char2, 1, cudaReadModeNormalizedFloat> t, int x)
# 422 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 427 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 429 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1Dfetch(texture< uchar2, 1, cudaReadModeNormalizedFloat> t, int x)
# 430 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 435 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 437 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1Dfetch(texture< char4, 1, cudaReadModeNormalizedFloat> t, int x)
# 438 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 443 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 445 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1Dfetch(texture< uchar4, 1, cudaReadModeNormalizedFloat> t, int x)
# 446 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 451 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 459 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< short, 1, cudaReadModeNormalizedFloat> t, int x)
# 460 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 465 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 467 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< unsigned short, 1, cudaReadModeNormalizedFloat> t, int x)
# 468 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 473 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 475 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1Dfetch(texture< short1, 1, cudaReadModeNormalizedFloat> t, int x)
# 476 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 481 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 483 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1Dfetch(texture< ushort1, 1, cudaReadModeNormalizedFloat> t, int x)
# 484 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 489 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 491 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1Dfetch(texture< short2, 1, cudaReadModeNormalizedFloat> t, int x)
# 492 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 497 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 499 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1Dfetch(texture< ushort2, 1, cudaReadModeNormalizedFloat> t, int x)
# 500 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 505 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 507 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1Dfetch(texture< short4, 1, cudaReadModeNormalizedFloat> t, int x)
# 508 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 513 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 515 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1Dfetch(texture< ushort4, 1, cudaReadModeNormalizedFloat> t, int x)
# 516 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 521 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 529 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char tex1D(texture< char, 1, cudaReadModeElementType> t, float x)
# 530 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 538 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 540 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char tex1D(texture< signed char, 1, cudaReadModeElementType> t, float x)
# 541 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 545 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 547 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char tex1D(texture< unsigned char, 1, cudaReadModeElementType> t, float x)
# 548 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 552 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 554 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 tex1D(texture< char1, 1, cudaReadModeElementType> t, float x)
# 555 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 559 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 561 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 tex1D(texture< uchar1, 1, cudaReadModeElementType> t, float x)
# 562 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 566 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 568 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 tex1D(texture< char2, 1, cudaReadModeElementType> t, float x)
# 569 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 573 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 575 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 tex1D(texture< uchar2, 1, cudaReadModeElementType> t, float x)
# 576 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 580 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 582 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex1D(texture< char4, 1, cudaReadModeElementType> t, float x)
# 583 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 587 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 589 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex1D(texture< uchar4, 1, cudaReadModeElementType> t, float x)
# 590 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 594 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 602 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short tex1D(texture< short, 1, cudaReadModeElementType> t, float x)
# 603 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 607 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 609 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short tex1D(texture< unsigned short, 1, cudaReadModeElementType> t, float x)
# 610 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 614 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 616 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 tex1D(texture< short1, 1, cudaReadModeElementType> t, float x)
# 617 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 621 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 623 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 tex1D(texture< ushort1, 1, cudaReadModeElementType> t, float x)
# 624 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 628 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 630 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 tex1D(texture< short2, 1, cudaReadModeElementType> t, float x)
# 631 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 635 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 637 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 tex1D(texture< ushort2, 1, cudaReadModeElementType> t, float x)
# 638 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 642 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 644 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex1D(texture< short4, 1, cudaReadModeElementType> t, float x)
# 645 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 649 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 651 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex1D(texture< ushort4, 1, cudaReadModeElementType> t, float x)
# 652 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 656 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 664 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int tex1D(texture< int, 1, cudaReadModeElementType> t, float x)
# 665 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 669 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 671 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned tex1D(texture< unsigned, 1, cudaReadModeElementType> t, float x)
# 672 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 676 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 678 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 tex1D(texture< int1, 1, cudaReadModeElementType> t, float x)
# 679 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 683 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 685 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 tex1D(texture< uint1, 1, cudaReadModeElementType> t, float x)
# 686 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 690 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 692 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 tex1D(texture< int2, 1, cudaReadModeElementType> t, float x)
# 693 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 697 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 699 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 tex1D(texture< uint2, 1, cudaReadModeElementType> t, float x)
# 700 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 704 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 706 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex1D(texture< int4, 1, cudaReadModeElementType> t, float x)
# 707 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 711 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 713 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex1D(texture< uint4, 1, cudaReadModeElementType> t, float x)
# 714 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 718 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 798 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< float, 1, cudaReadModeElementType> t, float x)
# 799 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 803 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 805 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1D(texture< float1, 1, cudaReadModeElementType> t, float x)
# 806 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 810 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 812 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1D(texture< float2, 1, cudaReadModeElementType> t, float x)
# 813 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 817 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 819 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1D(texture< float4, 1, cudaReadModeElementType> t, float x)
# 820 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 824 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 832 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< char, 1, cudaReadModeNormalizedFloat> t, float x)
# 833 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 842 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 844 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< signed char, 1, cudaReadModeNormalizedFloat> t, float x)
# 845 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 850 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 852 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< unsigned char, 1, cudaReadModeNormalizedFloat> t, float x)
# 853 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 858 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 860 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1D(texture< char1, 1, cudaReadModeNormalizedFloat> t, float x)
# 861 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 866 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 868 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1D(texture< uchar1, 1, cudaReadModeNormalizedFloat> t, float x)
# 869 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 874 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 876 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1D(texture< char2, 1, cudaReadModeNormalizedFloat> t, float x)
# 877 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 882 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 884 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1D(texture< uchar2, 1, cudaReadModeNormalizedFloat> t, float x)
# 885 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 890 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 892 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1D(texture< char4, 1, cudaReadModeNormalizedFloat> t, float x)
# 893 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 898 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 900 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1D(texture< uchar4, 1, cudaReadModeNormalizedFloat> t, float x)
# 901 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 906 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 914 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< short, 1, cudaReadModeNormalizedFloat> t, float x)
# 915 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 920 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 922 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< unsigned short, 1, cudaReadModeNormalizedFloat> t, float x)
# 923 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 928 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 930 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1D(texture< short1, 1, cudaReadModeNormalizedFloat> t, float x)
# 931 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 936 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 938 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1D(texture< ushort1, 1, cudaReadModeNormalizedFloat> t, float x)
# 939 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 944 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 946 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1D(texture< short2, 1, cudaReadModeNormalizedFloat> t, float x)
# 947 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 952 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 954 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1D(texture< ushort2, 1, cudaReadModeNormalizedFloat> t, float x)
# 955 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 960 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 962 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1D(texture< short4, 1, cudaReadModeNormalizedFloat> t, float x)
# 963 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 968 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 970 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1D(texture< ushort4, 1, cudaReadModeNormalizedFloat> t, float x)
# 971 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 976 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 984 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char tex2D(texture< char, 2, cudaReadModeElementType> t, float x, float y)
# 985 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 993 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 995 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char tex2D(texture< signed char, 2, cudaReadModeElementType> t, float x, float y)
# 996 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1000 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1002 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char tex2D(texture< unsigned char, 2, cudaReadModeElementType> t, float x, float y)
# 1003 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1007 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1009 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 tex2D(texture< char1, 2, cudaReadModeElementType> t, float x, float y)
# 1010 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1014 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1016 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 tex2D(texture< uchar1, 2, cudaReadModeElementType> t, float x, float y)
# 1017 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1021 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1023 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 tex2D(texture< char2, 2, cudaReadModeElementType> t, float x, float y)
# 1024 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1028 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1030 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 tex2D(texture< uchar2, 2, cudaReadModeElementType> t, float x, float y)
# 1031 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1035 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1037 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2D(texture< char4, 2, cudaReadModeElementType> t, float x, float y)
# 1038 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1042 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1044 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2D(texture< uchar4, 2, cudaReadModeElementType> t, float x, float y)
# 1045 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1049 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1057 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short tex2D(texture< short, 2, cudaReadModeElementType> t, float x, float y)
# 1058 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1062 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1064 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short tex2D(texture< unsigned short, 2, cudaReadModeElementType> t, float x, float y)
# 1065 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1069 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1071 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 tex2D(texture< short1, 2, cudaReadModeElementType> t, float x, float y)
# 1072 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1076 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1078 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 tex2D(texture< ushort1, 2, cudaReadModeElementType> t, float x, float y)
# 1079 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1083 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1085 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 tex2D(texture< short2, 2, cudaReadModeElementType> t, float x, float y)
# 1086 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1090 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1092 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 tex2D(texture< ushort2, 2, cudaReadModeElementType> t, float x, float y)
# 1093 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1097 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1099 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2D(texture< short4, 2, cudaReadModeElementType> t, float x, float y)
# 1100 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1104 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1106 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2D(texture< ushort4, 2, cudaReadModeElementType> t, float x, float y)
# 1107 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1111 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1119 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int tex2D(texture< int, 2, cudaReadModeElementType> t, float x, float y)
# 1120 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1124 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1126 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned tex2D(texture< unsigned, 2, cudaReadModeElementType> t, float x, float y)
# 1127 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1131 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1133 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 tex2D(texture< int1, 2, cudaReadModeElementType> t, float x, float y)
# 1134 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1138 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1140 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 tex2D(texture< uint1, 2, cudaReadModeElementType> t, float x, float y)
# 1141 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1145 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1147 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 tex2D(texture< int2, 2, cudaReadModeElementType> t, float x, float y)
# 1148 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1152 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1154 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 tex2D(texture< uint2, 2, cudaReadModeElementType> t, float x, float y)
# 1155 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1159 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1161 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2D(texture< int4, 2, cudaReadModeElementType> t, float x, float y)
# 1162 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1166 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1168 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2D(texture< uint4, 2, cudaReadModeElementType> t, float x, float y)
# 1169 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1173 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1247 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< float, 2, cudaReadModeElementType> t, float x, float y)
# 1248 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1252 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1254 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2D(texture< float1, 2, cudaReadModeElementType> t, float x, float y)
# 1255 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1259 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1261 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2D(texture< float2, 2, cudaReadModeElementType> t, float x, float y)
# 1262 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1266 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1268 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2D(texture< float4, 2, cudaReadModeElementType> t, float x, float y)
# 1269 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1273 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1281 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< char, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1282 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1291 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1293 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< signed char, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1294 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1299 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1301 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< unsigned char, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1302 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1307 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1309 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2D(texture< char1, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1310 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1315 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1317 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2D(texture< uchar1, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1318 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1323 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1325 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2D(texture< char2, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1326 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1331 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1333 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2D(texture< uchar2, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1334 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1339 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1341 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2D(texture< char4, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1342 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1347 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1349 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2D(texture< uchar4, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1350 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1355 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1363 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< short, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1364 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1369 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1371 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< unsigned short, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1372 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1377 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1379 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2D(texture< short1, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1380 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1385 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1387 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2D(texture< ushort1, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1388 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1393 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1395 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2D(texture< short2, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1396 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1401 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1403 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2D(texture< ushort2, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1404 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1409 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1411 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2D(texture< short4, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1412 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1417 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1419 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2D(texture< ushort4, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1420 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1425 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1433 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char tex3D(texture< char, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1434 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1442 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1444 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char tex3D(texture< signed char, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1445 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1449 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1451 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char tex3D(texture< unsigned char, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1452 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1456 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1458 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 tex3D(texture< char1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1459 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1463 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1465 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 tex3D(texture< uchar1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1466 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1470 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1472 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 tex3D(texture< char2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1473 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1477 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1479 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 tex3D(texture< uchar2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1480 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1484 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1486 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex3D(texture< char4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1487 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1491 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1493 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex3D(texture< uchar4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1494 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1498 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1506 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short tex3D(texture< short, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1507 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1511 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1513 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short tex3D(texture< unsigned short, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1514 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1518 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1520 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 tex3D(texture< short1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1521 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1525 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1527 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 tex3D(texture< ushort1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1528 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1532 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1534 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 tex3D(texture< short2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1535 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1539 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1541 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 tex3D(texture< ushort2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1542 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1546 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1548 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex3D(texture< short4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1549 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1553 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1555 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex3D(texture< ushort4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1556 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1560 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1568 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int tex3D(texture< int, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1569 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1573 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1575 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned tex3D(texture< unsigned, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1576 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1580 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1582 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 tex3D(texture< int1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1583 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1587 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1589 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 tex3D(texture< uint1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1590 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1594 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1596 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 tex3D(texture< int2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1597 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1601 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1603 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 tex3D(texture< uint2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1604 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1608 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1610 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex3D(texture< int4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1611 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1615 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1617 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex3D(texture< uint4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1618 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1622 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1696 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< float, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1697 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1701 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1703 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex3D(texture< float1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1704 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1708 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1710 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex3D(texture< float2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1711 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1715 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1717 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex3D(texture< float4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1718 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1722 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1730 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< char, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1731 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1740 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1742 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< signed char, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1743 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1748 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1750 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< unsigned char, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1751 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1756 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1758 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex3D(texture< char1, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1759 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1764 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1766 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex3D(texture< uchar1, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1767 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1772 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1774 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex3D(texture< char2, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1775 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1780 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1782 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex3D(texture< uchar2, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1783 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1788 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1790 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex3D(texture< char4, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1791 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1796 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1798 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex3D(texture< uchar4, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1799 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1804 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1812 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< short, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1813 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1818 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1820 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< unsigned short, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1821 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1826 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1828 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex3D(texture< short1, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1829 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1834 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1836 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex3D(texture< ushort1, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1837 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1842 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1844 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex3D(texture< short2, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1845 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1850 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1852 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex3D(texture< ushort2, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1853 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1858 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1860 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex3D(texture< short4, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1861 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1866 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1868 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex3D(texture< ushort4, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1869 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1874 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1930 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
template< int comp, class T> __attribute__((unused)) extern int4 __itex2Dgather(texture< T, 2, cudaReadModeElementType> , float2, int = comp);
# 1932 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
template< int comp, class T> __attribute__((unused)) extern uint4 __utex2Dgather(texture< T, 2, cudaReadModeElementType> , float2, int = comp);
# 1934 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
template< int comp, class T> __attribute__((unused)) extern float4 __ftex2Dgather(texture< T, 2, cudaReadModeElementType> , float2, int = comp);
# 1954 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< char, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 1955 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1957 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1959 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< signed char, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 1960 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1962 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1964 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2Dgather(texture< unsigned char, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 1965 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1967 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1969 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< char1, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 1970 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1972 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1974 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2Dgather(texture< uchar1, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 1975 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1977 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1979 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< char2, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 1980 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1982 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1984 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2Dgather(texture< uchar2, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 1985 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1987 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1989 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< char3, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 1990 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1992 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1994 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2Dgather(texture< uchar3, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 1995 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1997 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1999 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< char4, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2000 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2002 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2004 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2Dgather(texture< uchar4, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2005 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2007 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2009 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2Dgather(texture< short, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2010 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2012 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2014 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2Dgather(texture< unsigned short, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2015 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2017 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2019 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2Dgather(texture< short1, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2020 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2022 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2024 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2Dgather(texture< ushort1, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2025 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2027 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2029 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2Dgather(texture< short2, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2030 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2032 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2034 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2Dgather(texture< ushort2, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2035 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2037 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2039 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2Dgather(texture< short3, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2040 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2042 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2044 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2Dgather(texture< ushort3, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2045 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2047 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2049 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2Dgather(texture< short4, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2050 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2052 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2054 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2Dgather(texture< ushort4, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2055 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2057 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2059 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2Dgather(texture< int, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2060 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2062 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2064 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2Dgather(texture< unsigned, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2065 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2067 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2069 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2Dgather(texture< int1, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2070 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2072 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2074 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2Dgather(texture< uint1, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2075 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2077 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2079 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2Dgather(texture< int2, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2080 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2082 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2084 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2Dgather(texture< uint2, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2085 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2087 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2089 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2Dgather(texture< int3, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2090 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2092 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2094 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2Dgather(texture< uint3, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2095 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2097 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2099 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2Dgather(texture< int4, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2100 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2102 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2104 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2Dgather(texture< uint4, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2105 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2107 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2109 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< float, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2110 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2112 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2114 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< float1, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2115 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2117 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2119 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< float2, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2120 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2122 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2124 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< float3, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2125 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2127 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2129 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< float4, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2130 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2132 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 53 "/usr/local/cuda/bin/../include/device_launch_parameters.h"
extern "C" { extern const uint3 threadIdx; }
# 55 "/usr/local/cuda/bin/../include/device_launch_parameters.h"
extern "C" { extern const uint3 blockIdx; }
# 57 "/usr/local/cuda/bin/../include/device_launch_parameters.h"
extern "C" { extern const dim3 blockDim; }
# 59 "/usr/local/cuda/bin/../include/device_launch_parameters.h"
extern "C" { extern const dim3 gridDim; }
# 61 "/usr/local/cuda/bin/../include/device_launch_parameters.h"
extern "C" { extern const int warpSize; }
# 106 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 107 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaSetupArgument(T
# 108 "/usr/local/cuda/bin/../include/cuda_runtime.h"
arg, size_t
# 109 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset)
# 111 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 112 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaSetupArgument((const void *)(&arg), sizeof(T), offset);
# 113 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 145 "/usr/local/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaEventCreate(cudaEvent_t *
# 146 "/usr/local/cuda/bin/../include/cuda_runtime.h"
event, unsigned
# 147 "/usr/local/cuda/bin/../include/cuda_runtime.h"
flags)
# 149 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 150 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaEventCreateWithFlags(event, 0);
# 151 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 208 "/usr/local/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaMallocHost(void **
# 209 "/usr/local/cuda/bin/../include/cuda_runtime.h"
ptr, size_t
# 210 "/usr/local/cuda/bin/../include/cuda_runtime.h"
size, unsigned
# 211 "/usr/local/cuda/bin/../include/cuda_runtime.h"
flags)
# 213 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 214 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaHostAlloc(ptr, size, flags);
# 215 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 217 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 218 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaHostAlloc(T **
# 219 "/usr/local/cuda/bin/../include/cuda_runtime.h"
ptr, size_t
# 220 "/usr/local/cuda/bin/../include/cuda_runtime.h"
size, unsigned
# 221 "/usr/local/cuda/bin/../include/cuda_runtime.h"
flags)
# 223 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 224 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaHostAlloc((void **)((void *)ptr), size, flags);
# 225 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 227 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 228 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaHostGetDevicePointer(T **
# 229 "/usr/local/cuda/bin/../include/cuda_runtime.h"
pDevice, void *
# 230 "/usr/local/cuda/bin/../include/cuda_runtime.h"
pHost, unsigned
# 231 "/usr/local/cuda/bin/../include/cuda_runtime.h"
flags)
# 233 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 234 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaHostGetDevicePointer((void **)((void *)pDevice), pHost, flags);
# 235 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 237 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 238 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaMalloc(T **
# 239 "/usr/local/cuda/bin/../include/cuda_runtime.h"
devPtr, size_t
# 240 "/usr/local/cuda/bin/../include/cuda_runtime.h"
size)
# 242 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 243 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMalloc((void **)((void *)devPtr), size);
# 244 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 246 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 247 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaMallocHost(T **
# 248 "/usr/local/cuda/bin/../include/cuda_runtime.h"
ptr, size_t
# 249 "/usr/local/cuda/bin/../include/cuda_runtime.h"
size, unsigned
# 250 "/usr/local/cuda/bin/../include/cuda_runtime.h"
flags = (0))
# 252 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 253 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMallocHost((void **)((void *)ptr), size, flags);
# 254 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 256 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 257 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaMallocPitch(T **
# 258 "/usr/local/cuda/bin/../include/cuda_runtime.h"
devPtr, size_t *
# 259 "/usr/local/cuda/bin/../include/cuda_runtime.h"
pitch, size_t
# 260 "/usr/local/cuda/bin/../include/cuda_runtime.h"
width, size_t
# 261 "/usr/local/cuda/bin/../include/cuda_runtime.h"
height)
# 263 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 264 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMallocPitch((void **)((void *)devPtr), pitch, width, height);
# 265 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 275 "/usr/local/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaMemcpyToSymbol(char *
# 276 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol, const void *
# 277 "/usr/local/cuda/bin/../include/cuda_runtime.h"
src, size_t
# 278 "/usr/local/cuda/bin/../include/cuda_runtime.h"
count, size_t
# 279 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 280 "/usr/local/cuda/bin/../include/cuda_runtime.h"
kind = cudaMemcpyHostToDevice)
# 282 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 283 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMemcpyToSymbol((const char *)symbol, src, count, offset, kind);
# 284 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 286 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 287 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaMemcpyToSymbol(const T &
# 288 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol, const void *
# 289 "/usr/local/cuda/bin/../include/cuda_runtime.h"
src, size_t
# 290 "/usr/local/cuda/bin/../include/cuda_runtime.h"
count, size_t
# 291 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 292 "/usr/local/cuda/bin/../include/cuda_runtime.h"
kind = cudaMemcpyHostToDevice)
# 294 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 295 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMemcpyToSymbol((const char *)(&symbol), src, count, offset, kind);
# 296 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 298 "/usr/local/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaMemcpyToSymbolAsync(char *
# 299 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol, const void *
# 300 "/usr/local/cuda/bin/../include/cuda_runtime.h"
src, size_t
# 301 "/usr/local/cuda/bin/../include/cuda_runtime.h"
count, size_t
# 302 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 303 "/usr/local/cuda/bin/../include/cuda_runtime.h"
kind = cudaMemcpyHostToDevice, cudaStream_t
# 304 "/usr/local/cuda/bin/../include/cuda_runtime.h"
stream = 0)
# 306 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 307 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMemcpyToSymbolAsync((const char *)symbol, src, count, offset, kind, stream);
# 308 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 310 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 311 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaMemcpyToSymbolAsync(const T &
# 312 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol, const void *
# 313 "/usr/local/cuda/bin/../include/cuda_runtime.h"
src, size_t
# 314 "/usr/local/cuda/bin/../include/cuda_runtime.h"
count, size_t
# 315 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 316 "/usr/local/cuda/bin/../include/cuda_runtime.h"
kind = cudaMemcpyHostToDevice, cudaStream_t
# 317 "/usr/local/cuda/bin/../include/cuda_runtime.h"
stream = 0)
# 319 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 320 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMemcpyToSymbolAsync((const char *)(&symbol), src, count, offset, kind, stream);
# 321 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 329 "/usr/local/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaMemcpyFromSymbol(void *
# 330 "/usr/local/cuda/bin/../include/cuda_runtime.h"
dst, char *
# 331 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol, size_t
# 332 "/usr/local/cuda/bin/../include/cuda_runtime.h"
count, size_t
# 333 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 334 "/usr/local/cuda/bin/../include/cuda_runtime.h"
kind = cudaMemcpyDeviceToHost)
# 336 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 337 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMemcpyFromSymbol(dst, (const char *)symbol, count, offset, kind);
# 338 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 340 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 341 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaMemcpyFromSymbol(void *
# 342 "/usr/local/cuda/bin/../include/cuda_runtime.h"
dst, const T &
# 343 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol, size_t
# 344 "/usr/local/cuda/bin/../include/cuda_runtime.h"
count, size_t
# 345 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 346 "/usr/local/cuda/bin/../include/cuda_runtime.h"
kind = cudaMemcpyDeviceToHost)
# 348 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 349 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMemcpyFromSymbol(dst, (const char *)(&symbol), count, offset, kind);
# 350 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 352 "/usr/local/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaMemcpyFromSymbolAsync(void *
# 353 "/usr/local/cuda/bin/../include/cuda_runtime.h"
dst, char *
# 354 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol, size_t
# 355 "/usr/local/cuda/bin/../include/cuda_runtime.h"
count, size_t
# 356 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 357 "/usr/local/cuda/bin/../include/cuda_runtime.h"
kind = cudaMemcpyDeviceToHost, cudaStream_t
# 358 "/usr/local/cuda/bin/../include/cuda_runtime.h"
stream = 0)
# 360 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 361 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMemcpyFromSymbolAsync(dst, (const char *)symbol, count, offset, kind, stream);
# 362 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 364 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 365 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaMemcpyFromSymbolAsync(void *
# 366 "/usr/local/cuda/bin/../include/cuda_runtime.h"
dst, const T &
# 367 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol, size_t
# 368 "/usr/local/cuda/bin/../include/cuda_runtime.h"
count, size_t
# 369 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 370 "/usr/local/cuda/bin/../include/cuda_runtime.h"
kind = cudaMemcpyDeviceToHost, cudaStream_t
# 371 "/usr/local/cuda/bin/../include/cuda_runtime.h"
stream = 0)
# 373 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 374 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMemcpyFromSymbolAsync(dst, (const char *)(&symbol), count, offset, kind, stream);
# 375 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 377 "/usr/local/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaGetSymbolAddress(void **
# 378 "/usr/local/cuda/bin/../include/cuda_runtime.h"
devPtr, char *
# 379 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol)
# 381 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 382 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaGetSymbolAddress(devPtr, (const char *)symbol);
# 383 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 410 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 411 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaGetSymbolAddress(void **
# 412 "/usr/local/cuda/bin/../include/cuda_runtime.h"
devPtr, const T &
# 413 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol)
# 415 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 416 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaGetSymbolAddress(devPtr, (const char *)(&symbol));
# 417 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 425 "/usr/local/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaGetSymbolSize(size_t *
# 426 "/usr/local/cuda/bin/../include/cuda_runtime.h"
size, char *
# 427 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol)
# 429 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 430 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaGetSymbolSize(size, (const char *)symbol);
# 431 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 458 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 459 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaGetSymbolSize(size_t *
# 460 "/usr/local/cuda/bin/../include/cuda_runtime.h"
size, const T &
# 461 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol)
# 463 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 464 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaGetSymbolSize(size, (const char *)(&symbol));
# 465 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 507 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 508 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaBindTexture(size_t *
# 509 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset, const texture< T, dim, readMode> &
# 510 "/usr/local/cuda/bin/../include/cuda_runtime.h"
tex, const void *
# 511 "/usr/local/cuda/bin/../include/cuda_runtime.h"
devPtr, const cudaChannelFormatDesc &
# 512 "/usr/local/cuda/bin/../include/cuda_runtime.h"
desc, size_t
# 513 "/usr/local/cuda/bin/../include/cuda_runtime.h"
size = (((2147483647) * 2U) + 1U))
# 515 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 516 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaBindTexture(offset, &tex, devPtr, &desc, size);
# 517 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 552 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 553 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaBindTexture(size_t *
# 554 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset, const texture< T, dim, readMode> &
# 555 "/usr/local/cuda/bin/../include/cuda_runtime.h"
tex, const void *
# 556 "/usr/local/cuda/bin/../include/cuda_runtime.h"
devPtr, size_t
# 557 "/usr/local/cuda/bin/../include/cuda_runtime.h"
size = (((2147483647) * 2U) + 1U))
# 559 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 560 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaBindTexture(offset, tex, devPtr, (tex.channelDesc), size);
# 561 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 608 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 609 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaBindTexture2D(size_t *
# 610 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset, const texture< T, dim, readMode> &
# 611 "/usr/local/cuda/bin/../include/cuda_runtime.h"
tex, const void *
# 612 "/usr/local/cuda/bin/../include/cuda_runtime.h"
devPtr, const cudaChannelFormatDesc &
# 613 "/usr/local/cuda/bin/../include/cuda_runtime.h"
desc, size_t
# 614 "/usr/local/cuda/bin/../include/cuda_runtime.h"
width, size_t
# 615 "/usr/local/cuda/bin/../include/cuda_runtime.h"
height, size_t
# 616 "/usr/local/cuda/bin/../include/cuda_runtime.h"
pitch)
# 618 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 619 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaBindTexture2D(offset, &tex, devPtr, &desc, width, height, pitch);
# 620 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 666 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 667 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaBindTexture2D(size_t *
# 668 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset, const texture< T, dim, readMode> &
# 669 "/usr/local/cuda/bin/../include/cuda_runtime.h"
tex, const void *
# 670 "/usr/local/cuda/bin/../include/cuda_runtime.h"
devPtr, size_t
# 671 "/usr/local/cuda/bin/../include/cuda_runtime.h"
width, size_t
# 672 "/usr/local/cuda/bin/../include/cuda_runtime.h"
height, size_t
# 673 "/usr/local/cuda/bin/../include/cuda_runtime.h"
pitch)
# 675 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 676 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaBindTexture2D(offset, &tex, devPtr, &(tex.texture< T, dim, readMode> ::channelDesc), width, height, pitch);
# 677 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 708 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 709 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaBindTextureToArray(const texture< T, dim, readMode> &
# 710 "/usr/local/cuda/bin/../include/cuda_runtime.h"
tex, const cudaArray *
# 711 "/usr/local/cuda/bin/../include/cuda_runtime.h"
array, const cudaChannelFormatDesc &
# 712 "/usr/local/cuda/bin/../include/cuda_runtime.h"
desc)
# 714 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 715 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaBindTextureToArray(&tex, array, &desc);
# 716 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 746 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 747 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaBindTextureToArray(const texture< T, dim, readMode> &
# 748 "/usr/local/cuda/bin/../include/cuda_runtime.h"
tex, const cudaArray *
# 749 "/usr/local/cuda/bin/../include/cuda_runtime.h"
array)
# 751 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 752 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaChannelFormatDesc desc;
# 753 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaError_t err = cudaGetChannelDesc(&desc, array);
# 755 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return (err == (cudaSuccess)) ? cudaBindTextureToArray(tex, array, desc) : err;
# 756 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 785 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 786 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaUnbindTexture(const texture< T, dim, readMode> &
# 787 "/usr/local/cuda/bin/../include/cuda_runtime.h"
tex)
# 789 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 790 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaUnbindTexture(&tex);
# 791 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 825 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 826 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaGetTextureAlignmentOffset(size_t *
# 827 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset, const texture< T, dim, readMode> &
# 828 "/usr/local/cuda/bin/../include/cuda_runtime.h"
tex)
# 830 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 831 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaGetTextureAlignmentOffset(offset, &tex);
# 832 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 886 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 887 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaFuncSetCacheConfig(T *
# 888 "/usr/local/cuda/bin/../include/cuda_runtime.h"
func, cudaFuncCache
# 889 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cacheConfig)
# 891 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 892 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaFuncSetCacheConfig((const char *)func, cacheConfig);
# 893 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 930 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 931 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaLaunch(T *
# 932 "/usr/local/cuda/bin/../include/cuda_runtime.h"
entry)
# 934 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 935 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaLaunch((const char *)entry);
# 936 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 970 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 971 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaFuncGetAttributes(cudaFuncAttributes *
# 972 "/usr/local/cuda/bin/../include/cuda_runtime.h"
attr, T *
# 973 "/usr/local/cuda/bin/../include/cuda_runtime.h"
entry)
# 975 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 976 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaFuncGetAttributes(attr, (const char *)entry);
# 977 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 999 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim> inline cudaError_t
# 1000 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaBindSurfaceToArray(const surface< T, dim> &
# 1001 "/usr/local/cuda/bin/../include/cuda_runtime.h"
surf, const cudaArray *
# 1002 "/usr/local/cuda/bin/../include/cuda_runtime.h"
array, const cudaChannelFormatDesc &
# 1003 "/usr/local/cuda/bin/../include/cuda_runtime.h"
desc)
# 1005 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 1006 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaBindSurfaceToArray(&surf, array, &desc);
# 1007 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 1028 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim> inline cudaError_t
# 1029 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaBindSurfaceToArray(const surface< T, dim> &
# 1030 "/usr/local/cuda/bin/../include/cuda_runtime.h"
surf, const cudaArray *
# 1031 "/usr/local/cuda/bin/../include/cuda_runtime.h"
array)
# 1033 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 1034 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaChannelFormatDesc desc;
# 1035 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaError_t err = cudaGetChannelDesc(&desc, array);
# 1037 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return (err == (cudaSuccess)) ? cudaBindSurfaceToArray(surf, array, desc) : err;
# 1038 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 45 "/usr/include/stdio.h" 3
struct _IO_FILE;
# 49 "/usr/include/stdio.h" 3
extern "C" { typedef _IO_FILE FILE; }
# 65 "/usr/include/stdio.h" 3
extern "C" { typedef _IO_FILE __FILE; }
# 95 "/usr/include/wchar.h" 3
extern "C" { typedef
# 84 "/usr/include/wchar.h" 3
struct {
# 85 "/usr/include/wchar.h" 3
int __count;
# 87 "/usr/include/wchar.h" 3
union {
# 89 "/usr/include/wchar.h" 3
unsigned __wch;
# 93 "/usr/include/wchar.h" 3
char __wchb[4];
# 94 "/usr/include/wchar.h" 3
} __value;
# 95 "/usr/include/wchar.h" 3
} __mbstate_t; }
# 26 "/usr/include/_G_config.h" 3
extern "C" { typedef
# 23 "/usr/include/_G_config.h" 3
struct {
# 24 "/usr/include/_G_config.h" 3
__off_t __pos;
# 25 "/usr/include/_G_config.h" 3
__mbstate_t __state;
# 26 "/usr/include/_G_config.h" 3
} _G_fpos_t; }
# 31 "/usr/include/_G_config.h" 3
extern "C" { typedef
# 28 "/usr/include/_G_config.h" 3
struct {
# 29 "/usr/include/_G_config.h" 3
__off64_t __pos;
# 30 "/usr/include/_G_config.h" 3
__mbstate_t __state;
# 31 "/usr/include/_G_config.h" 3
} _G_fpos64_t; }
# 53 "/usr/include/_G_config.h" 3
extern "C" { typedef short _G_int16_t; }
# 54 "/usr/include/_G_config.h" 3
extern "C" { typedef int _G_int32_t; }
# 55 "/usr/include/_G_config.h" 3
extern "C" { typedef unsigned short _G_uint16_t; }
# 56 "/usr/include/_G_config.h" 3
extern "C" { typedef unsigned _G_uint32_t; }
# 40 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include/va.h" 3
extern "C" { typedef __builtin_va_list __gnuc_va_list; }
# 170 "/usr/include/libio.h" 3
struct _IO_jump_t; struct _IO_FILE;
# 180 "/usr/include/libio.h" 3
extern "C" { typedef void _IO_lock_t; }
# 186 "/usr/include/libio.h" 3
extern "C" { struct _IO_marker {
# 187 "/usr/include/libio.h" 3
_IO_marker *_next;
# 188 "/usr/include/libio.h" 3
_IO_FILE *_sbuf;
# 192 "/usr/include/libio.h" 3
int _pos;
# 203 "/usr/include/libio.h" 3
}; }
# 206 "/usr/include/libio.h" 3
enum __codecvt_result {
# 208 "/usr/include/libio.h" 3
__codecvt_ok,
# 209 "/usr/include/libio.h" 3
__codecvt_partial,
# 210 "/usr/include/libio.h" 3
__codecvt_error,
# 211 "/usr/include/libio.h" 3
__codecvt_noconv
# 212 "/usr/include/libio.h" 3
};
# 271 "/usr/include/libio.h" 3
extern "C" { struct _IO_FILE {
# 272 "/usr/include/libio.h" 3
int _flags;
# 277 "/usr/include/libio.h" 3
char *_IO_read_ptr;
# 278 "/usr/include/libio.h" 3
char *_IO_read_end;
# 279 "/usr/include/libio.h" 3
char *_IO_read_base;
# 280 "/usr/include/libio.h" 3
char *_IO_write_base;
# 281 "/usr/include/libio.h" 3
char *_IO_write_ptr;
# 282 "/usr/include/libio.h" 3
char *_IO_write_end;
# 283 "/usr/include/libio.h" 3
char *_IO_buf_base;
# 284 "/usr/include/libio.h" 3
char *_IO_buf_end;
# 286 "/usr/include/libio.h" 3
char *_IO_save_base;
# 287 "/usr/include/libio.h" 3
char *_IO_backup_base;
# 288 "/usr/include/libio.h" 3
char *_IO_save_end;
# 290 "/usr/include/libio.h" 3
_IO_marker *_markers;
# 292 "/usr/include/libio.h" 3
_IO_FILE *_chain;
# 294 "/usr/include/libio.h" 3
int _fileno;
# 298 "/usr/include/libio.h" 3
int _flags2;
# 300 "/usr/include/libio.h" 3
__off_t _old_offset;
# 304 "/usr/include/libio.h" 3
unsigned short _cur_column;
# 305 "/usr/include/libio.h" 3
signed char _vtable_offset;
# 306 "/usr/include/libio.h" 3
char _shortbuf[1];
# 310 "/usr/include/libio.h" 3
_IO_lock_t *_lock;
# 319 "/usr/include/libio.h" 3
__off64_t _offset;
# 328 "/usr/include/libio.h" 3
void *__pad1;
# 329 "/usr/include/libio.h" 3
void *__pad2;
# 330 "/usr/include/libio.h" 3
void *__pad3;
# 331 "/usr/include/libio.h" 3
void *__pad4;
# 332 "/usr/include/libio.h" 3
size_t __pad5;
# 334 "/usr/include/libio.h" 3
int _mode;
# 336 "/usr/include/libio.h" 3
char _unused2[((((15) * sizeof(int)) - ((4) * sizeof(void *))) - sizeof(size_t))];
# 338 "/usr/include/libio.h" 3
}; }
# 344 "/usr/include/libio.h" 3
struct _IO_FILE_plus;
# 346 "/usr/include/libio.h" 3
extern "C" { extern _IO_FILE_plus _IO_2_1_stdin_; }
# 347 "/usr/include/libio.h" 3
extern "C" { extern _IO_FILE_plus _IO_2_1_stdout_; }
# 348 "/usr/include/libio.h" 3
extern "C" { extern _IO_FILE_plus _IO_2_1_stderr_; }
# 364 "/usr/include/libio.h" 3
extern "C" { typedef __ssize_t __io_read_fn(void *, char *, size_t); }
# 372 "/usr/include/libio.h" 3
extern "C" { typedef __ssize_t __io_write_fn(void *, const char *, size_t); }
# 381 "/usr/include/libio.h" 3
extern "C" { typedef int __io_seek_fn(void *, __off64_t *, int); }
# 384 "/usr/include/libio.h" 3
extern "C" { typedef int __io_close_fn(void *); }
# 389 "/usr/include/libio.h" 3
extern "C" { typedef __io_read_fn cookie_read_function_t; }
# 390 "/usr/include/libio.h" 3
extern "C" { typedef __io_write_fn cookie_write_function_t; }
# 391 "/usr/include/libio.h" 3
extern "C" { typedef __io_seek_fn cookie_seek_function_t; }
# 392 "/usr/include/libio.h" 3
extern "C" { typedef __io_close_fn cookie_close_function_t; }
# 401 "/usr/include/libio.h" 3
extern "C" { typedef
# 396 "/usr/include/libio.h" 3
struct {
# 397 "/usr/include/libio.h" 3
__io_read_fn *read;
# 398 "/usr/include/libio.h" 3
__io_write_fn *write;
# 399 "/usr/include/libio.h" 3
__io_seek_fn *seek;
# 400 "/usr/include/libio.h" 3
__io_close_fn *close;
# 401 "/usr/include/libio.h" 3
} _IO_cookie_io_functions_t; }
# 402 "/usr/include/libio.h" 3
extern "C" { typedef _IO_cookie_io_functions_t cookie_io_functions_t; }
# 404 "/usr/include/libio.h" 3
struct _IO_cookie_file;
# 407 "/usr/include/libio.h" 3
extern "C" void _IO_cookie_init(_IO_cookie_file *, int, void *, _IO_cookie_io_functions_t);
# 416 "/usr/include/libio.h" 3
extern "C" int __underflow(_IO_FILE *);
# 417 "/usr/include/libio.h" 3
extern "C" int __uflow(_IO_FILE *);
# 418 "/usr/include/libio.h" 3
extern "C" int __overflow(_IO_FILE *, int);
# 460 "/usr/include/libio.h" 3
extern "C" int _IO_getc(_IO_FILE *);
# 461 "/usr/include/libio.h" 3
extern "C" int _IO_putc(int, _IO_FILE *);
# 462 "/usr/include/libio.h" 3
extern "C" int _IO_feof(_IO_FILE *) throw();
# 463 "/usr/include/libio.h" 3
extern "C" int _IO_ferror(_IO_FILE *) throw();
# 465 "/usr/include/libio.h" 3
extern "C" int _IO_peekc_locked(_IO_FILE *);
# 471 "/usr/include/libio.h" 3
extern "C" void _IO_flockfile(_IO_FILE *) throw();
# 472 "/usr/include/libio.h" 3
extern "C" void _IO_funlockfile(_IO_FILE *) throw();
# 473 "/usr/include/libio.h" 3
extern "C" int _IO_ftrylockfile(_IO_FILE *) throw();
# 490 "/usr/include/libio.h" 3
extern "C" int _IO_vfscanf(_IO_FILE *__restrict__, const char *__restrict__, __gnuc_va_list, int *__restrict__);
# 492 "/usr/include/libio.h" 3
extern "C" int _IO_vfprintf(_IO_FILE *__restrict__, const char *__restrict__, __gnuc_va_list);
# 494 "/usr/include/libio.h" 3
extern "C" __ssize_t _IO_padn(_IO_FILE *, int, __ssize_t);
# 495 "/usr/include/libio.h" 3
extern "C" size_t _IO_sgetn(_IO_FILE *, void *, size_t);
# 497 "/usr/include/libio.h" 3
extern "C" __off64_t _IO_seekoff(_IO_FILE *, __off64_t, int, int);
# 498 "/usr/include/libio.h" 3
extern "C" __off64_t _IO_seekpos(_IO_FILE *, __off64_t, int);
# 500 "/usr/include/libio.h" 3
extern "C" void _IO_free_backup_area(_IO_FILE *) throw();
# 80 "/usr/include/stdio.h" 3
extern "C" { typedef __gnuc_va_list va_list; }
# 111 "/usr/include/stdio.h" 3
extern "C" { typedef _G_fpos_t fpos_t; }
# 117 "/usr/include/stdio.h" 3
extern "C" { typedef _G_fpos64_t fpos64_t; }
# 165 "/usr/include/stdio.h" 3
extern "C" { extern _IO_FILE *stdin; }
# 166 "/usr/include/stdio.h" 3
extern "C" { extern _IO_FILE *stdout; }
# 167 "/usr/include/stdio.h" 3
extern "C" { extern _IO_FILE *stderr; }
# 175 "/usr/include/stdio.h" 3
extern "C" int remove(const char *) throw();
# 177 "/usr/include/stdio.h" 3
extern "C" int rename(const char *, const char *) throw();
# 182 "/usr/include/stdio.h" 3
extern "C" int renameat(int, const char *, int, const char *) throw();
# 192 "/usr/include/stdio.h" 3
extern "C" FILE *tmpfile();
# 202 "/usr/include/stdio.h" 3
extern "C" FILE *tmpfile64();
# 206 "/usr/include/stdio.h" 3
extern "C" char *tmpnam(char *) throw();
# 212 "/usr/include/stdio.h" 3
extern "C" char *tmpnam_r(char *) throw();
# 224 "/usr/include/stdio.h" 3
extern "C" char *tempnam(const char *, const char *) throw() __attribute__((__malloc__));
# 234 "/usr/include/stdio.h" 3
extern "C" int fclose(FILE *);
# 239 "/usr/include/stdio.h" 3
extern "C" int fflush(FILE *);
# 249 "/usr/include/stdio.h" 3
extern "C" int fflush_unlocked(FILE *);
# 259 "/usr/include/stdio.h" 3
extern "C" int fcloseall();
# 269 "/usr/include/stdio.h" 3
extern "C" FILE *fopen(const char *__restrict__, const char *__restrict__);
# 275 "/usr/include/stdio.h" 3
extern "C" FILE *freopen(const char *__restrict__, const char *__restrict__, FILE *__restrict__);
# 294 "/usr/include/stdio.h" 3
extern "C" FILE *fopen64(const char *__restrict__, const char *__restrict__);
# 296 "/usr/include/stdio.h" 3
extern "C" FILE *freopen64(const char *__restrict__, const char *__restrict__, FILE *__restrict__);
# 303 "/usr/include/stdio.h" 3
extern "C" FILE *fdopen(int, const char *) throw();
# 309 "/usr/include/stdio.h" 3
extern "C" FILE *fopencookie(void *__restrict__, const char *__restrict__, _IO_cookie_io_functions_t) throw();
# 316 "/usr/include/stdio.h" 3
extern "C" FILE *fmemopen(void *, size_t, const char *) throw();
# 322 "/usr/include/stdio.h" 3
extern "C" FILE *open_memstream(char **, size_t *) throw();
# 329 "/usr/include/stdio.h" 3
extern "C" void setbuf(FILE *__restrict__, char *__restrict__) throw();
# 333 "/usr/include/stdio.h" 3
extern "C" int setvbuf(FILE *__restrict__, char *__restrict__, int, size_t) throw();
# 340 "/usr/include/stdio.h" 3
extern "C" void setbuffer(FILE *__restrict__, char *__restrict__, size_t) throw();
# 344 "/usr/include/stdio.h" 3
extern "C" void setlinebuf(FILE *) throw();
# 353 "/usr/include/stdio.h" 3
extern "C" int fprintf(FILE *__restrict__, const char *__restrict__, ...);
# 359 "/usr/include/stdio.h" 3
extern "C" int printf(const char *__restrict__, ...);
# 361 "/usr/include/stdio.h" 3
extern "C" int sprintf(char *__restrict__, const char *__restrict__, ...) throw();
# 368 "/usr/include/stdio.h" 3
extern "C" int vfprintf(FILE *__restrict__, const char *__restrict__, __gnuc_va_list);
# 374 "/usr/include/stdio.h" 3
extern "C" int vprintf(const char *__restrict__, __gnuc_va_list);
# 376 "/usr/include/stdio.h" 3
extern "C" int vsprintf(char *__restrict__, const char *__restrict__, __gnuc_va_list) throw();
# 383 "/usr/include/stdio.h" 3
extern "C" int snprintf(char *__restrict__, size_t, const char *__restrict__, ...) throw();
# 387 "/usr/include/stdio.h" 3
extern "C" int vsnprintf(char *__restrict__, size_t, const char *__restrict__, __gnuc_va_list) throw();
# 396 "/usr/include/stdio.h" 3
extern "C" int vasprintf(char **__restrict__, const char *__restrict__, __gnuc_va_list) throw();
# 399 "/usr/include/stdio.h" 3
extern "C" int __asprintf(char **__restrict__, const char *__restrict__, ...) throw();
# 402 "/usr/include/stdio.h" 3
extern "C" int asprintf(char **__restrict__, const char *__restrict__, ...) throw();
# 414 "/usr/include/stdio.h" 3
extern "C" int vdprintf(int, const char *__restrict__, __gnuc_va_list);
# 417 "/usr/include/stdio.h" 3
extern "C" int dprintf(int, const char *__restrict__, ...);
# 427 "/usr/include/stdio.h" 3
extern "C" int fscanf(FILE *__restrict__, const char *__restrict__, ...);
# 433 "/usr/include/stdio.h" 3
extern "C" int scanf(const char *__restrict__, ...);
# 435 "/usr/include/stdio.h" 3
extern "C" int sscanf(const char *__restrict__, const char *__restrict__, ...) throw();
# 473 "/usr/include/stdio.h" 3
extern "C" int vfscanf(FILE *__restrict__, const char *__restrict__, __gnuc_va_list);
# 481 "/usr/include/stdio.h" 3
extern "C" int vscanf(const char *__restrict__, __gnuc_va_list);
# 485 "/usr/include/stdio.h" 3
extern "C" int vsscanf(const char *__restrict__, const char *__restrict__, __gnuc_va_list) throw();
# 533 "/usr/include/stdio.h" 3
extern "C" int fgetc(FILE *);
# 534 "/usr/include/stdio.h" 3
extern "C" int getc(FILE *);
# 540 "/usr/include/stdio.h" 3
extern "C" int getchar();
# 552 "/usr/include/stdio.h" 3
extern "C" int getc_unlocked(FILE *);
# 553 "/usr/include/stdio.h" 3
extern "C" int getchar_unlocked();
# 563 "/usr/include/stdio.h" 3
extern "C" int fgetc_unlocked(FILE *);
# 575 "/usr/include/stdio.h" 3
extern "C" int fputc(int, FILE *);
# 576 "/usr/include/stdio.h" 3
extern "C" int putc(int, FILE *);
# 582 "/usr/include/stdio.h" 3
extern "C" int putchar(int);
# 596 "/usr/include/stdio.h" 3
extern "C" int fputc_unlocked(int, FILE *);
# 604 "/usr/include/stdio.h" 3
extern "C" int putc_unlocked(int, FILE *);
# 605 "/usr/include/stdio.h" 3
extern "C" int putchar_unlocked(int);
# 612 "/usr/include/stdio.h" 3
extern "C" int getw(FILE *);
# 615 "/usr/include/stdio.h" 3
extern "C" int putw(int, FILE *);
# 624 "/usr/include/stdio.h" 3
extern "C" char *fgets(char *__restrict__, int, FILE *__restrict__);
# 632 "/usr/include/stdio.h" 3
extern "C" char *gets(char *);
# 642 "/usr/include/stdio.h" 3
extern "C" char *fgets_unlocked(char *__restrict__, int, FILE *__restrict__);
# 658 "/usr/include/stdio.h" 3
extern "C" __ssize_t __getdelim(char **__restrict__, size_t *__restrict__, int, FILE *__restrict__);
# 661 "/usr/include/stdio.h" 3
extern "C" __ssize_t getdelim(char **__restrict__, size_t *__restrict__, int, FILE *__restrict__);
# 671 "/usr/include/stdio.h" 3
extern "C" __ssize_t getline(char **__restrict__, size_t *__restrict__, FILE *__restrict__);
# 682 "/usr/include/stdio.h" 3
extern "C" int fputs(const char *__restrict__, FILE *__restrict__);
# 688 "/usr/include/stdio.h" 3
extern "C" int puts(const char *);
# 695 "/usr/include/stdio.h" 3
extern "C" int ungetc(int, FILE *);
# 702 "/usr/include/stdio.h" 3
extern "C" size_t fread(void *__restrict__, size_t, size_t, FILE *__restrict__);
# 708 "/usr/include/stdio.h" 3
extern "C" size_t fwrite(const void *__restrict__, size_t, size_t, FILE *__restrict__);
# 719 "/usr/include/stdio.h" 3
extern "C" int fputs_unlocked(const char *__restrict__, FILE *__restrict__);
# 730 "/usr/include/stdio.h" 3
extern "C" size_t fread_unlocked(void *__restrict__, size_t, size_t, FILE *__restrict__);
# 732 "/usr/include/stdio.h" 3
extern "C" size_t fwrite_unlocked(const void *__restrict__, size_t, size_t, FILE *__restrict__);
# 742 "/usr/include/stdio.h" 3
extern "C" int fseek(FILE *, long, int);
# 747 "/usr/include/stdio.h" 3
extern "C" long ftell(FILE *);
# 752 "/usr/include/stdio.h" 3
extern "C" void rewind(FILE *);
# 766 "/usr/include/stdio.h" 3
extern "C" int fseeko(FILE *, __off_t, int);
# 771 "/usr/include/stdio.h" 3
extern "C" __off_t ftello(FILE *);
# 791 "/usr/include/stdio.h" 3
extern "C" int fgetpos(FILE *__restrict__, fpos_t *__restrict__);
# 796 "/usr/include/stdio.h" 3
extern "C" int fsetpos(FILE *, const fpos_t *);
# 811 "/usr/include/stdio.h" 3
extern "C" int fseeko64(FILE *, __off64_t, int);
# 812 "/usr/include/stdio.h" 3
extern "C" __off64_t ftello64(FILE *);
# 813 "/usr/include/stdio.h" 3
extern "C" int fgetpos64(FILE *__restrict__, fpos64_t *__restrict__);
# 814 "/usr/include/stdio.h" 3
extern "C" int fsetpos64(FILE *, const fpos64_t *);
# 819 "/usr/include/stdio.h" 3
extern "C" void clearerr(FILE *) throw();
# 821 "/usr/include/stdio.h" 3
extern "C" int feof(FILE *) throw();
# 823 "/usr/include/stdio.h" 3
extern "C" int ferror(FILE *) throw();
# 828 "/usr/include/stdio.h" 3
extern "C" void clearerr_unlocked(FILE *) throw();
# 829 "/usr/include/stdio.h" 3
extern "C" int feof_unlocked(FILE *) throw();
# 830 "/usr/include/stdio.h" 3
extern "C" int ferror_unlocked(FILE *) throw();
# 839 "/usr/include/stdio.h" 3
extern "C" void perror(const char *);
# 27 "/usr/include/bits/sys_errlist.h" 3
extern "C" { extern int sys_nerr; }
# 28 "/usr/include/bits/sys_errlist.h" 3
extern "C" { extern const char *const sys_errlist[]; }
# 31 "/usr/include/bits/sys_errlist.h" 3
extern "C" { extern int _sys_nerr; }
# 32 "/usr/include/bits/sys_errlist.h" 3
extern "C" { extern const char *const _sys_errlist[]; }
# 851 "/usr/include/stdio.h" 3
extern "C" int fileno(FILE *) throw();
# 856 "/usr/include/stdio.h" 3
extern "C" int fileno_unlocked(FILE *) throw();
# 866 "/usr/include/stdio.h" 3
extern "C" FILE *popen(const char *, const char *);
# 872 "/usr/include/stdio.h" 3
extern "C" int pclose(FILE *);
# 878 "/usr/include/stdio.h" 3
extern "C" char *ctermid(char *) throw();
# 884 "/usr/include/stdio.h" 3
extern "C" char *cuserid(char *);
# 889 "/usr/include/stdio.h" 3
struct obstack;
# 892 "/usr/include/stdio.h" 3
extern "C" int obstack_printf(obstack *__restrict__, const char *__restrict__, ...) throw();
# 895 "/usr/include/stdio.h" 3
extern "C" int obstack_vprintf(obstack *__restrict__, const char *__restrict__, __gnuc_va_list) throw();
# 906 "/usr/include/stdio.h" 3
extern "C" void flockfile(FILE *) throw();
# 910 "/usr/include/stdio.h" 3
extern "C" int ftrylockfile(FILE *) throw();
# 913 "/usr/include/stdio.h" 3
extern "C" void funlockfile(FILE *) throw();
# 128 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef unsigned long long CUdeviceptr; }
# 135 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef int CUdevice; }
# 136 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef struct CUctx_st *CUcontext; }
# 137 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef struct CUmod_st *CUmodule; }
# 138 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef struct CUfunc_st *CUfunction; }
# 139 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef struct CUarray_st *CUarray; }
# 140 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef struct CUtexref_st *CUtexref; }
# 141 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef struct CUsurfref_st *CUsurfref; }
# 142 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef CUevent_st *CUevent; }
# 143 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef CUstream_st *CUstream; }
# 144 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef struct CUgraphicsResource_st *CUgraphicsResource; }
# 148 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 146 "/usr/local/cuda/bin/../include/cuda.h"
struct CUuuid_st {
# 147 "/usr/local/cuda/bin/../include/cuda.h"
char bytes[16];
# 148 "/usr/local/cuda/bin/../include/cuda.h"
} CUuuid; }
# 162 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 153 "/usr/local/cuda/bin/../include/cuda.h"
enum CUctx_flags_enum {
# 154 "/usr/local/cuda/bin/../include/cuda.h"
CU_CTX_SCHED_AUTO,
# 155 "/usr/local/cuda/bin/../include/cuda.h"
CU_CTX_SCHED_SPIN,
# 156 "/usr/local/cuda/bin/../include/cuda.h"
CU_CTX_SCHED_YIELD,
# 157 "/usr/local/cuda/bin/../include/cuda.h"
CU_CTX_SCHED_MASK,
# 158 "/usr/local/cuda/bin/../include/cuda.h"
CU_CTX_BLOCKING_SYNC,
# 159 "/usr/local/cuda/bin/../include/cuda.h"
CU_CTX_MAP_HOST = 8,
# 160 "/usr/local/cuda/bin/../include/cuda.h"
CU_CTX_LMEM_RESIZE_TO_MAX = 16,
# 161 "/usr/local/cuda/bin/../include/cuda.h"
CU_CTX_FLAGS_MASK = 31
# 162 "/usr/local/cuda/bin/../include/cuda.h"
} CUctx_flags; }
# 171 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 167 "/usr/local/cuda/bin/../include/cuda.h"
enum CUevent_flags_enum {
# 168 "/usr/local/cuda/bin/../include/cuda.h"
CU_EVENT_DEFAULT,
# 169 "/usr/local/cuda/bin/../include/cuda.h"
CU_EVENT_BLOCKING_SYNC,
# 170 "/usr/local/cuda/bin/../include/cuda.h"
CU_EVENT_DISABLE_TIMING
# 171 "/usr/local/cuda/bin/../include/cuda.h"
} CUevent_flags; }
# 185 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 176 "/usr/local/cuda/bin/../include/cuda.h"
enum CUarray_format_enum {
# 177 "/usr/local/cuda/bin/../include/cuda.h"
CU_AD_FORMAT_UNSIGNED_INT8 = 1,
# 178 "/usr/local/cuda/bin/../include/cuda.h"
CU_AD_FORMAT_UNSIGNED_INT16,
# 179 "/usr/local/cuda/bin/../include/cuda.h"
CU_AD_FORMAT_UNSIGNED_INT32,
# 180 "/usr/local/cuda/bin/../include/cuda.h"
CU_AD_FORMAT_SIGNED_INT8 = 8,
# 181 "/usr/local/cuda/bin/../include/cuda.h"
CU_AD_FORMAT_SIGNED_INT16,
# 182 "/usr/local/cuda/bin/../include/cuda.h"
CU_AD_FORMAT_SIGNED_INT32,
# 183 "/usr/local/cuda/bin/../include/cuda.h"
CU_AD_FORMAT_HALF = 16,
# 184 "/usr/local/cuda/bin/../include/cuda.h"
CU_AD_FORMAT_FLOAT = 32
# 185 "/usr/local/cuda/bin/../include/cuda.h"
} CUarray_format; }
# 195 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 190 "/usr/local/cuda/bin/../include/cuda.h"
enum CUaddress_mode_enum {
# 191 "/usr/local/cuda/bin/../include/cuda.h"
CU_TR_ADDRESS_MODE_WRAP,
# 192 "/usr/local/cuda/bin/../include/cuda.h"
CU_TR_ADDRESS_MODE_CLAMP,
# 193 "/usr/local/cuda/bin/../include/cuda.h"
CU_TR_ADDRESS_MODE_MIRROR,
# 194 "/usr/local/cuda/bin/../include/cuda.h"
CU_TR_ADDRESS_MODE_BORDER
# 195 "/usr/local/cuda/bin/../include/cuda.h"
} CUaddress_mode; }
# 203 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 200 "/usr/local/cuda/bin/../include/cuda.h"
enum CUfilter_mode_enum {
# 201 "/usr/local/cuda/bin/../include/cuda.h"
CU_TR_FILTER_MODE_POINT,
# 202 "/usr/local/cuda/bin/../include/cuda.h"
CU_TR_FILTER_MODE_LINEAR
# 203 "/usr/local/cuda/bin/../include/cuda.h"
} CUfilter_mode; }
# 246 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 208 "/usr/local/cuda/bin/../include/cuda.h"
enum CUdevice_attribute_enum {
# 209 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_THREADS_PER_BLOCK = 1,
# 210 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_BLOCK_DIM_X,
# 211 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_BLOCK_DIM_Y,
# 212 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_BLOCK_DIM_Z,
# 213 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_GRID_DIM_X,
# 214 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_GRID_DIM_Y,
# 215 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_GRID_DIM_Z,
# 216 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_SHARED_MEMORY_PER_BLOCK,
# 217 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_SHARED_MEMORY_PER_BLOCK = 8,
# 218 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_TOTAL_CONSTANT_MEMORY,
# 219 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_WARP_SIZE,
# 220 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_PITCH,
# 221 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_REGISTERS_PER_BLOCK,
# 222 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_REGISTERS_PER_BLOCK = 12,
# 223 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_CLOCK_RATE,
# 224 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_TEXTURE_ALIGNMENT,
# 225 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_GPU_OVERLAP,
# 226 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MULTIPROCESSOR_COUNT,
# 227 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_KERNEL_EXEC_TIMEOUT,
# 228 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_INTEGRATED,
# 229 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_CAN_MAP_HOST_MEMORY,
# 230 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_COMPUTE_MODE,
# 231 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE1D_WIDTH,
# 232 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_WIDTH,
# 233 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_HEIGHT,
# 234 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE3D_WIDTH,
# 235 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE3D_HEIGHT,
# 236 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE3D_DEPTH,
# 237 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_ARRAY_WIDTH,
# 238 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_ARRAY_HEIGHT,
# 239 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_ARRAY_NUMSLICES,
# 240 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_SURFACE_ALIGNMENT,
# 241 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_CONCURRENT_KERNELS,
# 242 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_ECC_ENABLED,
# 243 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_PCI_BUS_ID,
# 244 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_PCI_DEVICE_ID,
# 245 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_TCC_DRIVER
# 246 "/usr/local/cuda/bin/../include/cuda.h"
} CUdevice_attribute; }
# 262 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 251 "/usr/local/cuda/bin/../include/cuda.h"
struct CUdevprop_st {
# 252 "/usr/local/cuda/bin/../include/cuda.h"
int maxThreadsPerBlock;
# 253 "/usr/local/cuda/bin/../include/cuda.h"
int maxThreadsDim[3];
# 254 "/usr/local/cuda/bin/../include/cuda.h"
int maxGridSize[3];
# 255 "/usr/local/cuda/bin/../include/cuda.h"
int sharedMemPerBlock;
# 256 "/usr/local/cuda/bin/../include/cuda.h"
int totalConstantMemory;
# 257 "/usr/local/cuda/bin/../include/cuda.h"
int SIMDWidth;
# 258 "/usr/local/cuda/bin/../include/cuda.h"
int memPitch;
# 259 "/usr/local/cuda/bin/../include/cuda.h"
int regsPerBlock;
# 260 "/usr/local/cuda/bin/../include/cuda.h"
int clockRate;
# 261 "/usr/local/cuda/bin/../include/cuda.h"
int textureAlign;
# 262 "/usr/local/cuda/bin/../include/cuda.h"
} CUdevprop; }
# 317 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 267 "/usr/local/cuda/bin/../include/cuda.h"
enum CUfunction_attribute_enum {
# 273 "/usr/local/cuda/bin/../include/cuda.h"
CU_FUNC_ATTRIBUTE_MAX_THREADS_PER_BLOCK,
# 280 "/usr/local/cuda/bin/../include/cuda.h"
CU_FUNC_ATTRIBUTE_SHARED_SIZE_BYTES,
# 286 "/usr/local/cuda/bin/../include/cuda.h"
CU_FUNC_ATTRIBUTE_CONST_SIZE_BYTES,
# 291 "/usr/local/cuda/bin/../include/cuda.h"
CU_FUNC_ATTRIBUTE_LOCAL_SIZE_BYTES,
# 296 "/usr/local/cuda/bin/../include/cuda.h"
CU_FUNC_ATTRIBUTE_NUM_REGS,
# 305 "/usr/local/cuda/bin/../include/cuda.h"
CU_FUNC_ATTRIBUTE_PTX_VERSION,
# 314 "/usr/local/cuda/bin/../include/cuda.h"
CU_FUNC_ATTRIBUTE_BINARY_VERSION,
# 316 "/usr/local/cuda/bin/../include/cuda.h"
CU_FUNC_ATTRIBUTE_MAX
# 317 "/usr/local/cuda/bin/../include/cuda.h"
} CUfunction_attribute; }
# 326 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 322 "/usr/local/cuda/bin/../include/cuda.h"
enum CUfunc_cache_enum {
# 323 "/usr/local/cuda/bin/../include/cuda.h"
CU_FUNC_CACHE_PREFER_NONE,
# 324 "/usr/local/cuda/bin/../include/cuda.h"
CU_FUNC_CACHE_PREFER_SHARED,
# 325 "/usr/local/cuda/bin/../include/cuda.h"
CU_FUNC_CACHE_PREFER_L1
# 326 "/usr/local/cuda/bin/../include/cuda.h"
} CUfunc_cache; }
# 335 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 331 "/usr/local/cuda/bin/../include/cuda.h"
enum CUmemorytype_enum {
# 332 "/usr/local/cuda/bin/../include/cuda.h"
CU_MEMORYTYPE_HOST = 1,
# 333 "/usr/local/cuda/bin/../include/cuda.h"
CU_MEMORYTYPE_DEVICE,
# 334 "/usr/local/cuda/bin/../include/cuda.h"
CU_MEMORYTYPE_ARRAY
# 335 "/usr/local/cuda/bin/../include/cuda.h"
} CUmemorytype; }
# 344 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 340 "/usr/local/cuda/bin/../include/cuda.h"
enum CUcomputemode_enum {
# 341 "/usr/local/cuda/bin/../include/cuda.h"
CU_COMPUTEMODE_DEFAULT,
# 342 "/usr/local/cuda/bin/../include/cuda.h"
CU_COMPUTEMODE_EXCLUSIVE,
# 343 "/usr/local/cuda/bin/../include/cuda.h"
CU_COMPUTEMODE_PROHIBITED
# 344 "/usr/local/cuda/bin/../include/cuda.h"
} CUcomputemode; }
# 436 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 349 "/usr/local/cuda/bin/../include/cuda.h"
enum CUjit_option_enum {
# 355 "/usr/local/cuda/bin/../include/cuda.h"
CU_JIT_MAX_REGISTERS,
# 368 "/usr/local/cuda/bin/../include/cuda.h"
CU_JIT_THREADS_PER_BLOCK,
# 375 "/usr/local/cuda/bin/../include/cuda.h"
CU_JIT_WALL_TIME,
# 383 "/usr/local/cuda/bin/../include/cuda.h"
CU_JIT_INFO_LOG_BUFFER,
# 391 "/usr/local/cuda/bin/../include/cuda.h"
CU_JIT_INFO_LOG_BUFFER_SIZE_BYTES,
# 399 "/usr/local/cuda/bin/../include/cuda.h"
CU_JIT_ERROR_LOG_BUFFER,
# 407 "/usr/local/cuda/bin/../include/cuda.h"
CU_JIT_ERROR_LOG_BUFFER_SIZE_BYTES,
# 414 "/usr/local/cuda/bin/../include/cuda.h"
CU_JIT_OPTIMIZATION_LEVEL,
# 421 "/usr/local/cuda/bin/../include/cuda.h"
CU_JIT_TARGET_FROM_CUCONTEXT,
# 427 "/usr/local/cuda/bin/../include/cuda.h"
CU_JIT_TARGET,
# 434 "/usr/local/cuda/bin/../include/cuda.h"
CU_JIT_FALLBACK_STRATEGY
# 436 "/usr/local/cuda/bin/../include/cuda.h"
} CUjit_option; }
# 449 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 441 "/usr/local/cuda/bin/../include/cuda.h"
enum CUjit_target_enum {
# 443 "/usr/local/cuda/bin/../include/cuda.h"
CU_TARGET_COMPUTE_10,
# 444 "/usr/local/cuda/bin/../include/cuda.h"
CU_TARGET_COMPUTE_11,
# 445 "/usr/local/cuda/bin/../include/cuda.h"
CU_TARGET_COMPUTE_12,
# 446 "/usr/local/cuda/bin/../include/cuda.h"
CU_TARGET_COMPUTE_13,
# 447 "/usr/local/cuda/bin/../include/cuda.h"
CU_TARGET_COMPUTE_20,
# 448 "/usr/local/cuda/bin/../include/cuda.h"
CU_TARGET_COMPUTE_21
# 449 "/usr/local/cuda/bin/../include/cuda.h"
} CUjit_target; }
# 460 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 454 "/usr/local/cuda/bin/../include/cuda.h"
enum CUjit_fallback_enum {
# 456 "/usr/local/cuda/bin/../include/cuda.h"
CU_PREFER_PTX,
# 458 "/usr/local/cuda/bin/../include/cuda.h"
CU_PREFER_BINARY
# 460 "/usr/local/cuda/bin/../include/cuda.h"
} CUjit_fallback; }
# 467 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 465 "/usr/local/cuda/bin/../include/cuda.h"
enum CUgraphicsRegisterFlags_enum {
# 466 "/usr/local/cuda/bin/../include/cuda.h"
CU_GRAPHICS_REGISTER_FLAGS_NONE
# 467 "/usr/local/cuda/bin/../include/cuda.h"
} CUgraphicsRegisterFlags; }
# 476 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 472 "/usr/local/cuda/bin/../include/cuda.h"
enum CUgraphicsMapResourceFlags_enum {
# 473 "/usr/local/cuda/bin/../include/cuda.h"
CU_GRAPHICS_MAP_RESOURCE_FLAGS_NONE,
# 474 "/usr/local/cuda/bin/../include/cuda.h"
CU_GRAPHICS_MAP_RESOURCE_FLAGS_READ_ONLY,
# 475 "/usr/local/cuda/bin/../include/cuda.h"
CU_GRAPHICS_MAP_RESOURCE_FLAGS_WRITE_DISCARD
# 476 "/usr/local/cuda/bin/../include/cuda.h"
} CUgraphicsMapResourceFlags; }
# 488 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 481 "/usr/local/cuda/bin/../include/cuda.h"
enum CUarray_cubemap_face_enum {
# 482 "/usr/local/cuda/bin/../include/cuda.h"
CU_CUBEMAP_FACE_POSITIVE_X,
# 483 "/usr/local/cuda/bin/../include/cuda.h"
CU_CUBEMAP_FACE_NEGATIVE_X,
# 484 "/usr/local/cuda/bin/../include/cuda.h"
CU_CUBEMAP_FACE_POSITIVE_Y,
# 485 "/usr/local/cuda/bin/../include/cuda.h"
CU_CUBEMAP_FACE_NEGATIVE_Y,
# 486 "/usr/local/cuda/bin/../include/cuda.h"
CU_CUBEMAP_FACE_POSITIVE_Z,
# 487 "/usr/local/cuda/bin/../include/cuda.h"
CU_CUBEMAP_FACE_NEGATIVE_Z
# 488 "/usr/local/cuda/bin/../include/cuda.h"
} CUarray_cubemap_face; }
# 497 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 493 "/usr/local/cuda/bin/../include/cuda.h"
enum CUlimit_enum {
# 494 "/usr/local/cuda/bin/../include/cuda.h"
CU_LIMIT_STACK_SIZE,
# 495 "/usr/local/cuda/bin/../include/cuda.h"
CU_LIMIT_PRINTF_FIFO_SIZE,
# 496 "/usr/local/cuda/bin/../include/cuda.h"
CU_LIMIT_MALLOC_HEAP_SIZE
# 497 "/usr/local/cuda/bin/../include/cuda.h"
} CUlimit; }
# 728 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 502 "/usr/local/cuda/bin/../include/cuda.h"
enum cudaError_enum {
# 508 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_SUCCESS,
# 514 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_INVALID_VALUE,
# 520 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_OUT_OF_MEMORY,
# 526 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_NOT_INITIALIZED,
# 531 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_DEINITIALIZED,
# 538 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_NO_DEVICE = 100,
# 544 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_INVALID_DEVICE,
# 551 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_INVALID_IMAGE = 200,
# 561 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_INVALID_CONTEXT,
# 570 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_CONTEXT_ALREADY_CURRENT,
# 575 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_MAP_FAILED = 205,
# 580 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_UNMAP_FAILED,
# 586 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_ARRAY_IS_MAPPED,
# 591 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_ALREADY_MAPPED,
# 599 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_NO_BINARY_FOR_GPU,
# 604 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_ALREADY_ACQUIRED,
# 609 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_NOT_MAPPED,
# 615 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_NOT_MAPPED_AS_ARRAY,
# 621 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_NOT_MAPPED_AS_POINTER,
# 627 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_ECC_UNCORRECTABLE,
# 633 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_UNSUPPORTED_LIMIT,
# 639 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_INVALID_SOURCE = 300,
# 644 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_FILE_NOT_FOUND,
# 649 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_SHARED_OBJECT_SYMBOL_NOT_FOUND,
# 654 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_SHARED_OBJECT_INIT_FAILED,
# 659 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_OPERATING_SYSTEM,
# 666 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_INVALID_HANDLE = 400,
# 673 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_NOT_FOUND = 500,
# 682 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_NOT_READY = 600,
# 693 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_LAUNCH_FAILED = 700,
# 704 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_LAUNCH_OUT_OF_RESOURCES,
# 715 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_LAUNCH_TIMEOUT,
# 721 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_LAUNCH_INCOMPATIBLE_TEXTURING,
# 727 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_UNKNOWN = 999
# 728 "/usr/local/cuda/bin/../include/cuda.h"
} CUresult; }
# 777 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 756 "/usr/local/cuda/bin/../include/cuda.h"
struct CUDA_MEMCPY2D_st {
# 757 "/usr/local/cuda/bin/../include/cuda.h"
size_t srcXInBytes;
# 758 "/usr/local/cuda/bin/../include/cuda.h"
size_t srcY;
# 760 "/usr/local/cuda/bin/../include/cuda.h"
CUmemorytype srcMemoryType;
# 761 "/usr/local/cuda/bin/../include/cuda.h"
const void *srcHost;
# 762 "/usr/local/cuda/bin/../include/cuda.h"
CUdeviceptr srcDevice;
# 763 "/usr/local/cuda/bin/../include/cuda.h"
CUarray srcArray;
# 764 "/usr/local/cuda/bin/../include/cuda.h"
size_t srcPitch;
# 766 "/usr/local/cuda/bin/../include/cuda.h"
size_t dstXInBytes;
# 767 "/usr/local/cuda/bin/../include/cuda.h"
size_t dstY;
# 769 "/usr/local/cuda/bin/../include/cuda.h"
CUmemorytype dstMemoryType;
# 770 "/usr/local/cuda/bin/../include/cuda.h"
void *dstHost;
# 771 "/usr/local/cuda/bin/../include/cuda.h"
CUdeviceptr dstDevice;
# 772 "/usr/local/cuda/bin/../include/cuda.h"
CUarray dstArray;
# 773 "/usr/local/cuda/bin/../include/cuda.h"
size_t dstPitch;
# 775 "/usr/local/cuda/bin/../include/cuda.h"
size_t WidthInBytes;
# 776 "/usr/local/cuda/bin/../include/cuda.h"
size_t Height;
# 777 "/usr/local/cuda/bin/../include/cuda.h"
} CUDA_MEMCPY2D; }
# 810 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 782 "/usr/local/cuda/bin/../include/cuda.h"
struct CUDA_MEMCPY3D_st {
# 783 "/usr/local/cuda/bin/../include/cuda.h"
size_t srcXInBytes;
# 784 "/usr/local/cuda/bin/../include/cuda.h"
size_t srcY;
# 785 "/usr/local/cuda/bin/../include/cuda.h"
size_t srcZ;
# 786 "/usr/local/cuda/bin/../include/cuda.h"
size_t srcLOD;
# 787 "/usr/local/cuda/bin/../include/cuda.h"
CUmemorytype srcMemoryType;
# 788 "/usr/local/cuda/bin/../include/cuda.h"
const void *srcHost;
# 789 "/usr/local/cuda/bin/../include/cuda.h"
CUdeviceptr srcDevice;
# 790 "/usr/local/cuda/bin/../include/cuda.h"
CUarray srcArray;
# 791 "/usr/local/cuda/bin/../include/cuda.h"
void *reserved0;
# 792 "/usr/local/cuda/bin/../include/cuda.h"
size_t srcPitch;
# 793 "/usr/local/cuda/bin/../include/cuda.h"
size_t srcHeight;
# 795 "/usr/local/cuda/bin/../include/cuda.h"
size_t dstXInBytes;
# 796 "/usr/local/cuda/bin/../include/cuda.h"
size_t dstY;
# 797 "/usr/local/cuda/bin/../include/cuda.h"
size_t dstZ;
# 798 "/usr/local/cuda/bin/../include/cuda.h"
size_t dstLOD;
# 799 "/usr/local/cuda/bin/../include/cuda.h"
CUmemorytype dstMemoryType;
# 800 "/usr/local/cuda/bin/../include/cuda.h"
void *dstHost;
# 801 "/usr/local/cuda/bin/../include/cuda.h"
CUdeviceptr dstDevice;
# 802 "/usr/local/cuda/bin/../include/cuda.h"
CUarray dstArray;
# 803 "/usr/local/cuda/bin/../include/cuda.h"
void *reserved1;
# 804 "/usr/local/cuda/bin/../include/cuda.h"
size_t dstPitch;
# 805 "/usr/local/cuda/bin/../include/cuda.h"
size_t dstHeight;
# 807 "/usr/local/cuda/bin/../include/cuda.h"
size_t WidthInBytes;
# 808 "/usr/local/cuda/bin/../include/cuda.h"
size_t Height;
# 809 "/usr/local/cuda/bin/../include/cuda.h"
size_t Depth;
# 810 "/usr/local/cuda/bin/../include/cuda.h"
} CUDA_MEMCPY3D; }
# 822 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 815 "/usr/local/cuda/bin/../include/cuda.h"
struct CUDA_ARRAY_DESCRIPTOR_st {
# 817 "/usr/local/cuda/bin/../include/cuda.h"
size_t Width;
# 818 "/usr/local/cuda/bin/../include/cuda.h"
size_t Height;
# 820 "/usr/local/cuda/bin/../include/cuda.h"
CUarray_format Format;
# 821 "/usr/local/cuda/bin/../include/cuda.h"
unsigned NumChannels;
# 822 "/usr/local/cuda/bin/../include/cuda.h"
} CUDA_ARRAY_DESCRIPTOR; }
# 836 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 827 "/usr/local/cuda/bin/../include/cuda.h"
struct CUDA_ARRAY3D_DESCRIPTOR_st {
# 829 "/usr/local/cuda/bin/../include/cuda.h"
size_t Width;
# 830 "/usr/local/cuda/bin/../include/cuda.h"
size_t Height;
# 831 "/usr/local/cuda/bin/../include/cuda.h"
size_t Depth;
# 833 "/usr/local/cuda/bin/../include/cuda.h"
CUarray_format Format;
# 834 "/usr/local/cuda/bin/../include/cuda.h"
unsigned NumChannels;
# 835 "/usr/local/cuda/bin/../include/cuda.h"
unsigned Flags;
# 836 "/usr/local/cuda/bin/../include/cuda.h"
} CUDA_ARRAY3D_DESCRIPTOR; }
# 917 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuInit(unsigned);
# 944 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuDriverGetVersion(int *);
# 982 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuDeviceGet(CUdevice *, int);
# 1008 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuDeviceGetCount(int *);
# 1037 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuDeviceGetName(char *, int, CUdevice);
# 1066 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuDeviceComputeCapability(int *, int *, CUdevice);
# 1094 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuDeviceTotalMem_v2(size_t *, CUdevice);
# 1154 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuDeviceGetProperties(CUdevprop *, CUdevice);
# 1235 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuDeviceGetAttribute(int *, CUdevice_attribute, CUdevice);
# 1333 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuCtxCreate_v2(CUcontext *, unsigned, CUdevice);
# 1367 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuCtxDestroy(CUcontext);
# 1403 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuCtxAttach(CUcontext *, unsigned);
# 1435 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuCtxDetach(CUcontext);
# 1473 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuCtxPushCurrent(CUcontext);
# 1515 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuCtxPopCurrent(CUcontext *);
# 1545 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuCtxGetDevice(CUdevice *);
# 1575 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuCtxSynchronize();
# 1638 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuCtxSetLimit(CUlimit, size_t);
# 1673 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuCtxGetLimit(size_t *, CUlimit);
# 1716 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuCtxGetCacheConfig(CUfunc_cache *);
# 1766 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuCtxSetCacheConfig(CUfunc_cache);
# 1803 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuCtxGetApiVersion(CUcontext, unsigned *);
# 1851 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuModuleLoad(CUmodule *, const char *);
# 1885 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuModuleLoadData(CUmodule *, const void *);
# 1963 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuModuleLoadDataEx(CUmodule *, const void *, unsigned, CUjit_option *, void **);
# 2000 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuModuleLoadFatBinary(CUmodule *, const void *);
# 2025 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuModuleUnload(CUmodule);
# 2055 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuModuleGetFunction(CUfunction *, CUmodule, const char *);
# 2089 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuModuleGetGlobal_v2(CUdeviceptr *, size_t *, CUmodule, const char *);
# 2123 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuModuleGetTexRef(CUtexref *, CUmodule, const char *);
# 2154 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuModuleGetSurfRef(CUsurfref *, CUmodule, const char *);
# 2197 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemGetInfo_v2(size_t *, size_t *);
# 2230 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemAlloc_v2(CUdeviceptr *, size_t);
# 2291 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemAllocPitch_v2(CUdeviceptr *, size_t *, size_t, size_t, unsigned);
# 2320 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemFree_v2(CUdeviceptr);
# 2353 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemGetAddressRange_v2(CUdeviceptr *, size_t *, CUdeviceptr);
# 2392 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemAllocHost_v2(void **, size_t);
# 2422 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemFreeHost(void *);
# 2494 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemHostAlloc(void **, size_t, unsigned);
# 2532 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemHostGetDevicePointer_v2(CUdeviceptr *, void *, unsigned);
# 2557 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemHostGetFlags(unsigned *, void *);
# 2591 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyHtoD_v2(CUdeviceptr, const void *, size_t);
# 2624 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyDtoH_v2(void *, CUdeviceptr, size_t);
# 2657 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyDtoD_v2(CUdeviceptr, CUdeviceptr, size_t);
# 2691 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyDtoA_v2(CUarray, size_t, CUdeviceptr, size_t);
# 2727 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyAtoD_v2(CUdeviceptr, CUarray, size_t, size_t);
# 2761 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyHtoA_v2(CUarray, size_t, const void *, size_t);
# 2795 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyAtoH_v2(void *, CUarray, size_t, size_t);
# 2833 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyAtoA_v2(CUarray, size_t, CUarray, size_t, size_t);
# 2978 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpy2D_v2(const CUDA_MEMCPY2D *);
# 3121 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpy2DUnaligned_v2(const CUDA_MEMCPY2D *);
# 3273 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpy3D_v2(const CUDA_MEMCPY3D *);
# 3313 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyHtoDAsync_v2(CUdeviceptr, const void *, size_t, CUstream);
# 3353 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyDtoHAsync_v2(void *, CUdeviceptr, size_t, CUstream);
# 3390 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyDtoDAsync_v2(CUdeviceptr, CUdeviceptr, size_t, CUstream);
# 3432 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyHtoAAsync_v2(CUarray, size_t, const void *, size_t, CUstream);
# 3474 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyAtoHAsync_v2(void *, CUarray, size_t, size_t, CUstream);
# 3630 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpy2DAsync_v2(const CUDA_MEMCPY2D *, CUstream);
# 3790 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpy3DAsync_v2(const CUDA_MEMCPY3D *, CUstream);
# 3823 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemsetD8_v2(CUdeviceptr, unsigned char, size_t);
# 3856 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemsetD16_v2(CUdeviceptr, unsigned short, size_t);
# 3889 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemsetD32_v2(CUdeviceptr, unsigned, size_t);
# 3927 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemsetD2D8_v2(CUdeviceptr, size_t, unsigned char, size_t, size_t);
# 3965 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemsetD2D16_v2(CUdeviceptr, size_t, unsigned short, size_t, size_t);
# 4003 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemsetD2D32_v2(CUdeviceptr, size_t, unsigned, size_t, size_t);
# 4040 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemsetD8Async(CUdeviceptr, unsigned char, size_t, CUstream);
# 4077 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemsetD16Async(CUdeviceptr, unsigned short, size_t, CUstream);
# 4113 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemsetD32Async(CUdeviceptr, unsigned, size_t, CUstream);
# 4155 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemsetD2D8Async(CUdeviceptr, size_t, unsigned char, size_t, size_t, CUstream);
# 4197 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemsetD2D16Async(CUdeviceptr, size_t, unsigned short, size_t, size_t, CUstream);
# 4239 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemsetD2D32Async(CUdeviceptr, size_t, unsigned, size_t, size_t, CUstream);
# 4342 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuArrayCreate_v2(CUarray *, const CUDA_ARRAY_DESCRIPTOR *);
# 4375 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuArrayGetDescriptor_v2(CUDA_ARRAY_DESCRIPTOR *, CUarray);
# 4406 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuArrayDestroy(CUarray);
# 4508 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuArray3DCreate_v2(CUarray *, const CUDA_ARRAY3D_DESCRIPTOR *);
# 4544 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuArray3DGetDescriptor_v2(CUDA_ARRAY3D_DESCRIPTOR *, CUarray);
# 4582 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuStreamCreate(CUstream *, unsigned);
# 4622 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuStreamWaitEvent(CUstream, CUevent, unsigned);
# 4646 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuStreamQuery(CUstream);
# 4671 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuStreamSynchronize(CUstream);
# 4693 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuStreamDestroy(CUstream);
# 4741 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuEventCreate(CUevent *, unsigned);
# 4777 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuEventRecord(CUevent, CUstream);
# 4809 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuEventQuery(CUevent);
# 4843 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuEventSynchronize(CUevent);
# 4866 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuEventDestroy(CUevent);
# 4909 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuEventElapsedTime(float *, CUevent, CUevent);
# 4954 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuFuncSetBlockShape(CUfunction, int, int, int);
# 4985 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuFuncSetSharedSize(CUfunction, unsigned);
# 5042 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuFuncGetAttribute(int *, CUfunction_attribute, CUfunction);
# 5090 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuFuncSetCacheConfig(CUfunction, CUfunc_cache);
# 5119 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuParamSetSize(CUfunction, unsigned);
# 5149 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuParamSeti(CUfunction, int, unsigned);
# 5179 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuParamSetf(CUfunction, int, float);
# 5211 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuParamSetv(CUfunction, int, void *, unsigned);
# 5245 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuLaunch(CUfunction);
# 5281 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuLaunchGrid(CUfunction, int, int);
# 5321 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuLaunchGridAsync(CUfunction, int, int, CUstream);
# 5354 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuParamSetTexRef(CUfunction, int, CUtexref);
# 5395 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefSetArray(CUtexref, CUarray, unsigned);
# 5433 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefSetAddress_v2(size_t *, CUtexref, CUdeviceptr, size_t);
# 5474 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefSetAddress2D_v2(CUtexref, const CUDA_ARRAY_DESCRIPTOR *, CUdeviceptr, size_t);
# 5503 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefSetFormat(CUtexref, CUarray_format, int);
# 5541 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefSetAddressMode(CUtexref, int, CUaddress_mode);
# 5574 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefSetFilterMode(CUtexref, CUfilter_mode);
# 5606 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefSetFlags(CUtexref, unsigned);
# 5632 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefGetAddress_v2(CUdeviceptr *, CUtexref);
# 5658 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefGetArray(CUarray *, CUtexref);
# 5684 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefGetAddressMode(CUaddress_mode *, CUtexref, int);
# 5708 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefGetFilterMode(CUfilter_mode *, CUtexref);
# 5734 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefGetFormat(CUarray_format *, int *, CUtexref);
# 5757 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefGetFlags(unsigned *, CUtexref);
# 5791 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefCreate(CUtexref *);
# 5811 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefDestroy(CUtexref);
# 5849 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuSurfRefSetArray(CUsurfref, CUarray, unsigned);
# 5870 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuSurfRefGetArray(CUarray *, CUsurfref);
# 5911 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuGraphicsUnregisterResource(CUgraphicsResource);
# 5949 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuGraphicsSubResourceGetMappedArray(CUarray *, CUgraphicsResource, unsigned, unsigned);
# 5983 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuGraphicsResourceGetMappedPointer_v2(CUdeviceptr *, size_t *, CUgraphicsResource);
# 6024 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuGraphicsResourceSetMapFlags(CUgraphicsResource, unsigned);
# 6062 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuGraphicsMapResources(unsigned, CUgraphicsResource *, CUstream);
# 6097 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuGraphicsUnmapResources(unsigned, CUgraphicsResource *, CUstream);
# 6101 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuGetExportTable(const void **, const CUuuid *);
# 64 "sdk/cutil.h"
enum CUTBoolean {
# 66 "sdk/cutil.h"
CUTFalse,
# 67 "sdk/cutil.h"
CUTTrue
# 68 "sdk/cutil.h"
};
# 76 "sdk/cutil.h"
extern "C" void cutFree(void *);
# 94 "sdk/cutil.h"
extern "C" void cutCheckBankAccess(unsigned, unsigned, unsigned, unsigned, unsigned, unsigned, const char *, const int, const char *, const int);
# 107 "sdk/cutil.h"
extern "C" char *cutFindFilePath(const char *, const char *);
# 122 "sdk/cutil.h"
extern "C" CUTBoolean cutReadFilef(const char *, float **, unsigned *, bool = false);
# 138 "sdk/cutil.h"
extern "C" CUTBoolean cutReadFiled(const char *, double **, unsigned *, bool = false);
# 154 "sdk/cutil.h"
extern "C" CUTBoolean cutReadFilei(const char *, int **, unsigned *, bool = false);
# 169 "sdk/cutil.h"
extern "C" CUTBoolean cutReadFileui(const char *, unsigned **, unsigned *, bool = false);
# 185 "sdk/cutil.h"
extern "C" CUTBoolean cutReadFileb(const char *, char **, unsigned *, bool = false);
# 201 "sdk/cutil.h"
extern "C" CUTBoolean cutReadFileub(const char *, unsigned char **, unsigned *, bool = false);
# 215 "sdk/cutil.h"
extern "C" CUTBoolean cutWriteFilef(const char *, const float *, unsigned, const float, bool = false);
# 229 "sdk/cutil.h"
extern "C" CUTBoolean cutWriteFiled(const char *, const float *, unsigned, const double, bool = false);
# 241 "sdk/cutil.h"
extern "C" CUTBoolean cutWriteFilei(const char *, const int *, unsigned, bool = false);
# 253 "sdk/cutil.h"
extern "C" CUTBoolean cutWriteFileui(const char *, const unsigned *, unsigned, bool = false);
# 265 "sdk/cutil.h"
extern "C" CUTBoolean cutWriteFileb(const char *, const char *, unsigned, bool = false);
# 277 "sdk/cutil.h"
extern "C" CUTBoolean cutWriteFileub(const char *, const unsigned char *, unsigned, bool = false);
# 293 "sdk/cutil.h"
extern "C" CUTBoolean cutLoadPGMub(const char *, unsigned char **, unsigned *, unsigned *);
# 306 "sdk/cutil.h"
extern "C" CUTBoolean cutLoadPPMub(const char *, unsigned char **, unsigned *, unsigned *);
# 320 "sdk/cutil.h"
extern "C" CUTBoolean cutLoadPPM4ub(const char *, unsigned char **, unsigned *, unsigned *);
# 336 "sdk/cutil.h"
extern "C" CUTBoolean cutLoadPGMi(const char *, unsigned **, unsigned *, unsigned *);
# 352 "sdk/cutil.h"
extern "C" CUTBoolean cutLoadPGMs(const char *, unsigned short **, unsigned *, unsigned *);
# 367 "sdk/cutil.h"
extern "C" CUTBoolean cutLoadPGMf(const char *, float **, unsigned *, unsigned *);
# 379 "sdk/cutil.h"
extern "C" CUTBoolean cutSavePGMub(const char *, unsigned char *, unsigned, unsigned);
# 391 "sdk/cutil.h"
extern "C" CUTBoolean cutSavePPMub(const char *, unsigned char *, unsigned, unsigned);
# 404 "sdk/cutil.h"
extern "C" CUTBoolean cutSavePPM4ub(const char *, unsigned char *, unsigned, unsigned);
# 416 "sdk/cutil.h"
extern "C" CUTBoolean cutSavePGMi(const char *, unsigned *, unsigned, unsigned);
# 428 "sdk/cutil.h"
extern "C" CUTBoolean cutSavePGMs(const char *, unsigned short *, unsigned, unsigned);
# 440 "sdk/cutil.h"
extern "C" CUTBoolean cutSavePGMf(const char *, float *, unsigned, unsigned);
# 461 "sdk/cutil.h"
extern "C" CUTBoolean cutCheckCmdLineFlag(const int, const char **, const char *);
# 475 "sdk/cutil.h"
extern "C" CUTBoolean cutGetCmdLineArgumenti(const int, const char **, const char *, int *);
# 489 "sdk/cutil.h"
extern "C" CUTBoolean cutGetCmdLineArgumentf(const int, const char **, const char *, float *);
# 503 "sdk/cutil.h"
extern "C" CUTBoolean cutGetCmdLineArgumentstr(const int, const char **, const char *, char **);
# 518 "sdk/cutil.h"
extern "C" CUTBoolean cutGetCmdLineArgumentListstr(const int, const char **, const char *, char **, unsigned *);
# 532 "sdk/cutil.h"
extern "C" CUTBoolean cutCheckCondition(int, const char *, const int);
# 544 "sdk/cutil.h"
extern "C" CUTBoolean cutComparef(const float *, const float *, const unsigned);
# 557 "sdk/cutil.h"
extern "C" CUTBoolean cutComparei(const int *, const int *, const unsigned);
# 571 "sdk/cutil.h"
extern "C" CUTBoolean cutCompareuit(const unsigned *, const unsigned *, const unsigned, const float, const float);
# 584 "sdk/cutil.h"
extern "C" CUTBoolean cutCompareub(const unsigned char *, const unsigned char *, const unsigned);
# 599 "sdk/cutil.h"
extern "C" CUTBoolean cutCompareubt(const unsigned char *, const unsigned char *, const unsigned, const float, const float);
# 613 "sdk/cutil.h"
extern "C" CUTBoolean cutCompareube(const unsigned char *, const unsigned char *, const unsigned, const float);
# 627 "sdk/cutil.h"
extern "C" CUTBoolean cutComparefe(const float *, const float *, const unsigned, const float);
# 642 "sdk/cutil.h"
extern "C" CUTBoolean cutComparefet(const float *, const float *, const unsigned, const float, const float);
# 657 "sdk/cutil.h"
extern "C" CUTBoolean cutCompareL2fe(const float *, const float *, const unsigned, const float);
# 672 "sdk/cutil.h"
extern "C" CUTBoolean cutComparePPM(const char *, const char *, const float, const float, bool = false);
# 685 "sdk/cutil.h"
extern "C" CUTBoolean cutCreateTimer(unsigned *);
# 694 "sdk/cutil.h"
extern "C" CUTBoolean cutDeleteTimer(unsigned);
# 702 "sdk/cutil.h"
extern "C" CUTBoolean cutStartTimer(const unsigned);
# 710 "sdk/cutil.h"
extern "C" CUTBoolean cutStopTimer(const unsigned);
# 718 "sdk/cutil.h"
extern "C" CUTBoolean cutResetTimer(const unsigned);
# 727 "sdk/cutil.h"
extern "C" float cutGetTimerValue(const unsigned);
# 738 "sdk/cutil.h"
extern "C" float cutGetAverageTimerValue(const unsigned);
# 19 "sdk/cutil_inline_bankchecker.h"
inline void __cutilBankChecker(unsigned tidx, unsigned tidy, unsigned tidz, unsigned
# 20 "sdk/cutil_inline_bankchecker.h"
bdimx, unsigned bdimy, unsigned bdimz, char *
# 21 "sdk/cutil_inline_bankchecker.h"
aname, int index, char *file, int line)
# 22 "sdk/cutil_inline_bankchecker.h"
{
# 23 "sdk/cutil_inline_bankchecker.h"
cutCheckBankAccess(tidx, tidy, tidz, bdimx, bdimy, bdimz, file, line, aname, index);
# 24 "sdk/cutil_inline_bankchecker.h"
}
# 46 "/usr/local/cuda/bin/../include/cuComplex.h"
extern "C" { typedef float2 cuFloatComplex; }
# 48 "/usr/local/cuda/bin/../include/cuComplex.h"
extern "C" { static inline float cuCrealf(cuFloatComplex x)
# 49 "/usr/local/cuda/bin/../include/cuComplex.h"
{
# 50 "/usr/local/cuda/bin/../include/cuComplex.h"
return x.x;
# 51 "/usr/local/cuda/bin/../include/cuComplex.h"
} }
# 53 "/usr/local/cuda/bin/../include/cuComplex.h"
extern "C" { static inline float cuCimagf(cuFloatComplex x)
# 54 "/usr/local/cuda/bin/../include/cuComplex.h"
{
# 55 "/usr/local/cuda/bin/../include/cuComplex.h"
return x.y;
# 56 "/usr/local/cuda/bin/../include/cuComplex.h"
} }
# 58 "/usr/local/cuda/bin/../include/cuComplex.h"
extern "C" { static inline cuFloatComplex make_cuFloatComplex(float
# 59 "/usr/local/cuda/bin/../include/cuComplex.h"
r, float i)
# 60 "/usr/local/cuda/bin/../include/cuComplex.h"
{
# 61 "/usr/local/cuda/bin/../include/cuComplex.h"
cuFloatComplex res;
# 62 "/usr/local/cuda/bin/../include/cuComplex.h"
(res.x) = r;
# 63 "/usr/local/cuda/bin/../include/cuComplex.h"
(res.y) = i;
# 64 "/usr/local/cuda/bin/../include/cuComplex.h"
return res;
# 65 "/usr/local/cuda/bin/../include/cuComplex.h"
} }
# 67 "/usr/local/cuda/bin/../include/cuComplex.h"
extern "C" { static inline cuFloatComplex cuConjf(cuFloatComplex x)
# 68 "/usr/local/cuda/bin/../include/cuComplex.h"
{
# 69 "/usr/local/cuda/bin/../include/cuComplex.h"
return make_cuFloatComplex(cuCrealf(x), -cuCimagf(x));
# 70 "/usr/local/cuda/bin/../include/cuComplex.h"
} }
# 71 "/usr/local/cuda/bin/../include/cuComplex.h"
extern "C" { static inline cuFloatComplex cuCaddf(cuFloatComplex x, cuFloatComplex
# 72 "/usr/local/cuda/bin/../include/cuComplex.h"
y)
# 73 "/usr/local/cuda/bin/../include/cuComplex.h"
{
# 74 "/usr/local/cuda/bin/../include/cuComplex.h"
return make_cuFloatComplex(cuCrealf(x) + cuCrealf(y), cuCimagf(x) + cuCimagf(y));
# 76 "/usr/local/cuda/bin/../include/cuComplex.h"
} }
# 78 "/usr/local/cuda/bin/../include/cuComplex.h"
extern "C" { static inline cuFloatComplex cuCsubf(cuFloatComplex x, cuFloatComplex
# 79 "/usr/local/cuda/bin/../include/cuComplex.h"
y)
# 80 "/usr/local/cuda/bin/../include/cuComplex.h"
{
# 81 "/usr/local/cuda/bin/../include/cuComplex.h"
return make_cuFloatComplex(cuCrealf(x) - cuCrealf(y), cuCimagf(x) - cuCimagf(y));
# 83 "/usr/local/cuda/bin/../include/cuComplex.h"
} }
# 90 "/usr/local/cuda/bin/../include/cuComplex.h"
extern "C" { static inline cuFloatComplex cuCmulf(cuFloatComplex x, cuFloatComplex
# 91 "/usr/local/cuda/bin/../include/cuComplex.h"
y)
# 92 "/usr/local/cuda/bin/../include/cuComplex.h"
{
# 93 "/usr/local/cuda/bin/../include/cuComplex.h"
cuFloatComplex prod;
# 94 "/usr/local/cuda/bin/../include/cuComplex.h"
prod = make_cuFloatComplex((cuCrealf(x) * cuCrealf(y)) - (cuCimagf(x) * cuCimagf(y)), (cuCrealf(x) * cuCimagf(y)) + (cuCimagf(x) * cuCrealf(y)));
# 98 "/usr/local/cuda/bin/../include/cuComplex.h"
return prod;
# 99 "/usr/local/cuda/bin/../include/cuComplex.h"
} }
# 106 "/usr/local/cuda/bin/../include/cuComplex.h"
extern "C" { static inline cuFloatComplex cuCdivf(cuFloatComplex x, cuFloatComplex
# 107 "/usr/local/cuda/bin/../include/cuComplex.h"
y)
# 108 "/usr/local/cuda/bin/../include/cuComplex.h"
{
# 109 "/usr/local/cuda/bin/../include/cuComplex.h"
cuFloatComplex quot;
# 110 "/usr/local/cuda/bin/../include/cuComplex.h"
float s = (fabsf(cuCrealf(y)) + fabsf(cuCimagf(y)));
# 111 "/usr/local/cuda/bin/../include/cuComplex.h"
float oos = ((1.0F) / s);
# 112 "/usr/local/cuda/bin/../include/cuComplex.h"
float ars = (cuCrealf(x) * oos);
# 113 "/usr/local/cuda/bin/../include/cuComplex.h"
float ais = (cuCimagf(x) * oos);
# 114 "/usr/local/cuda/bin/../include/cuComplex.h"
float brs = (cuCrealf(y) * oos);
# 115 "/usr/local/cuda/bin/../include/cuComplex.h"
float bis = (cuCimagf(y) * oos);
# 116 "/usr/local/cuda/bin/../include/cuComplex.h"
s = ((brs * brs) + (bis * bis));
# 117 "/usr/local/cuda/bin/../include/cuComplex.h"
oos = ((1.0F) / s);
# 118 "/usr/local/cuda/bin/../include/cuComplex.h"
quot = make_cuFloatComplex(((ars * brs) + (ais * bis)) * oos, ((ais * brs) - (ars * bis)) * oos);
# 120 "/usr/local/cuda/bin/../include/cuComplex.h"
return quot;
# 121 "/usr/local/cuda/bin/../include/cuComplex.h"
} }
# 131 "/usr/local/cuda/bin/../include/cuComplex.h"
extern "C" { static inline float cuCabsf(cuFloatComplex x)
# 132 "/usr/local/cuda/bin/../include/cuComplex.h"
{
# 133 "/usr/local/cuda/bin/../include/cuComplex.h"
float a = cuCrealf(x);
# 134 "/usr/local/cuda/bin/../include/cuComplex.h"
float b = cuCimagf(x);
# 135 "/usr/local/cuda/bin/../include/cuComplex.h"
float v, w, t;
# 136 "/usr/local/cuda/bin/../include/cuComplex.h"
a = fabsf(a);
# 137 "/usr/local/cuda/bin/../include/cuComplex.h"
b = fabsf(b);
# 138 "/usr/local/cuda/bin/../include/cuComplex.h"
if (a > b) {
# 139 "/usr/local/cuda/bin/../include/cuComplex.h"
v = a;
# 140 "/usr/local/cuda/bin/../include/cuComplex.h"
w = b;
# 141 "/usr/local/cuda/bin/../include/cuComplex.h"
} else {
# 142 "/usr/local/cuda/bin/../include/cuComplex.h"
v = b;
# 143 "/usr/local/cuda/bin/../include/cuComplex.h"
w = a;
# 144 "/usr/local/cuda/bin/../include/cuComplex.h"
}
# 145 "/usr/local/cuda/bin/../include/cuComplex.h"
t = (w / v);
# 146 "/usr/local/cuda/bin/../include/cuComplex.h"
t = ((1.0F) + (t * t));
# 147 "/usr/local/cuda/bin/../include/cuComplex.h"
t = (v * sqrtf(t));
# 148 "/usr/local/cuda/bin/../include/cuComplex.h"
if (((v == (0.0F)) || (v > (3.402823466e+38F))) || (w > (3.402823466e+38F))) {
# 149 "/usr/local/cuda/bin/../include/cuComplex.h"
t = (v + w);
# 150 "/usr/local/cuda/bin/../include/cuComplex.h"
}
# 151 "/usr/local/cuda/bin/../include/cuComplex.h"
return t;
# 152 "/usr/local/cuda/bin/../include/cuComplex.h"
} }
# 155 "/usr/local/cuda/bin/../include/cuComplex.h"
extern "C" { typedef double2 cuDoubleComplex; }
# 157 "/usr/local/cuda/bin/../include/cuComplex.h"
extern "C" { static inline double cuCreal(cuDoubleComplex x)
# 158 "/usr/local/cuda/bin/../include/cuComplex.h"
{
# 159 "/usr/local/cuda/bin/../include/cuComplex.h"
return x.x;
# 160 "/usr/local/cuda/bin/../include/cuComplex.h"
} }
# 162 "/usr/local/cuda/bin/../include/cuComplex.h"
extern "C" { static inline double cuCimag(cuDoubleComplex x)
# 163 "/usr/local/cuda/bin/../include/cuComplex.h"
{
# 164 "/usr/local/cuda/bin/../include/cuComplex.h"
return x.y;
# 165 "/usr/local/cuda/bin/../include/cuComplex.h"
} }
# 167 "/usr/local/cuda/bin/../include/cuComplex.h"
extern "C" { static inline cuDoubleComplex make_cuDoubleComplex(double
# 168 "/usr/local/cuda/bin/../include/cuComplex.h"
r, double i)
# 169 "/usr/local/cuda/bin/../include/cuComplex.h"
{
# 170 "/usr/local/cuda/bin/../include/cuComplex.h"
cuDoubleComplex res;
# 171 "/usr/local/cuda/bin/../include/cuComplex.h"
(res.x) = r;
# 172 "/usr/local/cuda/bin/../include/cuComplex.h"
(res.y) = i;
# 173 "/usr/local/cuda/bin/../include/cuComplex.h"
return res;
# 174 "/usr/local/cuda/bin/../include/cuComplex.h"
} }
# 176 "/usr/local/cuda/bin/../include/cuComplex.h"
extern "C" { static inline cuDoubleComplex cuConj(cuDoubleComplex x)
# 177 "/usr/local/cuda/bin/../include/cuComplex.h"
{
# 178 "/usr/local/cuda/bin/../include/cuComplex.h"
return make_cuDoubleComplex(cuCreal(x), -cuCimag(x));
# 179 "/usr/local/cuda/bin/../include/cuComplex.h"
} }
# 181 "/usr/local/cuda/bin/../include/cuComplex.h"
extern "C" { static inline cuDoubleComplex cuCadd(cuDoubleComplex x, cuDoubleComplex
# 182 "/usr/local/cuda/bin/../include/cuComplex.h"
y)
# 183 "/usr/local/cuda/bin/../include/cuComplex.h"
{
# 184 "/usr/local/cuda/bin/../include/cuComplex.h"
return make_cuDoubleComplex(cuCreal(x) + cuCreal(y), cuCimag(x) + cuCimag(y));
# 186 "/usr/local/cuda/bin/../include/cuComplex.h"
} }
# 188 "/usr/local/cuda/bin/../include/cuComplex.h"
extern "C" { static inline cuDoubleComplex cuCsub(cuDoubleComplex x, cuDoubleComplex
# 189 "/usr/local/cuda/bin/../include/cuComplex.h"
y)
# 190 "/usr/local/cuda/bin/../include/cuComplex.h"
{
# 191 "/usr/local/cuda/bin/../include/cuComplex.h"
return make_cuDoubleComplex(cuCreal(x) - cuCreal(y), cuCimag(x) - cuCimag(y));
# 193 "/usr/local/cuda/bin/../include/cuComplex.h"
} }
# 200 "/usr/local/cuda/bin/../include/cuComplex.h"
extern "C" { static inline cuDoubleComplex cuCmul(cuDoubleComplex x, cuDoubleComplex
# 201 "/usr/local/cuda/bin/../include/cuComplex.h"
y)
# 202 "/usr/local/cuda/bin/../include/cuComplex.h"
{
# 203 "/usr/local/cuda/bin/../include/cuComplex.h"
cuDoubleComplex prod;
# 204 "/usr/local/cuda/bin/../include/cuComplex.h"
prod = make_cuDoubleComplex((cuCreal(x) * cuCreal(y)) - (cuCimag(x) * cuCimag(y)), (cuCreal(x) * cuCimag(y)) + (cuCimag(x) * cuCreal(y)));
# 208 "/usr/local/cuda/bin/../include/cuComplex.h"
return prod;
# 209 "/usr/local/cuda/bin/../include/cuComplex.h"
} }
# 216 "/usr/local/cuda/bin/../include/cuComplex.h"
extern "C" { static inline cuDoubleComplex cuCdiv(cuDoubleComplex x, cuDoubleComplex
# 217 "/usr/local/cuda/bin/../include/cuComplex.h"
y)
# 218 "/usr/local/cuda/bin/../include/cuComplex.h"
{
# 219 "/usr/local/cuda/bin/../include/cuComplex.h"
cuDoubleComplex quot;
# 220 "/usr/local/cuda/bin/../include/cuComplex.h"
double s = (fabs(cuCreal(y)) + fabs(cuCimag(y)));
# 221 "/usr/local/cuda/bin/../include/cuComplex.h"
double oos = ((1.0) / s);
# 222 "/usr/local/cuda/bin/../include/cuComplex.h"
double ars = (cuCreal(x) * oos);
# 223 "/usr/local/cuda/bin/../include/cuComplex.h"
double ais = (cuCimag(x) * oos);
# 224 "/usr/local/cuda/bin/../include/cuComplex.h"
double brs = (cuCreal(y) * oos);
# 225 "/usr/local/cuda/bin/../include/cuComplex.h"
double bis = (cuCimag(y) * oos);
# 226 "/usr/local/cuda/bin/../include/cuComplex.h"
s = ((brs * brs) + (bis * bis));
# 227 "/usr/local/cuda/bin/../include/cuComplex.h"
oos = ((1.0) / s);
# 228 "/usr/local/cuda/bin/../include/cuComplex.h"
quot = make_cuDoubleComplex(((ars * brs) + (ais * bis)) * oos, ((ais * brs) - (ars * bis)) * oos);
# 230 "/usr/local/cuda/bin/../include/cuComplex.h"
return quot;
# 231 "/usr/local/cuda/bin/../include/cuComplex.h"
} }
# 239 "/usr/local/cuda/bin/../include/cuComplex.h"
extern "C" { static inline double cuCabs(cuDoubleComplex x)
# 240 "/usr/local/cuda/bin/../include/cuComplex.h"
{
# 241 "/usr/local/cuda/bin/../include/cuComplex.h"
double a = cuCreal(x);
# 242 "/usr/local/cuda/bin/../include/cuComplex.h"
double b = cuCimag(x);
# 243 "/usr/local/cuda/bin/../include/cuComplex.h"
double v, w, t;
# 244 "/usr/local/cuda/bin/../include/cuComplex.h"
a = fabs(a);
# 245 "/usr/local/cuda/bin/../include/cuComplex.h"
b = fabs(b);
# 246 "/usr/local/cuda/bin/../include/cuComplex.h"
if (a > b) {
# 247 "/usr/local/cuda/bin/../include/cuComplex.h"
v = a;
# 248 "/usr/local/cuda/bin/../include/cuComplex.h"
w = b;
# 249 "/usr/local/cuda/bin/../include/cuComplex.h"
} else {
# 250 "/usr/local/cuda/bin/../include/cuComplex.h"
v = b;
# 251 "/usr/local/cuda/bin/../include/cuComplex.h"
w = a;
# 252 "/usr/local/cuda/bin/../include/cuComplex.h"
}
# 253 "/usr/local/cuda/bin/../include/cuComplex.h"
t = (w / v);
# 254 "/usr/local/cuda/bin/../include/cuComplex.h"
t = ((1.0) + (t * t));
# 255 "/usr/local/cuda/bin/../include/cuComplex.h"
t = (v * sqrt(t));
# 256 "/usr/local/cuda/bin/../include/cuComplex.h"
if (((v == (0.0)) || (v > (1.797693134862315708e+308))) || (w > (1.797693134862315708e+308)))
# 257 "/usr/local/cuda/bin/../include/cuComplex.h"
{
# 258 "/usr/local/cuda/bin/../include/cuComplex.h"
t = (v + w);
# 259 "/usr/local/cuda/bin/../include/cuComplex.h"
}
# 260 "/usr/local/cuda/bin/../include/cuComplex.h"
return t;
# 261 "/usr/local/cuda/bin/../include/cuComplex.h"
} }
# 268 "/usr/local/cuda/bin/../include/cuComplex.h"
typedef cuFloatComplex cuComplex;
# 269 "/usr/local/cuda/bin/../include/cuComplex.h"
static inline cuComplex make_cuComplex(float x, float
# 270 "/usr/local/cuda/bin/../include/cuComplex.h"
y)
# 271 "/usr/local/cuda/bin/../include/cuComplex.h"
{
# 272 "/usr/local/cuda/bin/../include/cuComplex.h"
return make_cuFloatComplex(x, y);
# 273 "/usr/local/cuda/bin/../include/cuComplex.h"
}
# 276 "/usr/local/cuda/bin/../include/cuComplex.h"
static inline cuDoubleComplex cuComplexFloatToDouble(cuFloatComplex
# 277 "/usr/local/cuda/bin/../include/cuComplex.h"
c)
# 278 "/usr/local/cuda/bin/../include/cuComplex.h"
{
# 279 "/usr/local/cuda/bin/../include/cuComplex.h"
return make_cuDoubleComplex((double)cuCrealf(c), (double)cuCimagf(c));
# 280 "/usr/local/cuda/bin/../include/cuComplex.h"
}
# 282 "/usr/local/cuda/bin/../include/cuComplex.h"
static inline cuFloatComplex cuComplexDoubleToFloat(cuDoubleComplex
# 283 "/usr/local/cuda/bin/../include/cuComplex.h"
c)
# 284 "/usr/local/cuda/bin/../include/cuComplex.h"
{
# 285 "/usr/local/cuda/bin/../include/cuComplex.h"
return make_cuFloatComplex((float)cuCreal(c), (float)cuCimag(c));
# 286 "/usr/local/cuda/bin/../include/cuComplex.h"
}
# 289 "/usr/local/cuda/bin/../include/cuComplex.h"
static inline cuComplex cuCfmaf(cuComplex x, cuComplex y, cuComplex d)
# 290 "/usr/local/cuda/bin/../include/cuComplex.h"
{
# 291 "/usr/local/cuda/bin/../include/cuComplex.h"
float real_res;
# 292 "/usr/local/cuda/bin/../include/cuComplex.h"
float imag_res;
# 294 "/usr/local/cuda/bin/../include/cuComplex.h"
real_res = ((cuCrealf(x) * cuCrealf(y)) + cuCrealf(d));
# 295 "/usr/local/cuda/bin/../include/cuComplex.h"
imag_res = ((cuCrealf(x) * cuCimagf(y)) + cuCimagf(d));
# 297 "/usr/local/cuda/bin/../include/cuComplex.h"
real_res = ((-(cuCimagf(x) * cuCimagf(y))) + real_res);
# 298 "/usr/local/cuda/bin/../include/cuComplex.h"
imag_res = ((cuCimagf(x) * cuCrealf(y)) + imag_res);
# 300 "/usr/local/cuda/bin/../include/cuComplex.h"
return make_cuComplex(real_res, imag_res);
# 301 "/usr/local/cuda/bin/../include/cuComplex.h"
}
# 303 "/usr/local/cuda/bin/../include/cuComplex.h"
static inline cuDoubleComplex cuCfma(cuDoubleComplex x, cuDoubleComplex y, cuDoubleComplex d)
# 304 "/usr/local/cuda/bin/../include/cuComplex.h"
{
# 305 "/usr/local/cuda/bin/../include/cuComplex.h"
double real_res;
# 306 "/usr/local/cuda/bin/../include/cuComplex.h"
double imag_res;
# 308 "/usr/local/cuda/bin/../include/cuComplex.h"
real_res = ((cuCreal(x) * cuCreal(y)) + cuCreal(d));
# 309 "/usr/local/cuda/bin/../include/cuComplex.h"
imag_res = ((cuCreal(x) * cuCimag(y)) + cuCimag(d));
# 311 "/usr/local/cuda/bin/../include/cuComplex.h"
real_res = ((-(cuCimag(x) * cuCimag(y))) + real_res);
# 312 "/usr/local/cuda/bin/../include/cuComplex.h"
imag_res = ((cuCimag(x) * cuCreal(y)) + imag_res);
# 314 "/usr/local/cuda/bin/../include/cuComplex.h"
return make_cuDoubleComplex(real_res, imag_res);
# 315 "/usr/local/cuda/bin/../include/cuComplex.h"
}
# 72 "/usr/local/cuda/bin/../include/cufft.h"
extern "C" { typedef
# 61 "/usr/local/cuda/bin/../include/cufft.h"
enum cufftResult_t {
# 62 "/usr/local/cuda/bin/../include/cufft.h"
CUFFT_SUCCESS,
# 63 "/usr/local/cuda/bin/../include/cufft.h"
CUFFT_INVALID_PLAN,
# 64 "/usr/local/cuda/bin/../include/cufft.h"
CUFFT_ALLOC_FAILED,
# 65 "/usr/local/cuda/bin/../include/cufft.h"
CUFFT_INVALID_TYPE,
# 66 "/usr/local/cuda/bin/../include/cufft.h"
CUFFT_INVALID_VALUE,
# 67 "/usr/local/cuda/bin/../include/cufft.h"
CUFFT_INTERNAL_ERROR,
# 68 "/usr/local/cuda/bin/../include/cufft.h"
CUFFT_EXEC_FAILED,
# 69 "/usr/local/cuda/bin/../include/cufft.h"
CUFFT_SETUP_FAILED,
# 70 "/usr/local/cuda/bin/../include/cufft.h"
CUFFT_INVALID_SIZE,
# 71 "/usr/local/cuda/bin/../include/cufft.h"
CUFFT_UNALIGNED_DATA
# 72 "/usr/local/cuda/bin/../include/cufft.h"
} cufftResult; }
# 77 "/usr/local/cuda/bin/../include/cufft.h"
extern "C" { typedef unsigned cufftHandle; }
# 81 "/usr/local/cuda/bin/../include/cufft.h"
extern "C" { typedef float cufftReal; }
# 82 "/usr/local/cuda/bin/../include/cufft.h"
extern "C" { typedef double cufftDoubleReal; }
# 87 "/usr/local/cuda/bin/../include/cufft.h"
extern "C" { typedef cuComplex cufftComplex; }
# 88 "/usr/local/cuda/bin/../include/cufft.h"
extern "C" { typedef cuDoubleComplex cufftDoubleComplex; }
# 102 "/usr/local/cuda/bin/../include/cufft.h"
extern "C" { typedef
# 95 "/usr/local/cuda/bin/../include/cufft.h"
enum cufftType_t {
# 96 "/usr/local/cuda/bin/../include/cufft.h"
CUFFT_R2C = 42,
# 97 "/usr/local/cuda/bin/../include/cufft.h"
CUFFT_C2R = 44,
# 98 "/usr/local/cuda/bin/../include/cufft.h"
CUFFT_C2C = 41,
# 99 "/usr/local/cuda/bin/../include/cufft.h"
CUFFT_D2Z = 106,
# 100 "/usr/local/cuda/bin/../include/cufft.h"
CUFFT_Z2D = 108,
# 101 "/usr/local/cuda/bin/../include/cufft.h"
CUFFT_Z2Z = 105
# 102 "/usr/local/cuda/bin/../include/cufft.h"
} cufftType; }
# 131 "/usr/local/cuda/bin/../include/cufft.h"
extern "C" { typedef
# 126 "/usr/local/cuda/bin/../include/cufft.h"
enum cufftCompatibility_t {
# 127 "/usr/local/cuda/bin/../include/cufft.h"
CUFFT_COMPATIBILITY_NATIVE,
# 128 "/usr/local/cuda/bin/../include/cufft.h"
CUFFT_COMPATIBILITY_FFTW_PADDING,
# 129 "/usr/local/cuda/bin/../include/cufft.h"
CUFFT_COMPATIBILITY_FFTW_ASYMMETRIC,
# 130 "/usr/local/cuda/bin/../include/cufft.h"
CUFFT_COMPATIBILITY_FFTW_ALL
# 131 "/usr/local/cuda/bin/../include/cufft.h"
} cufftCompatibility; }
# 135 "/usr/local/cuda/bin/../include/cufft.h"
extern "C" cufftResult cufftPlan1d(cufftHandle *, int, cufftType, int);
# 140 "/usr/local/cuda/bin/../include/cufft.h"
extern "C" cufftResult cufftPlan2d(cufftHandle *, int, int, cufftType);
# 144 "/usr/local/cuda/bin/../include/cufft.h"
extern "C" cufftResult cufftPlan3d(cufftHandle *, int, int, int, cufftType);
# 148 "/usr/local/cuda/bin/../include/cufft.h"
extern "C" cufftResult cufftPlanMany(cufftHandle *, int, int *, int *, int, int, int *, int, int, cufftType, int);
# 156 "/usr/local/cuda/bin/../include/cufft.h"
extern "C" cufftResult cufftDestroy(cufftHandle);
# 158 "/usr/local/cuda/bin/../include/cufft.h"
extern "C" cufftResult cufftExecC2C(cufftHandle, cufftComplex *, cufftComplex *, int);
# 163 "/usr/local/cuda/bin/../include/cufft.h"
extern "C" cufftResult cufftExecR2C(cufftHandle, cufftReal *, cufftComplex *);
# 167 "/usr/local/cuda/bin/../include/cufft.h"
extern "C" cufftResult cufftExecC2R(cufftHandle, cufftComplex *, cufftReal *);
# 171 "/usr/local/cuda/bin/../include/cufft.h"
extern "C" cufftResult cufftExecZ2Z(cufftHandle, cufftDoubleComplex *, cufftDoubleComplex *, int);
# 176 "/usr/local/cuda/bin/../include/cufft.h"
extern "C" cufftResult cufftExecD2Z(cufftHandle, cufftDoubleReal *, cufftDoubleComplex *);
# 180 "/usr/local/cuda/bin/../include/cufft.h"
extern "C" cufftResult cufftExecZ2D(cufftHandle, cufftDoubleComplex *, cufftDoubleReal *);
# 184 "/usr/local/cuda/bin/../include/cufft.h"
extern "C" cufftResult cufftSetStream(cufftHandle, cudaStream_t);
# 187 "/usr/local/cuda/bin/../include/cufft.h"
extern "C" cufftResult cufftSetCompatibilityMode(cufftHandle, cufftCompatibility);
# 22 "sdk/cutil_inline_runtime.h"
inline void __cutilCondition(int val, char *file, int line)
# 23 "sdk/cutil_inline_runtime.h"
{
# 24 "sdk/cutil_inline_runtime.h"
if ((CUTFalse) == (cutCheckCondition(val, file, line))) {
# 25 "sdk/cutil_inline_runtime.h"
exit(1);
# 26 "sdk/cutil_inline_runtime.h"
}
# 27 "sdk/cutil_inline_runtime.h"
}
# 29 "sdk/cutil_inline_runtime.h"
inline void __cutilExit(int argc, char **argv)
# 30 "sdk/cutil_inline_runtime.h"
{
# 31 "sdk/cutil_inline_runtime.h"
if (!(cutCheckCmdLineFlag(argc, (const char **)argv, "noprompt"))) {
# 32 "sdk/cutil_inline_runtime.h"
printf("\nPress ENTER to exit...\n");
# 33 "sdk/cutil_inline_runtime.h"
fflush(stdout);
# 34 "sdk/cutil_inline_runtime.h"
fflush(stderr);
# 35 "sdk/cutil_inline_runtime.h"
getchar();
# 36 "sdk/cutil_inline_runtime.h"
}
# 37 "sdk/cutil_inline_runtime.h"
exit(0);
# 38 "sdk/cutil_inline_runtime.h"
}
# 41 "sdk/cutil_inline_runtime.h"
inline int cutGetMaxGflopsDeviceId()
# 42 "sdk/cutil_inline_runtime.h"
{
# 43 "sdk/cutil_inline_runtime.h"
int device_count = 0;
# 44 "sdk/cutil_inline_runtime.h"
cudaGetDeviceCount(&device_count);
# 46 "sdk/cutil_inline_runtime.h"
cudaDeviceProp device_properties;
# 47 "sdk/cutil_inline_runtime.h"
int max_gflops_device = 0;
# 48 "sdk/cutil_inline_runtime.h"
int max_gflops = 0;
# 50 "sdk/cutil_inline_runtime.h"
int current_device = 0;
# 51 "sdk/cutil_inline_runtime.h"
cudaGetDeviceProperties(&device_properties, current_device);
# 52 "sdk/cutil_inline_runtime.h"
max_gflops = ((device_properties.multiProcessorCount) * (device_properties.clockRate));
# 53 "sdk/cutil_inline_runtime.h"
++current_device;
# 55 "sdk/cutil_inline_runtime.h"
while (current_device < device_count)
# 56 "sdk/cutil_inline_runtime.h"
{
# 57 "sdk/cutil_inline_runtime.h"
cudaGetDeviceProperties(&device_properties, current_device);
# 58 "sdk/cutil_inline_runtime.h"
int gflops = ((device_properties.multiProcessorCount) * (device_properties.clockRate));
# 59 "sdk/cutil_inline_runtime.h"
if (gflops > max_gflops)
# 60 "sdk/cutil_inline_runtime.h"
{
# 61 "sdk/cutil_inline_runtime.h"
max_gflops = gflops;
# 62 "sdk/cutil_inline_runtime.h"
max_gflops_device = current_device;
# 63 "sdk/cutil_inline_runtime.h"
}
# 64 "sdk/cutil_inline_runtime.h"
++current_device;
# 65 "sdk/cutil_inline_runtime.h"
}
# 67 "sdk/cutil_inline_runtime.h"
return max_gflops_device;
# 68 "sdk/cutil_inline_runtime.h"
}
# 70 "sdk/cutil_inline_runtime.h"
inline void __cudaSafeCallNoSync(cudaError err, const char *file, const int line)
# 71 "sdk/cutil_inline_runtime.h"
{
# 72 "sdk/cutil_inline_runtime.h"
if ((cudaSuccess) != err) {
# 73 "sdk/cutil_inline_runtime.h"
fprintf(stderr, "cudaSafeCallNoSync() Runtime API error in file <%s>, line %i : %s.\n", file, line, cudaGetErrorString(err));
# 75 "sdk/cutil_inline_runtime.h"
exit(-1);
# 76 "sdk/cutil_inline_runtime.h"
}
# 77 "sdk/cutil_inline_runtime.h"
}
# 79 "sdk/cutil_inline_runtime.h"
inline void __cudaSafeCall(cudaError err, const char *file, const int line)
# 80 "sdk/cutil_inline_runtime.h"
{
# 81 "sdk/cutil_inline_runtime.h"
if ((cudaSuccess) != err) {
# 82 "sdk/cutil_inline_runtime.h"
fprintf(stderr, "cudaSafeCall() Runtime API error in file <%s>, line %i : %s.\n", file, line, cudaGetErrorString(err));
# 84 "sdk/cutil_inline_runtime.h"
exit(-1);
# 85 "sdk/cutil_inline_runtime.h"
}
# 86 "sdk/cutil_inline_runtime.h"
}
# 88 "sdk/cutil_inline_runtime.h"
inline void __cudaSafeThreadSync(const char *file, const int line)
# 89 "sdk/cutil_inline_runtime.h"
{
# 90 "sdk/cutil_inline_runtime.h"
cudaError err = cudaThreadSynchronize();
# 91 "sdk/cutil_inline_runtime.h"
if ((cudaSuccess) != err) {
# 92 "sdk/cutil_inline_runtime.h"
fprintf(stderr, "cudaThreadSynchronize() Driver API error in file \'%s\' in line %i : %s.\n", file, line, cudaGetErrorString(err));
# 94 "sdk/cutil_inline_runtime.h"
exit(-1);
# 95 "sdk/cutil_inline_runtime.h"
}
# 96 "sdk/cutil_inline_runtime.h"
}
# 98 "sdk/cutil_inline_runtime.h"
inline void __cufftSafeCall(cufftResult err, const char *file, const int line)
# 99 "sdk/cutil_inline_runtime.h"
{
# 100 "sdk/cutil_inline_runtime.h"
if ((CUFFT_SUCCESS) != err) {
# 101 "sdk/cutil_inline_runtime.h"
fprintf(stderr, "cufftSafeCall() CUFFT error in file <%s>, line %i.\n", file, line);
# 103 "sdk/cutil_inline_runtime.h"
exit(-1);
# 104 "sdk/cutil_inline_runtime.h"
}
# 105 "sdk/cutil_inline_runtime.h"
}
# 107 "sdk/cutil_inline_runtime.h"
inline void __cutilCheckError(CUTBoolean err, const char *file, const int line)
# 108 "sdk/cutil_inline_runtime.h"
{
# 109 "sdk/cutil_inline_runtime.h"
if ((CUTTrue) != err) {
# 110 "sdk/cutil_inline_runtime.h"
fprintf(stderr, "CUTIL CUDA error in file <%s>, line %i.\n", file, line);
# 112 "sdk/cutil_inline_runtime.h"
exit(-1);
# 113 "sdk/cutil_inline_runtime.h"
}
# 114 "sdk/cutil_inline_runtime.h"
}
# 116 "sdk/cutil_inline_runtime.h"
inline void __cutilCheckMsg(const char *errorMessage, const char *file, const int line)
# 117 "sdk/cutil_inline_runtime.h"
{
# 118 "sdk/cutil_inline_runtime.h"
cudaError_t err = cudaGetLastError();
# 119 "sdk/cutil_inline_runtime.h"
if ((cudaSuccess) != err) {
# 120 "sdk/cutil_inline_runtime.h"
fprintf(stderr, "cutilCheckMsg() CUTIL CUDA error: %s in file <%s>, line %i : %s.\n", errorMessage, file, line, cudaGetErrorString(err));
# 122 "sdk/cutil_inline_runtime.h"
exit(-1);
# 123 "sdk/cutil_inline_runtime.h"
}
# 132 "sdk/cutil_inline_runtime.h"
}
# 133 "sdk/cutil_inline_runtime.h"
inline void __cutilSafeMalloc(void *pointer, const char *file, const int line)
# 134 "sdk/cutil_inline_runtime.h"
{
# 135 "sdk/cutil_inline_runtime.h"
if (!(pointer)) {
# 136 "sdk/cutil_inline_runtime.h"
fprintf(stderr, "cutilSafeMalloc host malloc failure in file <%s>, line %i\n", file, line);
# 138 "sdk/cutil_inline_runtime.h"
exit(-1);
# 139 "sdk/cutil_inline_runtime.h"
}
# 140 "sdk/cutil_inline_runtime.h"
}
# 145 "sdk/cutil_inline_runtime.h"
inline void cutilDeviceInit(int ARGC, char **ARGV)
# 146 "sdk/cutil_inline_runtime.h"
{
# 147 "sdk/cutil_inline_runtime.h"
int deviceCount;
# 148 "sdk/cutil_inline_runtime.h"
__cudaSafeCallNoSync(cudaGetDeviceCount(&deviceCount), "sdk/cutil_inline_runtime.h", 148);
# 149 "sdk/cutil_inline_runtime.h"
if (deviceCount == 0) {
# 150 "sdk/cutil_inline_runtime.h"
fprintf(stderr, "CUTIL CUDA error: no devices supporting CUDA.\n");
# 151 "sdk/cutil_inline_runtime.h"
exit(-1);
# 152 "sdk/cutil_inline_runtime.h"
}
# 153 "sdk/cutil_inline_runtime.h"
int dev = 0;
# 154 "sdk/cutil_inline_runtime.h"
cutGetCmdLineArgumenti(ARGC, (const char **)ARGV, "device", &dev);
# 155 "sdk/cutil_inline_runtime.h"
if (dev < 0) { dev = 0; } if (dev > (deviceCount - 1)) { dev = (deviceCount - 1); }
# 157 "sdk/cutil_inline_runtime.h"
cudaDeviceProp deviceProp;
# 158 "sdk/cutil_inline_runtime.h"
__cudaSafeCallNoSync(cudaGetDeviceProperties(&deviceProp, dev), "sdk/cutil_inline_runtime.h", 158);
# 159 "sdk/cutil_inline_runtime.h"
if ((deviceProp.major) < 1) {
# 160 "sdk/cutil_inline_runtime.h"
fprintf(stderr, "cutil error: device does not support CUDA.\n");
# 161 "sdk/cutil_inline_runtime.h"
exit(-1); }
# 163 "sdk/cutil_inline_runtime.h"
if ((cutCheckCmdLineFlag(ARGC, (const char **)ARGV, "quiet")) == (CUTFalse)) {
# 164 "sdk/cutil_inline_runtime.h"
fprintf(stderr, "Using device %d: %s\n", dev, deviceProp.name); }
# 165 "sdk/cutil_inline_runtime.h"
__cudaSafeCall(cudaSetDevice(dev), "sdk/cutil_inline_runtime.h", 165);
# 166 "sdk/cutil_inline_runtime.h"
}
# 171 "sdk/cutil_inline_runtime.h"
inline void cutilCudaCheckCtxLost(const char *errorMessage, const char *file, const int line)
# 172 "sdk/cutil_inline_runtime.h"
{
# 173 "sdk/cutil_inline_runtime.h"
cudaError_t err = cudaGetLastError();
# 174 "sdk/cutil_inline_runtime.h"
if ((cudaSuccess) != err) {
# 175 "sdk/cutil_inline_runtime.h"
fprintf(stderr, "CUDA error: %s in file \'%s\' in line %i : %s.\n", errorMessage, file, line, cudaGetErrorString(err));
# 177 "sdk/cutil_inline_runtime.h"
exit(-1);
# 178 "sdk/cutil_inline_runtime.h"
}
# 179 "sdk/cutil_inline_runtime.h"
err = cudaThreadSynchronize();
# 180 "sdk/cutil_inline_runtime.h"
if ((cudaSuccess) != err) {
# 181 "sdk/cutil_inline_runtime.h"
fprintf(stderr, "CCUDA error: %s in file \'%s\' in line %i : %s.\n", errorMessage, file, line, cudaGetErrorString(err));
# 183 "sdk/cutil_inline_runtime.h"
exit(-1);
# 184 "sdk/cutil_inline_runtime.h"
}
# 185 "sdk/cutil_inline_runtime.h"
}
# 16 "sdk/cutil_inline_drvapi.h"
inline void __cuSafeCallNoSync(CUresult err, const char *file, const int line)
# 17 "sdk/cutil_inline_drvapi.h"
{
# 18 "sdk/cutil_inline_drvapi.h"
if ((CUDA_SUCCESS) != err) {
# 19 "sdk/cutil_inline_drvapi.h"
fprintf(stderr, "cuSafeCallNoSync() Driver API error = %04d from file <%s>, line %i.\n", err, file, line);
# 21 "sdk/cutil_inline_drvapi.h"
exit(-1);
# 22 "sdk/cutil_inline_drvapi.h"
}
# 23 "sdk/cutil_inline_drvapi.h"
}
# 24 "sdk/cutil_inline_drvapi.h"
inline void __cuSafeCall(CUresult err, const char *file, const int line)
# 25 "sdk/cutil_inline_drvapi.h"
{
# 26 "sdk/cutil_inline_drvapi.h"
__cuSafeCallNoSync(err, file, line);
# 27 "sdk/cutil_inline_drvapi.h"
}
# 29 "sdk/cutil_inline_drvapi.h"
inline void __cuCtxSync(const char *file, const int line)
# 30 "sdk/cutil_inline_drvapi.h"
{
# 31 "sdk/cutil_inline_drvapi.h"
CUresult err = cuCtxSynchronize();
# 32 "sdk/cutil_inline_drvapi.h"
if ((CUDA_SUCCESS) != err) {
# 33 "sdk/cutil_inline_drvapi.h"
fprintf(stderr, "cuCtxSynchronize() API error = %04d in file <%s>, line %i.\n", err, file, line);
# 35 "sdk/cutil_inline_drvapi.h"
exit(-1);
# 36 "sdk/cutil_inline_drvapi.h"
}
# 37 "sdk/cutil_inline_drvapi.h"
}
# 39 "sdk/cutil_inline_drvapi.h"
inline void __cuCheckMsg(const char *msg, const char *file, const int line)
# 40 "sdk/cutil_inline_drvapi.h"
{
# 41 "sdk/cutil_inline_drvapi.h"
CUresult err = cuCtxSynchronize();
# 42 "sdk/cutil_inline_drvapi.h"
if ((CUDA_SUCCESS) != err) {
# 43 "sdk/cutil_inline_drvapi.h"
fprintf(stderr, "cutilDrvCheckMsg -> %s", msg);
# 44 "sdk/cutil_inline_drvapi.h"
fprintf(stderr, "cutilDrvCheckMsg -> cuCtxSynchronize API error = %04d in file <%s>, line %i.\n", err, file, line);
# 46 "sdk/cutil_inline_drvapi.h"
exit(-1);
# 47 "sdk/cutil_inline_drvapi.h"
}
# 48 "sdk/cutil_inline_drvapi.h"
}
# 54 "sdk/cutil_inline_drvapi.h"
inline void cutilDeviceInitDrv(int cuDevice, int ARGC, char **ARGV)
# 55 "sdk/cutil_inline_drvapi.h"
{
# 56 "sdk/cutil_inline_drvapi.h"
cuDevice = 0;
# 57 "sdk/cutil_inline_drvapi.h"
int deviceCount = 0;
# 58 "sdk/cutil_inline_drvapi.h"
CUresult err = cuInit(0);
# 59 "sdk/cutil_inline_drvapi.h"
if ((CUDA_SUCCESS) == err) {
# 60 "sdk/cutil_inline_drvapi.h"
__cuSafeCallNoSync(cuDeviceGetCount(&deviceCount), "sdk/cutil_inline_drvapi.h", 60); }
# 61 "sdk/cutil_inline_drvapi.h"
if (deviceCount == 0) {
# 62 "sdk/cutil_inline_drvapi.h"
fprintf(stderr, "CUTIL DeviceInitDrv error: no devices supporting CUDA\n");
# 63 "sdk/cutil_inline_drvapi.h"
exit(-1);
# 64 "sdk/cutil_inline_drvapi.h"
}
# 65 "sdk/cutil_inline_drvapi.h"
int dev = 0;
# 66 "sdk/cutil_inline_drvapi.h"
cutGetCmdLineArgumenti(ARGC, (const char **)ARGV, "device", &dev);
# 67 "sdk/cutil_inline_drvapi.h"
if (dev < 0) { dev = 0; }
# 68 "sdk/cutil_inline_drvapi.h"
if (dev > (deviceCount - 1)) { dev = (deviceCount - 1); }
# 69 "sdk/cutil_inline_drvapi.h"
__cuSafeCallNoSync(cuDeviceGet(&cuDevice, dev), "sdk/cutil_inline_drvapi.h", 69);
# 70 "sdk/cutil_inline_drvapi.h"
char name[100];
# 71 "sdk/cutil_inline_drvapi.h"
cuDeviceGetName(name, 100, cuDevice);
# 72 "sdk/cutil_inline_drvapi.h"
if ((cutCheckCmdLineFlag(ARGC, (const char **)ARGV, "quiet")) == (CUTFalse)) {
# 73 "sdk/cutil_inline_drvapi.h"
fprintf(stderr, "Using device %d: %s\n", dev, name); }
# 74 "sdk/cutil_inline_drvapi.h"
}
# 78 "sdk/cutil_inline_drvapi.h"
inline void cutilDrvCudaCheckCtxLost(const char *errorMessage, const char *file, const int line)
# 79 "sdk/cutil_inline_drvapi.h"
{
# 80 "sdk/cutil_inline_drvapi.h"
CUresult err = cuCtxSynchronize();
# 81 "sdk/cutil_inline_drvapi.h"
if ((CUDA_ERROR_INVALID_CONTEXT) != err) {
# 82 "sdk/cutil_inline_drvapi.h"
fprintf(stderr, "Cuda error: %s in file \'%s\' in line %i\n", errorMessage, file, line);
# 84 "sdk/cutil_inline_drvapi.h"
exit(-1);
# 85 "sdk/cutil_inline_drvapi.h"
}
# 86 "sdk/cutil_inline_drvapi.h"
err = cuCtxSynchronize();
# 87 "sdk/cutil_inline_drvapi.h"
if ((CUDA_SUCCESS) != err) {
# 88 "sdk/cutil_inline_drvapi.h"
fprintf(stderr, "Cuda error: %s in file \'%s\' in line %i\n", errorMessage, file, line);
# 90 "sdk/cutil_inline_drvapi.h"
exit(-1);
# 91 "sdk/cutil_inline_drvapi.h"
}
# 92 "sdk/cutil_inline_drvapi.h"
}
# 12 "sdk/cutil_inline.h"
inline void print_NVCC_min_spec(const char *sSDKsample, const char *sNVCCReq, const char *sDriverReq)
# 13 "sdk/cutil_inline.h"
{
# 14 "sdk/cutil_inline.h"
printf("CUDA %d.%02d Toolkit built this project.\n", 3020 / 1000, 3020 % 100);
# 15 "sdk/cutil_inline.h"
printf("  [ %s ] requirements:\n", sSDKsample);
# 16 "sdk/cutil_inline.h"
printf(" -> CUDA %s Toolkit\n", sNVCCReq);
# 17 "sdk/cutil_inline.h"
printf(" -> %s NVIDIA Display Driver.\n", sDriverReq);
# 18 "sdk/cutil_inline.h"
}
# 6 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_kernel.h"
extern "C" void RunMandelbrot0_sm10(uchar4 *, const int, const int, const int, const double, const double, const float, const float, const double, const uchar4, const int, const int, const int, const bool);
# 9 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_kernel.h"
extern "C" void RunMandelbrot1_sm10(uchar4 *, const int, const int, const int, const double, const double, const float, const float, const double, const uchar4, const int, const int, const int, const bool);
# 13 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_kernel.h"
extern "C" void RunMandelbrot0_sm13(uchar4 *, const int, const int, const int, const double, const double, const double, const double, const double, const uchar4, const int, const int, const int, const int, const bool);
# 16 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_kernel.h"
extern "C" void RunMandelbrot1_sm13(uchar4 *, const int, const int, const int, const double, const double, const double, const double, const double, const uchar4, const int, const int, const int, const int, const bool);
# 20 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_kernel.h"
extern "C" int inEmulationMode();
# 15 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_kernel.cu"
inline void dsdeq(float &a0, float &a1, double b)
# 16 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_kernel.cu"
{
# 17 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_kernel.cu"
a0 = ((float)b);
# 18 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_kernel.cu"
a1 = ((float)(b - a0));
# 19 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_kernel.cu"
}
# 22 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_kernel.cu"
__attribute__((unused)) inline void dsfeq(float &a0, float &a1, float b)
# 23 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_kernel.cu"
{int volatile ___ = 1;
# 26 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_kernel.cu"
exit(___);}
# 29 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_kernel.cu"
__attribute__((unused)) inline void dsadd(float &c0, float &c1, const float a0, const float a1, const float b0, const float b1)
# 30 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_kernel.cu"
{int volatile ___ = 1;
# 39 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_kernel.cu"
exit(___);}
# 42 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_kernel.cu"
__attribute__((unused)) inline void dssub(float &c0, float &c1, const float a0, const float a1, const float b0, const float b1)
# 43 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_kernel.cu"
{int volatile ___ = 1;
# 52 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_kernel.cu"
exit(___);}
# 57 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_kernel.cu"
__attribute__((unused)) inline void dsmul(float &c0, float &c1, const float a0, const float a1, const float b0, const float b1)
# 58 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_kernel.cu"
{int volatile ___ = 1;
# 82 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_kernel.cu"
exit(___);}
# 126 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_kernel.cu"
template< class T> __attribute__((unused)) inline int
# 127 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_kernel.cu"
CalcMandelbrot(const T xPos, const T yPos, const T xJParam, const T yJParam, const int crunch, const bool
# 128 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_kernel.cu"
isJulia)
# 129 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_kernel.cu"
{int volatile ___ = 1;
# 333 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_kernel.cu"
exit(___);}
# 373 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_kernel.cu"
__attribute__((unused)) inline int CalcMandelbrotDS(const float xPos0, const float xPos1, const float yPos0, const float yPos1, const float
# 374 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_kernel.cu"
xJParam, const float yJParam, const int crunch, const bool isJulia)
# 375 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_kernel.cu"
{int volatile ___ = 1;
# 425 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_kernel.cu"
exit(___);}
# 429 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_kernel.cu"
__attribute__((unused)) inline int CheckColors(const uchar4 &color0, const uchar4 &color1)
# 430 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_kernel.cu"
{int volatile ___ = 1;
# 435 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_kernel.cu"
exit(___);}
# 440 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_kernel.cu"
inline int iDivUp(int a, int b)
# 441 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_kernel.cu"
{
# 442 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_kernel.cu"
return ((a % b) != 0) ? ((a / b) + 1) : (a / b);
# 443 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_kernel.cu"
}
# 7 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
template< class T> static void
# 8 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
__wrapper__device_stub_Mandelbrot0_sm10(uchar4 *&dst, const int &imageW, const int &imageH, const int &crunch, const T &xOff, const T &yOff, const T &
# 9 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
xJP, const T &yJP, const T &scale, const uchar4 &colors, const int &frame, const int &
# 10 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
animationFrame, const bool &isJ) ;
# 7 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
template< class T> void
# 8 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
Mandelbrot0_sm10(uchar4 *dst, const int imageW, const int imageH, const int crunch, const T xOff, const T yOff, const T
# 9 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
xJP, const T yJP, const T scale, const uchar4 colors, const int frame, const int
# 10 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
animationFrame, const bool isJ)
# 11 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
{__wrapper__device_stub_Mandelbrot0_sm10<T>(dst,imageW,imageH,crunch,xOff,yOff,xJP,yJP,scale,colors,frame,animationFrame,isJ);
# 50 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
}
# 53 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
void MandelbrotDS0_sm10(uchar4 *dst, const int imageW, const int imageH, const int crunch, const float xOff0, const float xOff1, const float
# 54 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
yOff0, const float yOff1, const float xJP, const float yJP, const float scale, const uchar4
# 55 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
colors, const int frame, const int animationFrame, const bool isJ) ;
# 102 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
template< class T> static void
# 103 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
__wrapper__device_stub_Mandelbrot1_sm10(uchar4 *&dst, const int &imageW, const int &imageH, const int &crunch, const T &xOff, const T &yOff, const T &
# 104 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
xJP, const T &yJP, const T &scale, const uchar4 &colors, const int &frame, const int &
# 105 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
animationFrame, const bool &isJ) ;
# 102 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
template< class T> void
# 103 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
Mandelbrot1_sm10(uchar4 *dst, const int imageW, const int imageH, const int crunch, const T xOff, const T yOff, const T
# 104 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
xJP, const T yJP, const T scale, const uchar4 colors, const int frame, const int
# 105 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
animationFrame, const bool isJ)
# 106 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
{__wrapper__device_stub_Mandelbrot1_sm10<T>(dst,imageW,imageH,crunch,xOff,yOff,xJP,yJP,scale,colors,frame,animationFrame,isJ);
# 155 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
}
# 158 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
void MandelbrotDS1_sm10(uchar4 *dst, const int imageW, const int imageH, const int crunch, const float
# 159 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
xOff0, const float xOff1, const float yOff0, const float yOff1, const float
# 160 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
xJP, const float yJP, const float scale, const uchar4 colors, const int
# 161 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
frame, const int animationFrame, const bool isJ) ;
# 218 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
void RunMandelbrot0_sm10(uchar4 *dst, const int imageW, const int imageH, const int crunch, const double xOff, const double yOff, const float
# 219 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
xjp, const float yjp, const double scale, const uchar4 colors, const int frame, const int animationFrame, const int
# 220 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
mode, const bool isJ)
# 221 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
{
# 222 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
dim3 threads(16, 16);
# 223 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
dim3 grid(iDivUp(imageW, 16), iDivUp(imageH, 16));
# 225 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
switch (mode) {
# 226 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
default:
# 227 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
case 0:
# 228 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
cudaConfigureCall(grid, threads) ? ((void)0) : (Mandelbrot0_sm10< float> )(dst, imageW, imageH, crunch, (float)xOff, (float)yOff, xjp, yjp, (float)scale, colors, frame, animationFrame, isJ);
# 230 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
break;
# 231 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
case 1:
# 232 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
float x0, x1, y0, y1;
# 233 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
dsdeq(x0, x1, xOff);
# 234 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
dsdeq(y0, y1, yOff);
# 235 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
cudaConfigureCall(grid, threads) ? ((void)0) : MandelbrotDS0_sm10(dst, imageW, imageH, crunch, x0, x1, y0, y1, xjp, yjp, (float)scale, colors, frame, animationFrame, isJ);
# 237 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
break;
# 238 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
case 2:
# 239 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
cudaConfigureCall(grid, threads) ? ((void)0) : (Mandelbrot0_sm10< double> )(dst, imageW, imageH, crunch, xOff, yOff, xjp, yjp, scale, colors, frame, animationFrame, isJ);
# 241 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
break;
# 242 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
}
# 244 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
}
# 247 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
void RunMandelbrot1_sm10(uchar4 *dst, const int imageW, const int imageH, const int crunch, const double xOff, const double yOff, const float
# 248 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
xjp, const float yjp, const double scale, const uchar4 colors, const int
# 249 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
frame, const int animationFrame, const int mode, const bool isJ)
# 250 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
{
# 251 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
dim3 threads(16, 16);
# 252 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
dim3 grid(iDivUp(imageW, 16), iDivUp(imageH, 16));
# 254 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
switch (mode) {
# 255 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
default:
# 256 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
case 0:
# 257 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
cudaConfigureCall(grid, threads) ? ((void)0) : (Mandelbrot1_sm10< float> )(dst, imageW, imageH, crunch, (float)xOff, (float)yOff, xjp, yjp, (float)scale, colors, frame, animationFrame, isJ);
# 259 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
break;
# 260 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
case 1:
# 261 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
float x0, x1, y0, y1;
# 262 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
dsdeq(x0, x1, xOff);
# 263 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
dsdeq(y0, y1, yOff);
# 264 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
cudaConfigureCall(grid, threads) ? ((void)0) : MandelbrotDS1_sm10(dst, imageW, imageH, crunch, x0, x1, y0, y1, xjp, yjp, (float)scale, colors, frame, animationFrame, isJ);
# 266 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
break;
# 267 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
case 2:
# 268 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
cudaConfigureCall(grid, threads) ? ((void)0) : (Mandelbrot1_sm10< double> )(dst, imageW, imageH, crunch, xOff, yOff, yjp, yjp, scale, colors, frame, animationFrame, isJ);
# 270 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
break;
# 271 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
}
# 273 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
__cutilCheckMsg("Mandelbrot1_sm10 kernel execution failed.\n", "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu", 273);
# 274 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
}
# 1 "/tmp/tmpxft_000018e5_00000000-1_Mandelbrot_sm10.cudafe1.stub.c"
# 1 "/tmp/tmpxft_000018e5_00000000-1_Mandelbrot_sm10.cudafe1.stub.c" 1
# 1 "/usr/local/cuda/bin/../include/crt/host_runtime.h" 1
# 91 "/usr/local/cuda/bin/../include/crt/host_runtime.h"
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

extern void __cudaRegisterSurface(
        void **fatCubinHandle,
  const struct surfaceReference *hostVar,
  const void **deviceAddress,
  const char *deviceName,
        int dim,
        int ext
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



extern int atexit(void(*)(void)) throw();







}

static void **__cudaFatCubinHandle;

static void __cudaUnregisterBinaryUtil(void)
{
  __cudaUnregisterFatBinary(__cudaFatCubinHandle);
}

# 1 "/usr/local/cuda/bin/../include/common_functions.h" 1
# 90 "/usr/local/cuda/bin/../include/common_functions.h"
# 1 "/usr/local/cuda/bin/../include/math_functions.h" 1 3
# 948 "/usr/local/cuda/bin/../include/math_functions.h" 3
# 1 "/usr/local/cuda/bin/../include/math_constants.h" 1 3
# 949 "/usr/local/cuda/bin/../include/math_functions.h" 2 3
# 2973 "/usr/local/cuda/bin/../include/math_functions.h" 3
# 1 "/usr/local/cuda/bin/../include/crt/func_macro.h" 1 3
# 2974 "/usr/local/cuda/bin/../include/math_functions.h" 2 3
# 4683 "/usr/local/cuda/bin/../include/math_functions.h" 3
extern __attribute__((__weak__)) double rsqrt(double a); double rsqrt(double a)
{
  return 1.0 / sqrt(a);
}

extern __attribute__((__weak__)) double rcbrt(double a); double rcbrt(double a)
{
  double s, t;

  if (__isnan(a)) {
    return a + a;
  }
  if (a == 0.0 || __isinf(a)) {
    return 1.0 / a;
  }
  s = fabs(a);
  t = exp2(-3.3333333333333333e-1 * log2(s));
  t = ((t*t) * (-s*t) + 1.0) * (3.3333333333333333e-1*t) + t;



  if (__signbit(a))

  {
    t = -t;
  }
  return t;
}

extern __attribute__((__weak__)) double sinpi(double a); double sinpi(double a)
{
  int n;

  if (__isnan(a)) {
    return a + a;
  }
  if (a == 0.0 || __isinf(a)) {
    return sin (a);
  }
  if (a == floor(a)) {
    return ((a / 1.0e308) / 1.0e308) / 1.0e308;
  }
  a = remquo (a, 0.5, &n);
  a = a * 3.1415926535897931e+0;
  if (n & 1) {
    a = cos (a);
  } else {
    a = sin (a);
  }
  if (n & 2) {
    a = -a;
  }
  return a;
}

extern __attribute__((__weak__)) double erfinv(double a); double erfinv(double a)
{
  double p, q, t, fa;
  volatile union {
    double d;
    unsigned long long int l;
  } cvt;

  fa = fabs(a);
  if (fa >= 1.0) {
    cvt.l = 0xfff8000000000000ull;
    t = cvt.d;
    if (fa == 1.0) {
      t = a * exp(1000.0);
    }
  } else if (fa >= 0.9375) {




    t = log1p(-fa);
    t = 1.0 / sqrt(-t);
    p = 2.7834010353747001060e-3;
    p = p * t + 8.6030097526280260580e-1;
    p = p * t + 2.1371214997265515515e+0;
    p = p * t + 3.1598519601132090206e+0;
    p = p * t + 3.5780402569085996758e+0;
    p = p * t + 1.5335297523989890804e+0;
    p = p * t + 3.4839207139657522572e-1;
    p = p * t + 5.3644861147153648366e-2;
    p = p * t + 4.3836709877126095665e-3;
    p = p * t + 1.3858518113496718808e-4;
    p = p * t + 1.1738352509991666680e-6;
    q = t + 2.2859981272422905412e+0;
    q = q * t + 4.3859045256449554654e+0;
    q = q * t + 4.6632960348736635331e+0;
    q = q * t + 3.9846608184671757296e+0;
    q = q * t + 1.6068377709719017609e+0;
    q = q * t + 3.5609087305900265560e-1;
    q = q * t + 5.3963550303200816744e-2;
    q = q * t + 4.3873424022706935023e-3;
    q = q * t + 1.3858762165532246059e-4;
    q = q * t + 1.1738313872397777529e-6;
    t = p / (q * t);
    if (a < 0.0) t = -t;
  } else if (fa >= 0.75) {




    t = a * a - .87890625;
    p = .21489185007307062000e+0;
    p = p * t - .64200071507209448655e+1;
    p = p * t + .29631331505876308123e+2;
    p = p * t - .47644367129787181803e+2;
    p = p * t + .34810057749357500873e+2;
    p = p * t - .12954198980646771502e+2;
    p = p * t + .25349389220714893917e+1;
    p = p * t - .24758242362823355486e+0;
    p = p * t + .94897362808681080020e-2;
    q = t - .12831383833953226499e+2;
    q = q * t + .41409991778428888716e+2;
    q = q * t - .53715373448862143349e+2;
    q = q * t + .33880176779595142685e+2;
    q = q * t - .11315360624238054876e+2;
    q = q * t + .20369295047216351160e+1;
    q = q * t - .18611650627372178511e+0;
    q = q * t + .67544512778850945940e-2;
    p = p / q;
    t = a * p;
  } else {




    t = a * a - .5625;
    p = - .23886240104308755900e+2;
    p = p * t + .45560204272689128170e+3;
    p = p * t - .22977467176607144887e+4;
    p = p * t + .46631433533434331287e+4;
    p = p * t - .43799652308386926161e+4;
    p = p * t + .19007153590528134753e+4;
    p = p * t - .30786872642313695280e+3;
    q = t - .83288327901936570000e+2;
    q = q * t + .92741319160935318800e+3;
    q = q * t - .35088976383877264098e+4;
    q = q * t + .59039348134843665626e+4;
    q = q * t - .48481635430048872102e+4;
    q = q * t + .18997769186453057810e+4;
    q = q * t - .28386514725366621129e+3;
    p = p / q;
    t = a * p;
  }
  return t;
}

extern __attribute__((__weak__)) double erfcinv(double a); double erfcinv(double a)
{
  double t;
  volatile union {
    double d;
    unsigned long long int l;
  } cvt;

  if (__isnan(a)) {
    return a + a;
  }
  if (a <= 0.0) {
    cvt.l = 0xfff8000000000000ull;
    t = cvt.d;
    if (a == 0.0) {
        t = (1.0 - a) * exp(1000.0);
    }
  }
  else if (a >= 0.0625) {
    t = erfinv (1.0 - a);
  }
  else if (a >= 1e-100) {




    double p, q;
    t = log(a);
    t = 1.0 / sqrt(-t);
    p = 2.7834010353747001060e-3;
    p = p * t + 8.6030097526280260580e-1;
    p = p * t + 2.1371214997265515515e+0;
    p = p * t + 3.1598519601132090206e+0;
    p = p * t + 3.5780402569085996758e+0;
    p = p * t + 1.5335297523989890804e+0;
    p = p * t + 3.4839207139657522572e-1;
    p = p * t + 5.3644861147153648366e-2;
    p = p * t + 4.3836709877126095665e-3;
    p = p * t + 1.3858518113496718808e-4;
    p = p * t + 1.1738352509991666680e-6;
    q = t + 2.2859981272422905412e+0;
    q = q * t + 4.3859045256449554654e+0;
    q = q * t + 4.6632960348736635331e+0;
    q = q * t + 3.9846608184671757296e+0;
    q = q * t + 1.6068377709719017609e+0;
    q = q * t + 3.5609087305900265560e-1;
    q = q * t + 5.3963550303200816744e-2;
    q = q * t + 4.3873424022706935023e-3;
    q = q * t + 1.3858762165532246059e-4;
    q = q * t + 1.1738313872397777529e-6;
    t = p / (q * t);
  }
  else {




    double p, q;
    t = log(a);
    t = 1.0 / sqrt(-t);
    p = 6.9952990607058154858e-1;
    p = p * t + 1.9507620287580568829e+0;
    p = p * t + 8.2810030904462690216e-1;
    p = p * t + 1.1279046353630280005e-1;
    p = p * t + 6.0537914739162189689e-3;
    p = p * t + 1.3714329569665128933e-4;
    p = p * t + 1.2964481560643197452e-6;
    p = p * t + 4.6156006321345332510e-9;
    p = p * t + 4.5344689563209398450e-12;
    q = t + 1.5771922386662040546e+0;
    q = q * t + 2.1238242087454993542e+0;
    q = q * t + 8.4001814918178042919e-1;
    q = q * t + 1.1311889334355782065e-1;
    q = q * t + 6.0574830550097140404e-3;
    q = q * t + 1.3715891988350205065e-4;
    q = q * t + 1.2964671850944981713e-6;
    q = q * t + 4.6156017600933592558e-9;
    q = q * t + 4.5344687377088206783e-12;
    t = p / (q * t);
  }
  return t;
}

extern __attribute__((__weak__)) float rsqrtf(float a); float rsqrtf(float a)
{
  return (float)rsqrt((double)a);
}

extern __attribute__((__weak__)) float rcbrtf(float a); float rcbrtf(float a)
{
  return (float)rcbrt((double)a);
}

extern __attribute__((__weak__)) float sinpif(float a); float sinpif(float a)
{
  return (float)sinpi((double)a);
}

extern __attribute__((__weak__)) float erfinvf(float a); float erfinvf(float a)
{
  return (float)erfinv((double)a);
}

extern __attribute__((__weak__)) float erfcinvf(float a); float erfcinvf(float a)
{
  return (float)erfcinv((double)a);
}







extern __attribute__((__weak__)) int min(int a, int b); int min(int a, int b)
{
  return a < b ? a : b;
}

extern __attribute__((__weak__)) unsigned int umin(unsigned int a, unsigned int b); unsigned int umin(unsigned int a, unsigned int b)
{
  return a < b ? a : b;
}

extern __attribute__((__weak__)) long long int llmin(long long int a, long long int b); long long int llmin(long long int a, long long int b)
{
  return a < b ? a : b;
}

extern __attribute__((__weak__)) unsigned long long int ullmin(unsigned long long int a, unsigned long long int b); unsigned long long int ullmin(unsigned long long int a, unsigned long long int b)
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

extern __attribute__((__weak__)) long long int llmax(long long int a, long long int b); long long int llmax(long long int a, long long int b)
{
  return a > b ? a : b;
}

extern __attribute__((__weak__)) unsigned long long int ullmax(unsigned long long int a, unsigned long long int b); unsigned long long int ullmax(unsigned long long int a, unsigned long long int b)
{
  return a > b ? a : b;
}
# 5006 "/usr/local/cuda/bin/../include/math_functions.h" 3
# 1 "/usr/local/cuda/bin/../include/math_functions_dbl_ptx3.h" 1 3
# 5007 "/usr/local/cuda/bin/../include/math_functions.h" 2 3
# 91 "/usr/local/cuda/bin/../include/common_functions.h" 2
# 164 "/usr/local/cuda/bin/../include/crt/host_runtime.h" 2







#pragma pack()
# 2 "/tmp/tmpxft_000018e5_00000000-1_Mandelbrot_sm10.cudafe1.stub.c" 2
# 1 "/tmp/tmpxft_000018e5_00000000-3_Mandelbrot_sm10.fatbin.c" 1
# 1 "/usr/local/cuda/bin/../include/__cudaFatFormat.h" 1
# 83 "/usr/local/cuda/bin/../include/__cudaFatFormat.h"
extern "C" {
# 97 "/usr/local/cuda/bin/../include/__cudaFatFormat.h"
typedef struct {
    char* gpuProfileName;
    char* cubin;
} __cudaFatCubinEntry;
# 113 "/usr/local/cuda/bin/../include/__cudaFatFormat.h"
typedef struct {
    char* gpuProfileName;
    char* ptx;
} __cudaFatPtxEntry;
# 125 "/usr/local/cuda/bin/../include/__cudaFatFormat.h"
typedef struct __cudaFatDebugEntryRec {
    char* gpuProfileName;
    char* debug;
    struct __cudaFatDebugEntryRec *next;
    unsigned int size;
} __cudaFatDebugEntry;

typedef struct __cudaFatElfEntryRec {
    char* gpuProfileName;
    char* elf;
    struct __cudaFatElfEntryRec *next;
    unsigned int size;
} __cudaFatElfEntry;

typedef enum {
      __cudaFatDontSearchFlag = (1 << 0),
      __cudaFatDontCacheFlag = (1 << 1),
      __cudaFatSassDebugFlag = (1 << 2)
} __cudaFatCudaBinaryFlag;
# 152 "/usr/local/cuda/bin/../include/__cudaFatFormat.h"
typedef struct {
    char* name;
} __cudaFatSymbol;
# 166 "/usr/local/cuda/bin/../include/__cudaFatFormat.h"
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
    __cudaFatElfEntry *elf;
} __cudaFatCudaBinary;
# 203 "/usr/local/cuda/bin/../include/__cudaFatFormat.h"
    typedef enum {
        __cudaFatAvoidPTX,
        __cudaFatPreferBestCode,
        __cudaFatForcePTX
    } __cudaFatCompilationPolicy;
# 227 "/usr/local/cuda/bin/../include/__cudaFatFormat.h"
void fatGetCubinForGpuWithPolicy( __cudaFatCudaBinary *binary, __cudaFatCompilationPolicy policy, char* gpuName, char* *cubin, char* *dbgInfoFile );
# 240 "/usr/local/cuda/bin/../include/__cudaFatFormat.h"
unsigned char fatCheckJitForGpuWithPolicy( __cudaFatCudaBinary *binary, __cudaFatCompilationPolicy policy, char* gpuName, char* *ptx );
# 250 "/usr/local/cuda/bin/../include/__cudaFatFormat.h"
void fatFreeCubin( char* cubin, char* dbgInfoFile );





void __cudaFatFreePTX( char* ptx );


}
# 2 "/tmp/tmpxft_000018e5_00000000-3_Mandelbrot_sm10.fatbin.c" 2

asm(
".section .rodata\n"
".align 32\n"
"__deviceText_$sm_13$:\n"
".quad 0x33010102464c457f,0x0000000000000002,0x0000000100be0002,0x0000000000000000\n"
".quad 0x00000000000067d4,0x0000000000000040,0x00380040000d010d,0x0001001c0040000d\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000300000001,0x0000000000000000,0x0000000000000000,0x0000000000000740\n"
".quad 0x0000000000000616,0x0000000000000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x000000030000000b,0x0000000000000000,0x0000000000000000,0x0000000000000d56\n"
".quad 0x000000000000013d,0x0000000000000000,0x0000000000000001,0x0000000000000000\n"
".quad 0x0000000200000013,0x0000000000000000,0x0000000000000000,0x0000000000000e93\n"
".quad 0x0000000000000360,0x0000001e00000002,0x0000000000000001,0x0000000000000018\n"
".quad 0x000000010000029d,0x0000000000000006,0x0000000000000000,0x00000000000011f3\n"
".quad 0x0000000000000928,0x1600001000000003,0x0000000000000004,0x0000000000000000\n"
".quad 0x00000001000004c8,0x0000000000000002,0x0000000000000000,0x0000000000001b1b\n"
".quad 0x0000000000000018,0x0000000400000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x00000001000002d1,0x0000000000000002,0x0000000000000000,0x0000000000001b33\n"
".quad 0x0000000000000140,0x0000000400000000,0x0000000000000001,0x0000000000000000\n"
".quad 0x000000080000048f,0x0000000000000003,0x0000000000000000,0x0000000000001c73\n"
".quad 0x000000000000004d,0x0000000400000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x0000000100000232,0x0000000000000006,0x0000000000000000,0x0000000000001c73\n"
".quad 0x0000000000000bd8,0x1800000e00000003,0x0000000000000004,0x0000000000000000\n"
".quad 0x00000001000003ca,0x0000000000000002,0x0000000000000000,0x000000000000284b\n"
".quad 0x0000000000000018,0x0000000800000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x0000000100000266,0x0000000000000002,0x0000000000000000,0x0000000000002863\n"
".quad 0x0000000000000140,0x0000000800000000,0x0000000000000001,0x0000000000000000\n"
".quad 0x0000000800000391,0x0000000000000003,0x0000000000000000,0x00000000000029a3\n"
".quad 0x000000000000004d,0x0000000800000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x00000001000001b3,0x0000000000000006,0x0000000000000000,0x00000000000029a3\n"
".quad 0x0000000000000b78,0x0f00000c00000003,0x0000000000000004,0x0000000000000000\n"
".quad 0x00000001000005d0,0x0000000000000002,0x0000000000000000,0x000000000000351b\n"
".quad 0x0000000000000010,0x0000000c00000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x00000001000001f1,0x0000000000000002,0x0000000000000000,0x000000000000352b\n"
".quad 0x0000000000000118,0x0000000c00000000,0x0000000000000001,0x0000000000000000\n"
".quad 0x000000080000058d,0x0000000000000003,0x0000000000000000,0x0000000000003643\n"
".quad 0x0000000000000045,0x0000000c00000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x0000000100000134,0x0000000000000006,0x0000000000000000,0x0000000000003643\n"
".quad 0x0000000000000ee0,0x1400000a00000003,0x0000000000000004,0x0000000000000000\n"
".quad 0x0000000100000449,0x0000000000000002,0x0000000000000000,0x0000000000004523\n"
".quad 0x000000000000000c,0x0000001000000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x0000000100000172,0x0000000000000002,0x0000000000000000,0x000000000000452f\n"
".quad 0x0000000000000118,0x0000001000000000,0x0000000000000001,0x0000000000000000\n"
".quad 0x0000000800000406,0x0000000000000003,0x0000000000000000,0x0000000000004647\n"
".quad 0x000000000000005d,0x0000001000000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x00000001000000b5,0x0000000000000006,0x0000000000000000,0x0000000000004647\n"
".quad 0x0000000000000da8,0x0f00000800000003,0x0000000000000004,0x0000000000000000\n"
".quad 0x0000000100000547,0x0000000000000002,0x0000000000000000,0x00000000000053ef\n"
".quad 0x0000000000000010,0x0000001400000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x00000001000000f3,0x0000000000000002,0x0000000000000000,0x00000000000053ff\n"
".quad 0x0000000000000118,0x0000001400000000,0x0000000000000001,0x0000000000000000\n"
".quad 0x0000000800000504,0x0000000000000003,0x0000000000000000,0x0000000000005517\n"
".quad 0x0000000000000045,0x0000001400000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x0000000100000036,0x0000000000000006,0x0000000000000000,0x0000000000005517\n"
".quad 0x0000000000001198,0x1600000600000003,0x0000000000000004,0x0000000000000000\n"
".quad 0x000000010000034b,0x0000000000000002,0x0000000000000000,0x00000000000066af\n"
".quad 0x000000000000000c,0x0000001800000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x0000000100000074,0x0000000000000002,0x0000000000000000,0x00000000000066bb\n"
".quad 0x0000000000000118,0x0000001800000000,0x0000000000000001,0x0000000000000000\n"
".quad 0x0000000800000308,0x0000000000000003,0x0000000000000000,0x00000000000067d3\n"
".quad 0x000000000000005d,0x0000001800000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x7472747368732e00,0x747274732e006261,0x746d79732e006261,0x672e766e2e006261\n"
".quad 0x6e692e6c61626f6c,0x672e766e2e007469,0x742e006c61626f6c,0x36315a5f2e747865\n"
".quad 0x72626c65646e614d,0x30316d735f31746f,0x6375365076456449,0x5469696934726168\n"
".quad 0x535f32535f32535f,0x5f30535f32535f32,0x2e766e2e00626969,0x315a5f2e6f666e69\n"
".quad 0x626c65646e614d36,0x316d735f31746f72,0x7536507645644930,0x6969693472616863\n"
".quad 0x5f32535f32535f54,0x30535f32535f3253,0x65742e006269695f,0x4d36315a5f2e7478\n"
".quad 0x6f72626c65646e61,0x4930316d735f3174,0x6863753650764566,0x5f54696969347261\n"
".quad 0x32535f32535f3253,0x695f30535f32535f,0x692e766e2e006269,0x36315a5f2e6f666e\n"
".quad 0x72626c65646e614d,0x30316d735f31746f,0x6375365076456649,0x5469696934726168\n"
".quad 0x535f32535f32535f,0x5f30535f32535f32,0x7865742e00626969,0x614d36315a5f2e74\n"
".quad 0x746f72626c65646e,0x644930316d735f30,0x6168637536507645,0x535f546969693472\n"
".quad 0x5f32535f32535f32,0x69695f30535f3253,0x6e692e766e2e0062,0x4d36315a5f2e6f66\n"
".quad 0x6f72626c65646e61,0x4930316d735f3074,0x6863753650764564,0x5f54696969347261\n"
".quad 0x32535f32535f3253,0x695f30535f32535f,0x747865742e006269,0x6e614d36315a5f2e\n"
".quad 0x30746f72626c6564,0x45664930316d735f,0x7261686375365076,0x32535f5469696934\n"
".quad 0x535f32535f32535f,0x6269695f30535f32,0x666e692e766e2e00,0x614d36315a5f2e6f\n"
".quad 0x746f72626c65646e,0x664930316d735f30,0x6168637536507645,0x535f546969693472\n"
".quad 0x5f32535f32535f32,0x69695f30535f3253,0x2e747865742e0062,0x646e614d38315a5f\n"
".quad 0x5344746f72626c65,0x365030316d735f31,0x6969347261686375,0x6666666666666669\n"
".quad 0x6e2e006269695f53,0x5f2e6f666e692e76,0x65646e614d38315a,0x315344746f72626c\n"
".quad 0x75365030316d735f,0x6969693472616863,0x5366666666666666,0x65742e006269695f\n"
".quad 0x4d38315a5f2e7478,0x6f72626c65646e61,0x316d735f30534474,0x7261686375365030\n"
".quad 0x6666666669696934,0x6269695f53666666,0x666e692e766e2e00,0x614d38315a5f2e6f\n"
".quad 0x746f72626c65646e,0x30316d735f305344,0x3472616863753650,0x6666666666696969\n"
".quad 0x006269695f536666,0x726168732e766e2e,0x4d36315a5f2e6465,0x6f72626c65646e61\n"
".quad 0x4930316d735f3174,0x6863753650764564,0x5f54696969347261,0x32535f32535f3253\n"
".quad 0x695f30535f32535f,0x632e766e2e006269,0x31746e6174736e6f,0x6e614d36315a5f2e\n"
".quad 0x31746f72626c6564,0x45644930316d735f,0x7261686375365076,0x32535f5469696934\n"
".quad 0x535f32535f32535f,0x6269695f30535f32,0x6168732e766e2e00,0x38315a5f2e646572\n"
".quad 0x72626c65646e614d,0x6d735f315344746f,0x6168637536503031,0x6666666969693472\n"
".quad 0x69695f5366666666,0x6f632e766e2e0062,0x2e31746e6174736e,0x646e614d38315a5f\n"
".quad 0x5344746f72626c65,0x365030316d735f31,0x6969347261686375,0x6666666666666669\n"
".quad 0x6e2e006269695f53,0x6465726168732e76,0x6e614d36315a5f2e,0x30746f72626c6564\n"
".quad 0x45644930316d735f,0x7261686375365076,0x32535f5469696934,0x535f32535f32535f\n"
".quad 0x6269695f30535f32,0x6e6f632e766e2e00,0x5f2e31746e617473,0x65646e614d36315a\n"
".quad 0x735f30746f72626c,0x507645644930316d,0x6934726168637536,0x535f32535f546969\n"
".quad 0x5f32535f32535f32,0x2e006269695f3053,0x65726168732e766e,0x614d38315a5f2e64\n"
".quad 0x746f72626c65646e,0x30316d735f305344,0x3472616863753650,0x6666666666696969\n"
".quad 0x006269695f536666,0x736e6f632e766e2e,0x5a5f2e31746e6174,0x6c65646e614d3831\n"
".quad 0x5f305344746f7262,0x6375365030316d73,0x6669696934726168,0x5f53666666666666\n"
".quad 0x2e766e2e00626969,0x5f2e646572616873,0x65646e614d36315a,0x735f31746f72626c\n"
".quad 0x507645664930316d,0x6934726168637536,0x535f32535f546969,0x5f32535f32535f32\n"
".quad 0x2e006269695f3053,0x74736e6f632e766e,0x315a5f2e31746e61,0x626c65646e614d36\n"
".quad 0x316d735f31746f72,0x7536507645664930,0x6969693472616863,0x5f32535f32535f54\n"
".quad 0x30535f32535f3253,0x766e2e006269695f,0x2e6465726168732e,0x646e614d36315a5f\n"
".quad 0x5f30746f72626c65,0x7645664930316d73,0x3472616863753650,0x5f32535f54696969\n"
".quad 0x32535f32535f3253,0x006269695f30535f,0x736e6f632e766e2e,0x5a5f2e31746e6174\n"
".quad 0x6c65646e614d3631,0x6d735f30746f7262,0x3650764566493031,0x6969347261686375\n"
".quad 0x32535f32535f5469,0x535f32535f32535f,0x5f00006269695f30,0x65646e614d36315a\n"
".quad 0x735f31746f72626c,0x507645644930316d,0x6934726168637536,0x535f32535f546969\n"
".quad 0x5f32535f32535f32,0x5f006269695f3053,0x65646e614d36315a,0x735f31746f72626c\n"
".quad 0x507645664930316d,0x6934726168637536,0x535f32535f546969,0x5f32535f32535f32\n"
".quad 0x5f006269695f3053,0x65646e614d36315a,0x735f30746f72626c,0x507645644930316d\n"
".quad 0x6934726168637536,0x535f32535f546969,0x5f32535f32535f32,0x5f006269695f3053\n"
".quad 0x65646e614d36315a,0x735f30746f72626c,0x507645664930316d,0x6934726168637536\n"
".quad 0x535f32535f546969,0x5f32535f32535f32,0x5f006269695f3053,0x65646e614d38315a\n"
".quad 0x315344746f72626c,0x75365030316d735f,0x6969693472616863,0x5366666666666666\n"
".quad 0x315a5f006269695f,0x626c65646e614d38,0x735f305344746f72,0x686375365030316d\n"
".quad 0x6666696969347261,0x695f536666666666,0x0000000000006269,0x0000000000000000\n"
".quad 0x0000000000000000,0x0300000000000000,0x0000000000000100,0x0000000000000000\n"
".quad 0x0300000000000000,0x0000000000000200,0x0000000000000000,0x0300000000000000\n"
".quad 0x0000000000000300,0x0000000000000000,0x0300000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0300000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0300000000000000,0x0000000000001800,0x0000001198000000,0x0300000000000000\n"
".quad 0x0000000000001a00,0x0000000000000000,0x0300000000000000,0x0000000000001400\n"
".quad 0x0000000da8000000,0x0300000000000000,0x0000000000001600,0x0000000000000000\n"
".quad 0x0300000000000000,0x0000000000001000,0x0000000ee0000000,0x0300000000000000\n"
".quad 0x0000000000001200,0x0000000000000000,0x0300000000000000,0x0000000000000c00\n"
".quad 0x0000000b78000000,0x0300000000000000,0x0000000000000e00,0x0000000000000000\n"
".quad 0x0300000000000000,0x0000000000000800,0x0000000bd8000000,0x0300000000000000\n"
".quad 0x0000000000000a00,0x0000000000000000,0x0300000000000000,0x0000000000000400\n"
".quad 0x0000000928000000,0x0300000000000000,0x0000000000000600,0x0000000000000000\n"
".quad 0x0300000000000000,0x0000000000001b00,0x0000000000000000,0x0300000000000000\n"
".quad 0x0000000000001900,0x0000000000000000,0x0300000000000000,0x0000000000000b00\n"
".quad 0x0000000000000000,0x0300000000000000,0x0000000000000900,0x0000000000000000\n"
".quad 0x0300000000000000,0x0000000000001300,0x0000000000000000,0x0300000000000000\n"
".quad 0x0000000000001100,0x0000000000000000,0x0300000000000000,0x0000000000000700\n"
".quad 0x0000000000000000,0x0300000000000000,0x0000000000000500,0x0000000000000000\n"
".quad 0x0300000000000000,0x0000000000001700,0x0000000000000000,0x0300000000000000\n"
".quad 0x0000000000001500,0x0000000000000000,0x0300000000000000,0x0000000000000f00\n"
".quad 0x0000000000000000,0x0300000000000000,0x0000000000000d00,0x0000000000000000\n"
".quad 0x1200000001000000,0x0000000000001810,0x0000000000000000,0x1200000039000000\n"
".quad 0x0000000000001410,0x0000000000000000,0x1200000071000000,0x0000000000001010\n"
".quad 0x0000000000000000,0x12000000a9000000,0x0000000000000c10,0x0000000000000000\n"
".quad 0x12000000e1000000,0x0000000000000810,0x0000000000000000,0x120000010f000000\n"
".quad 0x0000000000000410,0x0000000000000000,0x80d0800205000000,0x8010000409004007\n"
".quad 0x80a000020d400047,0x8010000205040007,0x80a0000009400047,0x8060024e2d040007\n"
".quad 0x8060014c350020c7,0xc8300bcffd002087,0xc8300dcdfd6c2107,0x00300000036c2102\n"
".quad 0x80a0001a09000001,0x8010001201440147,0x80a00016114400c7,0x8010001605440147\n"
".quad 0x80e002de014400c7,0x80e004de15002007,0x80e002de05002047,0x80e004de19042007\n"
".quad 0x1cb041000c042147,0x80e002de09b0460a,0x80e004de110820c7,0x0cb14172040821c7\n"
".quad 0x08b0020204b14676,0x08b1017404b00406,0x28b0010030b10278,0x80d0009805b0020a\n"
".quad 0x0cb0401800200007,0xc8a40001fdb04514,0x20b04002240c2187,0x0010045003b04304\n"
".quad 0x80e0811401000001,0x43e0401401084287,0x08c00a140c046000,0x80e0000011b04014\n"
".quad 0x80c00814050800c7,0x80e0000411000007,0x80e008141d000107,0x80e0811805000047\n"
".quad 0x80c0091819084307,0x80e0000415000007,0x80e00a1411000107,0x80e08118010001c7\n"
".quad 0x80e009183d084047,0x40c00c1838000187,0x80b0001819b04308,0x80e00c1805080007\n"
".quad 0x80e00000450003c7,0x40b0500e1c080387,0x80b0000249b05008,0x80e0000c45080387\n"
".quad 0x4cb050060c000447,0x80e0000c41b05202,0x38b0521e3c000447,0x80e0020401b0531c\n"
".quad 0x80b0000e09000147,0x80e0060c0d0000c7,0x00b00e1e14000407,0x80b0000609b00200\n"
".quad 0x80e0081001000147,0x80e009120d000007,0x44b0000838000087,0x04b0441c08b00302\n"
".quad 0x40b042003cb04122,0x041100fa00b04106,0x801000f8111100fc,0x801000f8150603c7\n"
".quad 0x081002900c0403c7,0x181002921c100094,0x801004f003100098,0x801000f841000007\n"
".quad 0x801000f8450603c7,0x801000f83d0403c7,0x801000f8390603c7,0x801000f81d0403c7\n"
".quad 0x801000f8190603c7,0x801000f80d0403c7,0x801000f8090603c7,0x10100294040403c7\n"
".quad 0x1410029800100090,0xc83082d1fd100092,0xff213ff0296c6087,0x80100b20030fffff\n"
".quad 0x24b00e2220000002,0x24b0491030b05110,0x24b04c2230b0491c,0x24b0101224b00c12\n"
".quad 0x20b0091030b00f12,0x20b0481220b04818,0xc8b08311fdb00818,0x00a00b1003604047\n"
".quad 0x00100b1003000000,0x80e0810c25000001,0x80e0810421084187,0x43e0400c25084087\n"
".quad 0x43e0400421046000,0x00400b1003046000,0x30b0069250000000,0x80c0070449b00290\n"
".quad 0x80e0030c4d000007,0x80e0020c49000487,0x80c0020c550004c7,0x80e0020c19000007\n"
".quad 0x80e0091009040487,0x80e0091809080547,0x18b0462624000087,0x80b0002a19b04624\n"
".quad 0x80e0082809080187,0x80e00c2821000087,0x08b0061208000087,0x80e007060db00804\n"
".quad 0x08b0032418000087,0x20b046041cb0060c,0x1cb0520c24b04704,0x20b0480c18b0470c\n"
".quad 0x0cb0060e0cb04906,0x24b008061cb00806,0x0cb04e2218b00704,0x20b0510c30b00112\n"
".quad 0x4cb04c0c48b04906,0x44b0480630b00c1c,0x24b0421238b05222,0x20b0480208b04c12\n"
".quad 0x08b04e0e1cb05322,0x08b0101020b00904,0x20b04f1024b00704,0x08b0090c30b00404\n"
".quad 0x0cb000181cb00806,0x0cb04c0e38b04304,0x3cb04e0e20b04310,0x30b0461844c00304\n"
".quad 0x80e0810421b04818,0x80e0030419084087,0x38b04e00400003c7,0x43e0400421c00204\n"
".quad 0x80e002043d046000,0x24b0511244000187,0x80e0081041b01018,0x30b04e1e48080387\n"
".quad 0x4cb0111224b04804,0x80e00c1041b0521e,0x44b0090a24000407,0x80b0001c49b0520c\n"
".quad 0x80e00c10390804c7,0x40b0090e18000407,0x80e00c1839b01222,0x38b0470c1c000387\n"
".quad 0x80b000121db0101c,0x80e00306250801c7,0x38c0070c40000387,0x80e0070c49b0091e\n"
".quad 0x3cc0060c44000407,0x80e0060c41b04f1c,0x24b04f123c000487,0x24b0492448b05120\n"
".quad 0x48b0492224b04920,0x80e0810c25b00924,0x43e0400c25084187,0x80e0091245046000\n"
".quad 0x80b0000c51080447,0x80e0141245080247,0x80e0141245000447,0x80e0142845000447\n"
".quad 0x80b0002245000447,0x80e0070e49000487,0x40b0122044000447,0x48b0502440b05022\n"
".quad 0x54b012a24cb0111c,0x54b0531c4cb05324,0x4cb015264cb05522,0x4cb0131e54b01320\n"
".quad 0x48b0522648b01524,0xc021001429b0522a,0x0050000003044107,0x80b0002449000001\n"
".quad 0xc8b08325fd0004c7,0x8010061003604047,0x8050000003000002,0x02f0000001000007\n"
".quad 0x80307c1405e00000,0x802040d0016c0107,0x80d0010001042287,0xc8307c01fd040007\n"
".quad 0x00a00cc0036c0087,0x80100c9003000000,0x80d0008005000002,0x802000e401200007\n"
".quad 0x80a4000009042007,0x80a4000219002087,0x80a400041d002087,0x1040020208002087\n"
".quad 0x8040070215400602,0x8030100409000007,0x8030100811c41007,0x8030100a15c41007\n"
".quad 0x8060020005c41007,0x8060060009000087,0x8060070001000107,0x80a000020d000147\n"
".quad 0x80a00004150400c7,0x80a00000190400c7,0x80100cc0030400c7,0x801000f819000007\n"
".quad 0x801000f8150603c7,0x801000f80d0403c7,0x8210000c010603c7,0x80401700054400c7\n"
".quad 0x8060160205000007,0x8030100205000047,0x8060160001c41007,0x8020000001000047\n"
".quad 0x8030020001040347,0xc8307ce3fdc41007,0x802000c81d6c2147,0x80100df003042007\n"
".quad 0x0310000005000002,0x001000180c000000,0x8010000c09100214,0x80d08500090003c7\n"
".quad 0x80d0850201044007,0x8030080405044007,0x80d0010001c41007,0x80d00e0e01040047\n"
".quad 0x8030000003a0c007,0x80d00e0e11000007,0x801000220580c007,0x80a00010414400c7\n"
".quad 0x802100e209000087,0x8040100625046087,0x80301f0401000007,0x8030101229ec1007\n"
".quad 0x80d0820001c41007,0x8030080825044007,0x8060100421e41007,0x8020000001000287\n"
".quad 0x80a0002421040087,0x8020001025000087,0x80300100210400c7,0x0c40080628ec1007\n"
".quad 0x8020001001100284,0x8030101439040247,0x0020104003c41007,0x80a0001249000000\n"
".quad 0x806008040d000087,0x2810008010000387,0x0c20058600401206,0x8030101415100284\n"
".quad 0x8020001001c41007,0x8060120405040007,0x0020104003000147,0x042006820c000000\n"
".quad 0x80a000080d100080,0x80200010010000c7,0x80300804090400c7,0x801000040dc01007\n"
".quad 0x00201040030403c7,0x80d0020609000000,0x80d00e0e05000047,0x0320028e05a04007\n"
".quad 0x80d00e0201000000,0x8030000003a00007,0x80a0000625000007,0x80a0001229041147\n"
".quad 0x80a000002d440047,0x8090001431041147,0x80a0001629000007,0xff203e9831440647\n"
".quad 0xc0c00c14290fffff,0x80a00014290000c7,0x8040152435840647,0x8060142635000007\n"
".quad 0x8030101a35000347,0x8060142435c41007,0x8020401635000347,0x80a0001a35040347\n"
".quad 0xc0c00c1a31440647,0x80a00018310000c7,0x8020001429840647,0x8040122a31040307\n"
".quad 0x8060132831000007,0x8030101831000307,0x8060122831c41007,0x803000182d000307\n"
".quad 0x80300b12250402c7,0x80d00006016400c7,0x80301f0001040087,0x8030001229e41007\n"
".quad 0x80a0000025040287,0x80d00a12252c0147,0xc8307c07fd040087,0x80200000016c0147\n"
".quad 0x00d0030001040247,0x80300000030402c5,0x01f0000001000007,0x00000003ffe00000\n"
".quad 0x0000000001460004,0xffffffffff408000,0x00003c0b0400ff00,0x0c00000008000000\n"
".quad 0x1400000010000000,0x1c00000018000000,0x2400000020000000,0x2c00000028000000\n"
".quad 0x3400000030000000,0x3c00000038000000,0x04003d1803000000,0x0effffffff000c17\n"
".quad 0x040007f000003c00,0x0dffffffff000c17,0x040013f000003800,0x0cffffffff000c17\n"
".quad 0x040013f000003400,0x0bffffffff000c17,0x040013f000003000,0x0affffffff000c17\n"
".quad 0x040013f000002c00,0x09ffffffff000c17,0x040013f000002800,0x08ffffffff000c17\n"
".quad 0x040013f000002400,0x07ffffffff000c17,0x040013f000002000,0x06ffffffff000c17\n"
".quad 0x040013f000001c00,0x05ffffffff000c17,0x040013f000001800,0x04ffffffff000c17\n"
".quad 0x040013f000001400,0x03ffffffff000c17,0x040013f000001000,0x02ffffffff000c17\n"
".quad 0x040013f000000c00,0x01ffffffff000c17,0x040013f000000800,0x00ffffffff000c17\n"
".quad 0x040023f000000000,0x200022011000080d,0x80d0800205000000,0x8010000409004007\n"
".quad 0x80a000020d400047,0x8010000205040007,0x80a0000009400047,0x8060024e05040007\n"
".quad 0x8060014c090020c7,0xc83001cffd002087,0xc83002cdfd6c2107,0x00300000036c2102\n"
".quad 0x8010000c01000001,0x804003000d4400c7,0x806002020d000007,0x803010060d0000c7\n"
".quad 0x8060020001c41007,0x80200000010000c7,0x803002000d040087,0x802000c83dc41007\n"
".quad 0x80d00e1e0d0420c7,0x803008061180c007,0xc8307c05fde41007,0x00a002d0036c00c7\n"
".quad 0x80a0000c31000000,0x80a0000e2d040087,0x80a0001029040087,0x801002c003040087\n"
".quad 0xff203c9e0d000002,0x80d00e060d0fffff,0x803008061180c007,0x80a0000c15e41007\n"
".quad 0x80a0001011040087,0x18204c8a14040087,0x80a0000e0d204a88,0x80a0000a11040087\n"
".quad 0x80a0000c15041147,0x802040060d041147,0x80308108110402c7,0x8030810a156c4107\n"
".quad 0x80a000060d6c4107,0x80d0050811041147,0x803081060d040047,0x80d004060d6c4107\n"
".quad 0x80a000060d040047,0x801002d0032c0147,0x801000f80d000007,0x02f00000010603c7\n"
".quad 0x00a0044003e00000,0x0320018411000000,0xc83004cdfd000000,0x80100440036c20c7\n"
".quad 0x0320049e11000002,0x80d00e0811000000,0x803008081580c007,0x80a0001019e41007\n"
".quad 0x80a0001415040087,0x1c204c8c18040087,0x80a0001211204a8a,0x80a0000c15040087\n"
".quad 0x80a0000e19041147,0x8020400811041147,0x8030810a150402c7,0x8030810c196c4107\n"
".quad 0x80a00008116c4107,0x80d0060a15041147,0x8030810811040047,0x80d00508116c4107\n"
".quad 0x80a0000811040047,0x802000060d2c0147,0xca307c03fd040107,0x00a005b0036c00c7\n"
".quad 0x801005b003000000,0x803000cc11000002,0x8030020811042007,0x802000c811c41007\n"
".quad 0x80d00e0811042107,0x803008081980c007,0x80a0001015e41007,0x80a0001819040087\n"
".quad 0x18204c8a14040087,0x80a0001211204a8c,0x80a0000a15040087,0x80a0000c19041147\n"
".quad 0x8020400811041147,0x8030810a150402c7,0x8030810c196c4107,0x80a00008116c4107\n"
".quad 0x80d0060a15041147,0x8030810811040047,0x80d00508116c4107,0x80a0000811040047\n"
".quad 0x802000060d2c0147,0x02f0000001040107,0x00a0074003e00000,0x0320018211000000\n"
".quad 0xc83004cffd000000,0x80100740036c20c7,0x802000cc01000002,0x8030020001042007\n"
".quad 0x802000c801c41007,0x80d00e0001042007,0x803008001580c007,0x80a0000011e41007\n"
".quad 0x80a0001415040087,0x14204c8810040087,0x80a0000201204a8a,0x80a0000811040087\n"
".quad 0x80a0000a15041147,0x8020400001041147,0x80308108110402c7,0x8030810a156c4107\n"
".quad 0x80a00000016c4107,0x80d0050811041147,0x8030810001040047,0x80d00400016c4107\n"
".quad 0x80a0000001040047,0x802000060d2c0147,0xca307c07fd040007,0x80300000036c0087\n"
".quad 0x80a0000409000002,0x80a0000211440147,0x041100f200440147,0x80e002de011100f6\n"
".quad 0x80e004de15002007,0x80e002de05002047,0x80e004de19042007,0x1cb041000c042147\n"
".quad 0x80e002de09b0460a,0x80e004de110820c7,0x0cb14172040821c7,0x08b0020204b14676\n"
".quad 0x08b1017404b00406,0x34b0010038b10278,0x80d0009805b0020a,0x0cb0401c00200007\n"
".quad 0xc8a40001fdb0451a,0x20b04002240c2187,0x00100b0003b04304,0x80e0821a01000001\n"
".quad 0x43e0401a01084347,0x08c00d1a0c046000,0x80e0000011b0401a,0x80c0081a050800c7\n"
".quad 0x80e0000411000007,0x80e0081a1d000107,0x80e0821c05000047,0x80c0091c19084387\n"
".quad 0x80e0000415000007,0x80e00d1a11000107,0x80e0821c010001c7,0x80e0091c45084047\n"
".quad 0x48c00e1c40000187,0x80b0001c19b04308,0x80e00e1c05080007,0x80e000004d000447\n"
".quad 0x48b0520e1c080407,0x80b0000251b05208,0x80e0000c4d080407,0x54b052060c0004c7\n"
".quad 0x80e0000c49b05402,0x40b05422440004c7,0x80e0020401b05520,0x80b0000e09000147\n"
".quad 0x80e0060c0d0000c7,0x00b0102214000487,0x80b0000609b00200,0x80e0081001000147\n"
".quad 0x80e009120d000007,0x4cb0000840000087,0x04b0442008b00302,0x48b0420044b04126\n"
".quad 0x041100fa00b04106,0x801000f8111100fc,0x801000f8150403c7,0x081000900c0603c7\n"
".quad 0x181000921c10029a,0x80100ba00310029c,0x801000f849000007,0x801000f84d0403c7\n"
".quad 0x801000f8450603c7,0x801000f8410403c7,0x801000f81d0603c7,0x801000f8190403c7\n"
".quad 0x801000f80d0603c7,0x801000f8090403c7,0x1010009a040603c7,0x1410009c00100290\n"
".quad 0xc83083d1fd100292,0xff213ff0356c6087,0x801011d0030fffff,0x24b0102620000002\n"
".quad 0x24b0491038b05310,0x24b04e2638b04920,0x24b0121224b00e12,0x20b0091038b01112\n"
".quad 0x20b0481220b0481c,0xc8b08411fdb0081c,0x00a011c003604047,0x001011c003000000\n"
".quad 0x80e0820c25000001,0x80e0820421084187,0x43e0400c25084087,0x43e0400421046000\n"
".quad 0x004011c003046000,0x38b0069258000000,0x80c0070451b00290,0x80e0030c55000007\n"
".quad 0x80e0020c51000507,0x80c0020c5d000547,0x80e0020c19000007,0x80e0091009040507\n"
".quad 0x80e0091c090805c7,0x18b0462a24000087,0x80b0002e19b04628,0x80e0082c09080187\n"
".quad 0x80e00e2c21000087,0x08b0061208000087,0x80e007060db00804,0x08b0032818000087\n"
".quad 0x20b046041cb0060c,0x1cb0540c24b04704,0x20b0480c18b0470c,0x0cb0060e0cb04906\n"
".quad 0x24b008061cb00806,0x0cb0502618b00704,0x20b0530c38b00112,0x54b04e0c50b04906\n"
".quad 0x4cb0480638b00e20,0x24b0421240b05426,0x20b0480208b04e12,0x08b0500e1cb05526\n"
".quad 0x08b0121020b00904,0x20b0511024b00704,0x08b0090c38b00404,0x0cb0001c1cb00806\n"
".quad 0x0cb04e0e40b04304,0x44b0500e20b04310,0x38b0461c4cc00304,0x80e0820421b0481c\n"
".quad 0x80e0030419084087,0x40b0500048000447,0x43e0400421c00204,0x80e0020445046000\n"
".quad 0x24b053124c000187,0x80e0081049b0121c,0x38b0502250080407,0x54b0131224b04804\n"
".quad 0x80e00e1049b05422,0x4cb0090a24000487,0x80b0002051b0540c,0x80e00e1041080547\n"
".quad 0x48b0090e18000487,0x80e00e1c41b01426,0x40b0470c1c000407,0x80b000121db01220\n"
".quad 0x80e00306250801c7,0x40c0070c48000407,0x80e0070c51b00922,0x44c0060c4c000487\n"
".quad 0x80e0060c49b05120,0x24b0511244000507,0x24b0492850b05324,0x50b0492624b04924\n"
".quad 0x80e0820c25b00928,0x43e0400c25084187,0x80e009124d046000,0x80b0000c590804c7\n"
".quad 0x80e016124d080247,0x80e016124d0004c7,0x80e0162c4d0004c7,0x80b000264d0004c7\n"
".quad 0x80e0070e51000507,0x48b014244c0004c7,0x50b0522848b05226,0x5cb014a654b01320\n"
".quad 0x5cb0552054b05528,0x54b0172a54b05726,0x54b015225cb01524,0x50b0542a50b01728\n"
".quad 0xc021001a35b0542e,0x0050000003044147,0x80b0002851000001,0xc8b08429fd000547\n"
".quad 0x80100cc003604047,0x8050000003000002,0x02f0000001000007,0x80307c1a05e00000\n"
".quad 0x802040d0016c0107,0x80d0010001042347,0xc8307c01fd040007,0x00a01370036c0087\n"
".quad 0x8010134003000000,0x80d0008005000002,0x802000e401200007,0x80a4000009042007\n"
".quad 0x80a4000219002087,0x80a400041d002087,0x1040020208002087,0x8040070215400602\n"
".quad 0x8030100409000007,0x8030100811c41007,0x8030100a15c41007,0x8060020005c41007\n"
".quad 0x8060060009000087,0x806007000d000107,0x80a0000201000147,0x80a00004150400c7\n"
".quad 0x80a00006190400c7,0x80101370030400c7,0x801000f819000007,0x801000f8150403c7\n"
".quad 0x801000f8010603c7,0x82100022050403c7,0x804019040d4400c7,0x802100e209000007\n"
".quad 0x80601806110460c7,0x80301f040d0000c7,0x8030100811ec1007,0x80d083060dc41007\n"
".quad 0x8060180411044007,0x202002860c000107,0x8020000801401504,0x803001061d040007\n"
".quad 0x8060140611ec1007,0x001002840c000207,0x803010081120008e,0x002015a003c41007\n"
".quad 0x8040170421000000,0x806014040d000007,0x8010000011000107,0x80601606210403c7\n"
".quad 0x0c20058600000207,0x8030101015100284,0x8020000e01c41007,0x8060160405040007\n"
".quad 0x002015a003000147,0x042006820c000000,0x80a000080d100080,0x8020000e010000c7\n"
".quad 0x80300804090400c7,0x801000040dc01007,0x002015a0030403c7,0x80d0020609000000\n"
".quad 0x80d00e1e05000047,0x0320029e05a04007,0x80d00e0201000000,0x8030000003a00007\n"
".quad 0x80a0000621000007,0x80a0001025041147,0x80a0000031440047,0x8090001235041147\n"
".quad 0x80a0001825000007,0xff203e9a35440647,0xc0c00d12250fffff,0x80a00012250000c7\n"
".quad 0x8040132039840647,0x8060122239000007,0x8030101c39000387,0x8060122039c41007\n"
".quad 0x8020401839000387,0x80a0001c39040387,0xc0c00d1c35440647,0x80a0001a350000c7\n"
".quad 0x8020001225840647,0x8040102635040347,0x8060112435000007,0x8030101a35000347\n"
".quad 0x8060102435c41007,0x8030001a31000347,0x80300c1021040307,0x80d00006016400c7\n"
".quad 0x80301f0001040087,0x8030001025e41007,0x80a0000021040247,0x80d00910212c0147\n"
".quad 0xc8307c07fd040087,0x80200000016c0147,0x00d0030001040207,0x80300000030402c5\n"
".quad 0x01f0000001000007,0x0a000003ffe00000,0x0146000400000000,0xff40800000000000\n"
".quad 0x00003c0b04ffffff,0x0c00000008000000,0x1400000010000000,0x1c00000018000000\n"
".quad 0x2400000020000000,0x2c00000028000000,0x3400000030000000,0x3c00000038000000\n"
".quad 0x04003d1803000000,0x0effffffff000c17,0x040007f000003c00,0x0dffffffff000c17\n"
".quad 0x040013f000003800,0x0cffffffff000c17,0x040013f000003400,0x0bffffffff000c17\n"
".quad 0x040013f000003000,0x0affffffff000c17,0x040013f000002c00,0x09ffffffff000c17\n"
".quad 0x040013f000002800,0x08ffffffff000c17,0x040013f000002400,0x07ffffffff000c17\n"
".quad 0x040013f000002000,0x06ffffffff000c17,0x040013f000001c00,0x05ffffffff000c17\n"
".quad 0x040013f000001800,0x04ffffffff000c17,0x040013f000001400,0x03ffffffff000c17\n"
".quad 0x040013f000001000,0x02ffffffff000c17,0x040013f000000c00,0x01ffffffff000c17\n"
".quad 0x040013f000000800,0x00ffffffff000c17,0x040023f000000000,0x200022011000080d\n"
".quad 0x80d0800205000000,0x8010000409004007,0x80a000020d400047,0x8010000205040007\n"
".quad 0x80a0000009400047,0x8060024e1d040007,0x8060014c210020c7,0xc83007cffd002087\n"
".quad 0xc83008cdfd6c2107,0x00300000036c2102,0x80d0008805000001,0x80a0001009200007\n"
".quad 0x8010001201440147,0x80a0000e114400c7,0x8010001405440147,0xc8a40001fd4400c7\n"
".quad 0x80e002da0d0c2187,0x80e004da11002007,0x8010001001002047,0x00100180034400c7\n"
".quad 0x081100f604000001,0x28c00408241100f8,0x1810028814c00306,0x801001d003100086\n"
".quad 0x801000f829000007,0x801000f8250603c7,0x801000f8190403c7,0x801000f8150603c7\n"
".quad 0x08100286040403c7,0x00400fb003100088,0xc8307cd1fd000000,0x80100230036c20c7\n"
".quad 0x80b000140d000002,0xc8b08107fd000247,0x0010024003604107,0x8050000003000001\n"
".quad 0x10c0050c0c000007,0xff203f800db00306,0x10b04914140fffff,0xc8307c07fdb00404\n"
".quad 0x18b00502146c00c7,0x801002d003c00408,0x28c0050a24000002,0xc8b08115fdb00612\n"
".quad 0x001002f003604107,0x8010000601000001,0x80500000030603c7,0x10c0040a0c000007\n"
".quad 0xff203e800db00306,0x10b04612140fffff,0xc8307c07fdb00404,0x18b00502146c00c7\n"
".quad 0x8010038003c00408,0x28c0050a24000002,0xc8b08115fdb00612,0x001003a003604107\n"
".quad 0x8010000601000001,0x80500000030403c7,0x10c0040a0c000007,0xff203d800db00306\n"
".quad 0x10b04612140fffff,0xc8307c07fdb00404,0x18b00502146c00c7,0x8010043003c00408\n"
".quad 0x28c0050a24000002,0xc8b08115fdb00612,0x0010045003604107,0x8010000601000001\n"
".quad 0x80500000030603c7,0x10c0040a0c000007,0xff203c800db00306,0x10b04612140fffff\n"
".quad 0xc8307c07fdb00404,0x18b00502146c00c7,0x801004e003c00408,0x28c0050a24000002\n"
".quad 0xc8b08115fdb00612,0x0010050003604107,0x8010000601000001,0x80500000030403c7\n"
".quad 0x10c0040a0c000007,0xff203b800db00306,0x10b04612140fffff,0xc8307c07fdb00404\n"
".quad 0x18b00502146c00c7,0x8010059003c00408,0x28c0050a24000002,0xc8b08115fdb00612\n"
".quad 0x001005b003604107,0x8010000601000001,0x80500000030603c7,0x10c0040a0c000007\n"
".quad 0xff203a800db00306,0x10b04612140fffff,0xc8307c07fdb00404,0x18b00502146c00c7\n"
".quad 0x8010064003c00408,0x28c0050a24000002,0xc8b08115fdb00612,0x0010066003604107\n"
".quad 0x8010000601000001,0x80500000030403c7,0x10c0040a0c000007,0xff2039800db00306\n"
".quad 0x10b04612140fffff,0xc8307c07fdb00404,0x18b00502146c00c7,0x801006f003c00408\n"
".quad 0x28c0050a24000002,0xc8b08115fdb00612,0x0010071003604107,0x8010000601000001\n"
".quad 0x80500000030603c7,0x10c0040a0c000007,0xff2038800db00306,0x10b04612140fffff\n"
".quad 0xc8307c07fdb00404,0x18b00502146c00c7,0x801007a003c00408,0x28c0050a24000002\n"
".quad 0xc8b08115fdb00612,0x001007c003604107,0x8010000601000001,0x80500000030403c7\n"
".quad 0x10c0040a0c000007,0xff2037800db00306,0x10b04612140fffff,0xc8307c07fdb00404\n"
".quad 0x18b00502146c00c7,0x8010085003c00408,0x28c0050a24000002,0xc8b08115fdb00612\n"
".quad 0x0010087003604107,0x8010000601000001,0x80500000030603c7,0x10c0040a0c000007\n"
".quad 0xff2036800db00306,0x10b04612140fffff,0xc8307c07fdb00404,0x18b00502146c00c7\n"
".quad 0x8010090003c00408,0x28c0050a24000002,0xc8b08115fdb00612,0x0010092003604107\n"
".quad 0x8010000601000001,0x80500000030403c7,0x10c0040a0c000007,0xff2035800db00306\n"
".quad 0x10b04612140fffff,0xc8307c07fdb00404,0x18b00502146c00c7,0x801009b003c00408\n"
".quad 0x28c0050a24000002,0xc8b08115fdb00612,0x001009d003604107,0x8010000601000001\n"
".quad 0x80500000030603c7,0x10c0040a0c000007,0xff2034800db00306,0x10b04612140fffff\n"
".quad 0xc8307c07fdb00404,0x18b00502146c00c7,0x80100a6003c00408,0x28c0050a24000002\n"
".quad 0xc8b08115fdb00612,0x00100a8003604107,0x8010000601000001,0x80500000030403c7\n"
".quad 0x10c0040a0c000007,0xff2033800db00306,0x10b04612140fffff,0xc8307c07fdb00404\n"
".quad 0x18b00502146c00c7,0x80100b1003c00408,0x28c0050a24000002,0xc8b08115fdb00612\n"
".quad 0x00100b3003604107,0x8010000601000001,0x80500000030603c7,0x10c0040a0c000007\n"
".quad 0xff2032800db00306,0x10b04612140fffff,0xc8307c07fdb00404,0x18b00502146c00c7\n"
".quad 0x80100bc003c00408,0x28c0050a24000002,0xc8b08115fdb00612,0x00100be003604107\n"
".quad 0x8010000601000001,0x80500000030403c7,0x10c0040a0c000007,0xff2031800db00306\n"
".quad 0x10b04612140fffff,0xc8307c07fdb00404,0x18b00502146c00c7,0x80100c7003c00408\n"
".quad 0x28c0050a24000002,0xc8b08115fdb00612,0x00100c9003604107,0x8010000601000001\n"
".quad 0x80500000030603c7,0x10c0040a0c000007,0xff2030800db00306,0x10b04612140fffff\n"
".quad 0xc8307c07fdb00404,0x18b00502146c00c7,0x80100d2003c00408,0x28c0050a24000002\n"
".quad 0xc8b08115fdb00612,0x00100d4003604107,0x8010000601000001,0x80500000030403c7\n"
".quad 0x10c0040a0c000007,0xff202f800db00306,0x10b04612140fffff,0xc8307c07fdb00404\n"
".quad 0x18b00502146c00c7,0x80100dd003c00408,0x28c0050a24000002,0xc8b08115fdb00612\n"
".quad 0x00100df003604107,0x8010000601000001,0x80500000030603c7,0x10c0040a0c000007\n"
".quad 0xff202e800db00306,0x10b04612140fffff,0xc8307c07fdb00404,0x18b00502146c00c7\n"
".quad 0x80100e8003c00408,0x28c0050a24000002,0xc8b08115fdb00612,0x00100ea003604107\n"
".quad 0x8010000601000001,0x80500000030403c7,0x80c0040a0d000007,0xff202d8001000007\n"
".quad 0x80b000060d0fffff,0xd0307c00150000c7,0x0cb04612106c00c7,0xc8a0000bfdb00304\n"
".quad 0x14b00402100c0147,0x80100f5003c00306,0x24c0040818000012,0xd8b08113fdb0050c\n"
".quad 0x00100f6003604107,0x8050000003000011,0x10c003080c000007,0x18b003060cb0450c\n"
".quad 0x28b0030414b00402,0x80c0050a25c0060c,0x801001f003000007,0x80307c0005000007\n"
".quad 0x802040d0016c0107,0x80d0010001042007,0xc8307c01fd040007,0x00a01150036c0087\n"
".quad 0x8010112003000000,0x80d0007005000002,0x802000e001200007,0x80a4000009042007\n"
".quad 0x80a4000219002087,0x80a400041d002087,0x1040020208002087,0x8040070215400602\n"
".quad 0x8030100409000007,0x8030100811c41007,0x8030100a15c41007,0x8060020005c41007\n"
".quad 0x8060060009000087,0x8060070001000107,0x80a000020d000147,0x80a00004150400c7\n"
".quad 0x80a00000110400c7,0x80101150030400c7,0x801000f811000007,0x801000f8150603c7\n"
".quad 0x801000f80d0403c7,0x8210000c010603c7,0x80400f00054400c7,0x80600e0205000007\n"
".quad 0x8030100205000047,0x80600e0001c41007,0x8020000001000047,0x8030020001040207\n"
".quad 0xc8307cdffdc41007,0x802000c81d6c2147,0x8010128003042007,0x0310000005000002\n"
".quad 0x001000100c000000,0x8010000c09100214,0x80d08200090003c7,0x80d0820201044007\n"
".quad 0x8030080405044007,0x80d0010001c41007,0x80d00e0e01040047,0x8030000003a0c007\n"
".quad 0x80d00e0e19000007,0x8010001e0580c007,0x80a00018494400c7,0x032101fe09000087\n"
".quad 0x8030080c01000000,0x8040120629e41007,0x80301f0421000007,0x80a0000001ec1007\n"
".quad 0x8030101429000087,0x80d0831021c41007,0x804000062d044007,0x8060120425000007\n"
".quad 0x8020001021000287,0x8030101629040087,0x8020001225c41007,0x80300110210400c7\n"
".quad 0x8060000429ec1007,0x001002840c000287,0x8020001439200990,0x002014e003040147\n"
".quad 0x0c10008014000000,0x8020001001100284,0x80a0000a29040387,0x002014e0030000c7\n"
".quad 0x80a0001a19000000,0x8040060619000087,0x8030100c19000007,0x8060060405c41007\n"
".quad 0x042004820c000187,0x8020001001100080,0x80300804090400c7,0x801000040dc01007\n"
".quad 0x002014e0030403c7,0x80d0021409000000,0x80d00e0e05000047,0x0320028e05a04007\n"
".quad 0x80d00e0201000000,0x8030000003a00007,0x80a0000625000007,0x80a0001229041147\n"
".quad 0x80a000002d440047,0x8090001431041147,0x80a0001629000007,0xff203e9831440647\n"
".quad 0xc0c00c14290fffff,0x80a00014290000c7,0x8040152435840647,0x8060142635000007\n"
".quad 0x8030101a35000347,0x8060142435c41007,0x8020401635000347,0x80a0001a35040347\n"
".quad 0xc0c00c1a31440647,0x80a00018310000c7,0x8020001429840647,0x8040122a31040307\n"
".quad 0x8060132831000007,0x8030101831000307,0x8060122831c41007,0x803000182d000307\n"
".quad 0x80300b12250402c7,0x80d00006016400c7,0x80301f0001040087,0x8030001229e41007\n"
".quad 0x80a0000025040287,0x80d00a12252c0147,0xc8307c07fd040087,0x80200000016c0147\n"
".quad 0x00d0030001040247,0x80300000030402c5,0x01f0000001000007,0x00000003ffe00000\n"
".quad 0x0100ff00ff408000,0x0000340b04000000,0x0c00000008000000,0x1400000010000000\n"
".quad 0x1c00000018000000,0x2400000020000000,0x2c00000028000000,0x3400000030000000\n"
".quad 0x0400351803000000,0x0cffffffff000c17,0x040007f000003400,0x0bffffffff000c17\n"
".quad 0x040013f000003000,0x0affffffff000c17,0x040013f000002c00,0x09ffffffff000c17\n"
".quad 0x040013f000002800,0x08ffffffff000c17,0x040013f000002400,0x07ffffffff000c17\n"
".quad 0x040013f000002000,0x06ffffffff000c17,0x040013f000001c00,0x05ffffffff000c17\n"
".quad 0x040013f000001800,0x04ffffffff000c17,0x040013f000001400,0x03ffffffff000c17\n"
".quad 0x040013f000001000,0x02ffffffff000c17,0x040013f000000c00,0x01ffffffff000c17\n"
".quad 0x040013f000000800,0x00ffffffff000c17,0x040023f000000000,0x200021010800080d\n"
".quad 0x80d0800205000000,0x8010000409004007,0x80a000020d400047,0x8010000205040007\n"
".quad 0x80a0000009400047,0x8060024e29040007,0x8060014c2d0020c7,0xc8300acffd002087\n"
".quad 0xc8300bcdfd6c2107,0x00300000036c2102,0x80d000b805000001,0x80a0001621200007\n"
".quad 0x8010002409444107,0x801000260d4400c7,0x141100f4104400c7,0x80a00014191100f6\n"
".quad 0x041100f800444107,0xc8a40001fd1100fa,0x80e00210210c2187,0x80e0060419400107\n"
".quad 0x8010001049400007,0x001001e0034400c7,0x0c1100fc08000001,0x80100020111100fe\n"
".quad 0x80100022154400c7,0x80e0060c394400c7,0x80e0081041800007,0x0410028c00800007\n"
".quad 0x341002903010008e,0x8010025003100092,0x0310008001000007,0x0310008005000000\n"
".quad 0x4410028040000000,0x3c10028038100082,0x3410028030100082,0x0c10029008100082\n"
".quad 0x1410028c10100092,0x004016900310008e,0xc8307cd1fd000000,0x801002d0036c20c7\n"
".quad 0x80e0002019000002,0x0310008021600387,0x0310008025000000,0xc8e0080dfd040100\n"
".quad 0x001002f003e00107,0x801000244d000001,0x80500000030603c7,0x80e0001801000007\n"
".quad 0x80e0000001800007,0xff203fa44d600007,0x80e00020190fffff,0x80e0000801680387\n"
".quad 0xc8307c27fd600007,0x80e00004196c00c7,0x80e0000021600187,0x801003e003800007\n"
".quad 0x80e0060c31000002,0x0310008041800007,0x0310008045000000,0x80e0001839040100\n"
".quad 0xc8e0101dfd600207,0x001003f003e00107,0x8050000003000001,0x80e0000c01000007\n"
".quad 0x80e0000001800007,0xff203ea44d600007,0x80e00018190fffff,0x80e0000801680207\n"
".quad 0xc8307c27fd600007,0x80e00004196c00c7,0x80e0000021600187,0x801004e003800007\n"
".quad 0x80e0060c31000002,0x0310008041800007,0x0310008045000000,0x80e0001839040100\n"
".quad 0xc8e0101dfd600207,0x001004f003e00107,0x8050000003000001,0x80e0000c01000007\n"
".quad 0x80e0000001800007,0xff203da44d600007,0x80e00018190fffff,0x80e0000801680207\n"
".quad 0xc8307c27fd600007,0x80e00004196c00c7,0x80e0000021600187,0x801005e003800007\n"
".quad 0x80e0060c31000002,0x0310008041800007,0x0310008045000000,0x80e0001839040100\n"
".quad 0xc8e0101dfd600207,0x001005f003e00107,0x8050000003000001,0x80e0000c01000007\n"
".quad 0x80e0000001800007,0xff203ca44d600007,0x80e00018190fffff,0x80e0000801680207\n"
".quad 0xc8307c27fd600007,0x80e00004196c00c7,0x80e0000021600187,0x801006e003800007\n"
".quad 0x80e0060c31000002,0x0310008041800007,0x0310008045000000,0x80e0001839040100\n"
".quad 0xc8e0101dfd600207,0x001006f003e00107,0x8050000003000001,0x80e0000c01000007\n"
".quad 0x80e0000001800007,0xff203ba44d600007,0x80e00018190fffff,0x80e0000801680207\n"
".quad 0xc8307c27fd600007,0x80e00004196c00c7,0x80e0000021600187,0x801007e003800007\n"
".quad 0x80e0060c31000002,0x0310008041800007,0x0310008045000000,0x80e0001839040100\n"
".quad 0xc8e0101dfd600207,0x001007f003e00107,0x8050000003000001,0x80e0000c01000007\n"
".quad 0x80e0000001800007,0xff203aa44d600007,0x80e00018190fffff,0x80e0000801680207\n"
".quad 0xc8307c27fd600007,0x80e00004196c00c7,0x80e0000021600187,0x801008e003800007\n"
".quad 0x80e0060c31000002,0x0310008041800007,0x0310008045000000,0x80e0001839040100\n"
".quad 0xc8e0101dfd600207,0x001008f003e00107,0x8050000003000001,0x80e0000c01000007\n"
".quad 0x80e0000001800007,0xff2039a44d600007,0x80e00018190fffff,0x80e0000801680207\n"
".quad 0xc8307c27fd600007,0x80e00004196c00c7,0x80e0000021600187,0x801009e003800007\n"
".quad 0x80e0060c31000002,0x0310008041800007,0x0310008045000000,0x80e0001839040100\n"
".quad 0xc8e0101dfd600207,0x001009f003e00107,0x8050000003000001,0x80e0000c01000007\n"
".quad 0x80e0000001800007,0xff2038a44d600007,0x80e00018190fffff,0x80e0000801680207\n"
".quad 0xc8307c27fd600007,0x80e00004196c00c7,0x80e0000021600187,0x80100ae003800007\n"
".quad 0x80e0060c31000002,0x0310008041800007,0x0310008045000000,0x80e0001839040100\n"
".quad 0xc8e0101dfd600207,0x00100af003e00107,0x8050000003000001,0x80e0000c01000007\n"
".quad 0x80e0000001800007,0xff2037a44d600007,0x80e00018190fffff,0x80e0000801680207\n"
".quad 0xc8307c27fd600007,0x80e00004196c00c7,0x80e0000021600187,0x80100be003800007\n"
".quad 0x80e0060c31000002,0x0310008041800007,0x0310008045000000,0x80e0001839040100\n"
".quad 0xc8e0101dfd600207,0x00100bf003e00107,0x8050000003000001,0x80e0000c01000007\n"
".quad 0x80e0000001800007,0xff2036a44d600007,0x80e00018190fffff,0x80e0000801680207\n"
".quad 0xc8307c27fd600007,0x80e00004196c00c7,0x80e0000021600187,0x80100ce003800007\n"
".quad 0x80e0060c31000002,0x0310008041800007,0x0310008045000000,0x80e0001839040100\n"
".quad 0xc8e0101dfd600207,0x00100cf003e00107,0x8050000003000001,0x80e0000c01000007\n"
".quad 0x80e0000001800007,0xff2035a44d600007,0x80e00018190fffff,0x80e0000801680207\n"
".quad 0xc8307c27fd600007,0x80e00004196c00c7,0x80e0000021600187,0x80100de003800007\n"
".quad 0x80e0060c31000002,0x0310008041800007,0x0310008045000000,0x80e0001839040100\n"
".quad 0xc8e0101dfd600207,0x00100df003e00107,0x8050000003000001,0x80e0000c01000007\n"
".quad 0x80e0000001800007,0xff2034a44d600007,0x80e00018190fffff,0x80e0000801680207\n"
".quad 0xc8307c27fd600007,0x80e00004196c00c7,0x80e0000021600187,0x80100ee003800007\n"
".quad 0x80e0060c31000002,0x0310008041800007,0x0310008045000000,0x80e0001839040100\n"
".quad 0xc8e0101dfd600207,0x00100ef003e00107,0x8050000003000001,0x80e0000c01000007\n"
".quad 0x80e0000001800007,0xff2033a44d600007,0x80e00018190fffff,0x80e0000801680207\n"
".quad 0xc8307c27fd600007,0x80e00004196c00c7,0x80e0000021600187,0x80100fe003800007\n"
".quad 0x80e0060c31000002,0x0310008041800007,0x0310008045000000,0x80e0001839040100\n"
".quad 0xc8e0101dfd600207,0x00100ff003e00107,0x8050000003000001,0x80e0000c01000007\n"
".quad 0x80e0000001800007,0xff2032a44d600007,0x80e00018190fffff,0x80e0000801680207\n"
".quad 0xc8307c27fd600007,0x80e00004196c00c7,0x80e0000021600187,0x801010e003800007\n"
".quad 0x80e0060c31000002,0x0310008041800007,0x0310008045000000,0x80e0001839040100\n"
".quad 0xc8e0101dfd600207,0x001010f003e00107,0x8050000003000001,0x80e0000c01000007\n"
".quad 0x80e0000001800007,0xff2031a44d600007,0x80e00018190fffff,0x80e0000801680207\n"
".quad 0xc8307c27fd600007,0x80e00004196c00c7,0x80e0000021600187,0x801011e003800007\n"
".quad 0x80e0060c31000002,0x0310008041800007,0x0310008045000000,0x80e0001839040100\n"
".quad 0xc8e0101dfd600207,0x001011f003e00107,0x8050000003000001,0x80e0000c01000007\n"
".quad 0x80e0000001800007,0xff2030a44d600007,0x80e00018190fffff,0x80e0000801680207\n"
".quad 0xc8307c27fd600007,0x80e00004196c00c7,0x80e0000021600187,0x801012e003800007\n"
".quad 0x80e0060c31000002,0x0310008041800007,0x0310008045000000,0x80e0001839040100\n"
".quad 0xc8e0101dfd600207,0x001012f003e00107,0x8050000003000001,0x80e0000c01000007\n"
".quad 0x80e0000001800007,0xff202fa44d600007,0x80e00018190fffff,0x80e0000801680207\n"
".quad 0xc8307c27fd600007,0x80e00004196c00c7,0x80e0000021600187,0x801013e003800007\n"
".quad 0x80e0060c31000002,0x0310008041800007,0x0310008045000000,0x80e0001839040100\n"
".quad 0xc8e0101dfd600207,0x001013f003e00107,0x8050000003000001,0x80e0000c01000007\n"
".quad 0x80e0000001800007,0xff202ea44d600007,0x80e00018190fffff,0x80e0000801680207\n"
".quad 0xc8307c27fd600007,0x80e00004196c00c7,0x80e0000021600187,0x801014e003800007\n"
".quad 0x80e0060c31000002,0x0310008041800007,0x0310008045000000,0x80e0001839040100\n"
".quad 0xc8e0101dfd600207,0x001014f003e00107,0x8050000003000001,0x80e0000c01000007\n"
".quad 0xff202da449800007,0x80e00000010fffff,0xd0307c2439600007,0x80e00018196c00c7\n"
".quad 0x80e0000801680207,0xc8a0001dfd600007,0x80e00004190c0147,0x80e0000021600187\n"
".quad 0x801015f003800007,0x80e0060c31000012,0x0310008041800007,0x0310008045000000\n"
".quad 0x80e0001839040100,0xd8e0101dfd600207,0x0010161003e00107,0x801000244d000011\n"
".quad 0x80500000030403c7,0x80e0000c01000007,0x80e0001819800007,0x80e0000001680207\n"
".quad 0x80e0000431600007,0x80e0000801600187,0x80e00c1841600007,0x80e0000039800007\n"
".quad 0x8010027003800007,0x80307c2605000007,0x802040d0016c0107,0x80d00100010424c7\n"
".quad 0xc8307c01fd040007,0x00a01830036c0087,0x8010180003000000,0x80d000a005000002\n"
".quad 0x802000ec01200007,0x80a4000009042007,0x80a4000219002087,0x80a400041d002087\n"
".quad 0x1040020208002087,0x8040070215400602,0x8030100409000007,0x8030100811c41007\n"
".quad 0x8030100a15c41007,0x8060020005c41007,0x8060060009000087,0x8060070001000107\n"
".quad 0x80a000020d000147,0x80a00004190400c7,0x80a00000150400c7,0x80101830030400c7\n"
".quad 0x801000f815000007,0x801000f8190603c7,0x801000f80d0403c7,0x8210000c010603c7\n"
".quad 0x80401500054400c7,0x8060140205000007,0x8030100205000047,0x8060140001c41007\n"
".quad 0x8020000001000047,0x80300200010402c7,0xc8307cebfdc41007,0x802000c81d6c2147\n"
".quad 0x8010196003042007,0x0310000005000002,0x001000140c000000,0x8010000c09100218\n"
".quad 0x80d08100090003c7,0x80d0810201044007,0x8030080405044007,0x80d0010001c41007\n"
".quad 0x80d00e0e01040047,0x8030000003a0c007,0x80d00e0e11000007,0x8010002a0580c007\n"
".quad 0x80a00010414400c7,0x802100ea09000087,0x8040100625046087,0x80301f0401000007\n"
".quad 0x8030101229ec1007,0x80d0820001c41007,0x8030080825044007,0x8060100421e41007\n"
".quad 0x8020000001000287,0x80a0002421040087,0x8020001025000087,0x80300100210400c7\n"
".quad 0x0c40080628ec1007,0x8020001001100284,0x8030101439040247,0x00201bb003c41007\n"
".quad 0x80a0001249000000,0x806008040d000087,0x2810008010000387,0x0c20068600401206\n"
".quad 0x8030101419100284,0x8020001001c41007,0x8060120405040007,0x00201bb003000187\n"
".quad 0x042005820c000000,0x80a000080d100080,0x80200010010000c7,0x80300804090400c7\n"
".quad 0x801000040dc01007,0x00201bb0030403c7,0x80d0020609000000,0x80d00e0e05000047\n"
".quad 0x0320028e05a04007,0x80d00e0201000000,0x8030000003a00007,0x80a0000625000007\n"
".quad 0x80a0001229041147,0x80a000002d440047,0x8090001431041147,0x80a0001629000007\n"
".quad 0xff203e9831440647,0xc0c00c14290fffff,0x80a00014290000c7,0x8040152435840647\n"
".quad 0x8060142635000007,0x8030101a35000347,0x8060142435c41007,0x8020401635000347\n"
".quad 0x80a0001a35040347,0xc0c00c1a31440647,0x80a00018310000c7,0x8020001429840647\n"
".quad 0x8040122a31040307,0x8060132831000007,0x8030101831000307,0x8060122831c41007\n"
".quad 0x803000182d000307,0x80300b12250402c7,0x80d00006016400c7,0x80301f0001040087\n"
".quad 0x8030001229e41007,0x80a0000025040287,0x80d00a12252c0147,0xc8307c07fd040087\n"
".quad 0x80200000016c0147,0x00d0030001040247,0x80300000030402c5,0x01f0000001000007\n"
".quad 0xff000003ffe00000,0x040000000100ff00,0x080000000000340b,0x100000000c000000\n"
".quad 0x2000000018000000,0x3000000028000000,0x4000000038000000,0x4800000044000000\n"
".quad 0x030000004c000000,0xff000c1704004d18,0x00004c000cffffff,0xff000c17040007f0\n"
".quad 0x000048000bffffff,0xff000c17040013f0,0x000044000affffff,0xff000c17040013f0\n"
".quad 0x0000400009ffffff,0xff000c17040013f0,0x0000380008ffffff,0xff000c17040023f0\n"
".quad 0x0000300007ffffff,0xff000c17040023f0,0x0000280006ffffff,0xff000c17040023f0\n"
".quad 0x0000200005ffffff,0xff000c17040023f0,0x0000180004ffffff,0xff000c17040023f0\n"
".quad 0x0000100003ffffff,0xff000c17040013f0,0x00000c0002ffffff,0xff000c17040013f0\n"
".quad 0x0000080001ffffff,0xff000c17040013f0,0x0000000000ffffff,0x0800080d040023f0\n"
".quad 0x0500000020002101,0x0900400780d08002,0x0d40004780100004,0x0504000780a00002\n"
".quad 0x0940004780100002,0x0504000780a00000,0x0d0020c78060024e,0xfd0020878060014c\n"
".quad 0xfd6c2107c83001cf,0x036c2102c83003cd,0x0100000100300000,0x094400c78010000c\n"
".quad 0x0900000780400300,0x0900008780600202,0x01c4100780301004,0x2100008780600200\n"
".quad 0x010400c780200000,0x1dc4100780300210,0x01042007802000c8,0x0980c00780d00e0e\n"
".quad 0xfde4100780300800,0x036c00c7c8307c07,0x1900000000a002d0,0x1104008780a00000\n"
".quad 0x1504008780a00002,0x0304008780a00008,0x01000002801002c0,0x010fffffff203c8e\n"
".quad 0x0980c00780d00e00,0x25e4100780300800,0x0904008780a00000,0x2404008780a00008\n"
".quad 0x0120458428204692,0x0904008780a00002,0x2504114780a00012,0x0104114780a00014\n"
".quad 0x0904010780204000,0x256c410780308104,0x016c410780308112,0x0904114780a00000\n"
".quad 0x0104004780d00904,0x016c410780308100,0x2504004780d00200,0x032c014780a00000\n"
".quad 0x25000007801002d0,0x010603c7801000f8,0x03e0000002f00000,0x0100000000a00440\n"
".quad 0xfd00000003200186,0x036c20c7c83000cd,0x0100000280100440,0x010000000320048e\n"
".quad 0x0980c00780d00e00,0x29e4100780300800,0x0904008780a00000,0x2804008780a00008\n"
".quad 0x012045842c204694,0x0904008780a00002,0x2904114780a00014,0x0104114780a00016\n"
".quad 0x0904010780204000,0x296c410780308104,0x016c410780308114,0x0904114780a00000\n"
".quad 0x0104004780d00a04,0x016c410780308100,0x0104004780d00200,0x252c014780a00000\n"
".quad 0xfd04000780200012,0x036c00c7ca307c03,0x0300000000a005b0,0x01000002801005b0\n"
".quad 0x01042207803000cc,0x01c4100780300200,0x01042007802000c8,0x0980c00780d00e00\n"
".quad 0x29e4100780300800,0x0904008780a00000,0x2804008780a00008,0x012045842c204694\n"
".quad 0x0904008780a00002,0x2904114780a00014,0x0104114780a00016,0x0904010780204000\n"
".quad 0x296c410780308104,0x016c410780308114,0x0904114780a00000,0x0104004780d00a04\n"
".quad 0x016c410780308100,0x0104004780d00200,0x252c014780a00000,0x0104000780200012\n"
".quad 0x03e0000002f00000,0x0100000000a00740,0xfd00000003200182,0x036c20c7c83000cf\n"
".quad 0x0100000280100740,0x01042207802000cc,0x01c4100780300200,0x01042007802000c8\n"
".quad 0x0980c00780d00e00,0x21e4100780300800,0x0904008780a00000,0x2004008780a00008\n"
".quad 0x0120458428204690,0x0904008780a00002,0x2104114780a00010,0x0104114780a00014\n"
".quad 0x0904010780204000,0x216c410780308104,0x016c410780308110,0x0904114780a00000\n"
".quad 0x0104004780d00804,0x016c410780308100,0x0104004780d00200,0x252c014780a00000\n"
".quad 0xfd04000780200012,0x036c0087ca307c13,0x0500000280300000,0x0920000780d00088\n"
".quad 0x2144014780a00006,0x0044014780a00002,0xfd1100f4041100f2,0x0d0c2187c8a40001\n"
".quad 0x2100200780e002da,0x0100204780e008da,0x034400c780100010,0x0400000100100830\n"
".quad 0x2c1100f8081100f6,0x24c0030630c00810,0x0310028628100090,0x3100000780100880\n"
".quad 0x2d0403c7801000f8,0x290603c7801000f8,0x250403c7801000f8,0x040603c7801000f8\n"
".quad 0x0310029008100086,0xfd00000000401560,0x036c20c7c8307cd1,0x0d000002801008e0\n"
".quad 0xfd0002c780b00018,0x03604107c8b08207,0x0d00000100100900,0x030403c780100000\n"
".quad 0x0c00000780500000,0x0db0030620c00914,0x240fffffff203f80,0xfdb0080420b04b18\n"
".quad 0x246c00c7c8307c07,0x03c0081028b00902,0x2c00000280100990,0xfdb00a1630c00912\n"
".quad 0x03604107c8b08219,0x03000001001009a0,0x0c00000780500000,0x0db0030620c00812\n"
".quad 0x240fffffff203e80,0xfdb0080420b04a16,0x246c00c7c8307c07,0x03c0081028b00902\n"
".quad 0x2c00000280100a30,0xfdb00a1630c00912,0x03604107c8b08219,0x0300000100100a40\n"
".quad 0x0c00000780500000,0x0db0030620c00812,0x240fffffff203d80,0xfdb0080420b04a16\n"
".quad 0x246c00c7c8307c07,0x03c0081028b00902,0x2c00000280100ad0,0xfdb00a1630c00912\n"
".quad 0x03604107c8b08219,0x0300000100100ae0,0x0c00000780500000,0x0db0030620c00812\n"
".quad 0x240fffffff203c80,0xfdb0080420b04a16,0x246c00c7c8307c07,0x03c0081028b00902\n"
".quad 0x2c00000280100b70,0xfdb00a1630c00912,0x03604107c8b08219,0x0300000100100b80\n"
".quad 0x0c00000780500000,0x0db0030620c00812,0x240fffffff203b80,0xfdb0080420b04a16\n"
".quad 0x246c00c7c8307c07,0x03c0081028b00902,0x2c00000280100c10,0xfdb00a1630c00912\n"
".quad 0x03604107c8b08219,0x0300000100100c20,0x0c00000780500000,0x0db0030620c00812\n"
".quad 0x240fffffff203a80,0xfdb0080420b04a16,0x246c00c7c8307c07,0x03c0081028b00902\n"
".quad 0x2c00000280100cb0,0xfdb00a1630c00912,0x03604107c8b08219,0x0300000100100cc0\n"
".quad 0x0c00000780500000,0x0db0030620c00812,0x240fffffff203980,0xfdb0080420b04a16\n"
".quad 0x246c00c7c8307c07,0x03c0081028b00902,0x2c00000280100d50,0xfdb00a1630c00912\n"
".quad 0x03604107c8b08219,0x0300000100100d60,0x0c00000780500000,0x0db0030620c00812\n"
".quad 0x240fffffff203880,0xfdb0080420b04a16,0x246c00c7c8307c07,0x03c0081028b00902\n"
".quad 0x2c00000280100df0,0xfdb00a1630c00912,0x03604107c8b08219,0x0300000100100e00\n"
".quad 0x0c00000780500000,0x0db0030620c00812,0x240fffffff203780,0xfdb0080420b04a16\n"
".quad 0x246c00c7c8307c07,0x03c0081028b00902,0x2c00000280100e90,0xfdb00a1630c00912\n"
".quad 0x03604107c8b08219,0x0300000100100ea0,0x0c00000780500000,0x0db0030620c00812\n"
".quad 0x240fffffff203680,0xfdb0080420b04a16,0x246c00c7c8307c07,0x03c0081028b00902\n"
".quad 0x2c00000280100f30,0xfdb00a1630c00912,0x03604107c8b08219,0x0300000100100f40\n"
".quad 0x0c00000780500000,0x0db0030620c00812,0x240fffffff203580,0xfdb0080420b04a16\n"
".quad 0x246c00c7c8307c07,0x03c0081028b00902,0x2c00000280100fd0,0xfdb00a1630c00912\n"
".quad 0x03604107c8b08219,0x0300000100100fe0,0x0c00000780500000,0x0db0030620c00812\n"
".quad 0x240fffffff203480,0xfdb0080420b04a16,0x246c00c7c8307c07,0x03c0081028b00902\n"
".quad 0x2c00000280101070,0xfdb00a1630c00912,0x03604107c8b08219,0x0300000100101080\n"
".quad 0x0c00000780500000,0x0db0030620c00812,0x240fffffff203380,0xfdb0080420b04a16\n"
".quad 0x246c00c7c8307c07,0x03c0081028b00902,0x2c00000280101110,0xfdb00a1630c00912\n"
".quad 0x03604107c8b08219,0x0300000100101120,0x0c00000780500000,0x0db0030620c00812\n"
".quad 0x240fffffff203280,0xfdb0080420b04a16,0x246c00c7c8307c07,0x03c0081028b00902\n"
".quad 0x2c000002801011b0,0xfdb00a1630c00912,0x03604107c8b08219,0x03000001001011c0\n"
".quad 0x0c00000780500000,0x0db0030620c00812,0x240fffffff203180,0xfdb0080420b04a16\n"
".quad 0x246c00c7c8307c07,0x03c0081028b00902,0x2c00000280101250,0xfdb00a1630c00912\n"
".quad 0x03604107c8b08219,0x0300000100101260,0x0c00000780500000,0x0db0030620c00812\n"
".quad 0x240fffffff203080,0xfdb0080420b04a16,0x246c00c7c8307c07,0x03c0081028b00902\n"
".quad 0x2c000002801012f0,0xfdb00a1630c00912,0x03604107c8b08219,0x0300000100101300\n"
".quad 0x0c00000780500000,0x0db0030620c00812,0x240fffffff202f80,0xfdb0080420b04a16\n"
".quad 0x246c00c7c8307c07,0x03c0081028b00902,0x2c00000280101390,0xfdb00a1630c00912\n"
".quad 0x03604107c8b08219,0x03000001001013a0,0x0c00000780500000,0x0db0030620c00812\n"
".quad 0x240fffffff202e80,0xfdb0080420b04a16,0x246c00c7c8307c07,0x03c0081028b00902\n"
".quad 0x2c00000280101430,0xfdb00a1630c00912,0x03604107c8b08219,0x0300000100101440\n"
".quad 0x0d00000780500000,0x0100000780c00812,0x0d0fffffff202d80,0x250000c780b00006\n"
".quad 0x206c00c7d0307c00,0xfdb003040cb04a16,0x200c0147c8a00013,0x03c0030624b00802\n"
".quad 0x28000012801014f0,0xfdb009142cc00810,0x03604107d8b08217,0x0d00001100101510\n"
".quad 0x030603c780100000,0x0c00000780500000,0x0cb0491420c00310,0x24b0080228b00306\n"
".quad 0x2dc00a1430b00304,0x0300000780c00912,0x05000007801008a0,0x016c010780307c06\n"
".quad 0x010420c7802040d0,0xfd04000780d00100,0x036c0087c8307c01,0x0300000000a01700\n"
".quad 0x05000002801016d0,0x0120000780d00070,0x09042007802000e0,0x1900208780a40000\n"
".quad 0x1d00208780a40002,0x0800208780a40004,0x2540060220400202,0x0900000780400702\n"
".quad 0x21c4100780301004,0x25c4100780301010,0x05c4100780301012,0x0900008780600200\n"
".quad 0x0d00020780600600,0x0100024780600700,0x250400c780a00002,0x210400c780a00004\n"
".quad 0x030400c780a00006,0x2100000780101700,0x250403c7801000f8,0x010603c7801000f8\n"
".quad 0x050403c7801000f8,0x0d4400c78210001e,0x0900000780400d04,0x29000000032101fe\n"
".quad 0x0d0000c780600c06,0x2dec100780301f04,0x2900000780400b04,0x0dc4100780301014\n"
".quad 0x2d04400780d08306,0x190002c780600a06,0x0d00028780600c04,0x2904008780200006\n"
".quad 0x01c4100780301016,0x190400078020000c,0x15ec100780300106,0x0c00028780600a04\n"
".quad 0x3920008c00100284,0x030402478020000a,0x1400000000201940,0x011002840c100080\n"
".quad 0x290403878020000c,0x030000c780a0000a,0x0d00000000201940,0x0d00000780400904\n"
".quad 0x0d0000c780600806,0x05c4100780301006,0x0c0000c780600804,0x0110008004200882\n"
".quad 0x090400c78020000c,0x0dc0100780300804,0x030403c780100004,0x0900000000201940\n"
".quad 0x0500004780d00214,0x05a0400780d00e0e,0x010000000320028e,0x03a0000780d00e02\n"
".quad 0x2500000780300000,0x2904114780a00006,0x2d44004780a00012,0x3104114780a00000\n"
".quad 0x2900000780900014,0x3144064780a00016,0x290fffffff203e98,0x290000c7c0c00c14\n"
".quad 0x3584064780a00014,0x3500000780401524,0x3500034780601426,0x35c410078030101a\n"
".quad 0x3500034780601424,0x3504034780204016,0x3144064780a0001a,0x310000c7c0c00c1a\n"
".quad 0x2984064780a00018,0x3104030780200014,0x310000078040122a,0x3100030780601328\n"
".quad 0x31c4100780301018,0x2d00030780601228,0x250402c780300018,0x016400c780300b12\n"
".quad 0x0104008780d00006,0x29e4100780301f00,0x2504028780300012,0x252c014780a00000\n"
".quad 0xfd04008780d00a12,0x016c0147c8307c07,0x0104024780200000,0x030402c500d00300\n"
".quad 0x0100000780300000,0xffe0000001f00000,0x000000000a000003,0x0400000001408000\n"
".quad 0x080000000000340b,0x100000000c000000,0x1800000014000000,0x200000001c000000\n"
".quad 0x2800000024000000,0x300000002c000000,0x0300000034000000,0xff000c1704003518\n"
".quad 0x000034000cffffff,0xff000c17040007f0,0x000030000bffffff,0xff000c17040013f0\n"
".quad 0x00002c000affffff,0xff000c17040013f0,0x0000280009ffffff,0xff000c17040013f0\n"
".quad 0x0000240008ffffff,0xff000c17040013f0,0x0000200007ffffff,0xff000c17040013f0\n"
".quad 0x00001c0006ffffff,0xff000c17040013f0,0x0000180005ffffff,0xff000c17040013f0\n"
".quad 0x0000140004ffffff,0xff000c17040013f0,0x0000100003ffffff,0xff000c17040013f0\n"
".quad 0x00000c0002ffffff,0xff000c17040013f0,0x0000080001ffffff,0xff000c17040013f0\n"
".quad 0x0000000000ffffff,0x0800080d040023f0,0x0500000020002101,0x0900400780d08002\n"
".quad 0x0d40004780100004,0x0504000780a00002,0x0940004780100002,0x0504000780a00000\n"
".quad 0x090020c78060024e,0xfd0020878060014c,0xfd6c2107c83001cf,0x036c2102c83002cd\n"
".quad 0x0100000100300000,0x0d4400c78010000c,0x0d00000780400300,0x0d0000c780600202\n"
".quad 0x01c4100780301006,0x010000c780600200,0x0d04008780200000,0x2dc4100780300200\n"
".quad 0x0d0420c7802000c8,0x1180c00780d00e16,0xfde4100780300806,0x036c00c7c8307c05\n"
".quad 0x2100000000a002d0,0x2904008780a0000c,0x2504008780a0000e,0x0304008780a00010\n"
".quad 0x0d000002801002c0,0x0d0fffffff203c96,0x1180c00780d00e06,0x15e4100780300806\n"
".quad 0x1104008780a0000c,0x1404008780a00010,0x0d2049881820488a,0x1104008780a0000e\n"
".quad 0x1504114780a0000a,0x0d04114780a0000c,0x1104028780204006,0x156c410780308108\n"
".quad 0x0d6c41078030810a,0x1104114780a00006,0x0d04004780d00508,0x0d6c410780308106\n"
".quad 0x0d04004780d00406,0x032c014780a00006,0x0d000007801002d0,0x010603c7801000f8\n"
".quad 0x03e0000002f00000,0x1100000000a00440,0xfd00000003200184,0x036c20c7c83004cd\n"
".quad 0x1100000280100440,0x1100000003200496,0x1580c00780d00e08,0x19e4100780300808\n"
".quad 0x1504008780a00010,0x1804008780a00014,0x1120498a1c20488c,0x1504008780a00012\n"
".quad 0x1904114780a0000c,0x1104114780a0000e,0x1504028780204008,0x196c41078030810a\n"
".quad 0x116c41078030810c,0x1504114780a00008,0x1104004780d0060a,0x116c410780308108\n"
".quad 0x1104004780d00508,0x0d2c014780a00008,0xfd04010780200006,0x036c00c7ca307c03\n"
".quad 0x0300000000a005b0,0x11000002801005b0,0x11042007803000cc,0x11c4100780300208\n"
".quad 0x11042107802000c8,0x1980c00780d00e08,0x15e4100780300808,0x1904008780a00010\n"
".quad 0x1404008780a00018,0x1120498c1820488a,0x1504008780a00012,0x1904114780a0000a\n"
".quad 0x1104114780a0000c,0x1504028780204008,0x196c41078030810a,0x116c41078030810c\n"
".quad 0x1504114780a00008,0x1104004780d0060a,0x116c410780308108,0x1104004780d00508\n"
".quad 0x0d2c014780a00008,0x0104010780200006,0x03e0000002f00000,0x1100000000a00740\n"
".quad 0xfd00000003200182,0x036c20c7c83004cf,0x0100000280100740,0x01042007802000cc\n"
".quad 0x01c4100780300200,0x01042007802000c8,0x1580c00780d00e00,0x11e4100780300800\n"
".quad 0x1504008780a00000,0x1004008780a00014,0x0120498a14204888,0x1104008780a00002\n"
".quad 0x1504114780a00008,0x0104114780a0000a,0x1104028780204000,0x156c410780308108\n"
".quad 0x016c41078030810a,0x1104114780a00000,0x0104004780d00508,0x016c410780308100\n"
".quad 0x0104004780d00400,0x0d2c014780a00000,0xfd04000780200006,0x036c0087ca307c07\n"
".quad 0x0500000280300000,0x3120000780d000b8,0x0944410780a00004,0x0d4400c780100024\n"
".quad 0x184400c780100026,0x111100f61c1100f4,0x0044410780a00002,0xfd1100fa041100f8\n"
".quad 0x310c2187c8a40001,0x1940018780e00218,0x5140000780e00404,0x034400c780100010\n"
".quad 0x08000001001008a0,0x111100fe0c1100fc,0x154400c780100020,0x414400c780100022\n"
".quad 0x4980000780e0060c,0x0080000780e00c18,0x3810028e0410008c,0x0310029a3c100098\n"
".quad 0x0100000780100910,0x0500000003100080,0x4800000003100080,0x401002824c100080\n"
".quad 0x3810028244100080,0x081002823c100080,0x1010029a0c100098,0x0310028e1410008c\n"
".quad 0xfd00000000401d50,0x036c20c7c8307cd1,0x1900000280100990,0x3160040780e00024\n"
".quad 0x3500000003100080,0xfd04010003100080,0x03e00107c8e00c0d,0x55000001001009b0\n"
".quad 0x030403c780100028,0x0100000780500000,0x0180000780e0001c,0x5560000780e00000\n"
".quad 0x190fffffff203fa8,0x0168040780e00024,0xfd60000780e00008,0x196c00c7c8307c2b\n"
".quad 0x3160018780e00004,0x0380000780e00000,0x3900000280100aa0,0x4980000780e0060c\n"
".quad 0x4d00000003100080,0x4104010003100080,0xfd60030780e0001c,0x03e00107c8e01221\n"
".quad 0x0300000100100ab0,0x0100000780500000,0x0180000780e0000c,0x5560000780e00000\n"
".quad 0x190fffffff203ea8,0x0168030780e0001c,0xfd60000780e00008,0x196c00c7c8307c2b\n"
".quad 0x3160018780e00004,0x0380000780e00000,0x3900000280100ba0,0x4980000780e0060c\n"
".quad 0x4d00000003100080,0x4104010003100080,0xfd60030780e0001c,0x03e00107c8e01221\n"
".quad 0x0300000100100bb0,0x0100000780500000,0x0180000780e0000c,0x5560000780e00000\n"
".quad 0x190fffffff203da8,0x0168030780e0001c,0xfd60000780e00008,0x196c00c7c8307c2b\n"
".quad 0x3160018780e00004,0x0380000780e00000,0x3900000280100ca0,0x4980000780e0060c\n"
".quad 0x4d00000003100080,0x4104010003100080,0xfd60030780e0001c,0x03e00107c8e01221\n"
".quad 0x0300000100100cb0,0x0100000780500000,0x0180000780e0000c,0x5560000780e00000\n"
".quad 0x190fffffff203ca8,0x0168030780e0001c,0xfd60000780e00008,0x196c00c7c8307c2b\n"
".quad 0x3160018780e00004,0x0380000780e00000,0x3900000280100da0,0x4980000780e0060c\n"
".quad 0x4d00000003100080,0x4104010003100080,0xfd60030780e0001c,0x03e00107c8e01221\n"
".quad 0x0300000100100db0,0x0100000780500000,0x0180000780e0000c,0x5560000780e00000\n"
".quad 0x190fffffff203ba8,0x0168030780e0001c,0xfd60000780e00008,0x196c00c7c8307c2b\n"
".quad 0x3160018780e00004,0x0380000780e00000,0x3900000280100ea0,0x4980000780e0060c\n"
".quad 0x4d00000003100080,0x4104010003100080,0xfd60030780e0001c,0x03e00107c8e01221\n"
".quad 0x0300000100100eb0,0x0100000780500000,0x0180000780e0000c,0x5560000780e00000\n"
".quad 0x190fffffff203aa8,0x0168030780e0001c,0xfd60000780e00008,0x196c00c7c8307c2b\n"
".quad 0x3160018780e00004,0x0380000780e00000,0x3900000280100fa0,0x4980000780e0060c\n"
".quad 0x4d00000003100080,0x4104010003100080,0xfd60030780e0001c,0x03e00107c8e01221\n"
".quad 0x0300000100100fb0,0x0100000780500000,0x0180000780e0000c,0x5560000780e00000\n"
".quad 0x190fffffff2039a8,0x0168030780e0001c,0xfd60000780e00008,0x196c00c7c8307c2b\n"
".quad 0x3160018780e00004,0x0380000780e00000,0x39000002801010a0,0x4980000780e0060c\n"
".quad 0x4d00000003100080,0x4104010003100080,0xfd60030780e0001c,0x03e00107c8e01221\n"
".quad 0x03000001001010b0,0x0100000780500000,0x0180000780e0000c,0x5560000780e00000\n"
".quad 0x190fffffff2038a8,0x0168030780e0001c,0xfd60000780e00008,0x196c00c7c8307c2b\n"
".quad 0x3160018780e00004,0x0380000780e00000,0x39000002801011a0,0x4980000780e0060c\n"
".quad 0x4d00000003100080,0x4104010003100080,0xfd60030780e0001c,0x03e00107c8e01221\n"
".quad 0x03000001001011b0,0x0100000780500000,0x0180000780e0000c,0x5560000780e00000\n"
".quad 0x190fffffff2037a8,0x0168030780e0001c,0xfd60000780e00008,0x196c00c7c8307c2b\n"
".quad 0x3160018780e00004,0x0380000780e00000,0x39000002801012a0,0x4980000780e0060c\n"
".quad 0x4d00000003100080,0x4104010003100080,0xfd60030780e0001c,0x03e00107c8e01221\n"
".quad 0x03000001001012b0,0x0100000780500000,0x0180000780e0000c,0x5560000780e00000\n"
".quad 0x190fffffff2036a8,0x0168030780e0001c,0xfd60000780e00008,0x196c00c7c8307c2b\n"
".quad 0x3160018780e00004,0x0380000780e00000,0x39000002801013a0,0x4980000780e0060c\n"
".quad 0x4d00000003100080,0x4104010003100080,0xfd60030780e0001c,0x03e00107c8e01221\n"
".quad 0x03000001001013b0,0x0100000780500000,0x0180000780e0000c,0x5560000780e00000\n"
".quad 0x190fffffff2035a8,0x0168030780e0001c,0xfd60000780e00008,0x196c00c7c8307c2b\n"
".quad 0x3160018780e00004,0x0380000780e00000,0x39000002801014a0,0x4980000780e0060c\n"
".quad 0x4d00000003100080,0x4104010003100080,0xfd60030780e0001c,0x03e00107c8e01221\n"
".quad 0x03000001001014b0,0x0100000780500000,0x0180000780e0000c,0x5560000780e00000\n"
".quad 0x190fffffff2034a8,0x0168030780e0001c,0xfd60000780e00008,0x196c00c7c8307c2b\n"
".quad 0x3160018780e00004,0x0380000780e00000,0x39000002801015a0,0x4980000780e0060c\n"
".quad 0x4d00000003100080,0x4104010003100080,0xfd60030780e0001c,0x03e00107c8e01221\n"
".quad 0x03000001001015b0,0x0100000780500000,0x0180000780e0000c,0x5560000780e00000\n"
".quad 0x190fffffff2033a8,0x0168030780e0001c,0xfd60000780e00008,0x196c00c7c8307c2b\n"
".quad 0x3160018780e00004,0x0380000780e00000,0x39000002801016a0,0x4980000780e0060c\n"
".quad 0x4d00000003100080,0x4104010003100080,0xfd60030780e0001c,0x03e00107c8e01221\n"
".quad 0x03000001001016b0,0x0100000780500000,0x0180000780e0000c,0x5560000780e00000\n"
".quad 0x190fffffff2032a8,0x0168030780e0001c,0xfd60000780e00008,0x196c00c7c8307c2b\n"
".quad 0x3160018780e00004,0x0380000780e00000,0x39000002801017a0,0x4980000780e0060c\n"
".quad 0x4d00000003100080,0x4104010003100080,0xfd60030780e0001c,0x03e00107c8e01221\n"
".quad 0x03000001001017b0,0x0100000780500000,0x0180000780e0000c,0x5560000780e00000\n"
".quad 0x190fffffff2031a8,0x0168030780e0001c,0xfd60000780e00008,0x196c00c7c8307c2b\n"
".quad 0x3160018780e00004,0x0380000780e00000,0x39000002801018a0,0x4980000780e0060c\n"
".quad 0x4d00000003100080,0x4104010003100080,0xfd60030780e0001c,0x03e00107c8e01221\n"
".quad 0x03000001001018b0,0x0100000780500000,0x0180000780e0000c,0x5560000780e00000\n"
".quad 0x190fffffff2030a8,0x0168030780e0001c,0xfd60000780e00008,0x196c00c7c8307c2b\n"
".quad 0x3160018780e00004,0x0380000780e00000,0x39000002801019a0,0x4980000780e0060c\n"
".quad 0x4d00000003100080,0x4104010003100080,0xfd60030780e0001c,0x03e00107c8e01221\n"
".quad 0x03000001001019b0,0x0100000780500000,0x0180000780e0000c,0x5560000780e00000\n"
".quad 0x190fffffff202fa8,0x0168030780e0001c,0xfd60000780e00008,0x196c00c7c8307c2b\n"
".quad 0x3160018780e00004,0x0380000780e00000,0x3900000280101aa0,0x4980000780e0060c\n"
".quad 0x4d00000003100080,0x4104010003100080,0xfd60030780e0001c,0x03e00107c8e01221\n"
".quad 0x0300000100101ab0,0x0100000780500000,0x0180000780e0000c,0x5560000780e00000\n"
".quad 0x190fffffff202ea8,0x0168030780e0001c,0xfd60000780e00008,0x196c00c7c8307c2b\n"
".quad 0x3160018780e00004,0x0380000780e00000,0x3900000280101ba0,0x4980000780e0060c\n"
".quad 0x4d00000003100080,0x4104010003100080,0xfd60030780e0001c,0x03e00107c8e01221\n"
".quad 0x0300000100101bb0,0x0100000780500000,0x5180000780e0000c,0x010fffffff202da8\n"
".quad 0x4160000780e00000,0x196c00c7d0307c28,0x0168030780e0001c,0xfd60000780e00008\n"
".quad 0x190c0147c8a00021,0x3160018780e00004,0x0380000780e00000,0x3900001280101cb0\n"
".quad 0x4980000780e0060c,0x4d00000003100080,0x4104010003100080,0xfd60030780e0001c\n"
".quad 0x03e00107d8e01221,0x5500001100101cd0,0x030603c780100028,0x0100000780500000\n"
".quad 0x1980000780e0000c,0x0168030780e0001c,0x3960000780e00000,0x0160018780e00004\n"
".quad 0x4960000780e00008,0x4180000780e00e1c,0x0380000780e00000,0x0500000780100930\n"
".quad 0x016c010780307c2a,0x01042547802040d0,0xfd04000780d00100,0x036c0087c8307c01\n"
".quad 0x0300000000a01ef0,0x0500000280101ec0,0x0120000780d000a0,0x09042007802000ec\n"
".quad 0x1900208780a40000,0x1d00208780a40002,0x0800208780a40004,0x1540060210400202\n"
".quad 0x0900000780400702,0x11c4100780301004,0x15c4100780301008,0x05c410078030100a\n"
".quad 0x0900008780600200,0x0d00010780600600,0x0100014780600700,0x150400c780a00002\n"
".quad 0x190400c780a00004,0x030400c780a00006,0x1900000780101ef0,0x150403c7801000f8\n"
".quad 0x010603c7801000f8,0x050403c7801000f8,0x0d4400c78210002a,0x0900000780401104\n"
".quad 0x11046087802100ea,0x0d0000c780601006,0x11ec100780301f04,0x0dc4100780301008\n"
".quad 0x1104400780d08206,0x0c00010780601004,0x0140130420200286,0x1d04000780200008\n"
".quad 0x11ec100780300106,0x0c00020780601206,0x1120008e00100284,0x03c4100780301008\n"
".quad 0x2100000000202120,0x0d00000780401504,0x1100010780601204,0x210403c780100000\n"
".quad 0x0000020780601406,0x151002840c200586,0x01c4100780301010,0x050400078020000e\n"
".quad 0x0300014780601404,0x0c00000000202120,0x0d10008004200682,0x010000c780a00008\n"
".quad 0x090400c78020000e,0x0dc0100780300804,0x030403c780100004,0x0900000000202120\n"
".quad 0x0500004780d00206,0x05a0400780d00e16,0x0100000003200296,0x03a0000780d00e02\n"
".quad 0x2100000780300000,0x3104114780a00006,0x3544004780a00010,0x3904114780a00000\n"
".quad 0x3100000780900018,0x3944064780a0001a,0x310fffffff203e9c,0x310000c7c0c00e18\n"
".quad 0x3d84064780a00018,0x3d00000780401920,0x3d0003c780601822,0x3dc410078030101e\n"
".quad 0x3d0003c780601820,0x3d0403c78020401a,0x3944064780a0001e,0x390000c7c0c00e1e\n"
".quad 0x3184064780a0001c,0x3904038780200018,0x3900000780401032,0x3900038780601130\n"
".quad 0x39c410078030101c,0x3500038780601030,0x210403478030001c,0x016400c780300d10\n"
".quad 0x0104008780d00006,0x31e4100780301f00,0x2104030780300010,0x212c014780a00000\n"
".quad 0xfd04008780d00c10,0x016c0147c8307c07,0x0104020780200000,0x030402c500d00300\n"
".quad 0x0100000780300000,0xffe0000001f00000,0x010000000a000003,0x0000340b04000000\n"
".quad 0x0c00000008000000,0x1800000010000000,0x2800000020000000,0x3800000030000000\n"
".quad 0x4400000040000000,0x4c00000048000000,0x04004d1803000000,0x0cffffffff000c17\n"
".quad 0x040007f000004c00,0x0bffffffff000c17,0x040013f000004800,0x0affffffff000c17\n"
".quad 0x040013f000004400,0x09ffffffff000c17,0x040013f000004000,0x08ffffffff000c17\n"
".quad 0x040023f000003800,0x07ffffffff000c17,0x040023f000003000,0x06ffffffff000c17\n"
".quad 0x040023f000002800,0x05ffffffff000c17,0x040023f000002000,0x04ffffffff000c17\n"
".quad 0x040023f000001800,0x03ffffffff000c17,0x040013f000001000,0x02ffffffff000c17\n"
".quad 0x040013f000000c00,0x01ffffffff000c17,0x040013f000000800,0x00ffffffff000c17\n"
".quad 0x040023f000000000,0x200021010800080d,0x0000000600000000,0x000067d400000005\n"
".quad 0x0000000000000000,0x0000000000000000,0x000002d800000000,0x000002d800000000\n"
".quad 0x0000000400000000,0x6000000000000000,0x000011f300002305,0x0000000000000000\n"
".quad 0x0000000000000000,0x00000a8000000000,0x00000a8000000000,0x0000000400000000\n"
".quad 0x6000000000000000,0x00001c7300002306,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000004d00000000,0x0000000400000000,0x6000000000000000\n"
".quad 0x00001c7300002205,0x0000000000000000,0x0000000000000000,0x00000d3000000000\n"
".quad 0x00000d3000000000,0x0000000400000000,0x6000000000000000,0x000029a300002206\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000004d00000000\n"
".quad 0x0000000400000000,0x6000000000000000,0x000029a300002105,0x0000000000000000\n"
".quad 0x0000000000000000,0x00000ca000000000,0x00000ca000000000,0x0000000400000000\n"
".quad 0x6000000000000000,0x0000364300002106,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000004500000000,0x0000000400000000,0x6000000000000000\n"
".quad 0x0000364300002005,0x0000000000000000,0x0000000000000000,0x0000100400000000\n"
".quad 0x0000100400000000,0x0000000400000000,0x6000000000000000,0x0000464700002006\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000005d00000000\n"
".quad 0x0000000400000000,0x6000000000000000,0x0000464700001f05,0x0000000000000000\n"
".quad 0x0000000000000000,0x00000ed000000000,0x00000ed000000000,0x0000000400000000\n"
".quad 0x6000000000000000,0x0000551700001f06,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000004500000000,0x0000000400000000,0x6000000000000000\n"
".quad 0x0000551700001e05,0x0000000000000000,0x0000000000000000,0x000012bc00000000\n"
".quad 0x000012bc00000000,0x0000000400000000,0x6000000000000000,0x000067d300001e06\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000005d00000000\n"
".quad 0x0000000400000000,0x0000000000000000\n"
".text");

extern "C" {

extern const unsigned long long __deviceText_$sm_13$[3414];

}

asm(
".section .rodata\n"
".align 32\n"
"__deviceText_$compute_13$:\n"
".quad 0x6f69737265762e09,0x2e090a342e31206e,0x7320746567726174,0x2f2f090a33315f6d\n"
".quad 0x656c69706d6f6320,0x2f20687469772064,0x61636f6c2f727375,0x6f2f616475632f6c\n"
".quad 0x696c2f34366e6570,0x2f090a65622f2f62,0x6e65706f766e202f,0x6220322e33206363\n"
".quad 0x206e6f20746c6975,0x2d39302d30313032,0x2d2f2f090a0a3930,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x43202f2f090a2d2d,0x676e696c69706d6f\n"
".quad 0x6d742f706d742f20,0x3030305f74667870,0x30305f3565383130,0x372d303030303030\n"
".quad 0x626c65646e614d5f,0x30316d735f746f72,0x20692e337070632e,0x63632f706d742f28\n"
".quad 0x73326a412e234942,0x2d2f2f090a294a4b,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2f2f090a0a2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x4f202f2f090a2d2d,0x0a3a736e6f697470,0x2d2d2d2d2d2f2f09\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x090a2d2d2d2d2d2d,0x6772615420202f2f\n"
".quad 0x202c7874703a7465,0x315f6d733a415349,0x6169646e45202c33,0x656c7474696c3a6e\n"
".quad 0x65746e696f50202c,0x363a657a69532072,0x2d20202f2f090a34,0x6974704f2809334f\n"
".quad 0x6e6f6974617a696d,0x0a296c6576656c20,0x30672d20202f2f09,0x2067756265442809\n"
".quad 0x090a296c6576656c,0x09326d2d20202f2f,0x2074726f70655228,0x69726f7369766461\n"
".quad 0x2d2f2f090a297365,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x69662e090a0a2d2d,0x633c22093109656c,0x6c2d646e616d6d6f,0x2e090a223e656e69\n"
".quad 0x22093209656c6966,0x706d742f706d742f,0x303030305f746678,0x3030305f35653831\n"
".quad 0x5f362d3030303030,0x72626c65646e614d,0x2e30316d735f746f,0x2e32656661647563\n"
".quad 0x662e090a22757067,0x2f22093309656c69,0x2f62696c2f727375,0x363836692f636367\n"
".quad 0x672d78756e696c2d,0x352e342e342f756e,0x6564756c636e692f,0x2e6665646474732f\n"
".quad 0x6c69662e090a2268,0x73752f2209340965,0x2f6c61636f6c2f72,0x6e69622f61647563\n"
".quad 0x6c636e692f2e2e2f,0x2f7472632f656475,0x725f656369766564,0x682e656d69746e75\n"
".quad 0x656c69662e090a22,0x7273752f22093509,0x632f6c61636f6c2f,0x2f6e69622f616475\n"
".quad 0x756c636e692f2e2e,0x5f74736f682f6564,0x2e73656e69666564,0x6c69662e090a2268\n"
".quad 0x73752f2209360965,0x2f6c61636f6c2f72,0x6e69622f61647563,0x6c636e692f2e2e2f\n"
".quad 0x6c6975622f656475,0x657079745f6e6974,0x662e090a22682e73,0x2f22093709656c69\n"
".quad 0x61636f6c2f727375,0x622f616475632f6c,0x6e692f2e2e2f6e69,0x65642f6564756c63\n"
".quad 0x7079745f65636976,0x2e090a22682e7365,0x22093809656c6966,0x636f6c2f7273752f\n"
".quad 0x2f616475632f6c61,0x692f2e2e2f6e6962,0x642f6564756c636e,0x79745f7265766972\n"
".quad 0x090a22682e736570,0x093909656c69662e,0x6f6c2f7273752f22,0x616475632f6c6163\n"
".quad 0x2f2e2e2f6e69622f,0x2f6564756c636e69,0x5f65636166727573,0x22682e7365707974\n"
".quad 0x09656c69662e090a,0x7273752f22093031,0x632f6c61636f6c2f,0x2f6e69622f616475\n"
".quad 0x756c636e692f2e2e,0x75747865742f6564,0x73657079745f6572,0x69662e090a22682e\n"
".quad 0x2f2209313109656c,0x61636f6c2f727375,0x622f616475632f6c,0x6e692f2e2e2f6e69\n"
".quad 0x65762f6564756c63,0x7079745f726f7463,0x2e090a22682e7365,0x09323109656c6966\n"
".quad 0x6f6c2f7273752f22,0x616475632f6c6163,0x2f2e2e2f6e69622f,0x2f6564756c636e69\n"
".quad 0x6c5f656369766564,0x61705f68636e7561,0x73726574656d6172,0x69662e090a22682e\n"
".quad 0x2f2209333109656c,0x61636f6c2f727375,0x622f616475632f6c,0x6e692f2e2e2f6e69\n"
".quad 0x72632f6564756c63,0x6761726f74732f74,0x2e7373616c635f65,0x6c69662e090a2268\n"
".quad 0x752f220934310965,0x756c636e692f7273,0x2f737469622f6564,0x22682e7365707974\n"
".quad 0x09656c69662e090a,0x7273752f22093531,0x6564756c636e692f,0x22682e656d69742f\n"
".quad 0x09656c69662e090a,0x6d6f682f22093631,0x6c616d726f6e2f65,0x756f6b636568632f\n"
".quad 0x65636f7570672f74,0x747365742f746f6c,0x2e32616475632f73,0x2f73747365742f32\n"
".quad 0x72626c65646e614d,0x65646e614d2f746f,0x656b5f746f72626c,0x2275632e6c656e72\n"
".quad 0x09656c69662e090a,0x6d6f682f22093731,0x6c616d726f6e2f65,0x756f6b636568632f\n"
".quad 0x65636f7570672f74,0x747365742f746f6c,0x2e32616475632f73,0x2f73747365742f32\n"
".quad 0x72626c65646e614d,0x65646e614d2f746f,0x6d735f746f72626c,0x090a2275632e3031\n"
".quad 0x383109656c69662e,0x6c2f7273752f2209,0x6475632f6c61636f,0x2e2e2f6e69622f61\n"
".quad 0x6564756c636e692f,0x5f6e6f6d6d6f632f,0x6e6f6974636e7566,0x662e090a22682e73\n"
".quad 0x2209393109656c69,0x636f6c2f7273752f,0x2f616475632f6c61,0x692f2e2e2f6e6962\n"
".quad 0x6d2f6564756c636e,0x636e75665f687461,0x22682e736e6f6974,0x09656c69662e090a\n"
".quad 0x7273752f22093032,0x632f6c61636f6c2f,0x2f6e69622f616475,0x756c636e692f2e2e\n"
".quad 0x5f6874616d2f6564,0x746e6174736e6f63,0x662e090a22682e73,0x2209313209656c69\n"
".quad 0x636f6c2f7273752f,0x2f616475632f6c61,0x692f2e2e2f6e6962,0x642f6564756c636e\n"
".quad 0x75665f6563697665,0x2e736e6f6974636e,0x6c69662e090a2268,0x752f220932320965\n"
".quad 0x6c61636f6c2f7273,0x69622f616475632f,0x636e692f2e2e2f6e,0x5f6d732f6564756c\n"
".quad 0x696d6f74615f3131,0x6974636e75665f63,0x090a22682e736e6f,0x333209656c69662e\n"
".quad 0x6c2f7273752f2209,0x6475632f6c61636f,0x2e2e2f6e69622f61,0x6564756c636e692f\n"
".quad 0x615f32315f6d732f,0x75665f63696d6f74,0x2e736e6f6974636e,0x6c69662e090a2268\n"
".quad 0x752f220934320965,0x6c61636f6c2f7273,0x69622f616475632f,0x636e692f2e2e2f6e\n"
".quad 0x5f6d732f6564756c,0x6c62756f645f3331,0x6974636e75665f65,0x090a22682e736e6f\n"
".quad 0x353209656c69662e,0x6c2f7273752f2209,0x6475632f6c61636f,0x2e2e2f6e69622f61\n"
".quad 0x6564756c636e692f,0x615f30325f6d732f,0x75665f63696d6f74,0x2e736e6f6974636e\n"
".quad 0x6c69662e090a2268,0x752f220936320965,0x6c61636f6c2f7273,0x69622f616475632f\n"
".quad 0x636e692f2e2e2f6e,0x5f6d732f6564756c,0x6972746e695f3032,0x22682e736369736e\n"
".quad 0x09656c69662e090a,0x7273752f22093732,0x632f6c61636f6c2f,0x2f6e69622f616475\n"
".quad 0x756c636e692f2e2e,0x61667275732f6564,0x74636e75665f6563,0x0a22682e736e6f69\n"
".quad 0x3209656c69662e09,0x2f7273752f220938,0x75632f6c61636f6c,0x2e2f6e69622f6164\n"
".quad 0x64756c636e692f2e,0x7275747865742f65,0x5f68637465665f65,0x6e6f6974636e7566\n"
".quad 0x662e090a22682e73,0x2209393209656c69,0x636f6c2f7273752f,0x2f616475632f6c61\n"
".quad 0x692f2e2e2f6e6962,0x6d2f6564756c636e,0x636e75665f687461,0x62645f736e6f6974\n"
".quad 0x682e337874705f6c,0x6e652e090a0a0a22,0x38315a5f20797274,0x72626c65646e614d\n"
".quad 0x6d735f305344746f,0x6168637536503031,0x6666666969693472,0x69695f5366666666\n"
".quad 0x702e09090a282062,0x36752e206d617261,0x616475635f5f2034,0x315a5f5f6d726170\n"
".quad 0x626c65646e614d38,0x735f305344746f72,0x686375365030316d,0x6666696969347261\n"
".quad 0x695f536666666666,0x0a2c7473645f6269,0x6d617261702e0909,0x5f5f203233732e20\n"
".quad 0x6d72617061647563,0x6e614d38315a5f5f,0x44746f72626c6564,0x5030316d735f3053\n"
".quad 0x6934726168637536,0x6666666666666969,0x695f6269695f5366,0x090a2c576567616d\n"
".quad 0x206d617261702e09,0x635f5f203233732e,0x5f6d726170616475,0x646e614d38315a5f\n"
".quad 0x5344746f72626c65,0x365030316d735f30,0x6969347261686375,0x6666666666666669\n"
".quad 0x6d695f6269695f53,0x09090a2c48656761,0x2e206d617261702e,0x75635f5f20323373\n"
".quad 0x5f5f6d7261706164,0x65646e614d38315a,0x305344746f72626c,0x75365030316d735f\n"
".quad 0x6969693472616863,0x5366666666666666,0x7572635f6269695f,0x2e09090a2c68636e\n"
".quad 0x662e206d61726170,0x6475635f5f203233,0x5a5f5f6d72617061,0x6c65646e614d3831\n"
".quad 0x5f305344746f7262,0x6375365030316d73,0x6669696934726168,0x5f53666666666666\n"
".quad 0x66664f785f626969,0x61702e09090a2c30,0x3233662e206d6172,0x70616475635f5f20\n"
".quad 0x38315a5f5f6d7261,0x72626c65646e614d,0x6d735f305344746f,0x6168637536503031\n"
".quad 0x6666666969693472,0x69695f5366666666,0x2c3166664f785f62,0x617261702e09090a\n"
".quad 0x5f203233662e206d,0x726170616475635f,0x614d38315a5f5f6d,0x746f72626c65646e\n"
".quad 0x30316d735f305344,0x3472616863753650,0x6666666666696969,0x5f6269695f536666\n"
".quad 0x090a2c3066664f79,0x206d617261702e09,0x635f5f203233662e,0x5f6d726170616475\n"
".quad 0x646e614d38315a5f,0x5344746f72626c65,0x365030316d735f30,0x6969347261686375\n"
".quad 0x6666666666666669,0x4f795f6269695f53,0x2e09090a2c316666,0x662e206d61726170\n"
".quad 0x6475635f5f203233,0x5a5f5f6d72617061,0x6c65646e614d3831,0x5f305344746f7262\n"
".quad 0x6375365030316d73,0x6669696934726168,0x5f53666666666666,0x2c504a785f626969\n"
".quad 0x617261702e09090a,0x5f203233662e206d,0x726170616475635f,0x614d38315a5f5f6d\n"
".quad 0x746f72626c65646e,0x30316d735f305344,0x3472616863753650,0x6666666666696969\n"
".quad 0x5f6269695f536666,0x2e09090a2c504a79,0x662e206d61726170,0x6475635f5f203233\n"
".quad 0x5a5f5f6d72617061,0x6c65646e614d3831,0x5f305344746f7262,0x6375365030316d73\n"
".quad 0x6669696934726168,0x5f53666666666666,0x6c6163735f626969,0x61702e09090a2c65\n"
".quad 0x696c612e206d6172,0x38622e2034206e67,0x70616475635f5f20,0x38315a5f5f6d7261\n"
".quad 0x72626c65646e614d,0x6d735f305344746f,0x6168637536503031,0x6666666969693472\n"
".quad 0x69695f5366666666,0x73726f6c6f635f62,0x2e09090a2c5d345b,0x732e206d61726170\n"
".quad 0x6475635f5f203233,0x5a5f5f6d72617061,0x6c65646e614d3831,0x5f305344746f7262\n"
".quad 0x6375365030316d73,0x6669696934726168,0x5f53666666666666,0x6d6172665f626969\n"
".quad 0x61702e09090a2c65,0x3233732e206d6172,0x70616475635f5f20,0x38315a5f5f6d7261\n"
".quad 0x72626c65646e614d,0x6d735f305344746f,0x6168637536503031,0x6666666969693472\n"
".quad 0x69695f5366666666,0x74616d696e615f62,0x656d6172466e6f69,0x7261702e09090a2c\n"
".quad 0x5f2038732e206d61,0x726170616475635f,0x614d38315a5f5f6d,0x746f72626c65646e\n"
".quad 0x30316d735f305344,0x3472616863753650,0x6666666666696969,0x5f6269695f536666\n"
".quad 0x0a7b090a294a7369,0x752e206765722e09,0x363c687225203631,0x6765722e090a3b3e\n"
".quad 0x7225203233752e20,0x2e090a3b3e35363c,0x3436752e20676572,0x3b3e353c64722520\n"
".quad 0x2e206765722e090a,0x323c662520323366,0x722e090a3b3e3832,0x646572702e206765\n"
".quad 0x3b3e31313c702520,0x3109636f6c2e090a,0x240a300935350937,0x6e6967656257444c\n"
".quad 0x6e614d38315a5f5f,0x44746f72626c6564,0x5030316d735f3053,0x6934726168637536\n"
".quad 0x6666666666666969,0x0a3a6269695f5366,0x3631752e766f6d09,0x202c316872250920\n"
".quad 0x782e646961746325,0x752e766f6d090a3b,0x3268722509203631,0x2e6469746e25202c\n"
".quad 0x2e6c756d090a3b78,0x3631752e65646977,0x25202c3172250920,0x687225202c316872\n"
".quad 0x2e766f6d090a3b32,0x6872250920363175,0x6961746325202c33,0x6f6d090a3b792e64\n"
".quad 0x2509203631752e76,0x746e25202c346872,0x6d090a3b792e6469,0x2e656469772e6c75\n"
".quad 0x3272250920363175,0x202c33687225202c,0x63090a3b34687225,0x752e3233752e7476\n"
".quad 0x2c33722509203631,0x3b782e6469742520,0x33752e646461090a,0x202c347225092032\n"
".quad 0x317225202c337225,0x752e747663090a3b,0x09203631752e3233,0x697425202c357225\n"
".quad 0x6461090a3b792e64,0x2509203233752e64,0x2c357225202c3672,0x6c090a3b32722520\n"
".quad 0x2e6d617261702e64,0x3772250920323373,0x6475635f5f5b202c,0x5a5f5f6d72617061\n"
".quad 0x6c65646e614d3831,0x5f305344746f7262,0x6375365030316d73,0x6669696934726168\n"
".quad 0x5f53666666666666,0x67616d695f626969,0x646c090a3b5d5765,0x732e6d617261702e\n"
".quad 0x2c38722509203233,0x616475635f5f5b20,0x315a5f5f6d726170,0x626c65646e614d38\n"
".quad 0x735f305344746f72,0x686375365030316d,0x6666696969347261,0x695f536666666666\n"
".quad 0x6567616d695f6269,0x746573090a3b5d48,0x2e3233752e74672e,0x3972250920323373\n"
".quad 0x25202c387225202c,0x67656e090a3b3672,0x722509203233732e,0x3b397225202c3031\n"
".quad 0x74672e746573090a,0x3233732e3233752e,0x202c313172250920,0x347225202c377225\n"
".quad 0x732e67656e090a3b,0x3231722509203233,0x0a3b31317225202c,0x3233622e646e6109\n"
".quad 0x202c333172250920,0x7225202c30317225,0x766f6d090a3b3231,0x722509203233752e\n"
".quad 0x090a3b30202c3431,0x2e71652e70746573,0x3170250920323373,0x202c33317225202c\n"
".quad 0x40090a3b34317225,0x2061726220317025,0x385f305f744c2409,0x6c2e090a3b303534\n"
".quad 0x363609373109636f,0x2e747663090a3009,0x732e3233662e6e72,0x2c31662509203233\n"
".quad 0x6c090a3b34722520,0x2e6d617261702e64,0x3266250920323366,0x6475635f5f5b202c\n"
".quad 0x5a5f5f6d72617061,0x6c65646e614d3831,0x5f305344746f7262,0x6375365030316d73\n"
".quad 0x6669696934726168,0x5f53666666666666,0x6c6163735f626969,0x6c756d090a3b5d65\n"
".quad 0x662509203233662e,0x202c316625202c33,0x646c090a3b326625,0x662e6d617261702e\n"
".quad 0x2c34662509203233,0x616475635f5f5b20,0x315a5f5f6d726170,0x626c65646e614d38\n"
".quad 0x735f305344746f72,0x686375365030316d,0x6666696969347261,0x695f536666666666\n"
".quad 0x3066664f785f6269,0x2e646461090a3b5d,0x3566250920323366,0x25202c336625202c\n"
".quad 0x627573090a3b3466,0x662509203233662e,0x202c356625202c36,0x7573090a3b336625\n"
".quad 0x2509203233662e62,0x2c346625202c3766,0x73090a3b36662520,0x09203233662e6275\n"
".quad 0x356625202c386625,0x090a3b366625202c,0x203233662e627573,0x6625202c39662509\n"
".quad 0x0a3b386625202c33,0x3233662e64646109,0x202c303166250920,0x396625202c376625\n"
".quad 0x61702e646c090a3b,0x203233662e6d6172,0x5b202c3131662509,0x6170616475635f5f\n"
".quad 0x4d38315a5f5f6d72,0x6f72626c65646e61,0x316d735f30534474,0x7261686375365030\n"
".quad 0x6666666669696934,0x6269695f53666666,0x3b5d3166664f785f,0x33662e646461090a\n"
".quad 0x2c32316625092032,0x25202c3131662520,0x6461090a3b303166,0x2509203233662e64\n"
".quad 0x356625202c333166,0x0a3b32316625202c,0x3233662e62757309,0x202c343166250920\n"
".quad 0x6625202c33316625,0x2e627573090a3b35,0x3166250920323366,0x2c32316625202c35\n"
".quad 0x090a3b3431662520,0x09373109636f6c2e,0x7663090a30093736,0x3233662e6e722e74\n"
".quad 0x662509203233732e,0x3b367225202c3631,0x33662e6c756d090a,0x2c37316625092032\n"
".quad 0x25202c3631662520,0x2e646c090a3b3266,0x33662e6d61726170,0x2c38316625092032\n"
".quad 0x616475635f5f5b20,0x315a5f5f6d726170,0x626c65646e614d38,0x735f305344746f72\n"
".quad 0x686375365030316d,0x6666696969347261,0x695f536666666666,0x3066664f795f6269\n"
".quad 0x2e646461090a3b5d,0x3166250920323366,0x2c37316625202c39,0x090a3b3831662520\n"
".quad 0x203233662e627573,0x25202c3032662509,0x316625202c393166,0x2e627573090a3b37\n"
".quad 0x3266250920323366,0x2c38316625202c31,0x090a3b3032662520,0x203233662e627573\n"
".quad 0x25202c3232662509,0x326625202c393166,0x2e627573090a3b30,0x3266250920323366\n"
".quad 0x2c37316625202c33,0x090a3b3232662520,0x203233662e646461,0x25202c3432662509\n"
".quad 0x326625202c313266,0x702e646c090a3b33,0x3233662e6d617261,0x202c353266250920\n"
".quad 0x70616475635f5f5b,0x38315a5f5f6d7261,0x72626c65646e614d,0x6d735f305344746f\n"
".quad 0x6168637536503031,0x6666666969693472,0x69695f5366666666,0x5d3166664f795f62\n"
".quad 0x662e646461090a3b,0x3632662509203233,0x202c35326625202c,0x61090a3b34326625\n"
".quad 0x09203233662e6464,0x6625202c37326625,0x36326625202c3931,0x662e627573090a3b\n"
".quad 0x3832662509203233,0x202c37326625202c,0x73090a3b39316625,0x09203233662e6275\n"
".quad 0x6625202c39326625,0x38326625202c3632,0x09636f6c2e090a3b,0x0a30093037093731\n"
".quad 0x617261702e646c09,0x7225092038732e6d,0x635f5f5b202c3531,0x5f6d726170616475\n"
".quad 0x646e614d38315a5f,0x5344746f72626c65,0x365030316d735f30,0x6969347261686375\n"
".quad 0x6666666666666669,0x73695f6269695f53,0x766f6d090a3b5d4a,0x722509203233752e\n"
".quad 0x090a3b30202c3631,0x2e71652e70746573,0x3270250920323373,0x202c35317225202c\n"
".quad 0x40090a3b36317225,0x2061726220327025,0x375f305f744c2409,0x6c2e090a3b323836\n"
".quad 0x383309363109636f,0x2e646c090a300935,0x33662e6d61726170,0x2c30336625092032\n"
".quad 0x616475635f5f5b20,0x315a5f5f6d726170,0x626c65646e614d38,0x735f305344746f72\n"
".quad 0x686375365030316d,0x6666696969347261,0x695f536666666666,0x3b5d504a785f6269\n"
".quad 0x3109636f6c2e090a,0x0a30093738330936,0x617261702e646c09,0x2509203233662e6d\n"
".quad 0x5f5f5b202c313366,0x6d72617061647563,0x6e614d38315a5f5f,0x44746f72626c6564\n"
".quad 0x5030316d735f3053,0x6934726168637536,0x6666666666666969,0x795f6269695f5366\n"
".quad 0x6c2e090a3b5d504a,0x383309363109636f,0x766f6d090a300939,0x662509203233662e\n"
".quad 0x37326625202c3233,0x09636f6c2e090a3b,0x3009303933093631,0x33662e766f6d090a\n"
".quad 0x2c33336625092032,0x090a3b3932662520,0x09363109636f6c2e,0x6d090a3009313933\n"
".quad 0x09203233662e766f,0x6625202c34336625,0x6f6c2e090a3b3331,0x3239330936310963\n"
".quad 0x2e766f6d090a3009,0x3366250920323366,0x3b35316625202c35,0x3109636f6c2e090a\n"
".quad 0x0a30093339330936,0x3233662e766f6d09,0x202c363366250920,0x3430303036346630\n"
".quad 0x09202020203b3030,0x0a33393138202f2f,0x3233662e6c756d09,0x202c373366250920\n"
".quad 0x6625202c37326625,0x627573090a3b3633,0x662509203233662e,0x37336625202c3833\n"
".quad 0x0a3b37326625202c,0x3233662e62757309,0x202c393366250920,0x6625202c37336625\n"
".quad 0x627573090a3b3833,0x662509203233662e,0x37326625202c3034,0x0a3b39336625202c\n"
".quad 0x3233662e6c756d09,0x202c313466250920,0x6625202c37326625,0x6c756d090a3b3732\n"
".quad 0x662509203233662e,0x37326625202c3234,0x0a3b39326625202c,0x3233662e64616d09\n"
".quad 0x202c333466250920,0x6625202c37326625,0x32346625202c3932,0x662e646461090a3b\n"
".quad 0x3434662509203233,0x202c31346625202c,0x6d090a3b33346625,0x09203233662e6c75\n"
".quad 0x6625202c35346625,0x39336625202c3933,0x662e627573090a3b,0x3634662509203233\n"
".quad 0x202c35346625202c,0x73090a3b31346625,0x09203233662e6275,0x6625202c37346625\n"
".quad 0x31346625202c3434,0x662e64616d090a3b,0x3834662509203233,0x202c39336625202c\n"
".quad 0x6625202c30346625,0x627573090a3b3634,0x662509203233662e,0x34346625202c3934\n"
".quad 0x0a3b37346625202c,0x3233662e62757309,0x202c303566250920,0x6625202c33346625\n"
".quad 0x64616d090a3b3734,0x662509203233662e,0x39336625202c3135,0x202c30346625202c\n"
".quad 0x73090a3b38346625,0x09203233662e6275,0x6625202c32356625,0x39346625202c3134\n"
".quad 0x662e64616d090a3b,0x3335662509203233,0x202c30346625202c,0x6625202c30346625\n"
".quad 0x646461090a3b3135,0x662509203233662e,0x30356625202c3435,0x0a3b32356625202c\n"
".quad 0x3233662e64646109,0x202c353566250920,0x6625202c33356625,0x64616d090a3b3435\n"
".quad 0x662509203233662e,0x39326625202c3635,0x202c39326625202c,0x61090a3b35356625\n"
".quad 0x09203233662e6464,0x6625202c37356625,0x36356625202c3434,0x662e766f6d090a3b\n"
".quad 0x3835662509203233,0x0a3b37356625202c,0x3233662e62757309,0x202c393566250920\n"
".quad 0x6625202c37356625,0x627573090a3b3434,0x662509203233662e,0x36356625202c3036\n"
".quad 0x0a3b39356625202c,0x363109636f6c2e09,0x090a300934393309,0x203233662e766f6d\n"
".quad 0x30202c3136662509,0x3034303030363466,0x2f09202020203b30,0x090a33393138202f\n"
".quad 0x203233662e6c756d,0x25202c3236662509,0x366625202c333166,0x2e627573090a3b31\n"
".quad 0x3666250920323366,0x2c32366625202c33,0x090a3b3331662520,0x203233662e627573\n"
".quad 0x25202c3436662509,0x366625202c323666,0x2e627573090a3b33,0x3666250920323366\n"
".quad 0x2c33316625202c35,0x090a3b3436662520,0x203233662e6c756d,0x25202c3636662509\n"
".quad 0x316625202c333166,0x2e6c756d090a3b33,0x3666250920323366,0x2c33316625202c37\n"
".quad 0x090a3b3531662520,0x203233662e64616d,0x25202c3836662509,0x316625202c333166\n"
".quad 0x3b37366625202c35,0x33662e646461090a,0x2c39366625092032,0x25202c3636662520\n"
".quad 0x756d090a3b383666,0x2509203233662e6c,0x366625202c303766,0x3b34366625202c34\n"
".quad 0x33662e627573090a,0x2c31376625092032,0x25202c3037662520,0x7573090a3b363666\n"
".quad 0x2509203233662e62,0x366625202c323766,0x3b36366625202c39,0x33662e64616d090a\n"
".quad 0x2c33376625092032,0x25202c3436662520,0x376625202c353666,0x2e627573090a3b31\n"
".quad 0x3766250920323366,0x2c39366625202c34,0x090a3b3237662520,0x203233662e627573\n"
".quad 0x25202c3537662509,0x376625202c383666,0x2e64616d090a3b32,0x3766250920323366\n"
".quad 0x2c34366625202c36,0x25202c3536662520,0x7573090a3b333766,0x2509203233662e62\n"
".quad 0x366625202c373766,0x3b34376625202c36,0x33662e64616d090a,0x2c38376625092032\n"
".quad 0x25202c3536662520,0x376625202c353666,0x2e646461090a3b36,0x3766250920323366\n"
".quad 0x2c35376625202c39,0x090a3b3737662520,0x203233662e646461,0x25202c3038662509\n"
".quad 0x376625202c383766,0x2e64616d090a3b39,0x3866250920323366,0x2c35316625202c31\n"
".quad 0x25202c3531662520,0x6461090a3b303866,0x2509203233662e64,0x366625202c323866\n"
".quad 0x3b31386625202c39,0x33662e766f6d090a,0x2c33386625092032,0x090a3b3238662520\n"
".quad 0x203233662e627573,0x25202c3438662509,0x366625202c323866,0x2e627573090a3b39\n"
".quad 0x3866250920323366,0x2c31386625202c35,0x090a3b3438662520,0x203233662e766f6d\n"
".quad 0x30202c3638662509,0x3030303030303066,0x2f09202020203b30,0x766f6d090a30202f\n"
".quad 0x662509203233662e,0x30306630202c3738,0x203b303030303030,0x30202f2f09202020\n"
".quad 0x6e752e617262090a,0x305f744c24092069,0x240a3b363234375f,0x3836375f305f744c\n"
".quad 0x636f6c2e090a3a32,0x0937393309363109,0x662e766f6d090a30,0x3033662509203233\n"
".quad 0x0a3b33316625202c,0x363109636f6c2e09,0x090a300938393309,0x203233662e766f6d\n"
".quad 0x25202c3738662509,0x6c2e090a3b353166,0x393309363109636f,0x766f6d090a300939\n"
".quad 0x662509203233662e,0x37326625202c3133,0x09636f6c2e090a3b,0x3009303034093631\n"
".quad 0x33662e766f6d090a,0x2c36386625092032,0x090a3b3932662520,0x09363109636f6c2e\n"
".quad 0x6d090a3009383034,0x09203233662e766f,0x6630202c35386625,0x3030303030303030\n"
".quad 0x2f2f09202020203b,0x2e766f6d090a3020,0x3866250920323366,0x3030306630202c33\n"
".quad 0x20203b3030303030,0x0a30202f2f092020,0x3233662e766f6d09,0x202c303666250920\n"
".quad 0x3030303030306630,0x09202020203b3030,0x6f6d090a30202f2f,0x2509203233662e76\n"
".quad 0x306630202c383566,0x3b30303030303030,0x202f2f0920202020,0x662e766f6d090a30\n"
".quad 0x3533662509203233,0x303030306630202c,0x2020203b30303030,0x090a30202f2f0920\n"
".quad 0x203233662e766f6d,0x30202c3433662509,0x3030303030303066,0x2f09202020203b30\n"
".quad 0x766f6d090a30202f,0x662509203233662e,0x30306630202c3333,0x203b303030303030\n"
".quad 0x30202f2f09202020,0x33662e766f6d090a,0x2c32336625092032,0x3030303030663020\n"
".quad 0x202020203b303030,0x4c240a30202f2f09,0x363234375f305f74,0x09636f6c2e090a3a\n"
".quad 0x3009323134093631,0x7261702e646c090a,0x09203233732e6d61,0x5f5b202c37317225\n"
".quad 0x726170616475635f,0x614d38315a5f5f6d,0x746f72626c65646e,0x30316d735f305344\n"
".quad 0x3472616863753650,0x6666666666696969,0x5f6269695f536666,0x3b5d68636e757263\n"
".quad 0x33732e627573090a,0x2c38317225092032,0x31202c3731722520,0x752e766f6d090a3b\n"
".quad 0x3931722509203233,0x6573090a3b31202c,0x33732e71652e7074,0x202c337025092032\n"
".quad 0x7225202c37317225,0x702540090a3b3931,0x2409206172622033,0x3639385f305f744c\n"
".quad 0x2e646461090a3b32,0x3866250920323366,0x2c33386625202c38,0x090a3b3835662520\n"
".quad 0x203233662e627573,0x25202c3938662509,0x386625202c383866,0x2e627573090a3b33\n"
".quad 0x3966250920323366,0x2c38386625202c30,0x090a3b3938662520,0x203233662e627573\n"
".quad 0x25202c3139662509,0x386625202c383566,0x2e627573090a3b39,0x3966250920323366\n"
".quad 0x2c33386625202c32,0x090a3b3039662520,0x203233662e646461,0x25202c3339662509\n"
".quad 0x396625202c313966,0x2e646461090a3b32,0x3966250920323366,0x2c33396625202c34\n"
".quad 0x090a3b3538662520,0x203233662e646461,0x25202c3539662509,0x366625202c343966\n"
".quad 0x2e646461090a3b30,0x3966250920323366,0x2c38386625202c36,0x090a3b3539662520\n"
".quad 0x203233662e627573,0x25202c3739662509,0x386625202c363966,0x2e627573090a3b38\n"
".quad 0x3966250920323366,0x2c35396625202c38,0x090a3b3739662520,0x203233662e646461\n"
".quad 0x25202c3939662509,0x396625202c363966,0x2e766f6d090a3b38,0x3166250920323366\n"
".quad 0x30346630202c3030,0x203b303030303038,0x0a34202f2f092020,0x746c2e7074657309\n"
".quad 0x702509203233662e,0x2c39396625202c34,0x0a3b303031662520,0x6220347025214009\n"
".quad 0x5f744c2409206172,0x0a3b323639385f30,0x3233662e766f6d09,0x2c31303166250920\n"
".quad 0x3030303634663020,0x092020203b303034,0x0a33393138202f2f,0x3233662e6c756d09\n"
".quad 0x2c32303166250920,0x25202c3433662520,0x6d090a3b31303166,0x09203233662e766f\n"
".quad 0x30202c3330316625,0x3034303030363466,0x2f2f092020203b30,0x6d090a3339313820\n"
".quad 0x09203233662e6c75,0x25202c3430316625,0x316625202c323366,0x627573090a3b3330\n"
".quad 0x662509203233662e,0x316625202c353031,0x34336625202c3230,0x662e627573090a3b\n"
".quad 0x3031662509203233,0x3430316625202c36,0x0a3b32336625202c,0x3233662e62757309\n"
".quad 0x2c37303166250920,0x202c323031662520,0x090a3b3530316625,0x203233662e627573\n"
".quad 0x202c383031662509,0x25202c3430316625,0x73090a3b36303166,0x09203233662e6275\n"
".quad 0x25202c3930316625,0x316625202c343366,0x627573090a3b3730,0x662509203233662e\n"
".quad 0x336625202c303131,0x3830316625202c32,0x355f305f4c240a3b,0x2f2f200a3a303938\n"
".quad 0x4c203e706f6f6c3c,0x79646f6220706f6f,0x313420656e696c20,0x09636f6c2e090a33\n"
".quad 0x3009333134093631,0x33662e6c756d090a,0x3131316625092032,0x202c35336625202c\n"
".quad 0x6d090a3b32336625,0x09203233662e6c75,0x25202c3231316625,0x336625202c343366\n"
".quad 0x2e64616d090a3b32,0x3166250920323366,0x34336625202c3331,0x202c33336625202c\n"
".quad 0x090a3b3131316625,0x203233662e646461,0x202c343131662509,0x25202c3231316625\n"
".quad 0x73090a3b33313166,0x09203233662e6275,0x25202c3531316625,0x6625202c34313166\n"
".quad 0x756d090a3b323131,0x2509203233662e6c,0x6625202c36313166,0x316625202c373031\n"
".quad 0x627573090a3b3830,0x662509203233662e,0x316625202c373131,0x31316625202c3631\n"
".quad 0x2e627573090a3b32,0x3166250920323366,0x31316625202c3831,0x3531316625202c33\n"
".quad 0x662e627573090a3b,0x3131662509203233,0x3431316625202c39,0x3b3531316625202c\n"
".quad 0x33662e64616d090a,0x3032316625092032,0x2c3730316625202c,0x202c303131662520\n"
".quad 0x090a3b3731316625,0x203233662e627573,0x202c313231662509,0x25202c3231316625\n"
".quad 0x6d090a3b39313166,0x09203233662e6461,0x25202c3232316625,0x6625202c38303166\n"
".quad 0x316625202c393031,0x646461090a3b3032,0x662509203233662e,0x316625202c333231\n"
".quad 0x32316625202c3831,0x2e64616d090a3b31,0x3166250920323366,0x30316625202c3432\n"
".quad 0x3031316625202c39,0x3b3232316625202c,0x33662e646461090a,0x3532316625092032\n"
".quad 0x2c3332316625202c,0x0a3b343231662520,0x3233662e64616d09,0x2c36323166250920\n"
".quad 0x25202c3533662520,0x316625202c333366,0x646461090a3b3532,0x662509203233662e\n"
".quad 0x316625202c373231,0x32316625202c3431,0x2e627573090a3b36,0x3166250920323366\n"
".quad 0x32316625202c3832,0x3431316625202c37,0x662e627573090a3b,0x3231662509203233\n"
".quad 0x3632316625202c39,0x3b3832316625202c,0x3109636f6c2e090a,0x0a30093431340936\n"
".quad 0x3233662e64646109,0x2c30333166250920,0x202c373231662520,0x090a3b3732316625\n"
".quad 0x203233662e627573,0x202c313331662509,0x25202c3033316625,0x73090a3b37323166\n"
".quad 0x09203233662e6275,0x25202c3233316625,0x6625202c37323166,0x7573090a3b313331\n"
".quad 0x2509203233662e62,0x6625202c33333166,0x316625202c303331,0x627573090a3b3133\n"
".quad 0x662509203233662e,0x316625202c343331,0x33316625202c3732,0x2e646461090a3b33\n"
".quad 0x3166250920323366,0x33316625202c3533,0x3433316625202c32,0x662e646461090a3b\n"
".quad 0x3331662509203233,0x3533316625202c36,0x3b3932316625202c,0x33662e646461090a\n"
".quad 0x3733316625092032,0x2c3633316625202c,0x0a3b393231662520,0x3233662e64646109\n"
".quad 0x2c38333166250920,0x202c303331662520,0x090a3b3733316625,0x203233662e627573\n"
".quad 0x202c393331662509,0x25202c3833316625,0x73090a3b30333166,0x09203233662e6275\n"
".quad 0x25202c3034316625,0x6625202c37333166,0x6c2e090a3b393331,0x313409363109636f\n"
".quad 0x646461090a300935,0x662509203233662e,0x316625202c313431,0x31336625202c3833\n"
".quad 0x662e627573090a3b,0x3431662509203233,0x3134316625202c32,0x3b3833316625202c\n"
".quad 0x33662e627573090a,0x3334316625092032,0x2c3134316625202c,0x0a3b323431662520\n"
".quad 0x3233662e62757309,0x2c34343166250920,0x25202c3133662520,0x73090a3b32343166\n"
".quad 0x09203233662e6275,0x25202c3534316625,0x6625202c38333166,0x6461090a3b333431\n"
".quad 0x2509203233662e64,0x6625202c36343166,0x316625202c343431,0x646461090a3b3534\n"
".quad 0x662509203233662e,0x316625202c373431,0x34316625202c3634,0x2e646461090a3b30\n"
".quad 0x3166250920323366,0x34316625202c3834,0x3b36386625202c37,0x33662e646461090a\n"
".quad 0x3934316625092032,0x2c3134316625202c,0x0a3b383431662520,0x3233662e766f6d09\n"
".quad 0x202c323366250920,0x090a3b3934316625,0x203233662e627573,0x202c303531662509\n"
".quad 0x25202c3934316625,0x73090a3b31343166,0x09203233662e6275,0x6625202c33336625\n"
".quad 0x316625202c383431,0x6f6c2e090a3b3035,0x3831340936310963,0x2e627573090a3009\n"
".quad 0x3166250920323366,0x33386625202c3135,0x0a3b38356625202c,0x3233662e62757309\n"
".quad 0x2c32353166250920,0x202c313531662520,0x73090a3b33386625,0x09203233662e6275\n"
".quad 0x25202c3335316625,0x6625202c31353166,0x6461090a3b323531,0x2509203233662e64\n"
".quad 0x6625202c34353166,0x356625202c323531,0x2e627573090a3b38,0x3166250920323366\n"
".quad 0x33386625202c3535,0x3b3335316625202c,0x33662e627573090a,0x3635316625092032\n"
".quad 0x2c3535316625202c,0x0a3b343531662520,0x3233662e64646109,0x2c37353166250920\n"
".quad 0x202c363531662520,0x73090a3b35386625,0x09203233662e6275,0x25202c3835316625\n"
".quad 0x6625202c37353166,0x646461090a3b3036,0x662509203233662e,0x316625202c393531\n"
".quad 0x35316625202c3135,0x2e646461090a3b38,0x3166250920323366,0x35316625202c3036\n"
".quad 0x3b30336625202c39,0x33662e627573090a,0x3136316625092032,0x2c3036316625202c\n"
".quad 0x0a3b393531662520,0x3233662e62757309,0x2c32363166250920,0x202c303631662520\n"
".quad 0x090a3b3136316625,0x203233662e627573,0x202c333631662509,0x25202c3935316625\n"
".quad 0x73090a3b32363166,0x09203233662e6275,0x25202c3436316625,0x316625202c303366\n"
".quad 0x646461090a3b3136,0x662509203233662e,0x316625202c353631,0x36316625202c3336\n"
".quad 0x2e627573090a3b34,0x3166250920323366,0x35316625202c3636,0x3135316625202c39\n"
".quad 0x662e627573090a3b,0x3631662509203233,0x3835316625202c37,0x3b3636316625202c\n"
".quad 0x33662e646461090a,0x3836316625092032,0x2c3536316625202c,0x0a3b373631662520\n"
".quad 0x3233662e64646109,0x2c39363166250920,0x25202c3738662520,0x61090a3b38363166\n"
".quad 0x09203233662e6464,0x25202c3037316625,0x6625202c30363166,0x6f6d090a3b393631\n"
".quad 0x2509203233662e76,0x316625202c343366,0x627573090a3b3037,0x662509203233662e\n"
".quad 0x316625202c313731,0x36316625202c3037,0x2e627573090a3b30,0x3366250920323366\n"
".quad 0x3936316625202c35,0x3b3137316625202c,0x3109636f6c2e090a,0x0a30093032340936\n"
".quad 0x3233662e766f6d09,0x2c32373166250920,0x3030303634663020,0x092020203b303034\n"
".quad 0x0a33393138202f2f,0x3233662e6c756d09,0x2c33373166250920,0x202c393431662520\n"
".quad 0x090a3b3237316625,0x203233662e6c756d,0x202c343731662509,0x25202c3934316625\n"
".quad 0x756d090a3b333366,0x2509203233662e6c,0x6625202c35373166,0x316625202c393431\n"
".quad 0x627573090a3b3934,0x662509203233662e,0x316625202c363731,0x34316625202c3337\n"
".quad 0x2e64616d090a3b39,0x3166250920323366,0x34316625202c3737,0x2c33336625202c39\n"
".quad 0x0a3b343731662520,0x3233662e62757309,0x2c38303166250920,0x202c333731662520\n"
".quad 0x090a3b3637316625,0x203233662e646461,0x202c383731662509,0x25202c3537316625\n"
".quad 0x73090a3b37373166,0x09203233662e6275,0x25202c3031316625,0x6625202c39343166\n"
".quad 0x756d090a3b383031,0x2509203233662e6c,0x6625202c39373166,0x316625202c383031\n"
".quad 0x627573090a3b3830,0x662509203233662e,0x316625202c303831,0x37316625202c3937\n"
".quad 0x2e627573090a3b35,0x3166250920323366,0x37316625202c3138,0x3537316625202c38\n"
".quad 0x662e64616d090a3b,0x3831662509203233,0x3830316625202c32,0x2c3031316625202c\n"
".quad 0x0a3b303831662520,0x3233662e62757309,0x2c33383166250920,0x202c373731662520\n"
".quad 0x090a3b3138316625,0x203233662e627573,0x202c343831662509,0x25202c3837316625\n"
".quad 0x6d090a3b31383166,0x09203233662e6461,0x25202c3538316625,0x6625202c38303166\n"
".quad 0x316625202c303131,0x627573090a3b3238,0x662509203233662e,0x316625202c363831\n"
".quad 0x38316625202c3537,0x2e64616d090a3b34,0x3166250920323366,0x31316625202c3738\n"
".quad 0x3031316625202c30,0x3b3538316625202c,0x33662e646461090a,0x3838316625092032\n"
".quad 0x2c3338316625202c,0x0a3b363831662520,0x3233662e64646109,0x2c39383166250920\n"
".quad 0x202c373831662520,0x090a3b3838316625,0x203233662e64616d,0x202c303931662509\n"
".quad 0x6625202c33336625,0x38316625202c3333,0x2e646461090a3b39,0x3166250920323366\n"
".quad 0x37316625202c3139,0x3039316625202c38,0x662e766f6d090a3b,0x3835662509203233\n"
".quad 0x3b3139316625202c,0x33662e627573090a,0x3239316625092032,0x2c3139316625202c\n"
".quad 0x0a3b383731662520,0x3233662e62757309,0x202c303666250920,0x25202c3039316625\n"
".quad 0x2e090a3b32393166,0x3409363109636f6c,0x6f6d090a30093132,0x2509203233662e76\n"
".quad 0x6630202c33393166,0x3030343030303634,0x202f2f092020203b,0x756d090a33393138\n"
".quad 0x2509203233662e6c,0x6625202c34393166,0x316625202c303731,0x6c756d090a3b3339\n"
".quad 0x662509203233662e,0x316625202c353931,0x35336625202c3037,0x662e6c756d090a3b\n"
".quad 0x3931662509203233,0x3037316625202c36,0x3b3037316625202c,0x33662e627573090a\n"
".quad 0x3739316625092032,0x2c3439316625202c,0x0a3b303731662520,0x3233662e64616d09\n"
".quad 0x2c38393166250920,0x202c303731662520,0x6625202c35336625,0x7573090a3b353931\n"
".quad 0x2509203233662e62,0x6625202c37303166,0x316625202c343931,0x646461090a3b3739\n"
".quad 0x662509203233662e,0x316625202c393931,0x39316625202c3639,0x2e627573090a3b38\n"
".quad 0x3166250920323366,0x37316625202c3930,0x3730316625202c30,0x662e6c756d090a3b\n"
".quad 0x3032662509203233,0x3730316625202c30,0x3b3730316625202c,0x33662e627573090a\n"
".quad 0x3130326625092032,0x2c3030326625202c,0x0a3b363931662520,0x3233662e62757309\n"
".quad 0x2c32303266250920,0x202c393931662520,0x090a3b3639316625,0x203233662e64616d\n"
".quad 0x202c333032662509,0x25202c3730316625,0x6625202c39303166,0x7573090a3b313032\n"
".quad 0x2509203233662e62,0x6625202c34303266,0x326625202c383931,0x627573090a3b3230\n"
".quad 0x662509203233662e,0x316625202c353032,0x30326625202c3939,0x2e64616d090a3b32\n"
".quad 0x3266250920323366,0x30316625202c3630,0x3930316625202c37,0x3b3330326625202c\n"
".quad 0x33662e627573090a,0x3730326625092032,0x2c3639316625202c,0x0a3b353032662520\n"
".quad 0x3233662e64616d09,0x2c38303266250920,0x202c393031662520,0x25202c3930316625\n"
".quad 0x61090a3b36303266,0x09203233662e6464,0x25202c3930326625,0x6625202c34303266\n"
".quad 0x6461090a3b373032,0x2509203233662e64,0x6625202c30313266,0x326625202c383032\n"
".quad 0x64616d090a3b3930,0x662509203233662e,0x336625202c313132,0x2c35336625202c35\n"
".quad 0x0a3b303132662520,0x3233662e64646109,0x2c32313266250920,0x202c393931662520\n"
".quad 0x090a3b3131326625,0x203233662e766f6d,0x25202c3338662509,0x73090a3b32313266\n"
".quad 0x09203233662e6275,0x25202c3331326625,0x6625202c32313266,0x7573090a3b393931\n"
".quad 0x2509203233662e62,0x326625202c353866,0x31326625202c3131,0x636f6c2e090a3b33\n"
".quad 0x0932323409363109,0x662e646461090a30,0x3132662509203233,0x3139316625202c34\n"
".quad 0x3b3231326625202c,0x33662e627573090a,0x3531326625092032,0x2c3431326625202c\n"
".quad 0x0a3b323132662520,0x3233662e62757309,0x2c36313266250920,0x202c313931662520\n"
".quad 0x090a3b3531326625,0x203233662e627573,0x202c373132662509,0x25202c3431326625\n"
".quad 0x73090a3b35313266,0x09203233662e6275,0x25202c3831326625,0x6625202c32313266\n"
".quad 0x6461090a3b373132,0x2509203233662e64,0x6625202c39313266,0x326625202c363132\n"
".quad 0x646461090a3b3831,0x662509203233662e,0x386625202c303232,0x3931326625202c35\n"
".quad 0x662e646461090a3b,0x3232662509203233,0x2c30366625202c31,0x0a3b303232662520\n"
".quad 0x3233662e64646109,0x2c32323266250920,0x202c343132662520,0x090a3b3132326625\n"
".quad 0x203233662e627573,0x202c333232662509,0x25202c3232326625,0x73090a3b34313266\n"
".quad 0x09203233662e6275,0x25202c3432326625,0x6625202c31323266,0x6c2e090a3b333232\n"
".quad 0x313409363109636f,0x627573090a300932,0x722509203233732e,0x38317225202c3831\n"
".quad 0x6f6d090a3b31202c,0x2509203233752e76,0x0a3b30202c303272,0x71652e7074657309\n"
".quad 0x702509203233732e,0x2c38317225202c35,0x090a3b3032722520,0x6172622035702540\n"
".quad 0x5f305f744c240920,0x2f200a3b32363938,0x203e706f6f6c3c2f,0x20666f2074726150\n"
".quad 0x646f6220706f6f6c,0x3420656e696c2079,0x64616568202c3331,0x64656c6562616c20\n"
".quad 0x38355f305f4c2420,0x2e646461090a3039,0x3266250920323366,0x32326625202c3532\n"
".quad 0x3232326625202c34,0x662e766f6d090a3b,0x3232662509203233,0x3830346630202c36\n"
".quad 0x20203b3030303030,0x090a34202f2f0920,0x2e746c2e70746573,0x3670250920323366\n"
".quad 0x2c3532326625202c,0x0a3b363232662520,0x7262203670254009,0x5f305f4c24092061\n"
".quad 0x4c240a3b30393835,0x323639385f305f74,0x365f305f4c240a3a,0x6c2e090a3a363431\n"
".quad 0x303709373109636f,0x2e766f6d090a3009,0x3272250920323373,0x73090a3b30202c31\n"
".quad 0x732e74672e707465,0x2c37702509203233,0x25202c3831722520,0x6c2e090a3b313272\n"
".quad 0x313409363109636f,0x2e646c090a300932,0x33732e6d61726170,0x2c37317225092032\n"
".quad 0x616475635f5f5b20,0x315a5f5f6d726170,0x626c65646e614d38,0x735f305344746f72\n"
".quad 0x686375365030316d,0x6666696969347261,0x695f536666666666,0x636e7572635f6269\n"
".quad 0x6f6c2e090a3b5d68,0x0930370937310963,0x732e627573090a30,0x3232722509203233\n"
".quad 0x202c37317225202c,0x6d090a3b38317225,0x09203233732e766f,0x3b30202c33327225\n"
".quad 0x732e706c6573090a,0x3432722509203233,0x202c32327225202c,0x7025202c33327225\n"
".quad 0x2e766f6d090a3b37,0x3272250920323375,0x73090a3b30202c35,0x732e71652e707465\n"
".quad 0x2c38702509203233,0x25202c3432722520,0x2540090a3b353272,0x0920617262203870\n"
".quad 0x31385f305f744c24,0x6f6c2e090a3b3439,0x0937370937310963,0x61702e646c090a30\n"
".quad 0x203233732e6d6172,0x5b202c3632722509,0x6170616475635f5f,0x4d38315a5f5f6d72\n"
".quad 0x6f72626c65646e61,0x316d735f30534474,0x7261686375365030,0x6666666669696934\n"
".quad 0x6269695f53666666,0x6974616d696e615f,0x5d656d6172466e6f,0x732e646461090a3b\n"
".quad 0x3732722509203233,0x202c36327225202c,0x6c090a3b34327225,0x2e6d617261702e64\n"
".quad 0x3832722509203875,0x6475635f5f5b202c,0x5a5f5f6d72617061,0x6c65646e614d3831\n"
".quad 0x5f305344746f7262,0x6375365030316d73,0x6669696934726168,0x5f53666666666666\n"
".quad 0x6f6c6f635f626969,0x090a3b5d302b7372,0x732e6f6c2e6c756d,0x3932722509203233\n"
".quad 0x202c37327225202c,0x63090a3b38327225,0x33752e38752e7476,0x2c30337225092032\n"
".quad 0x090a3b3932722520,0x09373109636f6c2e,0x646c090a30093837,0x752e6d617261702e\n"
".quad 0x2c31337225092038,0x616475635f5f5b20,0x315a5f5f6d726170,0x626c65646e614d38\n"
".quad 0x735f305344746f72,0x686375365030316d,0x6666696969347261,0x695f536666666666\n"
".quad 0x726f6c6f635f6269,0x6d090a3b5d312b73,0x33732e6f6c2e6c75,0x2c32337225092032\n"
".quad 0x25202c3732722520,0x7663090a3b313372,0x3233752e38752e74,0x202c333372250920\n"
".quad 0x2e090a3b32337225,0x3709373109636f6c,0x2e646c090a300939,0x38752e6d61726170\n"
".quad 0x202c343372250920,0x70616475635f5f5b,0x38315a5f5f6d7261,0x72626c65646e614d\n"
".quad 0x6d735f305344746f,0x6168637536503031,0x6666666969693472,0x69695f5366666666\n"
".quad 0x73726f6c6f635f62,0x756d090a3b5d322b,0x3233732e6f6c2e6c,0x202c353372250920\n"
".quad 0x7225202c37327225,0x747663090a3b3433,0x203233752e38752e,0x25202c3633722509\n"
".quad 0x7262090a3b353372,0x240920696e752e61,0x3339375f305f744c,0x305f744c240a3b38\n"
".quad 0x090a3a343931385f,0x09373109636f6c2e,0x6f6d090a30093338,0x2509203233752e76\n"
".quad 0x0a3b30202c363372,0x3233752e766f6d09,0x202c333372250920,0x2e766f6d090a3b30\n"
".quad 0x3372250920323375,0x4c240a3b30202c30,0x383339375f305f74,0x09636f6c2e090a3a\n"
".quad 0x0a30093535093731,0x617261702e646c09,0x2509203233732e6d,0x635f5f5b202c3772\n"
".quad 0x5f6d726170616475,0x646e614d38315a5f,0x5344746f72626c65,0x365030316d735f30\n"
".quad 0x6969347261686375,0x6666666666666669,0x6d695f6269695f53,0x090a3b5d57656761\n"
".quad 0x09373109636f6c2e,0x756d090a30093338,0x3233732e6f6c2e6c,0x202c373372250920\n"
".quad 0x367225202c377225,0x732e646461090a3b,0x3833722509203233,0x202c37337225202c\n"
".quad 0x756d090a3b347225,0x3233752e6f6c2e6c,0x202c393372250920,0x3b34202c38337225\n"
".quad 0x36752e747663090a,0x2509203233752e34,0x337225202c316472,0x702e646c090a3b39\n"
".quad 0x3436752e6d617261,0x202c326472250920,0x70616475635f5f5b,0x38315a5f5f6d7261\n"
".quad 0x72626c65646e614d,0x6d735f305344746f,0x6168637536503031,0x6666666969693472\n"
".quad 0x69695f5366666666,0x0a3b5d7473645f62,0x3436752e64646109,0x202c336472250920\n"
".quad 0x7225202c31647225,0x2e646c090a3b3264,0x33732e6d61726170,0x2c30347225092032\n"
".quad 0x616475635f5f5b20,0x315a5f5f6d726170,0x626c65646e614d38,0x735f305344746f72\n"
".quad 0x686375365030316d,0x6666696969347261,0x695f536666666666,0x656d6172665f6269\n"
".quad 0x2e766f6d090a3b5d,0x3472250920323375,0x73090a3b30202c31,0x732e656e2e707465\n"
".quad 0x2c39702509203233,0x25202c3034722520,0x2540090a3b313472,0x0920617262203970\n"
".quad 0x37385f305f744c24,0x6f6c2e090a3b3630,0x0930390937310963,0x752e766f6d090a30\n"
".quad 0x3234722509203233,0x7473090a3b30202c,0x2e6c61626f6c672e,0x5b092038752e3476\n"
".quad 0x2c5d302b33647225,0x252c303372257b20,0x363372252c333372,0x0a3b7d323472252c\n"
".quad 0x696e752e61726209,0x5f305f744c240920,0x4c240a3b30353438,0x363037385f305f74\n"
".quad 0x09636f6c2e090a3a,0x0a30093338093731,0x617261702e646c09,0x2509203233732e6d\n"
".quad 0x5f5f5b202c303472,0x6d72617061647563,0x6e614d38315a5f5f,0x44746f72626c6564\n"
".quad 0x5030316d735f3053,0x6934726168637536,0x6666666666666969,0x665f6269695f5366\n"
".quad 0x090a3b5d656d6172,0x09373109636f6c2e,0x6461090a30093439,0x2509203233732e64\n"
".quad 0x347225202c333472,0x73090a3b31202c30,0x09203233732e7268,0x7225202c34347225\n"
".quad 0x0a3b3133202c3334,0x3233732e766f6d09,0x202c353472250920,0x2e646e61090a3b31\n"
".quad 0x3472250920323362,0x2c34347225202c36,0x090a3b3534722520,0x203233732e646461\n"
".quad 0x25202c3734722509,0x347225202c363472,0x2e726873090a3b33,0x3472250920323373\n"
".quad 0x2c37347225202c38,0x2e646c090a3b3120,0x762e6c61626f6c67,0x257b092038752e34\n"
".quad 0x303572252c393472,0x7d5f2c313572252c,0x2b336472255b202c,0x6c756d090a3b5d30\n"
".quad 0x203233732e6f6c2e,0x25202c3235722509,0x347225202c303472,0x2e646461090a3b39\n"
".quad 0x3572250920323373,0x2c30337225202c33,0x090a3b3235722520,0x203233732e646461\n"
".quad 0x25202c3435722509,0x357225202c383472,0x2e766964090a3b33,0x3572250920323373\n"
".quad 0x2c34357225202c35,0x090a3b3334722520,0x09373109636f6c2e,0x756d090a30093539\n"
".quad 0x3233732e6f6c2e6c,0x202c363572250920,0x7225202c30347225,0x646461090a3b3035\n"
".quad 0x722509203233732e,0x33337225202c3735,0x0a3b36357225202c,0x3233732e64646109\n"
".quad 0x202c383572250920,0x7225202c38347225,0x766964090a3b3735,0x722509203233732e\n"
".quad 0x38357225202c3935,0x0a3b33347225202c,0x626f6c672e747309,0x38752e32762e6c61\n"
".quad 0x2b336472255b0920,0x3572257b202c5d30,0x3b7d393572252c35,0x3109636f6c2e090a\n"
".quad 0x090a300936390937,0x732e6f6c2e6c756d,0x3036722509203233,0x202c30347225202c\n"
".quad 0x61090a3b31357225,0x09203233732e6464,0x7225202c31367225,0x30367225202c3633\n"
".quad 0x732e646461090a3b,0x3236722509203233,0x202c38347225202c,0x64090a3b31367225\n"
".quad 0x09203233732e7669,0x7225202c33367225,0x33347225202c3236,0x6c672e7473090a3b\n"
".quad 0x2038752e6c61626f,0x322b336472255b09,0x3b33367225202c5d,0x385f305f744c240a\n"
".quad 0x744c240a3a303534,0x3a343139365f305f,0x3109636f6c2e090a,0x090a300939390937\n"
".quad 0x4c240a3b74697865,0x5a5f5f646e655744,0x6c65646e614d3831,0x5f305344746f7262\n"
".quad 0x6375365030316d73,0x6669696934726168,0x5f53666666666666,0x207d090a3a626969\n"
".quad 0x4d38315a5f202f2f,0x6f72626c65646e61,0x316d735f30534474,0x7261686375365030\n"
".quad 0x6666666669696934,0x6269695f53666666,0x72746e652e090a0a,0x614d38315a5f2079\n"
".quad 0x746f72626c65646e,0x30316d735f315344,0x3472616863753650,0x6666666666696969\n"
".quad 0x206269695f536666,0x7261702e09090a28,0x203436752e206d61,0x6170616475635f5f\n"
".quad 0x4d38315a5f5f6d72,0x6f72626c65646e61,0x316d735f31534474,0x7261686375365030\n"
".quad 0x6666666669696934,0x6269695f53666666,0x09090a2c7473645f,0x2e206d617261702e\n"
".quad 0x75635f5f20323373,0x5f5f6d7261706164,0x65646e614d38315a,0x315344746f72626c\n"
".quad 0x75365030316d735f,0x6969693472616863,0x5366666666666666,0x616d695f6269695f\n"
".quad 0x2e09090a2c576567,0x732e206d61726170,0x6475635f5f203233,0x5a5f5f6d72617061\n"
".quad 0x6c65646e614d3831,0x5f315344746f7262,0x6375365030316d73,0x6669696934726168\n"
".quad 0x5f53666666666666,0x67616d695f626969,0x702e09090a2c4865,0x33732e206d617261\n"
".quad 0x616475635f5f2032,0x315a5f5f6d726170,0x626c65646e614d38,0x735f315344746f72\n"
".quad 0x686375365030316d,0x6666696969347261,0x695f536666666666,0x636e7572635f6269\n"
".quad 0x61702e09090a2c68,0x3233662e206d6172,0x70616475635f5f20,0x38315a5f5f6d7261\n"
".quad 0x72626c65646e614d,0x6d735f315344746f,0x6168637536503031,0x6666666969693472\n"
".quad 0x69695f5366666666,0x2c3066664f785f62,0x617261702e09090a,0x5f203233662e206d\n"
".quad 0x726170616475635f,0x614d38315a5f5f6d,0x746f72626c65646e,0x30316d735f315344\n"
".quad 0x3472616863753650,0x6666666666696969,0x5f6269695f536666,0x090a2c3166664f78\n"
".quad 0x206d617261702e09,0x635f5f203233662e,0x5f6d726170616475,0x646e614d38315a5f\n"
".quad 0x5344746f72626c65,0x365030316d735f31,0x6969347261686375,0x6666666666666669\n"
".quad 0x4f795f6269695f53,0x2e09090a2c306666,0x662e206d61726170,0x6475635f5f203233\n"
".quad 0x5a5f5f6d72617061,0x6c65646e614d3831,0x5f315344746f7262,0x6375365030316d73\n"
".quad 0x6669696934726168,0x5f53666666666666,0x66664f795f626969,0x61702e09090a2c31\n"
".quad 0x3233662e206d6172,0x70616475635f5f20,0x38315a5f5f6d7261,0x72626c65646e614d\n"
".quad 0x6d735f315344746f,0x6168637536503031,0x6666666969693472,0x69695f5366666666\n"
".quad 0x090a2c504a785f62,0x206d617261702e09,0x635f5f203233662e,0x5f6d726170616475\n"
".quad 0x646e614d38315a5f,0x5344746f72626c65,0x365030316d735f31,0x6969347261686375\n"
".quad 0x6666666666666669,0x4a795f6269695f53,0x61702e09090a2c50,0x3233662e206d6172\n"
".quad 0x70616475635f5f20,0x38315a5f5f6d7261,0x72626c65646e614d,0x6d735f315344746f\n"
".quad 0x6168637536503031,0x6666666969693472,0x69695f5366666666,0x2c656c6163735f62\n"
".quad 0x617261702e09090a,0x6e67696c612e206d,0x5f2038622e203420,0x726170616475635f\n"
".quad 0x614d38315a5f5f6d,0x746f72626c65646e,0x30316d735f315344,0x3472616863753650\n"
".quad 0x6666666666696969,0x5f6269695f536666,0x345b73726f6c6f63,0x61702e09090a2c5d\n"
".quad 0x3233732e206d6172,0x70616475635f5f20,0x38315a5f5f6d7261,0x72626c65646e614d\n"
".quad 0x6d735f315344746f,0x6168637536503031,0x6666666969693472,0x69695f5366666666\n"
".quad 0x2c656d6172665f62,0x617261702e09090a,0x5f203233732e206d,0x726170616475635f\n"
".quad 0x614d38315a5f5f6d,0x746f72626c65646e,0x30316d735f315344,0x3472616863753650\n"
".quad 0x6666666666696969,0x5f6269695f536666,0x6f6974616d696e61,0x0a2c656d6172466e\n"
".quad 0x6d617261702e0909,0x635f5f2038732e20,0x5f6d726170616475,0x646e614d38315a5f\n"
".quad 0x5344746f72626c65,0x365030316d735f31,0x6969347261686375,0x6666666666666669\n"
".quad 0x73695f6269695f53,0x2e090a7b090a294a,0x3631752e20676572,0x3b3e363c68722520\n"
".quad 0x2e206765722e090a,0x313c722520323375,0x722e090a3b3e3235,0x203436752e206765\n"
".quad 0x0a3b3e393c647225,0x662e206765722e09,0x32323c6625203233,0x65722e090a3b3e38\n"
".quad 0x20646572702e2067,0x0a3b3e35313c7025,0x373109636f6c2e09,0x240a300931363109\n"
".quad 0x6e6967656257444c,0x6e614d38315a5f5f,0x44746f72626c6564,0x5030316d735f3153\n"
".quad 0x6934726168637536,0x6666666666666969,0x0a3a6269695f5366,0x3631752e766f6d09\n"
".quad 0x202c316872250920,0x782e646961746325,0x752e766f6d090a3b,0x3268722509203631\n"
".quad 0x2e6469746e25202c,0x2e6c756d090a3b78,0x3631752e65646977,0x25202c3172250920\n"
".quad 0x687225202c316872,0x2e766f6d090a3b32,0x6872250920363175,0x6961746325202c33\n"
".quad 0x6f6d090a3b792e64,0x2509203631752e76,0x746e25202c346872,0x6d090a3b792e6469\n"
".quad 0x2e656469772e6c75,0x3272250920363175,0x202c33687225202c,0x63090a3b34687225\n"
".quad 0x752e3233752e7476,0x2c33722509203631,0x3b782e6469742520,0x33752e646461090a\n"
".quad 0x202c347225092032,0x317225202c337225,0x752e747663090a3b,0x09203631752e3233\n"
".quad 0x697425202c357225,0x6461090a3b792e64,0x2509203233752e64,0x2c357225202c3672\n"
".quad 0x6c090a3b32722520,0x2e6d617261702e64,0x3772250920323373,0x6475635f5f5b202c\n"
".quad 0x5a5f5f6d72617061,0x6c65646e614d3831,0x5f315344746f7262,0x6375365030316d73\n"
".quad 0x6669696934726168,0x5f53666666666666,0x67616d695f626969,0x646c090a3b5d4865\n"
".quad 0x732e6d617261702e,0x2c38722509203233,0x616475635f5f5b20,0x315a5f5f6d726170\n"
".quad 0x626c65646e614d38,0x735f315344746f72,0x686375365030316d,0x6666696969347261\n"
".quad 0x695f536666666666,0x6567616d695f6269,0x746573090a3b5d57,0x2e3233752e74672e\n"
".quad 0x3972250920323373,0x25202c377225202c,0x67656e090a3b3672,0x722509203233732e\n"
".quad 0x3b397225202c3031,0x74672e746573090a,0x3233732e3233752e,0x202c313172250920\n"
".quad 0x347225202c387225,0x732e67656e090a3b,0x3231722509203233,0x0a3b31317225202c\n"
".quad 0x3233622e646e6109,0x202c333172250920,0x7225202c30317225,0x766f6d090a3b3231\n"
".quad 0x722509203233752e,0x090a3b30202c3431,0x2e71652e70746573,0x3170250920323373\n"
".quad 0x202c33317225202c,0x40090a3b34317225,0x2061726220317025,0x315f315f744c2409\n"
".quad 0x6c090a3b32343636,0x2e6d617261702e64,0x3872250920323373,0x6475635f5f5b202c\n"
".quad 0x5a5f5f6d72617061,0x6c65646e614d3831,0x5f315344746f7262,0x6375365030316d73\n"
".quad 0x6669696934726168,0x5f53666666666666,0x67616d695f626969,0x6c2e090a3b5d5765\n"
".quad 0x363109373109636f,0x6c756d090a300939,0x203233732e6f6c2e,0x25202c3531722509\n"
".quad 0x3b367225202c3872,0x33732e646461090a,0x2c36317225092032,0x25202c3531722520\n"
".quad 0x2e646c090a3b3472,0x36752e6d61726170,0x2c31647225092034,0x616475635f5f5b20\n"
".quad 0x315a5f5f6d726170,0x626c65646e614d38,0x735f315344746f72,0x686375365030316d\n"
".quad 0x6666696969347261,0x695f536666666666,0x3b5d7473645f6269,0x6f6c2e6c756d090a\n"
".quad 0x722509203233752e,0x36317225202c3731,0x7663090a3b34202c,0x33752e3436752e74\n"
".quad 0x2c32647225092032,0x090a3b3731722520,0x203436752e646461,0x25202c3364722509\n"
".quad 0x647225202c326472,0x672e646c090a3b31,0x34762e6c61626f6c,0x72257b092038752e\n"
".quad 0x2c393172252c3831,0x2c7d5f2c30327225,0x302b336472255b20,0x2e766f6d090a3b5d\n"
".quad 0x3272250920323375,0x73090a3b30202c31,0x732e656c2e707465,0x2c32702509203233\n"
".quad 0x7225202c34722520,0x702540090a3b3132,0x2409206172622032,0x3834315f315f744c\n"
".quad 0x2e646c090a3b3035,0x762e6c61626f6c67,0x257b092038752e34,0x333272252c323272\n"
".quad 0x7d5f2c343272252c,0x2b336472255b202c,0x6c2e090a3b5d342d,0x373109373109636f\n"
".quad 0x627573090a300934,0x722509203233732e,0x34327225202c3532,0x0a3b30327225202c\n"
".quad 0x3233732e73626109,0x202c363272250920,0x6d090a3b35327225,0x09203233732e766f\n"
".quad 0x3031202c37327225,0x672e746573090a3b,0x33732e3233752e74,0x2c38327225092032\n"
".quad 0x25202c3632722520,0x656e090a3b373272,0x2509203233732e67,0x327225202c393272\n"
".quad 0x2e627573090a3b38,0x3372250920323373,0x2c32327225202c30,0x090a3b3831722520\n"
".quad 0x203233732e736261,0x25202c3133722509,0x6f6d090a3b303372,0x2509203233732e76\n"
".quad 0x3b3031202c323372,0x74672e746573090a,0x3233732e3233752e,0x202c333372250920\n"
".quad 0x7225202c31337225,0x67656e090a3b3233,0x722509203233732e,0x33337225202c3433\n"
".quad 0x732e627573090a3b,0x3533722509203233,0x202c33327225202c,0x61090a3b39317225\n"
".quad 0x09203233732e7362,0x7225202c36337225,0x766f6d090a3b3533,0x722509203233732e\n"
".quad 0x0a3b3031202c3733,0x2e74672e74657309,0x203233732e323375,0x25202c3833722509\n"
".quad 0x337225202c363372,0x2e67656e090a3b37,0x3372250920323373,0x3b38337225202c39\n"
".quad 0x3233622e726f090a,0x202c303472250920,0x7225202c34337225,0x2e726f090a3b3933\n"
".quad 0x3472250920323362,0x2c39327225202c31,0x090a3b3034722520,0x20696e752e617262\n"
".quad 0x315f315f744c2409,0x4c240a3b34393534,0x353834315f315f74,0x2e766f6d090a3a30\n"
".quad 0x3472250920323373,0x4c240a3b30202c31,0x393534315f315f74,0x2e646461090a3a34\n"
".quad 0x3472250920323373,0x202c347225202c32,0x636f6c2e090a3b31,0x0931363109373109\n"
".quad 0x61702e646c090a30,0x203233732e6d6172,0x5f5b202c38722509,0x726170616475635f\n"
".quad 0x614d38315a5f5f6d,0x746f72626c65646e,0x30316d735f315344,0x3472616863753650\n"
".quad 0x6666666666696969,0x5f6269695f536666,0x3b5d576567616d69,0x3109636f6c2e090a\n"
".quad 0x0a30093437310937,0x656c2e7074657309,0x702509203233732e,0x202c387225202c33\n"
".quad 0x40090a3b32347225,0x2061726220337025,0x315f315f744c2409,0x6c090a3b36303135\n"
".quad 0x6c61626f6c672e64,0x092038752e34762e,0x72252c333472257b,0x2c353472252c3434\n"
".quad 0x6472255b202c7d5f,0x2e090a3b5d342b33,0x3109373109636f6c,0x7573090a30093637\n"
".quad 0x2509203233732e62,0x347225202c363472,0x3b30327225202c35,0x33732e736261090a\n"
".quad 0x2c37347225092032,0x090a3b3634722520,0x203233732e766f6d,0x31202c3834722509\n"
".quad 0x2e746573090a3b30,0x732e3233752e7467,0x3934722509203233,0x202c37347225202c\n"
".quad 0x6e090a3b38347225,0x09203233732e6765,0x7225202c30357225,0x627573090a3b3934\n"
".quad 0x722509203233732e,0x33347225202c3135,0x0a3b38317225202c,0x3233732e73626109\n"
".quad 0x202c323572250920,0x6d090a3b31357225,0x09203233732e766f,0x3031202c33357225\n"
".quad 0x672e746573090a3b,0x33732e3233752e74,0x2c34357225092032,0x25202c3235722520\n"
".quad 0x656e090a3b333572,0x2509203233732e67,0x357225202c353572,0x2e627573090a3b34\n"
".quad 0x3572250920323373,0x2c34347225202c36,0x090a3b3931722520,0x203233732e736261\n"
".quad 0x25202c3735722509,0x6f6d090a3b363572,0x2509203233732e76,0x3b3031202c383572\n"
".quad 0x74672e746573090a,0x3233732e3233752e,0x202c393572250920,0x7225202c37357225\n"
".quad 0x67656e090a3b3835,0x722509203233732e,0x39357225202c3036,0x33622e726f090a3b\n"
".quad 0x2c31367225092032,0x25202c3535722520,0x726f090a3b303672,0x722509203233622e\n"
".quad 0x30357225202c3236,0x0a3b31367225202c,0x3233732e64646109,0x202c313472250920\n"
".quad 0x7225202c31347225,0x5f744c240a3b3236,0x3a36303135315f31,0x33752e766f6d090a\n"
".quad 0x2c33367225092032,0x746573090a3b3020,0x3233732e656c2e70,0x25202c3470250920\n"
".quad 0x33367225202c3672,0x2034702540090a3b,0x744c240920617262,0x38313635315f315f\n"
".quad 0x09636f6c2e090a3b,0x3009313631093731,0x7261702e646c090a,0x09203233732e6d61\n"
".quad 0x5f5f5b202c387225,0x6d72617061647563,0x6e614d38315a5f5f,0x44746f72626c6564\n"
".quad 0x5030316d735f3153,0x6934726168637536,0x6666666666666969,0x695f6269695f5366\n"
".quad 0x0a3b5d576567616d,0x373109636f6c2e09,0x090a300938373109,0x203233732e627573\n"
".quad 0x25202c3436722509,0x387225202c363172,0x6c2e6c756d090a3b,0x2509203233752e6f\n"
".quad 0x367225202c353672,0x63090a3b34202c34,0x752e3436752e7476,0x3464722509203233\n"
".quad 0x0a3b35367225202c,0x373109636f6c2e09,0x090a300939363109,0x6d617261702e646c\n"
".quad 0x722509203436752e,0x635f5f5b202c3164,0x5f6d726170616475,0x646e614d38315a5f\n"
".quad 0x5344746f72626c65,0x365030316d735f31,0x6969347261686375,0x6666666666666669\n"
".quad 0x73645f6269695f53,0x6f6c2e090a3b5d74,0x3837310937310963,0x2e646461090a3009\n"
".quad 0x6472250920343675,0x2c34647225202c35,0x090a3b3164722520,0x61626f6c672e646c\n"
".quad 0x2038752e34762e6c,0x252c363672257b09,0x383672252c373672,0x72255b202c7d5f2c\n"
".quad 0x090a3b5d302b3564,0x203233732e627573,0x25202c3936722509,0x327225202c383672\n"
".quad 0x2e736261090a3b30,0x3772250920323373,0x3b39367225202c30,0x33732e766f6d090a\n"
".quad 0x2c31377225092032,0x6573090a3b303120,0x3233752e74672e74,0x722509203233732e\n"
".quad 0x30377225202c3237,0x0a3b31377225202c,0x3233732e67656e09,0x202c333772250920\n"
".quad 0x73090a3b32377225,0x09203233732e6275,0x7225202c34377225,0x38317225202c3636\n"
".quad 0x732e736261090a3b,0x3537722509203233,0x0a3b34377225202c,0x3233732e766f6d09\n"
".quad 0x202c363772250920,0x746573090a3b3031,0x2e3233752e74672e,0x3772250920323373\n"
".quad 0x2c35377225202c37,0x090a3b3637722520,0x203233732e67656e,0x25202c3837722509\n"
".quad 0x7573090a3b373772,0x2509203233732e62,0x367225202c393772,0x3b39317225202c37\n"
".quad 0x33732e736261090a,0x2c30387225092032,0x090a3b3937722520,0x203233732e766f6d\n"
".quad 0x31202c3138722509,0x2e746573090a3b30,0x732e3233752e7467,0x3238722509203233\n"
".quad 0x202c30387225202c,0x6e090a3b31387225,0x09203233732e6765,0x7225202c33387225\n"
".quad 0x2e726f090a3b3238,0x3872250920323362,0x2c38377225202c34,0x090a3b3338722520\n"
".quad 0x09203233622e726f,0x7225202c35387225,0x34387225202c3337,0x732e646461090a3b\n"
".quad 0x3134722509203233,0x202c31347225202c,0x4c240a3b35387225,0x313635315f315f74\n"
".quad 0x2e646461090a3a38,0x3872250920323373,0x202c367225202c36,0x636f6c2e090a3b31\n"
".quad 0x0931363109373109,0x61702e646c090a30,0x203233732e6d6172,0x5f5b202c37722509\n"
".quad 0x726170616475635f,0x614d38315a5f5f6d,0x746f72626c65646e,0x30316d735f315344\n"
".quad 0x3472616863753650,0x6666666666696969,0x5f6269695f536666,0x3b5d486567616d69\n"
".quad 0x3109636f6c2e090a,0x0a30093837310937,0x656c2e7074657309,0x702509203233732e\n"
".quad 0x202c377225202c35,0x40090a3b36387225,0x2061726220357025,0x315f315f744c2409\n"
".quad 0x2e090a3b30333136,0x3109373109636f6c,0x646c090a30093136,0x732e6d617261702e\n"
".quad 0x2c38722509203233,0x616475635f5f5b20,0x315a5f5f6d726170,0x626c65646e614d38\n"
".quad 0x735f315344746f72,0x686375365030316d,0x6666696969347261,0x695f536666666666\n"
".quad 0x6567616d695f6269,0x6f6c2e090a3b5d57,0x3038310937310963,0x2e646461090a3009\n"
".quad 0x3872250920323373,0x2c36317225202c37,0x6d090a3b38722520,0x33752e6f6c2e6c75\n"
".quad 0x2c38387225092032,0x34202c3738722520,0x752e747663090a3b,0x09203233752e3436\n"
".quad 0x7225202c36647225,0x6f6c2e090a3b3838,0x3936310937310963,0x702e646c090a3009\n"
".quad 0x3436752e6d617261,0x202c316472250920,0x70616475635f5f5b,0x38315a5f5f6d7261\n"
".quad 0x72626c65646e614d,0x6d735f315344746f,0x6168637536503031,0x6666666969693472\n"
".quad 0x69695f5366666666,0x0a3b5d7473645f62,0x373109636f6c2e09,0x090a300930383109\n"
".quad 0x203436752e646461,0x25202c3764722509,0x647225202c366472,0x672e646c090a3b31\n"
".quad 0x34762e6c61626f6c,0x72257b092038752e,0x2c303972252c3938,0x2c7d5f2c31397225\n"
".quad 0x302b376472255b20,0x2e627573090a3b5d,0x3972250920323373,0x2c31397225202c32\n"
".quad 0x090a3b3032722520,0x203233732e736261,0x25202c3339722509,0x6f6d090a3b323972\n"
".quad 0x2509203233732e76,0x3b3031202c343972,0x74672e746573090a,0x3233732e3233752e\n"
".quad 0x202c353972250920,0x7225202c33397225,0x67656e090a3b3439,0x722509203233732e\n"
".quad 0x35397225202c3639,0x732e627573090a3b,0x3739722509203233,0x202c39387225202c\n"
".quad 0x61090a3b38317225,0x09203233732e7362,0x7225202c38397225,0x766f6d090a3b3739\n"
".quad 0x722509203233732e,0x0a3b3031202c3939,0x2e74672e74657309,0x203233732e323375\n"
".quad 0x202c303031722509,0x7225202c38397225,0x67656e090a3b3939,0x722509203233732e\n"
".quad 0x317225202c313031,0x627573090a3b3030,0x722509203233732e,0x397225202c323031\n"
".quad 0x3b39317225202c30,0x33732e736261090a,0x3330317225092032,0x3b3230317225202c\n"
".quad 0x33732e766f6d090a,0x3430317225092032,0x73090a3b3031202c,0x33752e74672e7465\n"
".quad 0x2509203233732e32,0x7225202c35303172,0x317225202c333031,0x67656e090a3b3430\n"
".quad 0x722509203233732e,0x317225202c363031,0x2e726f090a3b3530,0x3172250920323362\n"
".quad 0x30317225202c3730,0x3630317225202c31,0x33622e726f090a3b,0x3830317225092032\n"
".quad 0x202c36397225202c,0x090a3b3730317225,0x203233732e646461,0x25202c3134722509\n"
".quad 0x317225202c313472,0x5f744c240a3b3830,0x3a30333136315f31,0x33752e766f6d090a\n"
".quad 0x3930317225092032,0x6573090a3b30202c,0x33732e71652e7074,0x202c367025092032\n"
".quad 0x7225202c31347225,0x2540090a3b393031,0x0920617262203670,0x36315f315f744c24\n"
".quad 0x6c2e090a3b323436,0x383109373109636f,0x747663090a300937,0x2e3233662e6e722e\n"
".quad 0x3166250920323373,0x090a3b347225202c,0x6d617261702e646c,0x662509203233662e\n"
".quad 0x75635f5f5b202c32,0x5f5f6d7261706164,0x65646e614d38315a,0x315344746f72626c\n"
".quad 0x75365030316d735f,0x6969693472616863,0x5366666666666666,0x6163735f6269695f\n"
".quad 0x756d090a3b5d656c,0x2509203233662e6c,0x2c316625202c3366,0x6c090a3b32662520\n"
".quad 0x2e6d617261702e64,0x3466250920323366,0x6475635f5f5b202c,0x5a5f5f6d72617061\n"
".quad 0x6c65646e614d3831,0x5f315344746f7262,0x6375365030316d73,0x6669696934726168\n"
".quad 0x5f53666666666666,0x66664f785f626969,0x646461090a3b5d30,0x662509203233662e\n"
".quad 0x202c336625202c35,0x7573090a3b346625,0x2509203233662e62,0x2c356625202c3666\n"
".quad 0x73090a3b33662520,0x09203233662e6275,0x346625202c376625,0x090a3b366625202c\n"
".quad 0x203233662e627573,0x6625202c38662509,0x0a3b366625202c35,0x3233662e62757309\n"
".quad 0x25202c3966250920,0x3b386625202c3366,0x33662e646461090a,0x2c30316625092032\n"
".quad 0x6625202c37662520,0x702e646c090a3b39,0x3233662e6d617261,0x202c313166250920\n"
".quad 0x70616475635f5f5b,0x38315a5f5f6d7261,0x72626c65646e614d,0x6d735f315344746f\n"
".quad 0x6168637536503031,0x6666666969693472,0x69695f5366666666,0x5d3166664f785f62\n"
".quad 0x662e646461090a3b,0x3231662509203233,0x202c31316625202c,0x61090a3b30316625\n"
".quad 0x09203233662e6464,0x6625202c33316625,0x3b32316625202c35,0x33662e627573090a\n"
".quad 0x2c34316625092032,0x25202c3331662520,0x627573090a3b3566,0x662509203233662e\n"
".quad 0x32316625202c3531,0x0a3b34316625202c,0x373109636f6c2e09,0x090a300938383109\n"
".quad 0x662e6e722e747663,0x09203233732e3233,0x7225202c36316625,0x2e6c756d090a3b36\n"
".quad 0x3166250920323366,0x2c36316625202c37,0x6c090a3b32662520,0x2e6d617261702e64\n"
".quad 0x3166250920323366,0x75635f5f5b202c38,0x5f5f6d7261706164,0x65646e614d38315a\n"
".quad 0x315344746f72626c,0x75365030316d735f,0x6969693472616863,0x5366666666666666\n"
".quad 0x664f795f6269695f,0x6461090a3b5d3066,0x2509203233662e64,0x316625202c393166\n"
".quad 0x3b38316625202c37,0x33662e627573090a,0x2c30326625092032,0x25202c3931662520\n"
".quad 0x7573090a3b373166,0x2509203233662e62,0x316625202c313266,0x3b30326625202c38\n"
".quad 0x33662e627573090a,0x2c32326625092032,0x25202c3931662520,0x7573090a3b303266\n"
".quad 0x2509203233662e62,0x316625202c333266,0x3b32326625202c37,0x33662e646461090a\n"
".quad 0x2c34326625092032,0x25202c3132662520,0x646c090a3b333266,0x662e6d617261702e\n"
".quad 0x3532662509203233,0x6475635f5f5b202c,0x5a5f5f6d72617061,0x6c65646e614d3831\n"
".quad 0x5f315344746f7262,0x6375365030316d73,0x6669696934726168,0x5f53666666666666\n"
".quad 0x66664f795f626969,0x646461090a3b5d31,0x662509203233662e,0x35326625202c3632\n"
".quad 0x0a3b34326625202c,0x3233662e64646109,0x202c373266250920,0x6625202c39316625\n"
".quad 0x627573090a3b3632,0x662509203233662e,0x37326625202c3832,0x0a3b39316625202c\n"
".quad 0x3233662e62757309,0x202c393266250920,0x6625202c36326625,0x6f6c2e090a3b3832\n"
".quad 0x3139310937310963,0x702e646c090a3009,0x2038732e6d617261,0x202c303131722509\n"
".quad 0x70616475635f5f5b,0x38315a5f5f6d7261,0x72626c65646e614d,0x6d735f315344746f\n"
".quad 0x6168637536503031,0x6666666969693472,0x69695f5366666666,0x0a3b5d4a73695f62\n"
".quad 0x3233752e766f6d09,0x2c31313172250920,0x746573090a3b3020,0x3233732e71652e70\n"
".quad 0x25202c3770250920,0x7225202c30313172,0x2540090a3b313131,0x0920617262203770\n"
".quad 0x37315f315f744c24,0x6c2e090a3b303134,0x383309363109636f,0x2e646c090a300935\n"
".quad 0x33662e6d61726170,0x2c30336625092032,0x616475635f5f5b20,0x315a5f5f6d726170\n"
".quad 0x626c65646e614d38,0x735f315344746f72,0x686375365030316d,0x6666696969347261\n"
".quad 0x695f536666666666,0x3b5d504a785f6269,0x3109636f6c2e090a,0x0a30093738330936\n"
".quad 0x617261702e646c09,0x2509203233662e6d,0x5f5f5b202c313366,0x6d72617061647563\n"
".quad 0x6e614d38315a5f5f,0x44746f72626c6564,0x5030316d735f3153,0x6934726168637536\n"
".quad 0x6666666666666969,0x795f6269695f5366,0x6c2e090a3b5d504a,0x383309363109636f\n"
".quad 0x766f6d090a300939,0x662509203233662e,0x37326625202c3233,0x09636f6c2e090a3b\n"
".quad 0x3009303933093631,0x33662e766f6d090a,0x2c33336625092032,0x090a3b3932662520\n"
".quad 0x09363109636f6c2e,0x6d090a3009313933,0x09203233662e766f,0x6625202c34336625\n"
".quad 0x6f6c2e090a3b3331,0x3239330936310963,0x2e766f6d090a3009,0x3366250920323366\n"
".quad 0x3b35316625202c35,0x3109636f6c2e090a,0x0a30093339330936,0x3233662e766f6d09\n"
".quad 0x202c363366250920,0x3430303036346630,0x09202020203b3030,0x0a33393138202f2f\n"
".quad 0x3233662e6c756d09,0x202c373366250920,0x6625202c37326625,0x627573090a3b3633\n"
".quad 0x662509203233662e,0x37336625202c3833,0x0a3b37326625202c,0x3233662e62757309\n"
".quad 0x202c393366250920,0x6625202c37336625,0x627573090a3b3833,0x662509203233662e\n"
".quad 0x37326625202c3034,0x0a3b39336625202c,0x3233662e6c756d09,0x202c313466250920\n"
".quad 0x6625202c37326625,0x6c756d090a3b3732,0x662509203233662e,0x37326625202c3234\n"
".quad 0x0a3b39326625202c,0x3233662e64616d09,0x202c333466250920,0x6625202c37326625\n"
".quad 0x32346625202c3932,0x662e646461090a3b,0x3434662509203233,0x202c31346625202c\n"
".quad 0x6d090a3b33346625,0x09203233662e6c75,0x6625202c35346625,0x39336625202c3933\n"
".quad 0x662e627573090a3b,0x3634662509203233,0x202c35346625202c,0x73090a3b31346625\n"
".quad 0x09203233662e6275,0x6625202c37346625,0x31346625202c3434,0x662e64616d090a3b\n"
".quad 0x3834662509203233,0x202c39336625202c,0x6625202c30346625,0x627573090a3b3634\n"
".quad 0x662509203233662e,0x34346625202c3934,0x0a3b37346625202c,0x3233662e62757309\n"
".quad 0x202c303566250920,0x6625202c33346625,0x64616d090a3b3734,0x662509203233662e\n"
".quad 0x39336625202c3135,0x202c30346625202c,0x73090a3b38346625,0x09203233662e6275\n"
".quad 0x6625202c32356625,0x39346625202c3134,0x662e64616d090a3b,0x3335662509203233\n"
".quad 0x202c30346625202c,0x6625202c30346625,0x646461090a3b3135,0x662509203233662e\n"
".quad 0x30356625202c3435,0x0a3b32356625202c,0x3233662e64646109,0x202c353566250920\n"
".quad 0x6625202c33356625,0x64616d090a3b3435,0x662509203233662e,0x39326625202c3635\n"
".quad 0x202c39326625202c,0x61090a3b35356625,0x09203233662e6464,0x6625202c37356625\n"
".quad 0x36356625202c3434,0x662e766f6d090a3b,0x3835662509203233,0x0a3b37356625202c\n"
".quad 0x3233662e62757309,0x202c393566250920,0x6625202c37356625,0x627573090a3b3434\n"
".quad 0x662509203233662e,0x36356625202c3036,0x0a3b39356625202c,0x363109636f6c2e09\n"
".quad 0x090a300934393309,0x203233662e766f6d,0x30202c3136662509,0x3034303030363466\n"
".quad 0x2f09202020203b30,0x090a33393138202f,0x203233662e6c756d,0x25202c3236662509\n"
".quad 0x366625202c333166,0x2e627573090a3b31,0x3666250920323366,0x2c32366625202c33\n"
".quad 0x090a3b3331662520,0x203233662e627573,0x25202c3436662509,0x366625202c323666\n"
".quad 0x2e627573090a3b33,0x3666250920323366,0x2c33316625202c35,0x090a3b3436662520\n"
".quad 0x203233662e6c756d,0x25202c3636662509,0x316625202c333166,0x2e6c756d090a3b33\n"
".quad 0x3666250920323366,0x2c33316625202c37,0x090a3b3531662520,0x203233662e64616d\n"
".quad 0x25202c3836662509,0x316625202c333166,0x3b37366625202c35,0x33662e646461090a\n"
".quad 0x2c39366625092032,0x25202c3636662520,0x756d090a3b383666,0x2509203233662e6c\n"
".quad 0x366625202c303766,0x3b34366625202c34,0x33662e627573090a,0x2c31376625092032\n"
".quad 0x25202c3037662520,0x7573090a3b363666,0x2509203233662e62,0x366625202c323766\n"
".quad 0x3b36366625202c39,0x33662e64616d090a,0x2c33376625092032,0x25202c3436662520\n"
".quad 0x376625202c353666,0x2e627573090a3b31,0x3766250920323366,0x2c39366625202c34\n"
".quad 0x090a3b3237662520,0x203233662e627573,0x25202c3537662509,0x376625202c383666\n"
".quad 0x2e64616d090a3b32,0x3766250920323366,0x2c34366625202c36,0x25202c3536662520\n"
".quad 0x7573090a3b333766,0x2509203233662e62,0x366625202c373766,0x3b34376625202c36\n"
".quad 0x33662e64616d090a,0x2c38376625092032,0x25202c3536662520,0x376625202c353666\n"
".quad 0x2e646461090a3b36,0x3766250920323366,0x2c35376625202c39,0x090a3b3737662520\n"
".quad 0x203233662e646461,0x25202c3038662509,0x376625202c383766,0x2e64616d090a3b39\n"
".quad 0x3866250920323366,0x2c35316625202c31,0x25202c3531662520,0x6461090a3b303866\n"
".quad 0x2509203233662e64,0x366625202c323866,0x3b31386625202c39,0x33662e766f6d090a\n"
".quad 0x2c33386625092032,0x090a3b3238662520,0x203233662e627573,0x25202c3438662509\n"
".quad 0x366625202c323866,0x2e627573090a3b39,0x3866250920323366,0x2c31386625202c35\n"
".quad 0x090a3b3438662520,0x203233662e766f6d,0x30202c3638662509,0x3030303030303066\n"
".quad 0x2f09202020203b30,0x766f6d090a30202f,0x662509203233662e,0x30306630202c3738\n"
".quad 0x203b303030303030,0x30202f2f09202020,0x6e752e617262090a,0x315f744c24092069\n"
".quad 0x0a3b34353137315f,0x37315f315f744c24,0x6c2e090a3a303134,0x393309363109636f\n"
".quad 0x766f6d090a300937,0x662509203233662e,0x33316625202c3033,0x09636f6c2e090a3b\n"
".quad 0x3009383933093631,0x33662e766f6d090a,0x2c37386625092032,0x090a3b3531662520\n"
".quad 0x09363109636f6c2e,0x6d090a3009393933,0x09203233662e766f,0x6625202c31336625\n"
".quad 0x6f6c2e090a3b3732,0x3030340936310963,0x2e766f6d090a3009,0x3866250920323366\n"
".quad 0x3b39326625202c36,0x3109636f6c2e090a,0x0a30093830340936,0x3233662e766f6d09\n"
".quad 0x202c353866250920,0x3030303030306630,0x09202020203b3030,0x6f6d090a30202f2f\n"
".quad 0x2509203233662e76,0x306630202c333866,0x3b30303030303030,0x202f2f0920202020\n"
".quad 0x662e766f6d090a30,0x3036662509203233,0x303030306630202c,0x2020203b30303030\n"
".quad 0x090a30202f2f0920,0x203233662e766f6d,0x30202c3835662509,0x3030303030303066\n"
".quad 0x2f09202020203b30,0x766f6d090a30202f,0x662509203233662e,0x30306630202c3533\n"
".quad 0x203b303030303030,0x30202f2f09202020,0x33662e766f6d090a,0x2c34336625092032\n"
".quad 0x3030303030663020,0x202020203b303030,0x6d090a30202f2f09,0x09203233662e766f\n"
".quad 0x6630202c33336625,0x3030303030303030,0x2f2f09202020203b,0x2e766f6d090a3020\n"
".quad 0x3366250920323366,0x3030306630202c32,0x20203b3030303030,0x0a30202f2f092020\n"
".quad 0x37315f315f744c24,0x6c2e090a3a343531,0x313409363109636f,0x2e646c090a300932\n"
".quad 0x33732e6d61726170,0x3231317225092032,0x6475635f5f5b202c,0x5a5f5f6d72617061\n"
".quad 0x6c65646e614d3831,0x5f315344746f7262,0x6375365030316d73,0x6669696934726168\n"
".quad 0x5f53666666666666,0x6e7572635f626969,0x7573090a3b5d6863,0x2509203233732e62\n"
".quad 0x7225202c33313172,0x0a3b31202c323131,0x3233752e766f6d09,0x2c34313172250920\n"
".quad 0x746573090a3b3120,0x3233732e71652e70,0x25202c3870250920,0x7225202c32313172\n"
".quad 0x2540090a3b343131,0x0920617262203870,0x38315f315f744c24,0x6461090a3b383731\n"
".quad 0x2509203233662e64,0x386625202c383866,0x3b38356625202c33,0x33662e627573090a\n"
".quad 0x2c39386625092032,0x25202c3838662520,0x7573090a3b333866,0x2509203233662e62\n"
".quad 0x386625202c303966,0x3b39386625202c38,0x33662e627573090a,0x2c31396625092032\n"
".quad 0x25202c3835662520,0x7573090a3b393866,0x2509203233662e62,0x386625202c323966\n"
".quad 0x3b30396625202c33,0x33662e646461090a,0x2c33396625092032,0x25202c3139662520\n"
".quad 0x6461090a3b323966,0x2509203233662e64,0x396625202c343966,0x3b35386625202c33\n"
".quad 0x33662e646461090a,0x2c35396625092032,0x25202c3439662520,0x6461090a3b303666\n"
".quad 0x2509203233662e64,0x386625202c363966,0x3b35396625202c38,0x33662e627573090a\n"
".quad 0x2c37396625092032,0x25202c3639662520,0x7573090a3b383866,0x2509203233662e62\n"
".quad 0x396625202c383966,0x3b37396625202c35,0x33662e646461090a,0x2c39396625092032\n"
".quad 0x25202c3639662520,0x6f6d090a3b383966,0x2509203233662e76,0x6630202c30303166\n"
".quad 0x3030303030383034,0x202f2f092020203b,0x2e70746573090a34,0x09203233662e746c\n"
".quad 0x396625202c397025,0x3030316625202c39,0x3970252140090a3b,0x4c24092061726220\n"
".quad 0x373138315f315f74,0x2e766f6d090a3b38,0x3166250920323366,0x36346630202c3130\n"
".quad 0x203b303034303030,0x3138202f2f092020,0x2e6c756d090a3339,0x3166250920323366\n"
".quad 0x34336625202c3230,0x3b3130316625202c,0x33662e766f6d090a,0x3330316625092032\n"
".quad 0x303036346630202c,0x2020203b30303430,0x33393138202f2f09,0x33662e6c756d090a\n"
".quad 0x3430316625092032,0x202c32336625202c,0x090a3b3330316625,0x203233662e627573\n"
".quad 0x202c353031662509,0x25202c3230316625,0x7573090a3b343366,0x2509203233662e62\n"
".quad 0x6625202c36303166,0x336625202c343031,0x2e627573090a3b32,0x3166250920323366\n"
".quad 0x30316625202c3730,0x3530316625202c32,0x662e627573090a3b,0x3031662509203233\n"
".quad 0x3430316625202c38,0x3b3630316625202c,0x33662e627573090a,0x3930316625092032\n"
".quad 0x202c34336625202c,0x090a3b3730316625,0x203233662e627573,0x202c303131662509\n"
".quad 0x6625202c32336625,0x5f4c240a3b383031,0x3a38353033315f31,0x6f6f6c3c2f2f200a\n"
".quad 0x20706f6f4c203e70,0x6e696c2079646f62,0x2e090a3331342065,0x3409363109636f6c\n"
".quad 0x756d090a30093331,0x2509203233662e6c,0x6625202c31313166,0x32336625202c3533\n"
".quad 0x662e6c756d090a3b,0x3131662509203233,0x2c34336625202c32,0x090a3b3233662520\n"
".quad 0x203233662e64616d,0x202c333131662509,0x6625202c34336625,0x31316625202c3333\n"
".quad 0x2e646461090a3b31,0x3166250920323366,0x31316625202c3431,0x3331316625202c32\n"
".quad 0x662e627573090a3b,0x3131662509203233,0x3431316625202c35,0x3b3231316625202c\n"
".quad 0x33662e6c756d090a,0x3631316625092032,0x2c3730316625202c,0x0a3b383031662520\n"
".quad 0x3233662e62757309,0x2c37313166250920,0x202c363131662520,0x090a3b3231316625\n"
".quad 0x203233662e627573,0x202c383131662509,0x25202c3331316625,0x73090a3b35313166\n"
".quad 0x09203233662e6275,0x25202c3931316625,0x6625202c34313166,0x616d090a3b353131\n"
".quad 0x2509203233662e64,0x6625202c30323166,0x316625202c373031,0x31316625202c3031\n"
".quad 0x2e627573090a3b37,0x3166250920323366,0x31316625202c3132,0x3931316625202c32\n"
".quad 0x662e64616d090a3b,0x3231662509203233,0x3830316625202c32,0x2c3930316625202c\n"
".quad 0x0a3b303231662520,0x3233662e64646109,0x2c33323166250920,0x202c383131662520\n"
".quad 0x090a3b3132316625,0x203233662e64616d,0x202c343231662509,0x25202c3930316625\n"
".quad 0x6625202c30313166,0x6461090a3b323231,0x2509203233662e64,0x6625202c35323166\n"
".quad 0x316625202c333231,0x64616d090a3b3432,0x662509203233662e,0x336625202c363231\n"
".quad 0x2c33336625202c35,0x0a3b353231662520,0x3233662e64646109,0x2c37323166250920\n"
".quad 0x202c343131662520,0x090a3b3632316625,0x203233662e627573,0x202c383231662509\n"
".quad 0x25202c3732316625,0x73090a3b34313166,0x09203233662e6275,0x25202c3932316625\n"
".quad 0x6625202c36323166,0x6c2e090a3b383231,0x313409363109636f,0x646461090a300934\n"
".quad 0x662509203233662e,0x316625202c303331,0x32316625202c3732,0x2e627573090a3b37\n"
".quad 0x3166250920323366,0x33316625202c3133,0x3732316625202c30,0x662e627573090a3b\n"
".quad 0x3331662509203233,0x3732316625202c32,0x3b3133316625202c,0x33662e627573090a\n"
".quad 0x3333316625092032,0x2c3033316625202c,0x0a3b313331662520,0x3233662e62757309\n"
".quad 0x2c34333166250920,0x202c373231662520,0x090a3b3333316625,0x203233662e646461\n"
".quad 0x202c353331662509,0x25202c3233316625,0x61090a3b34333166,0x09203233662e6464\n"
".quad 0x25202c3633316625,0x6625202c35333166,0x6461090a3b393231,0x2509203233662e64\n"
".quad 0x6625202c37333166,0x316625202c363331,0x646461090a3b3932,0x662509203233662e\n"
".quad 0x316625202c383331,0x33316625202c3033,0x2e627573090a3b37,0x3166250920323366\n"
".quad 0x33316625202c3933,0x3033316625202c38,0x662e627573090a3b,0x3431662509203233\n"
".quad 0x3733316625202c30,0x3b3933316625202c,0x3109636f6c2e090a,0x0a30093531340936\n"
".quad 0x3233662e64646109,0x2c31343166250920,0x202c383331662520,0x73090a3b31336625\n"
".quad 0x09203233662e6275,0x25202c3234316625,0x6625202c31343166,0x7573090a3b383331\n"
".quad 0x2509203233662e62,0x6625202c33343166,0x316625202c313431,0x627573090a3b3234\n"
".quad 0x662509203233662e,0x336625202c343431,0x3234316625202c31,0x662e627573090a3b\n"
".quad 0x3431662509203233,0x3833316625202c35,0x3b3334316625202c,0x33662e646461090a\n"
".quad 0x3634316625092032,0x2c3434316625202c,0x0a3b353431662520,0x3233662e64646109\n"
".quad 0x2c37343166250920,0x202c363431662520,0x090a3b3034316625,0x203233662e646461\n"
".quad 0x202c383431662509,0x25202c3734316625,0x6461090a3b363866,0x2509203233662e64\n"
".quad 0x6625202c39343166,0x316625202c313431,0x766f6d090a3b3834,0x662509203233662e\n"
".quad 0x34316625202c3233,0x2e627573090a3b39,0x3166250920323366,0x34316625202c3035\n"
".quad 0x3134316625202c39,0x662e627573090a3b,0x3333662509203233,0x2c3834316625202c\n"
".quad 0x0a3b303531662520,0x363109636f6c2e09,0x090a300938313409,0x203233662e627573\n"
".quad 0x202c313531662509,0x6625202c33386625,0x627573090a3b3835,0x662509203233662e\n"
".quad 0x316625202c323531,0x33386625202c3135,0x662e627573090a3b,0x3531662509203233\n"
".quad 0x3135316625202c33,0x3b3235316625202c,0x33662e646461090a,0x3435316625092032\n"
".quad 0x2c3235316625202c,0x090a3b3835662520,0x203233662e627573,0x202c353531662509\n"
".quad 0x6625202c33386625,0x7573090a3b333531,0x2509203233662e62,0x6625202c36353166\n"
".quad 0x316625202c353531,0x646461090a3b3435,0x662509203233662e,0x316625202c373531\n"
".quad 0x35386625202c3635,0x662e627573090a3b,0x3531662509203233,0x3735316625202c38\n"
".quad 0x0a3b30366625202c,0x3233662e64646109,0x2c39353166250920,0x202c313531662520\n"
".quad 0x090a3b3835316625,0x203233662e646461,0x202c303631662509,0x25202c3935316625\n"
".quad 0x7573090a3b303366,0x2509203233662e62,0x6625202c31363166,0x316625202c303631\n"
".quad 0x627573090a3b3935,0x662509203233662e,0x316625202c323631,0x36316625202c3036\n"
".quad 0x2e627573090a3b31,0x3166250920323366,0x35316625202c3336,0x3236316625202c39\n"
".quad 0x662e627573090a3b,0x3631662509203233,0x2c30336625202c34,0x0a3b313631662520\n"
".quad 0x3233662e64646109,0x2c35363166250920,0x202c333631662520,0x090a3b3436316625\n"
".quad 0x203233662e627573,0x202c363631662509,0x25202c3935316625,0x73090a3b31353166\n"
".quad 0x09203233662e6275,0x25202c3736316625,0x6625202c38353166,0x6461090a3b363631\n"
".quad 0x2509203233662e64,0x6625202c38363166,0x316625202c353631,0x646461090a3b3736\n"
".quad 0x662509203233662e,0x386625202c393631,0x3836316625202c37,0x662e646461090a3b\n"
".quad 0x3731662509203233,0x3036316625202c30,0x3b3936316625202c,0x33662e766f6d090a\n"
".quad 0x2c34336625092032,0x0a3b303731662520,0x3233662e62757309,0x2c31373166250920\n"
".quad 0x202c303731662520,0x090a3b3036316625,0x203233662e627573,0x25202c3533662509\n"
".quad 0x6625202c39363166,0x6c2e090a3b313731,0x323409363109636f,0x766f6d090a300930\n"
".quad 0x662509203233662e,0x346630202c323731,0x3b30303430303036,0x38202f2f09202020\n"
".quad 0x6c756d090a333931,0x662509203233662e,0x316625202c333731,0x37316625202c3934\n"
".quad 0x2e6c756d090a3b32,0x3166250920323366,0x34316625202c3437,0x3b33336625202c39\n"
".quad 0x33662e6c756d090a,0x3537316625092032,0x2c3934316625202c,0x0a3b393431662520\n"
".quad 0x3233662e62757309,0x2c36373166250920,0x202c333731662520,0x090a3b3934316625\n"
".quad 0x203233662e64616d,0x202c373731662509,0x25202c3934316625,0x316625202c333366\n"
".quad 0x627573090a3b3437,0x662509203233662e,0x316625202c383031,0x37316625202c3337\n"
".quad 0x2e646461090a3b36,0x3166250920323366,0x37316625202c3837,0x3737316625202c35\n"
".quad 0x662e627573090a3b,0x3131662509203233,0x3934316625202c30,0x3b3830316625202c\n"
".quad 0x33662e6c756d090a,0x3937316625092032,0x2c3830316625202c,0x0a3b383031662520\n"
".quad 0x3233662e62757309,0x2c30383166250920,0x202c393731662520,0x090a3b3537316625\n"
".quad 0x203233662e627573,0x202c313831662509,0x25202c3837316625,0x6d090a3b35373166\n"
".quad 0x09203233662e6461,0x25202c3238316625,0x6625202c38303166,0x316625202c303131\n"
".quad 0x627573090a3b3038,0x662509203233662e,0x316625202c333831,0x38316625202c3737\n"
".quad 0x2e627573090a3b31,0x3166250920323366,0x37316625202c3438,0x3138316625202c38\n"
".quad 0x662e64616d090a3b,0x3831662509203233,0x3830316625202c35,0x2c3031316625202c\n"
".quad 0x0a3b323831662520,0x3233662e62757309,0x2c36383166250920,0x202c353731662520\n"
".quad 0x090a3b3438316625,0x203233662e64616d,0x202c373831662509,0x25202c3031316625\n"
".quad 0x6625202c30313166,0x6461090a3b353831,0x2509203233662e64,0x6625202c38383166\n"
".quad 0x316625202c333831,0x646461090a3b3638,0x662509203233662e,0x316625202c393831\n"
".quad 0x38316625202c3738,0x2e64616d090a3b38,0x3166250920323366,0x33336625202c3039\n"
".quad 0x202c33336625202c,0x090a3b3938316625,0x203233662e646461,0x202c313931662509\n"
".quad 0x25202c3837316625,0x6d090a3b30393166,0x09203233662e766f,0x6625202c38356625\n"
".quad 0x7573090a3b313931,0x2509203233662e62,0x6625202c32393166,0x316625202c313931\n"
".quad 0x627573090a3b3837,0x662509203233662e,0x39316625202c3036,0x3239316625202c30\n"
".quad 0x09636f6c2e090a3b,0x3009313234093631,0x33662e766f6d090a,0x3339316625092032\n"
".quad 0x303036346630202c,0x2020203b30303430,0x33393138202f2f09,0x33662e6c756d090a\n"
".quad 0x3439316625092032,0x2c3037316625202c,0x0a3b333931662520,0x3233662e6c756d09\n"
".quad 0x2c35393166250920,0x202c303731662520,0x6d090a3b35336625,0x09203233662e6c75\n"
".quad 0x25202c3639316625,0x6625202c30373166,0x7573090a3b303731,0x2509203233662e62\n"
".quad 0x6625202c37393166,0x316625202c343931,0x64616d090a3b3037,0x662509203233662e\n"
".quad 0x316625202c383931,0x35336625202c3037,0x3b3539316625202c,0x33662e627573090a\n"
".quad 0x3730316625092032,0x2c3439316625202c,0x0a3b373931662520,0x3233662e64646109\n"
".quad 0x2c39393166250920,0x202c363931662520,0x090a3b3839316625,0x203233662e627573\n"
".quad 0x202c393031662509,0x25202c3037316625,0x6d090a3b37303166,0x09203233662e6c75\n"
".quad 0x25202c3030326625,0x6625202c37303166,0x7573090a3b373031,0x2509203233662e62\n"
".quad 0x6625202c31303266,0x316625202c303032,0x627573090a3b3639,0x662509203233662e\n"
".quad 0x316625202c323032,0x39316625202c3939,0x2e64616d090a3b36,0x3266250920323366\n"
".quad 0x30316625202c3330,0x3930316625202c37,0x3b3130326625202c,0x33662e627573090a\n"
".quad 0x3430326625092032,0x2c3839316625202c,0x0a3b323032662520,0x3233662e62757309\n"
".quad 0x2c35303266250920,0x202c393931662520,0x090a3b3230326625,0x203233662e64616d\n"
".quad 0x202c363032662509,0x25202c3730316625,0x6625202c39303166,0x7573090a3b333032\n"
".quad 0x2509203233662e62,0x6625202c37303266,0x326625202c363931,0x64616d090a3b3530\n"
".quad 0x662509203233662e,0x316625202c383032,0x30316625202c3930,0x3630326625202c39\n"
".quad 0x662e646461090a3b,0x3032662509203233,0x3430326625202c39,0x3b3730326625202c\n"
".quad 0x33662e646461090a,0x3031326625092032,0x2c3830326625202c,0x0a3b393032662520\n"
".quad 0x3233662e64616d09,0x2c31313266250920,0x25202c3533662520,0x326625202c353366\n"
".quad 0x646461090a3b3031,0x662509203233662e,0x316625202c323132,0x31326625202c3939\n"
".quad 0x2e766f6d090a3b31,0x3866250920323366,0x3231326625202c33,0x662e627573090a3b\n"
".quad 0x3132662509203233,0x3231326625202c33,0x3b3939316625202c,0x33662e627573090a\n"
".quad 0x2c35386625092032,0x202c313132662520,0x090a3b3331326625,0x09363109636f6c2e\n"
".quad 0x61090a3009323234,0x09203233662e6464,0x25202c3431326625,0x6625202c31393166\n"
".quad 0x7573090a3b323132,0x2509203233662e62,0x6625202c35313266,0x326625202c343132\n"
".quad 0x627573090a3b3231,0x662509203233662e,0x316625202c363132,0x31326625202c3139\n"
".quad 0x2e627573090a3b35,0x3266250920323366,0x31326625202c3731,0x3531326625202c34\n"
".quad 0x662e627573090a3b,0x3132662509203233,0x3231326625202c38,0x3b3731326625202c\n"
".quad 0x33662e646461090a,0x3931326625092032,0x2c3631326625202c,0x0a3b383132662520\n"
".quad 0x3233662e64646109,0x2c30323266250920,0x25202c3538662520,0x61090a3b39313266\n"
".quad 0x09203233662e6464,0x25202c3132326625,0x326625202c303666,0x646461090a3b3032\n"
".quad 0x662509203233662e,0x326625202c323232,0x32326625202c3431,0x2e627573090a3b31\n"
".quad 0x3266250920323366,0x32326625202c3332,0x3431326625202c32,0x662e627573090a3b\n"
".quad 0x3232662509203233,0x3132326625202c34,0x3b3332326625202c,0x3109636f6c2e090a\n"
".quad 0x0a30093231340936,0x3233732e62757309,0x2c33313172250920,0x202c333131722520\n"
".quad 0x2e766f6d090a3b31,0x3172250920323375,0x090a3b30202c3531,0x2e71652e70746573\n"
".quad 0x3170250920323373,0x3331317225202c30,0x3b3531317225202c,0x203031702540090a\n"
".quad 0x744c240920617262,0x38373138315f315f,0x6f6c3c2f2f200a3b,0x74726150203e706f\n"
".quad 0x706f6f6c20666f20,0x696c2079646f6220,0x202c33313420656e,0x62616c2064616568\n"
".quad 0x5f4c242064656c65,0x0a38353033315f31,0x3233662e64646109,0x2c35323266250920\n"
".quad 0x202c343232662520,0x090a3b3232326625,0x203233662e766f6d,0x202c363232662509\n"
".quad 0x3030303830346630,0x2f092020203b3030,0x746573090a34202f,0x3233662e746c2e70\n"
".quad 0x202c313170250920,0x25202c3532326625,0x40090a3b36323266,0x6172622031317025\n"
".quad 0x315f315f4c240920,0x4c240a3b38353033,0x373138315f315f74,0x5f315f4c240a3a38\n"
".quad 0x090a3a3431333331,0x09373109636f6c2e,0x6d090a3009313931,0x09203233732e766f\n"
".quad 0x30202c3631317225,0x2e70746573090a3b,0x09203233732e7467,0x7225202c32317025\n"
".quad 0x317225202c333131,0x6f6c2e090a3b3631,0x3231340936310963,0x702e646c090a3009\n"
".quad 0x3233732e6d617261,0x2c32313172250920,0x616475635f5f5b20,0x315a5f5f6d726170\n"
".quad 0x626c65646e614d38,0x735f315344746f72,0x686375365030316d,0x6666696969347261\n"
".quad 0x695f536666666666,0x636e7572635f6269,0x6f6c2e090a3b5d68,0x3139310937310963\n"
".quad 0x2e627573090a3009,0x3172250920323373,0x31317225202c3731,0x3331317225202c32\n"
".quad 0x732e766f6d090a3b,0x3131722509203233,0x73090a3b30202c38,0x203233732e706c65\n"
".quad 0x202c393131722509,0x25202c3731317225,0x7025202c38313172,0x766f6d090a3b3231\n"
".quad 0x722509203233752e,0x0a3b30202c303231,0x71652e7074657309,0x702509203233732e\n"
".quad 0x31317225202c3331,0x3032317225202c39,0x3331702540090a3b,0x4c24092061726220\n"
".quad 0x323937315f315f74,0x636f6c2e090a3b32,0x0938393109373109,0x61702e646c090a30\n"
".quad 0x203233732e6d6172,0x202c313231722509,0x70616475635f5f5b,0x38315a5f5f6d7261\n"
".quad 0x72626c65646e614d,0x6d735f315344746f,0x6168637536503031,0x6666666969693472\n"
".quad 0x69695f5366666666,0x74616d696e615f62,0x656d6172466e6f69,0x2e646461090a3b5d\n"
".quad 0x3172250920323373,0x32317225202c3232,0x3931317225202c31,0x61702e646c090a3b\n"
".quad 0x092038752e6d6172,0x5b202c3332317225,0x6170616475635f5f,0x4d38315a5f5f6d72\n"
".quad 0x6f72626c65646e61,0x316d735f31534474,0x7261686375365030,0x6666666669696934\n"
".quad 0x6269695f53666666,0x2b73726f6c6f635f,0x6c756d090a3b5d30,0x203233732e6f6c2e\n"
".quad 0x202c343231722509,0x25202c3232317225,0x63090a3b33323172,0x33752e38752e7476\n"
".quad 0x3532317225092032,0x3b3432317225202c,0x3109636f6c2e090a,0x0a30093939310937\n"
".quad 0x617261702e646c09,0x7225092038752e6d,0x5f5f5b202c363231,0x6d72617061647563\n"
".quad 0x6e614d38315a5f5f,0x44746f72626c6564,0x5030316d735f3153,0x6934726168637536\n"
".quad 0x6666666666666969,0x635f6269695f5366,0x5d312b73726f6c6f,0x6c2e6c756d090a3b\n"
".quad 0x2509203233732e6f,0x7225202c37323172,0x317225202c323231,0x747663090a3b3632\n"
".quad 0x203233752e38752e,0x202c383231722509,0x090a3b3732317225,0x09373109636f6c2e\n"
".quad 0x6c090a3009303032,0x2e6d617261702e64,0x3231722509203875,0x75635f5f5b202c39\n"
".quad 0x5f5f6d7261706164,0x65646e614d38315a,0x315344746f72626c,0x75365030316d735f\n"
".quad 0x6969693472616863,0x5366666666666666,0x6c6f635f6269695f,0x0a3b5d322b73726f\n"
".quad 0x2e6f6c2e6c756d09,0x3172250920323373,0x32317225202c3033,0x3932317225202c32\n"
".quad 0x752e747663090a3b,0x2509203233752e38,0x7225202c31333172,0x7262090a3b303331\n"
".quad 0x240920696e752e61,0x3637315f315f744c,0x5f744c240a3b3636,0x3a32323937315f31\n"
".quad 0x3109636f6c2e090a,0x0a30093430320937,0x3233752e766f6d09,0x2c31333172250920\n"
".quad 0x766f6d090a3b3020,0x722509203233752e,0x0a3b30202c383231,0x3233752e766f6d09\n"
".quad 0x2c35323172250920,0x5f744c240a3b3020,0x3a36363637315f31,0x3109636f6c2e090a\n"
".quad 0x0a30093031320937,0x617261702e646c09,0x2509203233732e6d,0x5f5b202c32333172\n"
".quad 0x726170616475635f,0x614d38315a5f5f6d,0x746f72626c65646e,0x30316d735f315344\n"
".quad 0x3472616863753650,0x6666666666696969,0x5f6269695f536666,0x0a3b5d656d617266\n"
".quad 0x3233732e64646109,0x2c33333172250920,0x202c323331722520,0x2e726873090a3b31\n"
".quad 0x3172250920323373,0x33317225202c3433,0x090a3b3133202c33,0x203233732e766f6d\n"
".quad 0x202c353331722509,0x2e646e61090a3b31,0x3172250920323362,0x33317225202c3633\n"
".quad 0x3533317225202c34,0x732e646461090a3b,0x3331722509203233,0x3633317225202c37\n"
".quad 0x3b3333317225202c,0x33732e726873090a,0x3833317225092032,0x2c3733317225202c\n"
".quad 0x6c756d090a3b3120,0x203233732e6f6c2e,0x202c393331722509,0x25202c3233317225\n"
".quad 0x6461090a3b383172,0x2509203233732e64,0x7225202c30343172,0x317225202c353231\n"
".quad 0x646461090a3b3933,0x722509203233732e,0x317225202c313431,0x34317225202c3833\n"
".quad 0x2e766964090a3b30,0x3172250920323373,0x34317225202c3234,0x3333317225202c31\n"
".quad 0x09636f6c2e090a3b,0x3009313132093731,0x6f6c2e6c756d090a,0x722509203233732e\n"
".quad 0x317225202c333431,0x39317225202c3233,0x732e646461090a3b,0x3431722509203233\n"
".quad 0x3832317225202c34,0x3b3334317225202c,0x33732e646461090a,0x3534317225092032\n"
".quad 0x2c3833317225202c,0x0a3b343431722520,0x3233732e76696409,0x2c36343172250920\n"
".quad 0x202c353431722520,0x090a3b3333317225,0x61626f6c672e7473,0x2038752e32762e6c\n"
".quad 0x302b336472255b09,0x343172257b202c5d,0x7d36343172252c32,0x09636f6c2e090a3b\n"
".quad 0x3009323132093731,0x6f6c2e6c756d090a,0x722509203233732e,0x317225202c373431\n"
".quad 0x30327225202c3233,0x732e646461090a3b,0x3431722509203233,0x3133317225202c38\n"
".quad 0x3b3734317225202c,0x33732e646461090a,0x3934317225092032,0x2c3833317225202c\n"
".quad 0x0a3b383431722520,0x3233732e76696409,0x2c30353172250920,0x202c393431722520\n"
".quad 0x090a3b3333317225,0x61626f6c672e7473,0x255b092038752e6c,0x202c5d322b336472\n"
".quad 0x240a3b3035317225,0x3636315f315f744c,0x5f744c240a3a3234,0x3a32383034315f31\n"
".quad 0x3109636f6c2e090a,0x0a30093531320937,0x240a3b7469786509,0x5f5f646e6557444c\n"
".quad 0x65646e614d38315a,0x315344746f72626c,0x75365030316d735f,0x6969693472616863\n"
".quad 0x5366666666666666,0x7d090a3a6269695f,0x38315a5f202f2f20,0x72626c65646e614d\n"
".quad 0x6d735f315344746f,0x6168637536503031,0x6666666969693472,0x69695f5366666666\n"
".quad 0x746e652e090a0a62,0x4d36315a5f207972,0x6f72626c65646e61,0x4930316d735f3074\n"
".quad 0x6863753650764566,0x5f54696969347261,0x32535f32535f3253,0x695f30535f32535f\n"
".quad 0x2e09090a28206269,0x752e206d61726170,0x6475635f5f203436,0x5a5f5f6d72617061\n"
".quad 0x6c65646e614d3631,0x6d735f30746f7262,0x3650764566493031,0x6969347261686375\n"
".quad 0x32535f32535f5469,0x535f32535f32535f,0x73645f6269695f30,0x61702e09090a2c74\n"
".quad 0x3233732e206d6172,0x70616475635f5f20,0x36315a5f5f6d7261,0x72626c65646e614d\n"
".quad 0x30316d735f30746f,0x6375365076456649,0x5469696934726168,0x535f32535f32535f\n"
".quad 0x5f30535f32535f32,0x67616d695f626969,0x702e09090a2c5765,0x33732e206d617261\n"
".quad 0x616475635f5f2032,0x315a5f5f6d726170,0x626c65646e614d36,0x316d735f30746f72\n"
".quad 0x7536507645664930,0x6969693472616863,0x5f32535f32535f54,0x30535f32535f3253\n"
".quad 0x616d695f6269695f,0x2e09090a2c486567,0x732e206d61726170,0x6475635f5f203233\n"
".quad 0x5a5f5f6d72617061,0x6c65646e614d3631,0x6d735f30746f7262,0x3650764566493031\n"
".quad 0x6969347261686375,0x32535f32535f5469,0x535f32535f32535f,0x72635f6269695f30\n"
".quad 0x09090a2c68636e75,0x2e206d617261702e,0x75635f5f20323366,0x5f5f6d7261706164\n"
".quad 0x65646e614d36315a,0x735f30746f72626c,0x507645664930316d,0x6934726168637536\n"
".quad 0x535f32535f546969,0x5f32535f32535f32,0x785f6269695f3053,0x2e09090a2c66664f\n"
".quad 0x662e206d61726170,0x6475635f5f203233,0x5a5f5f6d72617061,0x6c65646e614d3631\n"
".quad 0x6d735f30746f7262,0x3650764566493031,0x6969347261686375,0x32535f32535f5469\n"
".quad 0x535f32535f32535f,0x4f795f6269695f30,0x702e09090a2c6666,0x33662e206d617261\n"
".quad 0x616475635f5f2032,0x315a5f5f6d726170,0x626c65646e614d36,0x316d735f30746f72\n"
".quad 0x7536507645664930,0x6969693472616863,0x5f32535f32535f54,0x30535f32535f3253\n"
".quad 0x504a785f6269695f,0x7261702e09090a2c,0x203233662e206d61,0x6170616475635f5f\n"
".quad 0x4d36315a5f5f6d72,0x6f72626c65646e61,0x4930316d735f3074,0x6863753650764566\n"
".quad 0x5f54696969347261,0x32535f32535f3253,0x695f30535f32535f,0x0a2c504a795f6269\n"
".quad 0x6d617261702e0909,0x5f5f203233662e20,0x6d72617061647563,0x6e614d36315a5f5f\n"
".quad 0x30746f72626c6564,0x45664930316d735f,0x7261686375365076,0x32535f5469696934\n"
".quad 0x535f32535f32535f,0x6269695f30535f32,0x0a2c656c6163735f,0x6d617261702e0909\n"
".quad 0x206e67696c612e20,0x5f5f2038622e2034,0x6d72617061647563,0x6e614d36315a5f5f\n"
".quad 0x30746f72626c6564,0x45664930316d735f,0x7261686375365076,0x32535f5469696934\n"
".quad 0x535f32535f32535f,0x6269695f30535f32,0x5b73726f6c6f635f,0x702e09090a2c5d34\n"
".quad 0x33732e206d617261,0x616475635f5f2032,0x315a5f5f6d726170,0x626c65646e614d36\n"
".quad 0x316d735f30746f72,0x7536507645664930,0x6969693472616863,0x5f32535f32535f54\n"
".quad 0x30535f32535f3253,0x6172665f6269695f,0x702e09090a2c656d,0x33732e206d617261\n"
".quad 0x616475635f5f2032,0x315a5f5f6d726170,0x626c65646e614d36,0x316d735f30746f72\n"
".quad 0x7536507645664930,0x6969693472616863,0x5f32535f32535f54,0x30535f32535f3253\n"
".quad 0x696e615f6269695f,0x72466e6f6974616d,0x2e09090a2c656d61,0x732e206d61726170\n"
".quad 0x616475635f5f2038,0x315a5f5f6d726170,0x626c65646e614d36,0x316d735f30746f72\n"
".quad 0x7536507645664930,0x6969693472616863,0x5f32535f32535f54,0x30535f32535f3253\n"
".quad 0x4a73695f6269695f,0x722e090a7b090a29,0x203631752e206765,0x0a3b3e363c687225\n"
".quad 0x752e206765722e09,0x30313c7225203233,0x65722e090a3b3e32,0x25203436752e2067\n"
".quad 0x090a3b3e353c6472,0x33662e206765722e,0x3631313c66252032,0x6765722e090a3b3e\n"
".quad 0x2520646572702e20,0x090a3b3e36343c70,0x09373109636f6c2e,0x444c240a30093031\n"
".quad 0x5f5f6e6967656257,0x65646e614d36315a,0x735f30746f72626c,0x507645664930316d\n"
".quad 0x6934726168637536,0x535f32535f546969,0x5f32535f32535f32,0x0a3a6269695f3053\n"
".quad 0x3631752e766f6d09,0x202c316872250920,0x782e646961746325,0x752e766f6d090a3b\n"
".quad 0x3268722509203631,0x2e6469746e25202c,0x2e6c756d090a3b78,0x3631752e65646977\n"
".quad 0x25202c3172250920,0x687225202c316872,0x2e766f6d090a3b32,0x6872250920363175\n"
".quad 0x6961746325202c33,0x6f6d090a3b792e64,0x2509203631752e76,0x746e25202c346872\n"
".quad 0x6d090a3b792e6469,0x2e656469772e6c75,0x3272250920363175,0x202c33687225202c\n"
".quad 0x63090a3b34687225,0x752e3233752e7476,0x2c33722509203631,0x3b782e6469742520\n"
".quad 0x33752e646461090a,0x202c347225092032,0x317225202c337225,0x752e747663090a3b\n"
".quad 0x09203631752e3233,0x697425202c357225,0x6461090a3b792e64,0x2509203233752e64\n"
".quad 0x2c357225202c3672,0x6c090a3b32722520,0x2e6d617261702e64,0x3772250920323373\n"
".quad 0x6475635f5f5b202c,0x5a5f5f6d72617061,0x6c65646e614d3631,0x6d735f30746f7262\n"
".quad 0x3650764566493031,0x6969347261686375,0x32535f32535f5469,0x535f32535f32535f\n"
".quad 0x6d695f6269695f30,0x090a3b5d57656761,0x6d617261702e646c,0x722509203233732e\n"
".quad 0x75635f5f5b202c38,0x5f5f6d7261706164,0x65646e614d36315a,0x735f30746f72626c\n"
".quad 0x507645664930316d,0x6934726168637536,0x535f32535f546969,0x5f32535f32535f32\n"
".quad 0x695f6269695f3053,0x0a3b5d486567616d,0x2e74672e74657309,0x203233732e323375\n"
".quad 0x7225202c39722509,0x0a3b367225202c38,0x3233732e67656e09,0x202c303172250920\n"
".quad 0x6573090a3b397225,0x3233752e74672e74,0x722509203233732e,0x2c377225202c3131\n"
".quad 0x6e090a3b34722520,0x09203233732e6765,0x7225202c32317225,0x646e61090a3b3131\n"
".quad 0x722509203233622e,0x30317225202c3331,0x0a3b32317225202c,0x3233752e766f6d09\n"
".quad 0x202c343172250920,0x70746573090a3b30,0x203233732e71652e,0x7225202c31702509\n"
".quad 0x34317225202c3331,0x2031702540090a3b,0x744c240920617262,0x34353336335f325f\n"
".quad 0x09636f6c2e090a3b,0x3009313331093631,0x7261702e646c090a,0x09203233732e6d61\n"
".quad 0x5f5b202c35317225,0x726170616475635f,0x614d36315a5f5f6d,0x746f72626c65646e\n"
".quad 0x664930316d735f30,0x6168637536507645,0x535f546969693472,0x5f32535f32535f32\n"
".quad 0x69695f30535f3253,0x68636e7572635f62,0x2e766f6d090a3b5d,0x3172250920323373\n"
".quad 0x3b35317225202c36,0x6e722e747663090a,0x3233732e3233662e,0x25202c3166250920\n"
".quad 0x747663090a3b3472,0x2e3233662e6e722e,0x3266250920323373,0x090a3b367225202c\n"
".quad 0x6d617261702e646c,0x662509203233662e,0x75635f5f5b202c33,0x5f5f6d7261706164\n"
".quad 0x65646e614d36315a,0x735f30746f72626c,0x507645664930316d,0x6934726168637536\n"
".quad 0x535f32535f546969,0x5f32535f32535f32,0x735f6269695f3053,0x090a3b5d656c6163\n"
".quad 0x6d617261702e646c,0x662509203233662e,0x75635f5f5b202c34,0x5f5f6d7261706164\n"
".quad 0x65646e614d36315a,0x735f30746f72626c,0x507645664930316d,0x6934726168637536\n"
".quad 0x535f32535f546969,0x5f32535f32535f32,0x785f6269695f3053,0x6d090a3b5d66664f\n"
".quad 0x09203233662e6461,0x316625202c356625,0x25202c336625202c,0x2e646c090a3b3466\n"
".quad 0x33662e6d61726170,0x202c366625092032,0x70616475635f5f5b,0x36315a5f5f6d7261\n"
".quad 0x72626c65646e614d,0x30316d735f30746f,0x6375365076456649,0x5469696934726168\n"
".quad 0x535f32535f32535f,0x5f30535f32535f32,0x66664f795f626969,0x2e64616d090a3b5d\n"
".quad 0x3766250920323366,0x25202c326625202c,0x3b366625202c3366,0x7261702e646c090a\n"
".quad 0x25092038732e6d61,0x5f5f5b202c373172,0x6d72617061647563,0x6e614d36315a5f5f\n"
".quad 0x30746f72626c6564,0x45664930316d735f,0x7261686375365076,0x32535f5469696934\n"
".quad 0x535f32535f32535f,0x6269695f30535f32,0x090a3b5d4a73695f,0x203233752e766f6d\n"
".quad 0x30202c3831722509,0x2e70746573090a3b,0x09203233732e7165,0x317225202c327025\n"
".quad 0x3b38317225202c37,0x622032702540090a,0x5f744c2409206172,0x3b32323137335f32\n"
".quad 0x3109636f6c2e090a,0x0a30093633310936,0x617261702e646c09,0x2509203233662e6d\n"
".quad 0x635f5f5b202c3866,0x5f6d726170616475,0x646e614d36315a5f,0x5f30746f72626c65\n"
".quad 0x7645664930316d73,0x3472616863753650,0x5f32535f54696969,0x32535f32535f3253\n"
".quad 0x5f6269695f30535f,0x2e090a3b5d504a78,0x3109363109636f6c,0x646c090a30093733\n"
".quad 0x662e6d617261702e,0x2c39662509203233,0x616475635f5f5b20,0x315a5f5f6d726170\n"
".quad 0x626c65646e614d36,0x316d735f30746f72,0x7536507645664930,0x6969693472616863\n"
".quad 0x5f32535f32535f54,0x30535f32535f3253,0x504a795f6269695f,0x636f6c2e090a3b5d\n"
".quad 0x0938333109363109,0x662e766f6d090a30,0x3031662509203233,0x090a3b376625202c\n"
".quad 0x09363109636f6c2e,0x6d090a3009393331,0x09203233662e766f,0x6625202c31316625\n"
".quad 0x636f6c2e090a3b35,0x0930343109363109,0x662e6c756d090a30,0x3231662509203233\n"
".quad 0x25202c376625202c,0x6f6c2e090a3b3766,0x3134310936310963,0x2e6c756d090a3009\n"
".quad 0x3166250920323366,0x202c356625202c33,0x7262090a3b356625,0x240920696e752e61\n"
".quad 0x3836335f325f744c,0x5f744c240a3b3636,0x3a32323137335f32,0x3109636f6c2e090a\n"
".quad 0x0a30093534310936,0x3233662e766f6d09,0x25202c3866250920,0x6f6c2e090a3b3566\n"
".quad 0x3634310936310963,0x2e766f6d090a3009,0x3966250920323366,0x090a3b376625202c\n"
".quad 0x09363109636f6c2e,0x6d090a3009303531,0x09203233662e766f,0x6630202c33316625\n"
".quad 0x3030303030303030,0x2f2f09202020203b,0x2e766f6d090a3020,0x3166250920323366\n"
".quad 0x3030306630202c32,0x20203b3030303030,0x0a30202f2f092020,0x3233662e766f6d09\n"
".quad 0x202c313166250920,0x3030303030306630,0x09202020203b3030,0x6f6d090a30202f2f\n"
".quad 0x2509203233662e76,0x306630202c303166,0x3b30303030303030,0x202f2f0920202020\n"
".quad 0x5f325f744c240a30,0x090a3a3636383633,0x203233732e766f6d,0x30202c3931722509\n"
".quad 0x09636f6c2e090a3b,0x3009313331093631,0x7261702e646c090a,0x09203233732e6d61\n"
".quad 0x5f5b202c35317225,0x726170616475635f,0x614d36315a5f5f6d,0x746f72626c65646e\n"
".quad 0x664930316d735f30,0x6168637536507645,0x535f546969693472,0x5f32535f32535f32\n"
".quad 0x69695f30535f3253,0x68636e7572635f62,0x636f6c2e090a3b5d,0x0930353109363109\n"
".quad 0x2e70746573090a30,0x09203233732e656c,0x317225202c337025,0x3b39317225202c35\n"
".quad 0x315f325f744c240a,0x2f200a3a30373939,0x203e706f6f6c3c2f,0x646f6220706f6f4c\n"
".quad 0x3120656e696c2079,0x636f6c2e090a3535,0x0935353109363109,0x2033702540090a30\n"
".quad 0x5f4c240920617262,0x3b30373336325f32,0x6f6f6c3c2f2f200a,0x2074726150203e70\n"
".quad 0x20706f6f6c20666f,0x6e696c2079646f62,0x68202c3535312065,0x6562616c20646165\n"
".quad 0x5f744c242064656c,0x0a30373939315f32,0x3233662e64646109,0x202c343166250920\n"
".quad 0x6625202c33316625,0x766f6d090a3b3231,0x662509203233662e,0x30346630202c3531\n"
".quad 0x203b303030303038,0x34202f2f09202020,0x672e70746573090a,0x2509203233662e74\n"
".quad 0x34316625202c3470,0x0a3b35316625202c,0x6220347025214009,0x325f4c2409206172\n"
".quad 0x0a3b34313136325f,0x3336325f325f4c24,0x6f6c2e090a3a3037,0x3635310936310963\n"
".quad 0x2e766f6d090a3009,0x3272250920323373,0x3b36317225202c30,0x6e752e617262090a\n"
".quad 0x6557444c24092069,0x34315a5f5f69646e,0x646e614d636c6143,0x6649746f72626c65\n"
".quad 0x535f30535f546945,0x5f62695f30535f30,0x240a3b315f393032,0x313136325f325f4c\n"
".quad 0x6c3c2f2f200a3a34,0x726150203e706f6f,0x6f6f6c20666f2074,0x6c2079646f622070\n"
".quad 0x2c35353120656e69,0x616c206461656820,0x4c242064656c6562,0x373939315f325f74\n"
".quad 0x09636f6c2e090a30,0x3009373531093631,0x33662e6c756d090a,0x2c36316625092032\n"
".quad 0x25202c3131662520,0x6461090a3b303166,0x2509203233662e64,0x316625202c373166\n"
".quad 0x3b36316625202c36,0x33662e646461090a,0x2c30316625092032,0x6625202c39662520\n"
".quad 0x6f6c2e090a3b3731,0x3835310936310963,0x2e627573090a3009,0x3166250920323366\n"
".quad 0x2c33316625202c38,0x090a3b3231662520,0x203233662e646461,0x25202c3131662509\n"
".quad 0x38316625202c3866,0x09636f6c2e090a3b,0x3009393531093631,0x33662e6c756d090a\n"
".quad 0x2c39316625092032,0x25202c3031662520,0x6c2e090a3b303166,0x353109363109636f\n"
".quad 0x627573090a300937,0x722509203233732e,0x36317225202c3132,0x6f6d090a3b31202c\n"
".quad 0x2509203233752e76,0x0a3b30202c323272,0x656c2e7074657309,0x702509203233732e\n"
".quad 0x2c31327225202c35,0x090a3b3232722520,0x6172622035702540,0x325f325f4c240920\n"
".quad 0x2f200a3b32383836,0x203e706f6f6c3c2f,0x20666f2074726150,0x646f6220706f6f6c\n"
".quad 0x3120656e696c2079,0x64616568202c3535,0x64656c6562616c20,0x315f325f744c2420\n"
".quad 0x756d090a30373939,0x2509203233662e6c,0x316625202c303266,0x3b31316625202c31\n"
".quad 0x33662e646461090a,0x2c31326625092032,0x25202c3032662520,0x6f6d090a3b393166\n"
".quad 0x2509203233662e76,0x346630202c323266,0x3b30303030303830,0x202f2f0920202020\n"
".quad 0x2e70746573090a34,0x09203233662e7467,0x326625202c367025,0x3b32326625202c31\n"
".quad 0x203670252140090a,0x5f4c240920617262,0x3b36323636325f32,0x36325f325f4c240a\n"
".quad 0x6c2e090a3a323838,0x363109363109636f,0x766f6d090a300935,0x722509203233732e\n"
".quad 0x31327225202c3032,0x752e617262090a3b,0x57444c240920696e,0x315a5f5f69646e65\n"
".quad 0x6e614d636c614334,0x49746f72626c6564,0x5f30535f54694566,0x62695f30535f3053\n"
".quad 0x0a3b315f3930325f,0x3636325f325f4c24,0x3c2f2f200a3a3632,0x6150203e706f6f6c\n"
".quad 0x6f6c20666f207472,0x2079646f6220706f,0x35353120656e696c,0x6c2064616568202c\n"
".quad 0x242064656c656261,0x3939315f325f744c,0x636f6c2e090a3037,0x0936363109363109\n"
".quad 0x662e6c756d090a30,0x3631662509203233,0x202c31316625202c,0x61090a3b30316625\n"
".quad 0x09203233662e6464,0x6625202c33326625,0x36316625202c3631,0x662e646461090a3b\n"
".quad 0x3031662509203233,0x25202c396625202c,0x6c2e090a3b333266,0x363109363109636f\n"
".quad 0x627573090a300937,0x662509203233662e,0x30326625202c3432,0x0a3b39316625202c\n"
".quad 0x3233662e64646109,0x202c313166250920,0x326625202c386625,0x636f6c2e090a3b34\n"
".quad 0x0938363109363109,0x662e6c756d090a30,0x3532662509203233,0x202c30316625202c\n"
".quad 0x2e090a3b30316625,0x3109363109636f6c,0x7573090a30093636,0x2509203233732e62\n"
".quad 0x317225202c333272,0x6d090a3b32202c36,0x09203233752e766f,0x3b30202c34327225\n"
".quad 0x6c2e70746573090a,0x2509203233732e65,0x33327225202c3770,0x0a3b34327225202c\n"
".quad 0x7262203770254009,0x5f325f4c24092061,0x200a3b3439333732,0x3e706f6f6c3c2f2f\n"
".quad 0x666f207472615020,0x6f6220706f6f6c20,0x20656e696c207964,0x616568202c353531\n"
".quad 0x656c6562616c2064,0x5f325f744c242064,0x6d090a3037393931,0x09203233662e6c75\n"
".quad 0x6625202c30326625,0x31316625202c3131,0x662e646461090a3b,0x3632662509203233\n"
".quad 0x202c30326625202c,0x6d090a3b35326625,0x09203233662e766f,0x6630202c37326625\n"
".quad 0x3030303030383034,0x2f2f09202020203b,0x70746573090a3420,0x203233662e74672e\n"
".quad 0x6625202c38702509,0x37326625202c3632,0x3870252140090a3b,0x4c24092061726220\n"
".quad 0x38333137325f325f,0x325f325f4c240a3b,0x2e090a3a34393337,0x3109363109636f6c\n"
".quad 0x6f6d090a30093437,0x2509203233732e76,0x327225202c303272,0x2e617262090a3b33\n"
".quad 0x444c240920696e75,0x5a5f5f69646e6557,0x614d636c61433431,0x746f72626c65646e\n"
".quad 0x30535f5469456649,0x695f30535f30535f,0x3b315f3930325f62,0x37325f325f4c240a\n"
".quad 0x2f2f200a3a383331,0x50203e706f6f6c3c,0x6c20666f20747261,0x79646f6220706f6f\n"
".quad 0x353120656e696c20,0x2064616568202c35,0x2064656c6562616c,0x39315f325f744c24\n"
".quad 0x6f6c2e090a303739,0x3537310936310963,0x2e6c756d090a3009,0x3166250920323366\n"
".quad 0x2c31316625202c36,0x090a3b3031662520,0x203233662e646461,0x25202c3832662509\n"
".quad 0x316625202c363166,0x2e646461090a3b36,0x3166250920323366,0x202c396625202c30\n"
".quad 0x2e090a3b38326625,0x3109363109636f6c,0x7573090a30093637,0x2509203233662e62\n"
".quad 0x326625202c393266,0x3b35326625202c30,0x33662e646461090a,0x2c31316625092032\n"
".quad 0x6625202c38662520,0x6f6c2e090a3b3932,0x3737310936310963,0x2e6c756d090a3009\n"
".quad 0x3366250920323366,0x2c30316625202c30,0x090a3b3031662520,0x09363109636f6c2e\n"
".quad 0x73090a3009353731,0x09203233732e6275,0x7225202c35327225,0x090a3b33202c3631\n"
".quad 0x203233752e766f6d,0x30202c3632722509,0x2e70746573090a3b,0x09203233732e656c\n"
".quad 0x327225202c397025,0x3b36327225202c35,0x622039702540090a,0x325f4c2409206172\n"
".quad 0x0a3b36303937325f,0x706f6f6c3c2f2f20,0x6f2074726150203e,0x6220706f6f6c2066\n"
".quad 0x656e696c2079646f,0x6568202c35353120,0x6c6562616c206461,0x325f744c24206465\n"
".quad 0x090a30373939315f,0x203233662e6c756d,0x25202c3032662509,0x316625202c313166\n"
".quad 0x2e646461090a3b31,0x3366250920323366,0x2c30326625202c31,0x090a3b3033662520\n"
".quad 0x203233662e766f6d,0x30202c3233662509,0x3030303038303466,0x2f09202020203b30\n"
".quad 0x746573090a34202f,0x3233662e74672e70,0x202c303170250920,0x6625202c31336625\n"
".quad 0x252140090a3b3233,0x2061726220303170,0x37325f325f4c2409,0x5f4c240a3b303536\n"
".quad 0x3a36303937325f32,0x3109636f6c2e090a,0x0a30093338310936,0x3233732e766f6d09\n"
".quad 0x202c303272250920,0x62090a3b35327225,0x0920696e752e6172,0x69646e6557444c24\n"
".quad 0x6c614334315a5f5f,0x626c65646e614d63,0x5469456649746f72,0x535f30535f30535f\n"
".quad 0x3930325f62695f30,0x325f4c240a3b315f,0x0a3a30353637325f,0x706f6f6c3c2f2f20\n"
".quad 0x6f2074726150203e,0x6220706f6f6c2066,0x656e696c2079646f,0x6568202c35353120\n"
".quad 0x6c6562616c206461,0x325f744c24206465,0x090a30373939315f,0x09363109636f6c2e\n"
".quad 0x6d090a3009343831,0x09203233662e6c75,0x6625202c36316625,0x30316625202c3131\n"
".quad 0x662e646461090a3b,0x3333662509203233,0x202c36316625202c,0x61090a3b36316625\n"
".quad 0x09203233662e6464,0x6625202c30316625,0x3b33336625202c39,0x3109636f6c2e090a\n"
".quad 0x0a30093538310936,0x3233662e62757309,0x202c343366250920,0x6625202c30326625\n"
".quad 0x646461090a3b3033,0x662509203233662e,0x2c386625202c3131,0x090a3b3433662520\n"
".quad 0x09363109636f6c2e,0x6d090a3009363831,0x09203233662e6c75,0x6625202c35336625\n"
".quad 0x30316625202c3031,0x09636f6c2e090a3b,0x3009343831093631,0x33732e627573090a\n"
".quad 0x2c37327225092032,0x34202c3631722520,0x752e766f6d090a3b,0x3832722509203233\n"
".quad 0x6573090a3b30202c,0x33732e656c2e7074,0x2c31317025092032,0x25202c3732722520\n"
".quad 0x2540090a3b383272,0x2061726220313170,0x38325f325f4c2409,0x2f2f200a3b383134\n"
".quad 0x50203e706f6f6c3c,0x6c20666f20747261,0x79646f6220706f6f,0x353120656e696c20\n"
".quad 0x2064616568202c35,0x2064656c6562616c,0x39315f325f744c24,0x6c756d090a303739\n"
".quad 0x662509203233662e,0x31316625202c3032,0x0a3b31316625202c,0x3233662e64646109\n"
".quad 0x202c363366250920,0x6625202c30326625,0x766f6d090a3b3533,0x662509203233662e\n"
".quad 0x30346630202c3733,0x203b303030303038,0x34202f2f09202020,0x672e70746573090a\n"
".quad 0x2509203233662e74,0x336625202c323170,0x3b37336625202c36,0x323170252140090a\n"
".quad 0x4c24092061726220,0x32363138325f325f,0x325f325f4c240a3b,0x2e090a3a38313438\n"
".quad 0x3109363109636f6c,0x6f6d090a30093239,0x2509203233732e76,0x327225202c303272\n"
".quad 0x2e617262090a3b37,0x444c240920696e75,0x5a5f5f69646e6557,0x614d636c61433431\n"
".quad 0x746f72626c65646e,0x30535f5469456649,0x695f30535f30535f,0x3b315f3930325f62\n"
".quad 0x38325f325f4c240a,0x2f2f200a3a323631,0x50203e706f6f6c3c,0x6c20666f20747261\n"
".quad 0x79646f6220706f6f,0x353120656e696c20,0x2064616568202c35,0x2064656c6562616c\n"
".quad 0x39315f325f744c24,0x6f6c2e090a303739,0x3339310936310963,0x2e6c756d090a3009\n"
".quad 0x3166250920323366,0x2c31316625202c36,0x090a3b3031662520,0x203233662e646461\n"
".quad 0x25202c3833662509,0x316625202c363166,0x2e646461090a3b36,0x3166250920323366\n"
".quad 0x202c396625202c30,0x2e090a3b38336625,0x3109363109636f6c,0x7573090a30093439\n"
".quad 0x2509203233662e62,0x326625202c393366,0x3b35336625202c30,0x33662e646461090a\n"
".quad 0x2c31316625092032,0x6625202c38662520,0x6f6c2e090a3b3933,0x3539310936310963\n"
".quad 0x2e6c756d090a3009,0x3466250920323366,0x2c30316625202c30,0x090a3b3031662520\n"
".quad 0x09363109636f6c2e,0x73090a3009333931,0x09203233732e6275,0x7225202c39327225\n"
".quad 0x090a3b35202c3631,0x203233752e766f6d,0x30202c3033722509,0x2e70746573090a3b\n"
".quad 0x09203233732e656c,0x7225202c33317025,0x30337225202c3932,0x3331702540090a3b\n"
".quad 0x4c24092061726220,0x30333938325f325f,0x6f6c3c2f2f200a3b,0x74726150203e706f\n"
".quad 0x706f6f6c20666f20,0x696c2079646f6220,0x202c35353120656e,0x62616c2064616568\n"
".quad 0x744c242064656c65,0x30373939315f325f,0x33662e6c756d090a,0x2c30326625092032\n"
".quad 0x25202c3131662520,0x6461090a3b313166,0x2509203233662e64,0x326625202c313466\n"
".quad 0x3b30346625202c30,0x33662e766f6d090a,0x2c32346625092032,0x3030383034663020\n"
".quad 0x202020203b303030,0x73090a34202f2f09,0x662e74672e707465,0x3431702509203233\n"
".quad 0x202c31346625202c,0x40090a3b32346625,0x7262203431702521,0x5f325f4c24092061\n"
".quad 0x240a3b3437363832,0x333938325f325f4c,0x636f6c2e090a3a30,0x0931303209363109\n"
".quad 0x732e766f6d090a30,0x3032722509203233,0x0a3b39327225202c,0x696e752e61726209\n"
".quad 0x6e6557444c240920,0x4334315a5f5f6964,0x65646e614d636c61,0x456649746f72626c\n"
".quad 0x30535f30535f5469,0x325f62695f30535f,0x4c240a3b315f3930,0x34373638325f325f\n"
".quad 0x6f6c3c2f2f200a3a,0x74726150203e706f,0x706f6f6c20666f20,0x696c2079646f6220\n"
".quad 0x202c35353120656e,0x62616c2064616568,0x744c242064656c65,0x30373939315f325f\n"
".quad 0x3109636f6c2e090a,0x0a30093230320936,0x3233662e6c756d09,0x202c363166250920\n"
".quad 0x6625202c31316625,0x646461090a3b3031,0x662509203233662e,0x36316625202c3334\n"
".quad 0x0a3b36316625202c,0x3233662e64646109,0x202c303166250920,0x346625202c396625\n"
".quad 0x636f6c2e090a3b33,0x0933303209363109,0x662e627573090a30,0x3434662509203233\n"
".quad 0x202c30326625202c,0x61090a3b30346625,0x09203233662e6464,0x6625202c31316625\n"
".quad 0x3b34346625202c38,0x3109636f6c2e090a,0x0a30093430320936,0x3233662e6c756d09\n"
".quad 0x202c353466250920,0x6625202c30316625,0x6f6c2e090a3b3031,0x3230320936310963\n"
".quad 0x2e627573090a3009,0x3372250920323373,0x2c36317225202c31,0x766f6d090a3b3620\n"
".quad 0x722509203233752e,0x090a3b30202c3233,0x2e656c2e70746573,0x3170250920323373\n"
".quad 0x2c31337225202c35,0x090a3b3233722520,0x7262203531702540,0x5f325f4c24092061\n"
".quad 0x200a3b3234343932,0x3e706f6f6c3c2f2f,0x666f207472615020,0x6f6220706f6f6c20\n"
".quad 0x20656e696c207964,0x616568202c353531,0x656c6562616c2064,0x5f325f744c242064\n"
".quad 0x6d090a3037393931,0x09203233662e6c75,0x6625202c30326625,0x31316625202c3131\n"
".quad 0x662e646461090a3b,0x3634662509203233,0x202c30326625202c,0x6d090a3b35346625\n"
".quad 0x09203233662e766f,0x6630202c37346625,0x3030303030383034,0x2f2f09202020203b\n"
".quad 0x70746573090a3420,0x203233662e74672e,0x25202c3631702509,0x346625202c363466\n"
".quad 0x70252140090a3b37,0x0920617262203631,0x3139325f325f4c24,0x325f4c240a3b3638\n"
".quad 0x0a3a32343439325f,0x363109636f6c2e09,0x090a300930313209,0x203233732e766f6d\n"
".quad 0x25202c3032722509,0x7262090a3b313372,0x240920696e752e61,0x5f69646e6557444c\n"
".quad 0x636c614334315a5f,0x72626c65646e614d,0x5f5469456649746f,0x30535f30535f3053\n"
".quad 0x5f3930325f62695f,0x5f325f4c240a3b31,0x200a3a3638313932,0x3e706f6f6c3c2f2f\n"
".quad 0x666f207472615020,0x6f6220706f6f6c20,0x20656e696c207964,0x616568202c353531\n"
".quad 0x656c6562616c2064,0x5f325f744c242064,0x2e090a3037393931,0x3209363109636f6c\n"
".quad 0x756d090a30093131,0x2509203233662e6c,0x316625202c363166,0x3b30316625202c31\n"
".quad 0x33662e646461090a,0x2c38346625092032,0x25202c3631662520,0x6461090a3b363166\n"
".quad 0x2509203233662e64,0x396625202c303166,0x0a3b38346625202c,0x363109636f6c2e09\n"
".quad 0x090a300932313209,0x203233662e627573,0x25202c3934662509,0x346625202c303266\n"
".quad 0x2e646461090a3b35,0x3166250920323366,0x202c386625202c31,0x2e090a3b39346625\n"
".quad 0x3209363109636f6c,0x756d090a30093331,0x2509203233662e6c,0x316625202c303566\n"
".quad 0x3b30316625202c30,0x3109636f6c2e090a,0x0a30093131320936,0x3233732e62757309\n"
".quad 0x202c333372250920,0x3b37202c36317225,0x33752e766f6d090a,0x2c34337225092032\n"
".quad 0x746573090a3b3020,0x3233732e656c2e70,0x202c373170250920,0x7225202c33337225\n"
".quad 0x702540090a3b3433,0x0920617262203731,0x3939325f325f4c24,0x3c2f2f200a3b3435\n"
".quad 0x6150203e706f6f6c,0x6f6c20666f207472,0x2079646f6220706f,0x35353120656e696c\n"
".quad 0x6c2064616568202c,0x242064656c656261,0x3939315f325f744c,0x2e6c756d090a3037\n"
".quad 0x3266250920323366,0x2c31316625202c30,0x090a3b3131662520,0x203233662e646461\n"
".quad 0x25202c3135662509,0x356625202c303266,0x2e766f6d090a3b30,0x3566250920323366\n"
".quad 0x3830346630202c32,0x20203b3030303030,0x0a34202f2f092020,0x74672e7074657309\n"
".quad 0x702509203233662e,0x31356625202c3831,0x0a3b32356625202c,0x2038317025214009\n"
".quad 0x5f4c240920617262,0x3b38393639325f32,0x39325f325f4c240a,0x6c2e090a3a343539\n"
".quad 0x313209363109636f,0x766f6d090a300939,0x722509203233732e,0x33337225202c3032\n"
".quad 0x752e617262090a3b,0x57444c240920696e,0x315a5f5f69646e65,0x6e614d636c614334\n"
".quad 0x49746f72626c6564,0x5f30535f54694566,0x62695f30535f3053,0x0a3b315f3930325f\n"
".quad 0x3639325f325f4c24,0x3c2f2f200a3a3839,0x6150203e706f6f6c,0x6f6c20666f207472\n"
".quad 0x2079646f6220706f,0x35353120656e696c,0x6c2064616568202c,0x242064656c656261\n"
".quad 0x3939315f325f744c,0x636f6c2e090a3037,0x0930323209363109,0x662e6c756d090a30\n"
".quad 0x3631662509203233,0x202c31316625202c,0x61090a3b30316625,0x09203233662e6464\n"
".quad 0x6625202c33356625,0x36316625202c3631,0x662e646461090a3b,0x3031662509203233\n"
".quad 0x25202c396625202c,0x6c2e090a3b333566,0x323209363109636f,0x627573090a300931\n"
".quad 0x662509203233662e,0x30326625202c3435,0x0a3b30356625202c,0x3233662e64646109\n"
".quad 0x202c313166250920,0x356625202c386625,0x636f6c2e090a3b34,0x0932323209363109\n"
".quad 0x662e6c756d090a30,0x3535662509203233,0x202c30316625202c,0x2e090a3b30316625\n"
".quad 0x3209363109636f6c,0x7573090a30093032,0x2509203233732e62,0x317225202c353372\n"
".quad 0x6d090a3b38202c36,0x09203233752e766f,0x3b30202c36337225,0x6c2e70746573090a\n"
".quad 0x2509203233732e65,0x337225202c393170,0x3b36337225202c35,0x203931702540090a\n"
".quad 0x5f4c240920617262,0x3b36363430335f32,0x6f6f6c3c2f2f200a,0x2074726150203e70\n"
".quad 0x20706f6f6c20666f,0x6e696c2079646f62,0x68202c3535312065,0x6562616c20646165\n"
".quad 0x5f744c242064656c,0x0a30373939315f32,0x3233662e6c756d09,0x202c303266250920\n"
".quad 0x6625202c31316625,0x646461090a3b3131,0x662509203233662e,0x30326625202c3635\n"
".quad 0x0a3b35356625202c,0x3233662e766f6d09,0x202c373566250920,0x3030303830346630\n"
".quad 0x09202020203b3030,0x6573090a34202f2f,0x33662e74672e7074,0x2c30327025092032\n"
".quad 0x25202c3635662520,0x2140090a3b373566,0x6172622030327025,0x335f325f4c240920\n"
".quad 0x4c240a3b30313230,0x36363430335f325f,0x09636f6c2e090a3a,0x3009383232093631\n"
".quad 0x33732e766f6d090a,0x2c30327225092032,0x090a3b3533722520,0x20696e752e617262\n"
".quad 0x646e6557444c2409,0x614334315a5f5f69,0x6c65646e614d636c,0x69456649746f7262\n"
".quad 0x5f30535f30535f54,0x30325f62695f3053,0x5f4c240a3b315f39,0x3a30313230335f32\n"
".quad 0x6f6f6c3c2f2f200a,0x2074726150203e70,0x20706f6f6c20666f,0x6e696c2079646f62\n"
".quad 0x68202c3535312065,0x6562616c20646165,0x5f744c242064656c,0x0a30373939315f32\n"
".quad 0x363109636f6c2e09,0x090a300939323209,0x203233662e6c756d,0x25202c3631662509\n"
".quad 0x316625202c313166,0x2e646461090a3b30,0x3566250920323366,0x2c36316625202c38\n"
".quad 0x090a3b3631662520,0x203233662e646461,0x25202c3031662509,0x38356625202c3966\n"
".quad 0x09636f6c2e090a3b,0x3009303332093631,0x33662e627573090a,0x2c39356625092032\n"
".quad 0x25202c3032662520,0x6461090a3b353566,0x2509203233662e64,0x386625202c313166\n"
".quad 0x0a3b39356625202c,0x363109636f6c2e09,0x090a300931333209,0x203233662e6c756d\n"
".quad 0x25202c3036662509,0x316625202c303166,0x636f6c2e090a3b30,0x0939323209363109\n"
".quad 0x732e627573090a30,0x3733722509203233,0x202c36317225202c,0x2e766f6d090a3b39\n"
".quad 0x3372250920323375,0x73090a3b30202c38,0x732e656c2e707465,0x3132702509203233\n"
".quad 0x202c37337225202c,0x40090a3b38337225,0x6172622031327025,0x335f325f4c240920\n"
".quad 0x2f200a3b38373930,0x203e706f6f6c3c2f,0x20666f2074726150,0x646f6220706f6f6c\n"
".quad 0x3120656e696c2079,0x64616568202c3535,0x64656c6562616c20,0x315f325f744c2420\n"
".quad 0x756d090a30373939,0x2509203233662e6c,0x316625202c303266,0x3b31316625202c31\n"
".quad 0x33662e646461090a,0x2c31366625092032,0x25202c3032662520,0x6f6d090a3b303666\n"
".quad 0x2509203233662e76,0x346630202c323666,0x3b30303030303830,0x202f2f0920202020\n"
".quad 0x2e70746573090a34,0x09203233662e7467,0x6625202c32327025,0x32366625202c3136\n"
".quad 0x3270252140090a3b,0x2409206172622032,0x323730335f325f4c,0x5f325f4c240a3b32\n"
".quad 0x090a3a3837393033,0x09363109636f6c2e,0x6d090a3009373332,0x09203233732e766f\n"
".quad 0x7225202c30327225,0x617262090a3b3733,0x4c240920696e752e,0x5f5f69646e655744\n"
".quad 0x4d636c614334315a,0x6f72626c65646e61,0x535f546945664974,0x5f30535f30535f30\n"
".quad 0x315f3930325f6269,0x335f325f4c240a3b,0x2f200a3a32323730,0x203e706f6f6c3c2f\n"
".quad 0x20666f2074726150,0x646f6220706f6f6c,0x3120656e696c2079,0x64616568202c3535\n"
".quad 0x64656c6562616c20,0x315f325f744c2420,0x6c2e090a30373939,0x333209363109636f\n"
".quad 0x6c756d090a300938,0x662509203233662e,0x31316625202c3631,0x0a3b30316625202c\n"
".quad 0x3233662e64646109,0x202c333666250920,0x6625202c36316625,0x646461090a3b3631\n"
".quad 0x662509203233662e,0x2c396625202c3031,0x090a3b3336662520,0x09363109636f6c2e\n"
".quad 0x73090a3009393332,0x09203233662e6275,0x6625202c34366625,0x30366625202c3032\n"
".quad 0x662e646461090a3b,0x3131662509203233,0x25202c386625202c,0x6c2e090a3b343666\n"
".quad 0x343209363109636f,0x6c756d090a300930,0x662509203233662e,0x30316625202c3536\n"
".quad 0x0a3b30316625202c,0x363109636f6c2e09,0x090a300938333209,0x203233732e627573\n"
".quad 0x25202c3933722509,0x3b3031202c363172,0x33752e766f6d090a,0x2c30347225092032\n"
".quad 0x746573090a3b3020,0x3233732e656c2e70,0x202c333270250920,0x7225202c39337225\n"
".quad 0x702540090a3b3034,0x0920617262203332,0x3431335f325f4c24,0x3c2f2f200a3b3039\n"
".quad 0x6150203e706f6f6c,0x6f6c20666f207472,0x2079646f6220706f,0x35353120656e696c\n"
".quad 0x6c2064616568202c,0x242064656c656261,0x3939315f325f744c,0x2e6c756d090a3037\n"
".quad 0x3266250920323366,0x2c31316625202c30,0x090a3b3131662520,0x203233662e646461\n"
".quad 0x25202c3636662509,0x366625202c303266,0x2e766f6d090a3b35,0x3666250920323366\n"
".quad 0x3830346630202c37,0x20203b3030303030,0x0a34202f2f092020,0x74672e7074657309\n"
".quad 0x702509203233662e,0x36366625202c3432,0x0a3b37366625202c,0x2034327025214009\n"
".quad 0x5f4c240920617262,0x3b34333231335f32,0x31335f325f4c240a,0x6c2e090a3a303934\n"
".quad 0x343209363109636f,0x766f6d090a300936,0x722509203233732e,0x39337225202c3032\n"
".quad 0x752e617262090a3b,0x57444c240920696e,0x315a5f5f69646e65,0x6e614d636c614334\n"
".quad 0x49746f72626c6564,0x5f30535f54694566,0x62695f30535f3053,0x0a3b315f3930325f\n"
".quad 0x3231335f325f4c24,0x3c2f2f200a3a3433,0x6150203e706f6f6c,0x6f6c20666f207472\n"
".quad 0x2079646f6220706f,0x35353120656e696c,0x6c2064616568202c,0x242064656c656261\n"
".quad 0x3939315f325f744c,0x636f6c2e090a3037,0x0937343209363109,0x662e6c756d090a30\n"
".quad 0x3631662509203233,0x202c31316625202c,0x61090a3b30316625,0x09203233662e6464\n"
".quad 0x6625202c38366625,0x36316625202c3631,0x662e646461090a3b,0x3031662509203233\n"
".quad 0x25202c396625202c,0x6c2e090a3b383666,0x343209363109636f,0x627573090a300938\n"
".quad 0x662509203233662e,0x30326625202c3936,0x0a3b35366625202c,0x3233662e64646109\n"
".quad 0x202c313166250920,0x366625202c386625,0x636f6c2e090a3b39,0x0939343209363109\n"
".quad 0x662e6c756d090a30,0x3037662509203233,0x202c30316625202c,0x2e090a3b30316625\n"
".quad 0x3209363109636f6c,0x7573090a30093734,0x2509203233732e62,0x317225202c313472\n"
".quad 0x090a3b3131202c36,0x203233752e766f6d,0x30202c3234722509,0x2e70746573090a3b\n"
".quad 0x09203233732e656c,0x7225202c35327025,0x32347225202c3134,0x3532702540090a3b\n"
".quad 0x4c24092061726220,0x32303032335f325f,0x6f6c3c2f2f200a3b,0x74726150203e706f\n"
".quad 0x706f6f6c20666f20,0x696c2079646f6220,0x202c35353120656e,0x62616c2064616568\n"
".quad 0x744c242064656c65,0x30373939315f325f,0x33662e6c756d090a,0x2c30326625092032\n"
".quad 0x25202c3131662520,0x6461090a3b313166,0x2509203233662e64,0x326625202c313766\n"
".quad 0x3b30376625202c30,0x33662e766f6d090a,0x2c32376625092032,0x3030383034663020\n"
".quad 0x202020203b303030,0x73090a34202f2f09,0x662e74672e707465,0x3632702509203233\n"
".quad 0x202c31376625202c,0x40090a3b32376625,0x7262203632702521,0x5f325f4c24092061\n"
".quad 0x240a3b3634373133,0x303032335f325f4c,0x636f6c2e090a3a32,0x0935353209363109\n"
".quad 0x732e766f6d090a30,0x3032722509203233,0x0a3b31347225202c,0x696e752e61726209\n"
".quad 0x6e6557444c240920,0x4334315a5f5f6964,0x65646e614d636c61,0x456649746f72626c\n"
".quad 0x30535f30535f5469,0x325f62695f30535f,0x4c240a3b315f3930,0x36343731335f325f\n"
".quad 0x6f6c3c2f2f200a3a,0x74726150203e706f,0x706f6f6c20666f20,0x696c2079646f6220\n"
".quad 0x202c35353120656e,0x62616c2064616568,0x744c242064656c65,0x30373939315f325f\n"
".quad 0x3109636f6c2e090a,0x0a30093635320936,0x3233662e6c756d09,0x202c363166250920\n"
".quad 0x6625202c31316625,0x646461090a3b3031,0x662509203233662e,0x36316625202c3337\n"
".quad 0x0a3b36316625202c,0x3233662e64646109,0x202c303166250920,0x376625202c396625\n"
".quad 0x636f6c2e090a3b33,0x0937353209363109,0x662e627573090a30,0x3437662509203233\n"
".quad 0x202c30326625202c,0x61090a3b30376625,0x09203233662e6464,0x6625202c31316625\n"
".quad 0x3b34376625202c38,0x3109636f6c2e090a,0x0a30093835320936,0x3233662e6c756d09\n"
".quad 0x202c353766250920,0x6625202c30316625,0x6f6c2e090a3b3031,0x3635320936310963\n"
".quad 0x2e627573090a3009,0x3472250920323373,0x2c36317225202c33,0x6f6d090a3b323120\n"
".quad 0x2509203233752e76,0x0a3b30202c343472,0x656c2e7074657309,0x702509203233732e\n"
".quad 0x33347225202c3732,0x0a3b34347225202c,0x6220373270254009,0x325f4c2409206172\n"
".quad 0x0a3b34313532335f,0x706f6f6c3c2f2f20,0x6f2074726150203e,0x6220706f6f6c2066\n"
".quad 0x656e696c2079646f,0x6568202c35353120,0x6c6562616c206461,0x325f744c24206465\n"
".quad 0x090a30373939315f,0x203233662e6c756d,0x25202c3032662509,0x316625202c313166\n"
".quad 0x2e646461090a3b31,0x3766250920323366,0x2c30326625202c36,0x090a3b3537662520\n"
".quad 0x203233662e766f6d,0x30202c3737662509,0x3030303038303466,0x2f09202020203b30\n"
".quad 0x746573090a34202f,0x3233662e74672e70,0x202c383270250920,0x6625202c36376625\n"
".quad 0x252140090a3b3737,0x2061726220383270,0x32335f325f4c2409,0x5f4c240a3b383532\n"
".quad 0x3a34313532335f32,0x3109636f6c2e090a,0x0a30093436320936,0x3233732e766f6d09\n"
".quad 0x202c303272250920,0x62090a3b33347225,0x0920696e752e6172,0x69646e6557444c24\n"
".quad 0x6c614334315a5f5f,0x626c65646e614d63,0x5469456649746f72,0x535f30535f30535f\n"
".quad 0x3930325f62695f30,0x325f4c240a3b315f,0x0a3a38353232335f,0x706f6f6c3c2f2f20\n"
".quad 0x6f2074726150203e,0x6220706f6f6c2066,0x656e696c2079646f,0x6568202c35353120\n"
".quad 0x6c6562616c206461,0x325f744c24206465,0x090a30373939315f,0x09363109636f6c2e\n"
".quad 0x6d090a3009353632,0x09203233662e6c75,0x6625202c36316625,0x30316625202c3131\n"
".quad 0x662e646461090a3b,0x3837662509203233,0x202c36316625202c,0x61090a3b36316625\n"
".quad 0x09203233662e6464,0x6625202c30316625,0x3b38376625202c39,0x3109636f6c2e090a\n"
".quad 0x0a30093636320936,0x3233662e62757309,0x202c393766250920,0x6625202c30326625\n"
".quad 0x646461090a3b3537,0x662509203233662e,0x2c386625202c3131,0x090a3b3937662520\n"
".quad 0x09363109636f6c2e,0x6d090a3009373632,0x09203233662e6c75,0x6625202c30386625\n"
".quad 0x30316625202c3031,0x09636f6c2e090a3b,0x3009353632093631,0x33732e627573090a\n"
".quad 0x2c35347225092032,0x31202c3631722520,0x2e766f6d090a3b33,0x3472250920323375\n"
".quad 0x73090a3b30202c36,0x732e656c2e707465,0x3932702509203233,0x202c35347225202c\n"
".quad 0x40090a3b36347225,0x6172622039327025,0x335f325f4c240920,0x2f200a3b36323033\n"
".quad 0x203e706f6f6c3c2f,0x20666f2074726150,0x646f6220706f6f6c,0x3120656e696c2079\n"
".quad 0x64616568202c3535,0x64656c6562616c20,0x315f325f744c2420,0x756d090a30373939\n"
".quad 0x2509203233662e6c,0x316625202c303266,0x3b31316625202c31,0x33662e646461090a\n"
".quad 0x2c31386625092032,0x25202c3032662520,0x6f6d090a3b303866,0x2509203233662e76\n"
".quad 0x346630202c323866,0x3b30303030303830,0x202f2f0920202020,0x2e70746573090a34\n"
".quad 0x09203233662e7467,0x6625202c30337025,0x32386625202c3138,0x3370252140090a3b\n"
".quad 0x2409206172622030,0x373732335f325f4c,0x5f325f4c240a3b30,0x090a3a3632303333\n"
".quad 0x09363109636f6c2e,0x6d090a3009333732,0x09203233732e766f,0x7225202c30327225\n"
".quad 0x617262090a3b3534,0x4c240920696e752e,0x5f5f69646e655744,0x4d636c614334315a\n"
".quad 0x6f72626c65646e61,0x535f546945664974,0x5f30535f30535f30,0x315f3930325f6269\n"
".quad 0x335f325f4c240a3b,0x2f200a3a30373732,0x203e706f6f6c3c2f,0x20666f2074726150\n"
".quad 0x646f6220706f6f6c,0x3120656e696c2079,0x64616568202c3535,0x64656c6562616c20\n"
".quad 0x315f325f744c2420,0x6c2e090a30373939,0x373209363109636f,0x6c756d090a300934\n"
".quad 0x662509203233662e,0x31316625202c3631,0x0a3b30316625202c,0x3233662e64646109\n"
".quad 0x202c333866250920,0x6625202c36316625,0x646461090a3b3631,0x662509203233662e\n"
".quad 0x2c396625202c3031,0x090a3b3338662520,0x09363109636f6c2e,0x73090a3009353732\n"
".quad 0x09203233662e6275,0x6625202c34386625,0x30386625202c3032,0x662e646461090a3b\n"
".quad 0x3131662509203233,0x25202c386625202c,0x6c2e090a3b343866,0x373209363109636f\n"
".quad 0x6c756d090a300936,0x662509203233662e,0x30316625202c3538,0x0a3b30316625202c\n"
".quad 0x363109636f6c2e09,0x090a300934373209,0x203233732e627573,0x25202c3734722509\n"
".quad 0x3b3431202c363172,0x33752e766f6d090a,0x2c38347225092032,0x746573090a3b3020\n"
".quad 0x3233732e656c2e70,0x202c313370250920,0x7225202c37347225,0x702540090a3b3834\n"
".quad 0x0920617262203133,0x3533335f325f4c24,0x3c2f2f200a3b3833,0x6150203e706f6f6c\n"
".quad 0x6f6c20666f207472,0x2079646f6220706f,0x35353120656e696c,0x6c2064616568202c\n"
".quad 0x242064656c656261,0x3939315f325f744c,0x2e6c756d090a3037,0x3266250920323366\n"
".quad 0x2c31316625202c30,0x090a3b3131662520,0x203233662e646461,0x25202c3638662509\n"
".quad 0x386625202c303266,0x2e766f6d090a3b35,0x3866250920323366,0x3830346630202c37\n"
".quad 0x20203b3030303030,0x0a34202f2f092020,0x74672e7074657309,0x702509203233662e\n"
".quad 0x36386625202c3233,0x0a3b37386625202c,0x2032337025214009,0x5f4c240920617262\n"
".quad 0x3b32383233335f32,0x33335f325f4c240a,0x6c2e090a3a383335,0x383209363109636f\n"
".quad 0x766f6d090a300932,0x722509203233732e,0x37347225202c3032,0x752e617262090a3b\n"
".quad 0x57444c240920696e,0x315a5f5f69646e65,0x6e614d636c614334,0x49746f72626c6564\n"
".quad 0x5f30535f54694566,0x62695f30535f3053,0x0a3b315f3930325f,0x3233335f325f4c24\n"
".quad 0x3c2f2f200a3a3238,0x6150203e706f6f6c,0x6f6c20666f207472,0x2079646f6220706f\n"
".quad 0x35353120656e696c,0x6c2064616568202c,0x242064656c656261,0x3939315f325f744c\n"
".quad 0x636f6c2e090a3037,0x0933383209363109,0x662e6c756d090a30,0x3631662509203233\n"
".quad 0x202c31316625202c,0x61090a3b30316625,0x09203233662e6464,0x6625202c38386625\n"
".quad 0x36316625202c3631,0x662e646461090a3b,0x3031662509203233,0x25202c396625202c\n"
".quad 0x6c2e090a3b383866,0x383209363109636f,0x627573090a300934,0x662509203233662e\n"
".quad 0x30326625202c3938,0x0a3b35386625202c,0x3233662e64646109,0x202c313166250920\n"
".quad 0x386625202c386625,0x636f6c2e090a3b39,0x0935383209363109,0x662e6c756d090a30\n"
".quad 0x3039662509203233,0x202c30316625202c,0x2e090a3b30316625,0x3209363109636f6c\n"
".quad 0x7573090a30093338,0x2509203233732e62,0x317225202c393472,0x090a3b3531202c36\n"
".quad 0x203233752e766f6d,0x30202c3035722509,0x2e70746573090a3b,0x09203233732e656c\n"
".quad 0x7225202c33337025,0x30357225202c3934,0x3333702540090a3b,0x4c24092061726220\n"
".quad 0x30353034335f325f,0x6f6c3c2f2f200a3b,0x74726150203e706f,0x706f6f6c20666f20\n"
".quad 0x696c2079646f6220,0x202c35353120656e,0x62616c2064616568,0x744c242064656c65\n"
".quad 0x30373939315f325f,0x33662e6c756d090a,0x2c30326625092032,0x25202c3131662520\n"
".quad 0x6461090a3b313166,0x2509203233662e64,0x326625202c313966,0x3b30396625202c30\n"
".quad 0x33662e766f6d090a,0x2c32396625092032,0x3030383034663020,0x202020203b303030\n"
".quad 0x73090a34202f2f09,0x662e74672e707465,0x3433702509203233,0x202c31396625202c\n"
".quad 0x40090a3b32396625,0x7262203433702521,0x5f325f4c24092061,0x240a3b3439373333\n"
".quad 0x353034335f325f4c,0x636f6c2e090a3a30,0x0931393209363109,0x732e766f6d090a30\n"
".quad 0x3032722509203233,0x0a3b39347225202c,0x696e752e61726209,0x6e6557444c240920\n"
".quad 0x4334315a5f5f6964,0x65646e614d636c61,0x456649746f72626c,0x30535f30535f5469\n"
".quad 0x325f62695f30535f,0x4c240a3b315f3930,0x34393733335f325f,0x6f6c3c2f2f200a3a\n"
".quad 0x74726150203e706f,0x706f6f6c20666f20,0x696c2079646f6220,0x202c35353120656e\n"
".quad 0x62616c2064616568,0x744c242064656c65,0x30373939315f325f,0x3109636f6c2e090a\n"
".quad 0x0a30093239320936,0x3233662e6c756d09,0x202c363166250920,0x6625202c31316625\n"
".quad 0x646461090a3b3031,0x662509203233662e,0x36316625202c3339,0x0a3b36316625202c\n"
".quad 0x3233662e64646109,0x202c303166250920,0x396625202c396625,0x636f6c2e090a3b33\n"
".quad 0x0933393209363109,0x662e627573090a30,0x3439662509203233,0x202c30326625202c\n"
".quad 0x61090a3b30396625,0x09203233662e6464,0x6625202c31316625,0x3b34396625202c38\n"
".quad 0x3109636f6c2e090a,0x0a30093439320936,0x3233662e6c756d09,0x202c353966250920\n"
".quad 0x6625202c30316625,0x6f6c2e090a3b3031,0x3239320936310963,0x2e627573090a3009\n"
".quad 0x3572250920323373,0x2c36317225202c31,0x6f6d090a3b363120,0x2509203233752e76\n"
".quad 0x0a3b30202c323572,0x656c2e7074657309,0x702509203233732e,0x31357225202c3533\n"
".quad 0x0a3b32357225202c,0x6220353370254009,0x325f4c2409206172,0x0a3b32363534335f\n"
".quad 0x706f6f6c3c2f2f20,0x6f2074726150203e,0x6220706f6f6c2066,0x656e696c2079646f\n"
".quad 0x6568202c35353120,0x6c6562616c206461,0x325f744c24206465,0x090a30373939315f\n"
".quad 0x203233662e6c756d,0x25202c3032662509,0x316625202c313166,0x2e646461090a3b31\n"
".quad 0x3966250920323366,0x2c30326625202c36,0x090a3b3539662520,0x203233662e766f6d\n"
".quad 0x30202c3739662509,0x3030303038303466,0x2f09202020203b30,0x746573090a34202f\n"
".quad 0x3233662e74672e70,0x202c363370250920,0x6625202c36396625,0x252140090a3b3739\n"
".quad 0x2061726220363370,0x34335f325f4c2409,0x5f4c240a3b363033,0x3a32363534335f32\n"
".quad 0x3109636f6c2e090a,0x0a30093030330936,0x3233732e766f6d09,0x202c303272250920\n"
".quad 0x62090a3b31357225,0x0920696e752e6172,0x69646e6557444c24,0x6c614334315a5f5f\n"
".quad 0x626c65646e614d63,0x5469456649746f72,0x535f30535f30535f,0x3930325f62695f30\n"
".quad 0x325f4c240a3b315f,0x0a3a36303334335f,0x706f6f6c3c2f2f20,0x6f2074726150203e\n"
".quad 0x6220706f6f6c2066,0x656e696c2079646f,0x6568202c35353120,0x6c6562616c206461\n"
".quad 0x325f744c24206465,0x090a30373939315f,0x09363109636f6c2e,0x6d090a3009313033\n"
".quad 0x09203233662e6c75,0x6625202c36316625,0x30316625202c3131,0x662e646461090a3b\n"
".quad 0x3839662509203233,0x202c36316625202c,0x61090a3b36316625,0x09203233662e6464\n"
".quad 0x6625202c30316625,0x3b38396625202c39,0x3109636f6c2e090a,0x0a30093230330936\n"
".quad 0x3233662e62757309,0x202c393966250920,0x6625202c30326625,0x646461090a3b3539\n"
".quad 0x662509203233662e,0x2c386625202c3131,0x090a3b3939662520,0x09363109636f6c2e\n"
".quad 0x6d090a3009333033,0x09203233662e6c75,0x25202c3030316625,0x316625202c303166\n"
".quad 0x636f6c2e090a3b30,0x0931303309363109,0x732e627573090a30,0x3335722509203233\n"
".quad 0x202c36317225202c,0x766f6d090a3b3731,0x722509203233752e,0x090a3b30202c3435\n"
".quad 0x2e656c2e70746573,0x3370250920323373,0x2c33357225202c37,0x090a3b3435722520\n"
".quad 0x7262203733702540,0x5f325f4c24092061,0x200a3b3437303533,0x3e706f6f6c3c2f2f\n"
".quad 0x666f207472615020,0x6f6220706f6f6c20,0x20656e696c207964,0x616568202c353531\n"
".quad 0x656c6562616c2064,0x5f325f744c242064,0x6d090a3037393931,0x09203233662e6c75\n"
".quad 0x6625202c30326625,0x31316625202c3131,0x662e646461090a3b,0x3031662509203233\n"
".quad 0x2c30326625202c31,0x0a3b303031662520,0x3233662e766f6d09,0x2c32303166250920\n"
".quad 0x3030383034663020,0x092020203b303030,0x6573090a34202f2f,0x33662e74672e7074\n"
".quad 0x2c38337025092032,0x202c313031662520,0x090a3b3230316625,0x6220383370252140\n"
".quad 0x325f4c2409206172,0x0a3b38313834335f,0x3035335f325f4c24,0x6f6c2e090a3a3437\n"
".quad 0x3930330936310963,0x2e766f6d090a3009,0x3272250920323373,0x3b33357225202c30\n"
".quad 0x6e752e617262090a,0x6557444c24092069,0x34315a5f5f69646e,0x646e614d636c6143\n"
".quad 0x6649746f72626c65,0x535f30535f546945,0x5f62695f30535f30,0x240a3b315f393032\n"
".quad 0x313834335f325f4c,0x6c3c2f2f200a3a38,0x726150203e706f6f,0x6f6f6c20666f2074\n"
".quad 0x6c2079646f622070,0x2c35353120656e69,0x616c206461656820,0x4c242064656c6562\n"
".quad 0x373939315f325f74,0x09636f6c2e090a30,0x3009303133093631,0x33662e6c756d090a\n"
".quad 0x2c36316625092032,0x25202c3131662520,0x6461090a3b303166,0x2509203233662e64\n"
".quad 0x6625202c33303166,0x36316625202c3631,0x662e646461090a3b,0x3031662509203233\n"
".quad 0x25202c396625202c,0x2e090a3b33303166,0x3309363109636f6c,0x7573090a30093131\n"
".quad 0x2509203233662e62,0x6625202c34303166,0x30316625202c3032,0x2e646461090a3b30\n"
".quad 0x3166250920323366,0x202c386625202c31,0x090a3b3430316625,0x09363109636f6c2e\n"
".quad 0x6d090a3009323133,0x09203233662e6c75,0x25202c3530316625,0x316625202c303166\n"
".quad 0x636f6c2e090a3b30,0x0930313309363109,0x732e627573090a30,0x3535722509203233\n"
".quad 0x202c36317225202c,0x766f6d090a3b3831,0x722509203233752e,0x090a3b30202c3635\n"
".quad 0x2e656c2e70746573,0x3370250920323373,0x2c35357225202c39,0x090a3b3635722520\n"
".quad 0x7262203933702540,0x5f325f4c24092061,0x200a3b3638353533,0x3e706f6f6c3c2f2f\n"
".quad 0x666f207472615020,0x6f6220706f6f6c20,0x20656e696c207964,0x616568202c353531\n"
".quad 0x656c6562616c2064,0x5f325f744c242064,0x6d090a3037393931,0x09203233662e6c75\n"
".quad 0x6625202c30326625,0x31316625202c3131,0x662e646461090a3b,0x3031662509203233\n"
".quad 0x2c30326625202c36,0x0a3b353031662520,0x3233662e766f6d09,0x2c37303166250920\n"
".quad 0x3030383034663020,0x092020203b303030,0x6573090a34202f2f,0x33662e74672e7074\n"
".quad 0x2c30347025092032,0x202c363031662520,0x090a3b3730316625,0x6220303470252140\n"
".quad 0x325f4c2409206172,0x0a3b30333335335f,0x3535335f325f4c24,0x6f6c2e090a3a3638\n"
".quad 0x3831330936310963,0x2e766f6d090a3009,0x3272250920323373,0x3b35357225202c30\n"
".quad 0x6e752e617262090a,0x6557444c24092069,0x34315a5f5f69646e,0x646e614d636c6143\n"
".quad 0x6649746f72626c65,0x535f30535f546945,0x5f62695f30535f30,0x240a3b315f393032\n"
".quad 0x333335335f325f4c,0x6c3c2f2f200a3a30,0x726150203e706f6f,0x6f6f6c20666f2074\n"
".quad 0x6c2079646f622070,0x2c35353120656e69,0x616c206461656820,0x4c242064656c6562\n"
".quad 0x373939315f325f74,0x09636f6c2e090a30,0x3009393133093631,0x33662e6c756d090a\n"
".quad 0x2c36316625092032,0x25202c3131662520,0x6461090a3b303166,0x2509203233662e64\n"
".quad 0x6625202c38303166,0x36316625202c3631,0x662e646461090a3b,0x3031662509203233\n"
".quad 0x25202c396625202c,0x2e090a3b38303166,0x3309363109636f6c,0x7573090a30093032\n"
".quad 0x2509203233662e62,0x6625202c39303166,0x30316625202c3032,0x2e646461090a3b35\n"
".quad 0x3166250920323366,0x202c386625202c31,0x090a3b3930316625,0x09363109636f6c2e\n"
".quad 0x6d090a3009313233,0x09203233662e6c75,0x25202c3031316625,0x316625202c303166\n"
".quad 0x636f6c2e090a3b30,0x0935323309363109,0x732e627573090a30,0x3631722509203233\n"
".quad 0x202c36317225202c,0x6f6c2e090a3b3931,0x3931330936310963,0x2e766f6d090a3009\n"
".quad 0x3572250920323373,0x73090a3b30202c37,0x732e656c2e707465,0x2c33702509203233\n"
".quad 0x25202c3631722520,0x2540090a3b373572,0x0920617262203370,0x3036335f325f4c24\n"
".quad 0x3c2f2f200a3b3839,0x6150203e706f6f6c,0x6f6c20666f207472,0x2079646f6220706f\n"
".quad 0x35353120656e696c,0x6c2064616568202c,0x242064656c656261,0x3939315f325f744c\n"
".quad 0x2e6c756d090a3037,0x3266250920323366,0x2c31316625202c30,0x090a3b3131662520\n"
".quad 0x203233662e646461,0x202c313131662509,0x6625202c30326625,0x6f6d090a3b303131\n"
".quad 0x2509203233662e76,0x6630202c32313166,0x3030303030383034,0x202f2f092020203b\n"
".quad 0x2e70746573090a34,0x09203233662e7467,0x6625202c31347025,0x316625202c313131\n"
".quad 0x252140090a3b3231,0x2061726220313470,0x35335f325f4c2409,0x5f4c240a3b323438\n"
".quad 0x3a38393036335f32,0x3109636f6c2e090a,0x0a30093732330936,0x3233732e766f6d09\n"
".quad 0x202c303272250920,0x62090a3b36317225,0x0920696e752e6172,0x69646e6557444c24\n"
".quad 0x6c614334315a5f5f,0x626c65646e614d63,0x5469456649746f72,0x535f30535f30535f\n"
".quad 0x3930325f62695f30,0x325f4c240a3b315f,0x0a3a32343835335f,0x706f6f6c3c2f2f20\n"
".quad 0x6f2074726150203e,0x6220706f6f6c2066,0x656e696c2079646f,0x6568202c35353120\n"
".quad 0x6c6562616c206461,0x325f744c24206465,0x090a30373939315f,0x09363109636f6c2e\n"
".quad 0x6d090a3009383233,0x09203233662e6c75,0x6625202c36316625,0x30316625202c3131\n"
".quad 0x662e646461090a3b,0x3131662509203233,0x2c36316625202c33,0x090a3b3631662520\n"
".quad 0x203233662e646461,0x25202c3031662509,0x31316625202c3966,0x636f6c2e090a3b33\n"
".quad 0x0939323309363109,0x662e627573090a30,0x3131662509203233,0x2c30326625202c34\n"
".quad 0x0a3b303131662520,0x3233662e64646109,0x202c313166250920,0x316625202c386625\n"
".quad 0x6f6c2e090a3b3431,0x3033330936310963,0x2e6c756d090a3009,0x3166250920323366\n"
".quad 0x2c30316625202c32,0x090a3b3031662520,0x09363109636f6c2e,0x6d090a3009313333\n"
".quad 0x09203233662e6c75,0x6625202c33316625,0x31316625202c3131,0x09636f6c2e090a3b\n"
".quad 0x3009383233093631,0x6e752e617262090a,0x325f744c24092069,0x0a3b30373939315f\n"
".quad 0x69646e6557444c24,0x6c614334315a5f5f,0x626c65646e614d63,0x5469456649746f72\n"
".quad 0x535f30535f30535f,0x3930325f62695f30,0x6f6c2e090a3a315f,0x0931320937310963\n"
".quad 0x732e766f6d090a30,0x3835722509203233,0x6573090a3b30202c,0x33732e74672e7074\n"
".quad 0x2c32347025092032,0x25202c3032722520,0x6c2e090a3b383572,0x333109363109636f\n"
".quad 0x2e646c090a300931,0x33732e6d61726170,0x2c35317225092032,0x616475635f5f5b20\n"
".quad 0x315a5f5f6d726170,0x626c65646e614d36,0x316d735f30746f72,0x7536507645664930\n"
".quad 0x6969693472616863,0x5f32535f32535f54,0x30535f32535f3253,0x7572635f6269695f\n"
".quad 0x2e090a3b5d68636e,0x3209373109636f6c,0x627573090a300931,0x722509203233732e\n"
".quad 0x35317225202c3935,0x0a3b30327225202c,0x3233732e766f6d09,0x202c303672250920\n"
".quad 0x706c6573090a3b30,0x722509203233732e,0x39357225202c3136,0x202c30367225202c\n"
".quad 0x6d090a3b32347025,0x09203233752e766f,0x3b30202c32367225,0x652e70746573090a\n"
".quad 0x2509203233732e71,0x367225202c333470,0x3b32367225202c31,0x203334702540090a\n"
".quad 0x744c240920617262,0x34333637335f325f,0x09636f6c2e090a3b,0x0a30093832093731\n"
".quad 0x617261702e646c09,0x2509203233732e6d,0x5f5f5b202c333672,0x6d72617061647563\n"
".quad 0x6e614d36315a5f5f,0x30746f72626c6564,0x45664930316d735f,0x7261686375365076\n"
".quad 0x32535f5469696934,0x535f32535f32535f,0x6269695f30535f32,0x6974616d696e615f\n"
".quad 0x5d656d6172466e6f,0x732e646461090a3b,0x3436722509203233,0x202c33367225202c\n"
".quad 0x6c090a3b31367225,0x2e6d617261702e64,0x3536722509203875,0x6475635f5f5b202c\n"
".quad 0x5a5f5f6d72617061,0x6c65646e614d3631,0x6d735f30746f7262,0x3650764566493031\n"
".quad 0x6969347261686375,0x32535f32535f5469,0x535f32535f32535f,0x6f635f6269695f30\n"
".quad 0x3b5d302b73726f6c,0x6f6c2e6c756d090a,0x722509203233732e,0x34367225202c3636\n"
".quad 0x0a3b35367225202c,0x2e38752e74766309,0x3672250920323375,0x3b36367225202c37\n"
".quad 0x3109636f6c2e090a,0x090a300939320937,0x6d617261702e646c,0x367225092038752e\n"
".quad 0x75635f5f5b202c38,0x5f5f6d7261706164,0x65646e614d36315a,0x735f30746f72626c\n"
".quad 0x507645664930316d,0x6934726168637536,0x535f32535f546969,0x5f32535f32535f32\n"
".quad 0x635f6269695f3053,0x5d312b73726f6c6f,0x6c2e6c756d090a3b,0x2509203233732e6f\n"
".quad 0x367225202c393672,0x3b38367225202c34,0x38752e747663090a,0x722509203233752e\n"
".quad 0x39367225202c3037,0x09636f6c2e090a3b,0x0a30093033093731,0x617261702e646c09\n"
".quad 0x7225092038752e6d,0x635f5f5b202c3137,0x5f6d726170616475,0x646e614d36315a5f\n"
".quad 0x5f30746f72626c65,0x7645664930316d73,0x3472616863753650,0x5f32535f54696969\n"
".quad 0x32535f32535f3253,0x5f6269695f30535f,0x322b73726f6c6f63,0x2e6c756d090a3b5d\n"
".quad 0x09203233732e6f6c,0x7225202c32377225,0x31377225202c3436,0x752e747663090a3b\n"
".quad 0x2509203233752e38,0x377225202c333772,0x2e617262090a3b32,0x744c240920696e75\n"
".quad 0x38373337335f325f,0x5f325f744c240a3b,0x090a3a3433363733,0x09373109636f6c2e\n"
".quad 0x6f6d090a30093433,0x2509203233752e76,0x0a3b30202c333772,0x3233752e766f6d09\n"
".quad 0x202c303772250920,0x2e766f6d090a3b30,0x3672250920323375,0x4c240a3b30202c37\n"
".quad 0x373337335f325f74,0x636f6c2e090a3a38,0x3009303109373109,0x7261702e646c090a\n"
".quad 0x09203233732e6d61,0x5f5f5b202c377225,0x6d72617061647563,0x6e614d36315a5f5f\n"
".quad 0x30746f72626c6564,0x45664930316d735f,0x7261686375365076,0x32535f5469696934\n"
".quad 0x535f32535f32535f,0x6269695f30535f32,0x5d576567616d695f,0x09636f6c2e090a3b\n"
".quad 0x0a30093433093731,0x2e6f6c2e6c756d09,0x3772250920323373,0x202c377225202c34\n"
".quad 0x6461090a3b367225,0x2509203233732e64,0x377225202c353772,0x0a3b347225202c34\n"
".quad 0x2e6f6c2e6c756d09,0x3772250920323375,0x2c35377225202c36,0x747663090a3b3420\n"
".quad 0x3233752e3436752e,0x202c316472250920,0x6c090a3b36377225,0x2e6d617261702e64\n"
".quad 0x6472250920343675,0x75635f5f5b202c32,0x5f5f6d7261706164,0x65646e614d36315a\n"
".quad 0x735f30746f72626c,0x507645664930316d,0x6934726168637536,0x535f32535f546969\n"
".quad 0x5f32535f32535f32,0x645f6269695f3053,0x6461090a3b5d7473,0x2509203436752e64\n"
".quad 0x647225202c336472,0x3b32647225202c31,0x7261702e646c090a,0x09203233732e6d61\n"
".quad 0x5f5b202c37377225,0x726170616475635f,0x614d36315a5f5f6d,0x746f72626c65646e\n"
".quad 0x664930316d735f30,0x6168637536507645,0x535f546969693472,0x5f32535f32535f32\n"
".quad 0x69695f30535f3253,0x5d656d6172665f62,0x752e766f6d090a3b,0x3837722509203233\n"
".quad 0x6573090a3b30202c,0x33732e656e2e7074,0x2c34347025092032,0x25202c3737722520\n"
".quad 0x2540090a3b383772,0x2061726220343470,0x335f325f744c2409,0x2e090a3b36343138\n"
".quad 0x3409373109636f6c,0x766f6d090a300931,0x722509203233752e,0x090a3b30202c3937\n"
".quad 0x61626f6c672e7473,0x2038752e34762e6c,0x302b336472255b09,0x373672257b202c5d\n"
".quad 0x72252c303772252c,0x7d393772252c3337,0x752e617262090a3b,0x5f744c240920696e\n"
".quad 0x3b30393837335f32,0x335f325f744c240a,0x2e090a3a36343138,0x3309373109636f6c\n"
".quad 0x2e646c090a300934,0x33732e6d61726170,0x2c37377225092032,0x616475635f5f5b20\n"
".quad 0x315a5f5f6d726170,0x626c65646e614d36,0x316d735f30746f72,0x7536507645664930\n"
".quad 0x6969693472616863,0x5f32535f32535f54,0x30535f32535f3253,0x6172665f6269695f\n"
".quad 0x6c2e090a3b5d656d,0x353409373109636f,0x2e646461090a3009,0x3872250920323373\n"
".quad 0x2c37377225202c30,0x726873090a3b3120,0x722509203233732e,0x30387225202c3138\n"
".quad 0x6d090a3b3133202c,0x09203233732e766f,0x3b31202c32387225,0x33622e646e61090a\n"
".quad 0x2c33387225092032,0x25202c3138722520,0x6461090a3b323872,0x2509203233732e64\n"
".quad 0x387225202c343872,0x3b30387225202c33,0x33732e726873090a,0x2c35387225092032\n"
".quad 0x31202c3438722520,0x6c672e646c090a3b,0x2e34762e6c61626f,0x3872257b09203875\n"
".quad 0x252c373872252c36,0x202c7d5f2c383872,0x5d302b336472255b,0x6c2e6c756d090a3b\n"
".quad 0x2509203233732e6f,0x377225202c393872,0x3b36387225202c37,0x33732e646461090a\n"
".quad 0x2c30397225092032,0x25202c3736722520,0x6461090a3b393872,0x2509203233732e64\n"
".quad 0x387225202c313972,0x3b30397225202c35,0x33732e766964090a,0x2c32397225092032\n"
".quad 0x25202c3139722520,0x6c2e090a3b303872,0x363409373109636f,0x2e6c756d090a3009\n"
".quad 0x09203233732e6f6c,0x7225202c33397225,0x37387225202c3737,0x732e646461090a3b\n"
".quad 0x3439722509203233,0x202c30377225202c,0x61090a3b33397225,0x09203233732e6464\n"
".quad 0x7225202c35397225,0x34397225202c3538,0x732e766964090a3b,0x3639722509203233\n"
".quad 0x202c35397225202c,0x73090a3b30387225,0x6c61626f6c672e74,0x092038752e32762e\n"
".quad 0x5d302b336472255b,0x2c323972257b202c,0x090a3b7d36397225,0x09373109636f6c2e\n"
".quad 0x756d090a30093734,0x3233732e6f6c2e6c,0x202c373972250920,0x7225202c37377225\n"
".quad 0x646461090a3b3838,0x722509203233732e,0x33377225202c3839,0x0a3b37397225202c\n"
".quad 0x3233732e64646109,0x202c393972250920,0x7225202c35387225,0x766964090a3b3839\n"
".quad 0x722509203233732e,0x397225202c303031,0x3b30387225202c39,0x6f6c672e7473090a\n"
".quad 0x092038752e6c6162,0x5d322b336472255b,0x3b3030317225202c,0x335f325f744c240a\n"
".quad 0x4c240a3a30393837,0x353336335f325f74,0x636f6c2e090a3a34,0x3009303509373109\n"
".quad 0x0a3b74697865090a,0x5f646e6557444c24,0x646e614d36315a5f,0x5f30746f72626c65\n"
".quad 0x7645664930316d73,0x3472616863753650,0x5f32535f54696969,0x32535f32535f3253\n"
".quad 0x3a6269695f30535f,0x5f202f2f207d090a,0x65646e614d36315a,0x735f30746f72626c\n"
".quad 0x507645664930316d,0x6934726168637536,0x535f32535f546969,0x5f32535f32535f32\n"
".quad 0x0a0a6269695f3053,0x207972746e652e09,0x646e614d36315a5f,0x5f30746f72626c65\n"
".quad 0x7645644930316d73,0x3472616863753650,0x5f32535f54696969,0x32535f32535f3253\n"
".quad 0x206269695f30535f,0x7261702e09090a28,0x203436752e206d61,0x6170616475635f5f\n"
".quad 0x4d36315a5f5f6d72,0x6f72626c65646e61,0x4930316d735f3074,0x6863753650764564\n"
".quad 0x5f54696969347261,0x32535f32535f3253,0x695f30535f32535f,0x0a2c7473645f6269\n"
".quad 0x6d617261702e0909,0x5f5f203233732e20,0x6d72617061647563,0x6e614d36315a5f5f\n"
".quad 0x30746f72626c6564,0x45644930316d735f,0x7261686375365076,0x32535f5469696934\n"
".quad 0x535f32535f32535f,0x6269695f30535f32,0x2c576567616d695f,0x617261702e09090a\n"
".quad 0x5f203233732e206d,0x726170616475635f,0x614d36315a5f5f6d,0x746f72626c65646e\n"
".quad 0x644930316d735f30,0x6168637536507645,0x535f546969693472,0x5f32535f32535f32\n"
".quad 0x69695f30535f3253,0x486567616d695f62,0x7261702e09090a2c,0x203233732e206d61\n"
".quad 0x6170616475635f5f,0x4d36315a5f5f6d72,0x6f72626c65646e61,0x4930316d735f3074\n"
".quad 0x6863753650764564,0x5f54696969347261,0x32535f32535f3253,0x695f30535f32535f\n"
".quad 0x636e7572635f6269,0x61702e09090a2c68,0x3436662e206d6172,0x70616475635f5f20\n"
".quad 0x36315a5f5f6d7261,0x72626c65646e614d,0x30316d735f30746f,0x6375365076456449\n"
".quad 0x5469696934726168,0x535f32535f32535f,0x5f30535f32535f32,0x66664f785f626969\n"
".quad 0x7261702e09090a2c,0x203436662e206d61,0x6170616475635f5f,0x4d36315a5f5f6d72\n"
".quad 0x6f72626c65646e61,0x4930316d735f3074,0x6863753650764564,0x5f54696969347261\n"
".quad 0x32535f32535f3253,0x695f30535f32535f,0x2c66664f795f6269,0x617261702e09090a\n"
".quad 0x5f203436662e206d,0x726170616475635f,0x614d36315a5f5f6d,0x746f72626c65646e\n"
".quad 0x644930316d735f30,0x6168637536507645,0x535f546969693472,0x5f32535f32535f32\n"
".quad 0x69695f30535f3253,0x090a2c504a785f62,0x206d617261702e09,0x635f5f203436662e\n"
".quad 0x5f6d726170616475,0x646e614d36315a5f,0x5f30746f72626c65,0x7645644930316d73\n"
".quad 0x3472616863753650,0x5f32535f54696969,0x32535f32535f3253,0x5f6269695f30535f\n"
".quad 0x2e09090a2c504a79,0x662e206d61726170,0x6475635f5f203436,0x5a5f5f6d72617061\n"
".quad 0x6c65646e614d3631,0x6d735f30746f7262,0x3650764564493031,0x6969347261686375\n"
".quad 0x32535f32535f5469,0x535f32535f32535f,0x63735f6269695f30,0x2e09090a2c656c61\n"
".quad 0x612e206d61726170,0x2e2034206e67696c,0x6475635f5f203862,0x5a5f5f6d72617061\n"
".quad 0x6c65646e614d3631,0x6d735f30746f7262,0x3650764564493031,0x6969347261686375\n"
".quad 0x32535f32535f5469,0x535f32535f32535f,0x6f635f6269695f30,0x2c5d345b73726f6c\n"
".quad 0x617261702e09090a,0x5f203233732e206d,0x726170616475635f,0x614d36315a5f5f6d\n"
".quad 0x746f72626c65646e,0x644930316d735f30,0x6168637536507645,0x535f546969693472\n"
".quad 0x5f32535f32535f32,0x69695f30535f3253,0x2c656d6172665f62,0x617261702e09090a\n"
".quad 0x5f203233732e206d,0x726170616475635f,0x614d36315a5f5f6d,0x746f72626c65646e\n"
".quad 0x644930316d735f30,0x6168637536507645,0x535f546969693472,0x5f32535f32535f32\n"
".quad 0x69695f30535f3253,0x74616d696e615f62,0x656d6172466e6f69,0x7261702e09090a2c\n"
".quad 0x5f2038732e206d61,0x726170616475635f,0x614d36315a5f5f6d,0x746f72626c65646e\n"
".quad 0x644930316d735f30,0x6168637536507645,0x535f546969693472,0x5f32535f32535f32\n"
".quad 0x69695f30535f3253,0x090a294a73695f62,0x206765722e090a7b,0x687225203631752e\n"
".quad 0x722e090a3b3e363c,0x203233752e206765,0x3b3e3230313c7225,0x2e206765722e090a\n"
".quad 0x3c64722520343675,0x65722e090a3b3e35,0x25203436662e2067,0x3b3e3631313c6466\n"
".quad 0x2e206765722e090a,0x3c70252064657270,0x6c2e090a3b3e3634,0x303109373109636f\n"
".quad 0x6257444c240a3009,0x315a5f5f6e696765,0x626c65646e614d36,0x316d735f30746f72\n"
".quad 0x7536507645644930,0x6969693472616863,0x5f32535f32535f54,0x30535f32535f3253\n"
".quad 0x6d090a3a6269695f,0x09203631752e766f,0x6325202c31687225,0x0a3b782e64696174\n"
".quad 0x3631752e766f6d09,0x202c326872250920,0x3b782e6469746e25,0x69772e6c756d090a\n"
".quad 0x09203631752e6564,0x687225202c317225,0x3b32687225202c31,0x31752e766f6d090a\n"
".quad 0x2c33687225092036,0x2e64696174632520,0x2e766f6d090a3b79,0x6872250920363175\n"
".quad 0x6469746e25202c34,0x6c756d090a3b792e,0x31752e656469772e,0x202c327225092036\n"
".quad 0x7225202c33687225,0x747663090a3b3468,0x3631752e3233752e,0x25202c3372250920\n"
".quad 0x090a3b782e646974,0x203233752e646461,0x7225202c34722509,0x0a3b317225202c33\n"
".quad 0x3233752e74766309,0x722509203631752e,0x2e64697425202c35,0x2e646461090a3b79\n"
".quad 0x3672250920323375,0x25202c357225202c,0x2e646c090a3b3272,0x33732e6d61726170\n"
".quad 0x202c377225092032,0x70616475635f5f5b,0x36315a5f5f6d7261,0x72626c65646e614d\n"
".quad 0x30316d735f30746f,0x6375365076456449,0x5469696934726168,0x535f32535f32535f\n"
".quad 0x5f30535f32535f32,0x67616d695f626969,0x646c090a3b5d5765,0x732e6d617261702e\n"
".quad 0x2c38722509203233,0x616475635f5f5b20,0x315a5f5f6d726170,0x626c65646e614d36\n"
".quad 0x316d735f30746f72,0x7536507645644930,0x6969693472616863,0x5f32535f32535f54\n"
".quad 0x30535f32535f3253,0x616d695f6269695f,0x73090a3b5d486567,0x33752e74672e7465\n"
".quad 0x2509203233732e32,0x2c387225202c3972,0x6e090a3b36722520,0x09203233732e6765\n"
".quad 0x7225202c30317225,0x2e746573090a3b39,0x732e3233752e7467,0x3131722509203233\n"
".quad 0x25202c377225202c,0x67656e090a3b3472,0x722509203233732e,0x31317225202c3231\n"
".quad 0x622e646e61090a3b,0x3331722509203233,0x202c30317225202c,0x6d090a3b32317225\n"
".quad 0x09203233752e766f,0x3b30202c34317225,0x652e70746573090a,0x2509203233732e71\n"
".quad 0x33317225202c3170,0x0a3b34317225202c,0x7262203170254009,0x335f744c24092061\n"
".quad 0x0a3b34353336335f,0x363109636f6c2e09,0x090a300931333109,0x6d617261702e646c\n"
".quad 0x722509203233732e,0x635f5f5b202c3531,0x5f6d726170616475,0x646e614d36315a5f\n"
".quad 0x5f30746f72626c65,0x7645644930316d73,0x3472616863753650,0x5f32535f54696969\n"
".quad 0x32535f32535f3253,0x5f6269695f30535f,0x3b5d68636e757263,0x33732e766f6d090a\n"
".quad 0x2c36317225092032,0x090a3b3531722520,0x6d617261702e646c,0x662509203436662e\n"
".quad 0x635f5f5b202c3164,0x5f6d726170616475,0x646e614d36315a5f,0x5f30746f72626c65\n"
".quad 0x7645644930316d73,0x3472616863753650,0x5f32535f54696969,0x32535f32535f3253\n"
".quad 0x5f6269695f30535f,0x0a3b5d656c616373,0x617261702e646c09,0x2509203436662e6d\n"
".quad 0x5f5f5b202c326466,0x6d72617061647563,0x6e614d36315a5f5f,0x30746f72626c6564\n"
".quad 0x45644930316d735f,0x7261686375365076,0x32535f5469696934,0x535f32535f32535f\n"
".quad 0x6269695f30535f32,0x0a3b5d66664f785f,0x2e6e722e74766309,0x203233732e343666\n"
".quad 0x25202c3364662509,0x64616d090a3b3472,0x203436662e6e722e,0x25202c3464662509\n"
".quad 0x646625202c336466,0x3b32646625202c31,0x7261702e646c090a,0x09203436662e6d61\n"
".quad 0x5f5b202c35646625,0x726170616475635f,0x614d36315a5f5f6d,0x746f72626c65646e\n"
".quad 0x644930316d735f30,0x6168637536507645,0x535f546969693472,0x5f32535f32535f32\n"
".quad 0x69695f30535f3253,0x3b5d66664f795f62,0x6e722e747663090a,0x3233732e3436662e\n"
".quad 0x202c366466250920,0x616d090a3b367225,0x3436662e6e722e64,0x202c376466250920\n"
".quad 0x6625202c36646625,0x35646625202c3164,0x61702e646c090a3b,0x092038732e6d6172\n"
".quad 0x5f5b202c37317225,0x726170616475635f,0x614d36315a5f5f6d,0x746f72626c65646e\n"
".quad 0x644930316d735f30,0x6168637536507645,0x535f546969693472,0x5f32535f32535f32\n"
".quad 0x69695f30535f3253,0x0a3b5d4a73695f62,0x3233752e766f6d09,0x202c383172250920\n"
".quad 0x70746573090a3b30,0x203233732e71652e,0x7225202c32702509,0x38317225202c3731\n"
".quad 0x2032702540090a3b,0x744c240920617262,0x32323137335f335f,0x09636f6c2e090a3b\n"
".quad 0x3009363331093631,0x7261702e646c090a,0x09203436662e6d61,0x5f5b202c38646625\n"
".quad 0x726170616475635f,0x614d36315a5f5f6d,0x746f72626c65646e,0x644930316d735f30\n"
".quad 0x6168637536507645,0x535f546969693472,0x5f32535f32535f32,0x69695f30535f3253\n"
".quad 0x0a3b5d504a785f62,0x363109636f6c2e09,0x090a300937333109,0x6d617261702e646c\n"
".quad 0x662509203436662e,0x635f5f5b202c3964,0x5f6d726170616475,0x646e614d36315a5f\n"
".quad 0x5f30746f72626c65,0x7645644930316d73,0x3472616863753650,0x5f32535f54696969\n"
".quad 0x32535f32535f3253,0x5f6269695f30535f,0x2e090a3b5d504a79,0x3109363109636f6c\n"
".quad 0x6f6d090a30093833,0x2509203436662e76,0x6625202c30316466,0x6f6c2e090a3b3764\n"
".quad 0x3933310936310963,0x2e766f6d090a3009,0x6466250920343666,0x34646625202c3131\n"
".quad 0x09636f6c2e090a3b,0x3009303431093631,0x36662e6c756d090a,0x3231646625092034\n"
".quad 0x202c37646625202c,0x2e090a3b37646625,0x3109363109636f6c,0x756d090a30093134\n"
".quad 0x2509203436662e6c,0x6625202c33316466,0x34646625202c3464,0x752e617262090a3b\n"
".quad 0x5f744c240920696e,0x3b36363836335f33,0x335f335f744c240a,0x2e090a3a32323137\n"
".quad 0x3109363109636f6c,0x6f6d090a30093534,0x2509203436662e76,0x646625202c386466\n"
".quad 0x636f6c2e090a3b34,0x0936343109363109,0x662e766f6d090a30,0x3964662509203436\n"
".quad 0x0a3b37646625202c,0x363109636f6c2e09,0x090a300930353109,0x203436662e766f6d\n"
".quad 0x202c333164662509,0x3030303030306430,0x3030303030303030,0x30202f2f093b3030\n"
".quad 0x36662e766f6d090a,0x3231646625092034,0x303030306430202c,0x3030303030303030\n"
".quad 0x2f2f093b30303030,0x2e766f6d090a3020,0x6466250920343666,0x30306430202c3131\n"
".quad 0x3030303030303030,0x093b303030303030,0x6f6d090a30202f2f,0x2509203436662e76\n"
".quad 0x6430202c30316466,0x3030303030303030,0x3030303030303030,0x240a30202f2f093b\n"
".quad 0x3836335f335f744c,0x766f6d090a3a3636,0x722509203233732e,0x090a3b30202c3931\n"
".quad 0x09363109636f6c2e,0x6c090a3009313331,0x2e6d617261702e64,0x3172250920323373\n"
".quad 0x75635f5f5b202c35,0x5f5f6d7261706164,0x65646e614d36315a,0x735f30746f72626c\n"
".quad 0x507645644930316d,0x6934726168637536,0x535f32535f546969,0x5f32535f32535f32\n"
".quad 0x635f6269695f3053,0x0a3b5d68636e7572,0x363109636f6c2e09,0x090a300930353109\n"
".quad 0x2e656c2e70746573,0x3370250920323373,0x202c35317225202c,0x4c240a3b39317225\n"
".quad 0x373939315f335f74,0x6c3c2f2f200a3a30,0x6f6f4c203e706f6f,0x6c2079646f622070\n"
".quad 0x0a35353120656e69,0x363109636f6c2e09,0x090a300935353109,0x6172622033702540\n"
".quad 0x325f335f4c240920,0x2f200a3b30373336,0x203e706f6f6c3c2f,0x20666f2074726150\n"
".quad 0x646f6220706f6f6c,0x3120656e696c2079,0x64616568202c3535,0x64656c6562616c20\n"
".quad 0x315f335f744c2420,0x6461090a30373939,0x2509203436662e64,0x6625202c34316466\n"
".quad 0x646625202c333164,0x766f6d090a3b3231,0x662509203436662e,0x346430202c353164\n"
".quad 0x3030303030303130,0x3b30303030303030,0x73090a34202f2f09,0x662e74672e707465\n"
".quad 0x2c34702509203436,0x202c343164662520,0x090a3b3531646625,0x7262203470252140\n"
".quad 0x5f335f4c24092061,0x240a3b3431313632,0x373336325f335f4c,0x636f6c2e090a3a30\n"
".quad 0x0936353109363109,0x732e766f6d090a30,0x3032722509203233,0x0a3b36317225202c\n"
".quad 0x696e752e61726209,0x6e6557444c240920,0x4334315a5f5f6964,0x65646e614d636c61\n"
".quad 0x456449746f72626c,0x30535f30535f5469,0x325f62695f30535f,0x4c240a3b315f3031\n"
".quad 0x34313136325f335f,0x6f6c3c2f2f200a3a,0x74726150203e706f,0x706f6f6c20666f20\n"
".quad 0x696c2079646f6220,0x202c35353120656e,0x62616c2064616568,0x744c242064656c65\n"
".quad 0x30373939315f335f,0x3109636f6c2e090a,0x0a30093735310936,0x3436662e6c756d09\n"
".quad 0x2c36316466250920,0x202c313164662520,0x090a3b3031646625,0x203436662e646461\n"
".quad 0x202c373164662509,0x25202c3631646625,0x61090a3b36316466,0x09203436662e6464\n"
".quad 0x25202c3031646625,0x646625202c396466,0x6f6c2e090a3b3731,0x3835310936310963\n"
".quad 0x2e627573090a3009,0x6466250920343666,0x31646625202c3831,0x3231646625202c33\n"
".quad 0x662e646461090a3b,0x3164662509203436,0x2c38646625202c31,0x0a3b383164662520\n"
".quad 0x363109636f6c2e09,0x090a300939353109,0x203436662e6c756d,0x202c393164662509\n"
".quad 0x25202c3031646625,0x2e090a3b30316466,0x3109363109636f6c,0x7573090a30093735\n"
".quad 0x2509203233732e62,0x317225202c313272,0x6d090a3b31202c36,0x09203233752e766f\n"
".quad 0x3b30202c32327225,0x6c2e70746573090a,0x2509203233732e65,0x31327225202c3570\n"
".quad 0x0a3b32327225202c,0x7262203570254009,0x5f335f4c24092061,0x200a3b3238383632\n"
".quad 0x3e706f6f6c3c2f2f,0x666f207472615020,0x6f6220706f6f6c20,0x20656e696c207964\n"
".quad 0x616568202c353531,0x656c6562616c2064,0x5f335f744c242064,0x6d090a3037393931\n"
".quad 0x09203436662e6c75,0x25202c3032646625,0x6625202c31316466,0x6461090a3b313164\n"
".quad 0x2509203436662e64,0x6625202c31326466,0x646625202c303264,0x766f6d090a3b3931\n"
".quad 0x662509203436662e,0x346430202c323264,0x3030303030303130,0x3b30303030303030\n"
".quad 0x73090a34202f2f09,0x662e74672e707465,0x2c36702509203436,0x202c313264662520\n"
".quad 0x090a3b3232646625,0x7262203670252140,0x5f335f4c24092061,0x240a3b3632363632\n"
".quad 0x383836325f335f4c,0x636f6c2e090a3a32,0x0935363109363109,0x732e766f6d090a30\n"
".quad 0x3032722509203233,0x0a3b31327225202c,0x696e752e61726209,0x6e6557444c240920\n"
".quad 0x4334315a5f5f6964,0x65646e614d636c61,0x456449746f72626c,0x30535f30535f5469\n"
".quad 0x325f62695f30535f,0x4c240a3b315f3031,0x36323636325f335f,0x6f6c3c2f2f200a3a\n"
".quad 0x74726150203e706f,0x706f6f6c20666f20,0x696c2079646f6220,0x202c35353120656e\n"
".quad 0x62616c2064616568,0x744c242064656c65,0x30373939315f335f,0x3109636f6c2e090a\n"
".quad 0x0a30093636310936,0x3436662e6c756d09,0x2c36316466250920,0x202c313164662520\n"
".quad 0x090a3b3031646625,0x203436662e646461,0x202c333264662509,0x25202c3631646625\n"
".quad 0x61090a3b36316466,0x09203436662e6464,0x25202c3031646625,0x646625202c396466\n"
".quad 0x6f6c2e090a3b3332,0x3736310936310963,0x2e627573090a3009,0x6466250920343666\n"
".quad 0x32646625202c3432,0x3931646625202c30,0x662e646461090a3b,0x3164662509203436\n"
".quad 0x2c38646625202c31,0x0a3b343264662520,0x363109636f6c2e09,0x090a300938363109\n"
".quad 0x203436662e6c756d,0x202c353264662509,0x25202c3031646625,0x2e090a3b30316466\n"
".quad 0x3109363109636f6c,0x7573090a30093636,0x2509203233732e62,0x317225202c333272\n"
".quad 0x6d090a3b32202c36,0x09203233752e766f,0x3b30202c34327225,0x6c2e70746573090a\n"
".quad 0x2509203233732e65,0x33327225202c3770,0x0a3b34327225202c,0x7262203770254009\n"
".quad 0x5f335f4c24092061,0x200a3b3439333732,0x3e706f6f6c3c2f2f,0x666f207472615020\n"
".quad 0x6f6220706f6f6c20,0x20656e696c207964,0x616568202c353531,0x656c6562616c2064\n"
".quad 0x5f335f744c242064,0x6d090a3037393931,0x09203436662e6c75,0x25202c3032646625\n"
".quad 0x6625202c31316466,0x6461090a3b313164,0x2509203436662e64,0x6625202c36326466\n"
".quad 0x646625202c303264,0x766f6d090a3b3532,0x662509203436662e,0x346430202c373264\n"
".quad 0x3030303030303130,0x3b30303030303030,0x73090a34202f2f09,0x662e74672e707465\n"
".quad 0x2c38702509203436,0x202c363264662520,0x090a3b3732646625,0x7262203870252140\n"
".quad 0x5f335f4c24092061,0x240a3b3833313732,0x393337325f335f4c,0x636f6c2e090a3a34\n"
".quad 0x0934373109363109,0x732e766f6d090a30,0x3032722509203233,0x0a3b33327225202c\n"
".quad 0x696e752e61726209,0x6e6557444c240920,0x4334315a5f5f6964,0x65646e614d636c61\n"
".quad 0x456449746f72626c,0x30535f30535f5469,0x325f62695f30535f,0x4c240a3b315f3031\n"
".quad 0x38333137325f335f,0x6f6c3c2f2f200a3a,0x74726150203e706f,0x706f6f6c20666f20\n"
".quad 0x696c2079646f6220,0x202c35353120656e,0x62616c2064616568,0x744c242064656c65\n"
".quad 0x30373939315f335f,0x3109636f6c2e090a,0x0a30093537310936,0x3436662e6c756d09\n"
".quad 0x2c36316466250920,0x202c313164662520,0x090a3b3031646625,0x203436662e646461\n"
".quad 0x202c383264662509,0x25202c3631646625,0x61090a3b36316466,0x09203436662e6464\n"
".quad 0x25202c3031646625,0x646625202c396466,0x6f6c2e090a3b3832,0x3637310936310963\n"
".quad 0x2e627573090a3009,0x6466250920343666,0x32646625202c3932,0x3532646625202c30\n"
".quad 0x662e646461090a3b,0x3164662509203436,0x2c38646625202c31,0x0a3b393264662520\n"
".quad 0x363109636f6c2e09,0x090a300937373109,0x203436662e6c756d,0x202c303364662509\n"
".quad 0x25202c3031646625,0x2e090a3b30316466,0x3109363109636f6c,0x7573090a30093537\n"
".quad 0x2509203233732e62,0x317225202c353272,0x6d090a3b33202c36,0x09203233752e766f\n"
".quad 0x3b30202c36327225,0x6c2e70746573090a,0x2509203233732e65,0x35327225202c3970\n"
".quad 0x0a3b36327225202c,0x7262203970254009,0x5f335f4c24092061,0x200a3b3630393732\n"
".quad 0x3e706f6f6c3c2f2f,0x666f207472615020,0x6f6220706f6f6c20,0x20656e696c207964\n"
".quad 0x616568202c353531,0x656c6562616c2064,0x5f335f744c242064,0x6d090a3037393931\n"
".quad 0x09203436662e6c75,0x25202c3032646625,0x6625202c31316466,0x6461090a3b313164\n"
".quad 0x2509203436662e64,0x6625202c31336466,0x646625202c303264,0x766f6d090a3b3033\n"
".quad 0x662509203436662e,0x346430202c323364,0x3030303030303130,0x3b30303030303030\n"
".quad 0x73090a34202f2f09,0x662e74672e707465,0x3031702509203436,0x2c3133646625202c\n"
".quad 0x0a3b323364662520,0x2030317025214009,0x5f4c240920617262,0x3b30353637325f33\n"
".quad 0x37325f335f4c240a,0x6c2e090a3a363039,0x383109363109636f,0x766f6d090a300933\n"
".quad 0x722509203233732e,0x35327225202c3032,0x752e617262090a3b,0x57444c240920696e\n"
".quad 0x315a5f5f69646e65,0x6e614d636c614334,0x49746f72626c6564,0x5f30535f54694564\n"
".quad 0x62695f30535f3053,0x0a3b315f3031325f,0x3637325f335f4c24,0x3c2f2f200a3a3035\n"
".quad 0x6150203e706f6f6c,0x6f6c20666f207472,0x2079646f6220706f,0x35353120656e696c\n"
".quad 0x6c2064616568202c,0x242064656c656261,0x3939315f335f744c,0x636f6c2e090a3037\n"
".quad 0x0934383109363109,0x662e6c756d090a30,0x3164662509203436,0x3131646625202c36\n"
".quad 0x3b3031646625202c,0x36662e646461090a,0x3333646625092034,0x2c3631646625202c\n"
".quad 0x0a3b363164662520,0x3436662e64646109,0x2c30316466250920,0x25202c3964662520\n"
".quad 0x2e090a3b33336466,0x3109363109636f6c,0x7573090a30093538,0x2509203436662e62\n"
".quad 0x6625202c34336466,0x646625202c303264,0x646461090a3b3033,0x662509203436662e\n"
".quad 0x646625202c313164,0x3433646625202c38,0x09636f6c2e090a3b,0x3009363831093631\n"
".quad 0x36662e6c756d090a,0x3533646625092034,0x2c3031646625202c,0x0a3b303164662520\n"
".quad 0x363109636f6c2e09,0x090a300934383109,0x203233732e627573,0x25202c3732722509\n"
".quad 0x0a3b34202c363172,0x3233752e766f6d09,0x202c383272250920,0x70746573090a3b30\n"
".quad 0x203233732e656c2e,0x25202c3131702509,0x327225202c373272,0x31702540090a3b38\n"
".quad 0x2409206172622031,0x313438325f335f4c,0x6c3c2f2f200a3b38,0x726150203e706f6f\n"
".quad 0x6f6f6c20666f2074,0x6c2079646f622070,0x2c35353120656e69,0x616c206461656820\n"
".quad 0x4c242064656c6562,0x373939315f335f74,0x662e6c756d090a30,0x3264662509203436\n"
".quad 0x3131646625202c30,0x3b3131646625202c,0x36662e646461090a,0x3633646625092034\n"
".quad 0x2c3032646625202c,0x0a3b353364662520,0x3436662e766f6d09,0x2c37336466250920\n"
".quad 0x3030313034643020,0x3030303030303030,0x202f2f093b303030,0x2e70746573090a34\n"
".quad 0x09203436662e7467,0x6625202c32317025,0x646625202c363364,0x252140090a3b3733\n"
".quad 0x2061726220323170,0x38325f335f4c2409,0x5f4c240a3b323631,0x3a38313438325f33\n"
".quad 0x3109636f6c2e090a,0x0a30093239310936,0x3233732e766f6d09,0x202c303272250920\n"
".quad 0x62090a3b37327225,0x0920696e752e6172,0x69646e6557444c24,0x6c614334315a5f5f\n"
".quad 0x626c65646e614d63,0x5469456449746f72,0x535f30535f30535f,0x3031325f62695f30\n"
".quad 0x335f4c240a3b315f,0x0a3a32363138325f,0x706f6f6c3c2f2f20,0x6f2074726150203e\n"
".quad 0x6220706f6f6c2066,0x656e696c2079646f,0x6568202c35353120,0x6c6562616c206461\n"
".quad 0x335f744c24206465,0x090a30373939315f,0x09363109636f6c2e,0x6d090a3009333931\n"
".quad 0x09203436662e6c75,0x25202c3631646625,0x6625202c31316466,0x6461090a3b303164\n"
".quad 0x2509203436662e64,0x6625202c38336466,0x646625202c363164,0x646461090a3b3631\n"
".quad 0x662509203436662e,0x646625202c303164,0x3833646625202c39,0x09636f6c2e090a3b\n"
".quad 0x3009343931093631,0x36662e627573090a,0x3933646625092034,0x2c3032646625202c\n"
".quad 0x0a3b353364662520,0x3436662e64646109,0x2c31316466250920,0x25202c3864662520\n"
".quad 0x2e090a3b39336466,0x3109363109636f6c,0x756d090a30093539,0x2509203436662e6c\n"
".quad 0x6625202c30346466,0x646625202c303164,0x6f6c2e090a3b3031,0x3339310936310963\n"
".quad 0x2e627573090a3009,0x3272250920323373,0x2c36317225202c39,0x766f6d090a3b3520\n"
".quad 0x722509203233752e,0x090a3b30202c3033,0x2e656c2e70746573,0x3170250920323373\n"
".quad 0x2c39327225202c33,0x090a3b3033722520,0x7262203331702540,0x5f335f4c24092061\n"
".quad 0x200a3b3033393832,0x3e706f6f6c3c2f2f,0x666f207472615020,0x6f6220706f6f6c20\n"
".quad 0x20656e696c207964,0x616568202c353531,0x656c6562616c2064,0x5f335f744c242064\n"
".quad 0x6d090a3037393931,0x09203436662e6c75,0x25202c3032646625,0x6625202c31316466\n"
".quad 0x6461090a3b313164,0x2509203436662e64,0x6625202c31346466,0x646625202c303264\n"
".quad 0x766f6d090a3b3034,0x662509203436662e,0x346430202c323464,0x3030303030303130\n"
".quad 0x3b30303030303030,0x73090a34202f2f09,0x662e74672e707465,0x3431702509203436\n"
".quad 0x2c3134646625202c,0x0a3b323464662520,0x2034317025214009,0x5f4c240920617262\n"
".quad 0x3b34373638325f33,0x38325f335f4c240a,0x6c2e090a3a303339,0x303209363109636f\n"
".quad 0x766f6d090a300931,0x722509203233732e,0x39327225202c3032,0x752e617262090a3b\n"
".quad 0x57444c240920696e,0x315a5f5f69646e65,0x6e614d636c614334,0x49746f72626c6564\n"
".quad 0x5f30535f54694564,0x62695f30535f3053,0x0a3b315f3031325f,0x3638325f335f4c24\n"
".quad 0x3c2f2f200a3a3437,0x6150203e706f6f6c,0x6f6c20666f207472,0x2079646f6220706f\n"
".quad 0x35353120656e696c,0x6c2064616568202c,0x242064656c656261,0x3939315f335f744c\n"
".quad 0x636f6c2e090a3037,0x0932303209363109,0x662e6c756d090a30,0x3164662509203436\n"
".quad 0x3131646625202c36,0x3b3031646625202c,0x36662e646461090a,0x3334646625092034\n"
".quad 0x2c3631646625202c,0x0a3b363164662520,0x3436662e64646109,0x2c30316466250920\n"
".quad 0x25202c3964662520,0x2e090a3b33346466,0x3209363109636f6c,0x7573090a30093330\n"
".quad 0x2509203436662e62,0x6625202c34346466,0x646625202c303264,0x646461090a3b3034\n"
".quad 0x662509203436662e,0x646625202c313164,0x3434646625202c38,0x09636f6c2e090a3b\n"
".quad 0x3009343032093631,0x36662e6c756d090a,0x3534646625092034,0x2c3031646625202c\n"
".quad 0x0a3b303164662520,0x363109636f6c2e09,0x090a300932303209,0x203233732e627573\n"
".quad 0x25202c3133722509,0x0a3b36202c363172,0x3233752e766f6d09,0x202c323372250920\n"
".quad 0x70746573090a3b30,0x203233732e656c2e,0x25202c3531702509,0x337225202c313372\n"
".quad 0x31702540090a3b32,0x2409206172622035,0x343439325f335f4c,0x6c3c2f2f200a3b32\n"
".quad 0x726150203e706f6f,0x6f6f6c20666f2074,0x6c2079646f622070,0x2c35353120656e69\n"
".quad 0x616c206461656820,0x4c242064656c6562,0x373939315f335f74,0x662e6c756d090a30\n"
".quad 0x3264662509203436,0x3131646625202c30,0x3b3131646625202c,0x36662e646461090a\n"
".quad 0x3634646625092034,0x2c3032646625202c,0x0a3b353464662520,0x3436662e766f6d09\n"
".quad 0x2c37346466250920,0x3030313034643020,0x3030303030303030,0x202f2f093b303030\n"
".quad 0x2e70746573090a34,0x09203436662e7467,0x6625202c36317025,0x646625202c363464\n"
".quad 0x252140090a3b3734,0x2061726220363170,0x39325f335f4c2409,0x5f4c240a3b363831\n"
".quad 0x3a32343439325f33,0x3109636f6c2e090a,0x0a30093031320936,0x3233732e766f6d09\n"
".quad 0x202c303272250920,0x62090a3b31337225,0x0920696e752e6172,0x69646e6557444c24\n"
".quad 0x6c614334315a5f5f,0x626c65646e614d63,0x5469456449746f72,0x535f30535f30535f\n"
".quad 0x3031325f62695f30,0x335f4c240a3b315f,0x0a3a36383139325f,0x706f6f6c3c2f2f20\n"
".quad 0x6f2074726150203e,0x6220706f6f6c2066,0x656e696c2079646f,0x6568202c35353120\n"
".quad 0x6c6562616c206461,0x335f744c24206465,0x090a30373939315f,0x09363109636f6c2e\n"
".quad 0x6d090a3009313132,0x09203436662e6c75,0x25202c3631646625,0x6625202c31316466\n"
".quad 0x6461090a3b303164,0x2509203436662e64,0x6625202c38346466,0x646625202c363164\n"
".quad 0x646461090a3b3631,0x662509203436662e,0x646625202c303164,0x3834646625202c39\n"
".quad 0x09636f6c2e090a3b,0x3009323132093631,0x36662e627573090a,0x3934646625092034\n"
".quad 0x2c3032646625202c,0x0a3b353464662520,0x3436662e64646109,0x2c31316466250920\n"
".quad 0x25202c3864662520,0x2e090a3b39346466,0x3209363109636f6c,0x756d090a30093331\n"
".quad 0x2509203436662e6c,0x6625202c30356466,0x646625202c303164,0x6f6c2e090a3b3031\n"
".quad 0x3131320936310963,0x2e627573090a3009,0x3372250920323373,0x2c36317225202c33\n"
".quad 0x766f6d090a3b3720,0x722509203233752e,0x090a3b30202c3433,0x2e656c2e70746573\n"
".quad 0x3170250920323373,0x2c33337225202c37,0x090a3b3433722520,0x7262203731702540\n"
".quad 0x5f335f4c24092061,0x200a3b3435393932,0x3e706f6f6c3c2f2f,0x666f207472615020\n"
".quad 0x6f6220706f6f6c20,0x20656e696c207964,0x616568202c353531,0x656c6562616c2064\n"
".quad 0x5f335f744c242064,0x6d090a3037393931,0x09203436662e6c75,0x25202c3032646625\n"
".quad 0x6625202c31316466,0x6461090a3b313164,0x2509203436662e64,0x6625202c31356466\n"
".quad 0x646625202c303264,0x766f6d090a3b3035,0x662509203436662e,0x346430202c323564\n"
".quad 0x3030303030303130,0x3b30303030303030,0x73090a34202f2f09,0x662e74672e707465\n"
".quad 0x3831702509203436,0x2c3135646625202c,0x0a3b323564662520,0x2038317025214009\n"
".quad 0x5f4c240920617262,0x3b38393639325f33,0x39325f335f4c240a,0x6c2e090a3a343539\n"
".quad 0x313209363109636f,0x766f6d090a300939,0x722509203233732e,0x33337225202c3032\n"
".quad 0x752e617262090a3b,0x57444c240920696e,0x315a5f5f69646e65,0x6e614d636c614334\n"
".quad 0x49746f72626c6564,0x5f30535f54694564,0x62695f30535f3053,0x0a3b315f3031325f\n"
".quad 0x3639325f335f4c24,0x3c2f2f200a3a3839,0x6150203e706f6f6c,0x6f6c20666f207472\n"
".quad 0x2079646f6220706f,0x35353120656e696c,0x6c2064616568202c,0x242064656c656261\n"
".quad 0x3939315f335f744c,0x636f6c2e090a3037,0x0930323209363109,0x662e6c756d090a30\n"
".quad 0x3164662509203436,0x3131646625202c36,0x3b3031646625202c,0x36662e646461090a\n"
".quad 0x3335646625092034,0x2c3631646625202c,0x0a3b363164662520,0x3436662e64646109\n"
".quad 0x2c30316466250920,0x25202c3964662520,0x2e090a3b33356466,0x3209363109636f6c\n"
".quad 0x7573090a30093132,0x2509203436662e62,0x6625202c34356466,0x646625202c303264\n"
".quad 0x646461090a3b3035,0x662509203436662e,0x646625202c313164,0x3435646625202c38\n"
".quad 0x09636f6c2e090a3b,0x3009323232093631,0x36662e6c756d090a,0x3535646625092034\n"
".quad 0x2c3031646625202c,0x0a3b303164662520,0x363109636f6c2e09,0x090a300930323209\n"
".quad 0x203233732e627573,0x25202c3533722509,0x0a3b38202c363172,0x3233752e766f6d09\n"
".quad 0x202c363372250920,0x70746573090a3b30,0x203233732e656c2e,0x25202c3931702509\n"
".quad 0x337225202c353372,0x31702540090a3b36,0x2409206172622039,0x363430335f335f4c\n"
".quad 0x6c3c2f2f200a3b36,0x726150203e706f6f,0x6f6f6c20666f2074,0x6c2079646f622070\n"
".quad 0x2c35353120656e69,0x616c206461656820,0x4c242064656c6562,0x373939315f335f74\n"
".quad 0x662e6c756d090a30,0x3264662509203436,0x3131646625202c30,0x3b3131646625202c\n"
".quad 0x36662e646461090a,0x3635646625092034,0x2c3032646625202c,0x0a3b353564662520\n"
".quad 0x3436662e766f6d09,0x2c37356466250920,0x3030313034643020,0x3030303030303030\n"
".quad 0x202f2f093b303030,0x2e70746573090a34,0x09203436662e7467,0x6625202c30327025\n"
".quad 0x646625202c363564,0x252140090a3b3735,0x2061726220303270,0x30335f335f4c2409\n"
".quad 0x5f4c240a3b303132,0x3a36363430335f33,0x3109636f6c2e090a,0x0a30093832320936\n"
".quad 0x3233732e766f6d09,0x202c303272250920,0x62090a3b35337225,0x0920696e752e6172\n"
".quad 0x69646e6557444c24,0x6c614334315a5f5f,0x626c65646e614d63,0x5469456449746f72\n"
".quad 0x535f30535f30535f,0x3031325f62695f30,0x335f4c240a3b315f,0x0a3a30313230335f\n"
".quad 0x706f6f6c3c2f2f20,0x6f2074726150203e,0x6220706f6f6c2066,0x656e696c2079646f\n"
".quad 0x6568202c35353120,0x6c6562616c206461,0x335f744c24206465,0x090a30373939315f\n"
".quad 0x09363109636f6c2e,0x6d090a3009393232,0x09203436662e6c75,0x25202c3631646625\n"
".quad 0x6625202c31316466,0x6461090a3b303164,0x2509203436662e64,0x6625202c38356466\n"
".quad 0x646625202c363164,0x646461090a3b3631,0x662509203436662e,0x646625202c303164\n"
".quad 0x3835646625202c39,0x09636f6c2e090a3b,0x3009303332093631,0x36662e627573090a\n"
".quad 0x3935646625092034,0x2c3032646625202c,0x0a3b353564662520,0x3436662e64646109\n"
".quad 0x2c31316466250920,0x25202c3864662520,0x2e090a3b39356466,0x3209363109636f6c\n"
".quad 0x756d090a30093133,0x2509203436662e6c,0x6625202c30366466,0x646625202c303164\n"
".quad 0x6f6c2e090a3b3031,0x3932320936310963,0x2e627573090a3009,0x3372250920323373\n"
".quad 0x2c36317225202c37,0x766f6d090a3b3920,0x722509203233752e,0x090a3b30202c3833\n"
".quad 0x2e656c2e70746573,0x3270250920323373,0x2c37337225202c31,0x090a3b3833722520\n"
".quad 0x7262203132702540,0x5f335f4c24092061,0x200a3b3837393033,0x3e706f6f6c3c2f2f\n"
".quad 0x666f207472615020,0x6f6220706f6f6c20,0x20656e696c207964,0x616568202c353531\n"
".quad 0x656c6562616c2064,0x5f335f744c242064,0x6d090a3037393931,0x09203436662e6c75\n"
".quad 0x25202c3032646625,0x6625202c31316466,0x6461090a3b313164,0x2509203436662e64\n"
".quad 0x6625202c31366466,0x646625202c303264,0x766f6d090a3b3036,0x662509203436662e\n"
".quad 0x346430202c323664,0x3030303030303130,0x3b30303030303030,0x73090a34202f2f09\n"
".quad 0x662e74672e707465,0x3232702509203436,0x2c3136646625202c,0x0a3b323664662520\n"
".quad 0x2032327025214009,0x5f4c240920617262,0x3b32323730335f33,0x30335f335f4c240a\n"
".quad 0x6c2e090a3a383739,0x333209363109636f,0x766f6d090a300937,0x722509203233732e\n"
".quad 0x37337225202c3032,0x752e617262090a3b,0x57444c240920696e,0x315a5f5f69646e65\n"
".quad 0x6e614d636c614334,0x49746f72626c6564,0x5f30535f54694564,0x62695f30535f3053\n"
".quad 0x0a3b315f3031325f,0x3730335f335f4c24,0x3c2f2f200a3a3232,0x6150203e706f6f6c\n"
".quad 0x6f6c20666f207472,0x2079646f6220706f,0x35353120656e696c,0x6c2064616568202c\n"
".quad 0x242064656c656261,0x3939315f335f744c,0x636f6c2e090a3037,0x0938333209363109\n"
".quad 0x662e6c756d090a30,0x3164662509203436,0x3131646625202c36,0x3b3031646625202c\n"
".quad 0x36662e646461090a,0x3336646625092034,0x2c3631646625202c,0x0a3b363164662520\n"
".quad 0x3436662e64646109,0x2c30316466250920,0x25202c3964662520,0x2e090a3b33366466\n"
".quad 0x3209363109636f6c,0x7573090a30093933,0x2509203436662e62,0x6625202c34366466\n"
".quad 0x646625202c303264,0x646461090a3b3036,0x662509203436662e,0x646625202c313164\n"
".quad 0x3436646625202c38,0x09636f6c2e090a3b,0x3009303432093631,0x36662e6c756d090a\n"
".quad 0x3536646625092034,0x2c3031646625202c,0x0a3b303164662520,0x363109636f6c2e09\n"
".quad 0x090a300938333209,0x203233732e627573,0x25202c3933722509,0x3b3031202c363172\n"
".quad 0x33752e766f6d090a,0x2c30347225092032,0x746573090a3b3020,0x3233732e656c2e70\n"
".quad 0x202c333270250920,0x7225202c39337225,0x702540090a3b3034,0x0920617262203332\n"
".quad 0x3431335f335f4c24,0x3c2f2f200a3b3039,0x6150203e706f6f6c,0x6f6c20666f207472\n"
".quad 0x2079646f6220706f,0x35353120656e696c,0x6c2064616568202c,0x242064656c656261\n"
".quad 0x3939315f335f744c,0x2e6c756d090a3037,0x6466250920343666,0x31646625202c3032\n"
".quad 0x3131646625202c31,0x662e646461090a3b,0x3664662509203436,0x3032646625202c36\n"
".quad 0x3b3536646625202c,0x36662e766f6d090a,0x3736646625092034,0x303130346430202c\n"
".quad 0x3030303030303030,0x2f2f093b30303030,0x70746573090a3420,0x203436662e74672e\n"
".quad 0x25202c3432702509,0x6625202c36366466,0x2140090a3b373664,0x6172622034327025\n"
".quad 0x335f335f4c240920,0x4c240a3b34333231,0x30393431335f335f,0x09636f6c2e090a3a\n"
".quad 0x3009363432093631,0x33732e766f6d090a,0x2c30327225092032,0x090a3b3933722520\n"
".quad 0x20696e752e617262,0x646e6557444c2409,0x614334315a5f5f69,0x6c65646e614d636c\n"
".quad 0x69456449746f7262,0x5f30535f30535f54,0x31325f62695f3053,0x5f4c240a3b315f30\n"
".quad 0x3a34333231335f33,0x6f6f6c3c2f2f200a,0x2074726150203e70,0x20706f6f6c20666f\n"
".quad 0x6e696c2079646f62,0x68202c3535312065,0x6562616c20646165,0x5f744c242064656c\n"
".quad 0x0a30373939315f33,0x363109636f6c2e09,0x090a300937343209,0x203436662e6c756d\n"
".quad 0x202c363164662509,0x25202c3131646625,0x61090a3b30316466,0x09203436662e6464\n"
".quad 0x25202c3836646625,0x6625202c36316466,0x6461090a3b363164,0x2509203436662e64\n"
".quad 0x6625202c30316466,0x36646625202c3964,0x636f6c2e090a3b38,0x0938343209363109\n"
".quad 0x662e627573090a30,0x3664662509203436,0x3032646625202c39,0x3b3536646625202c\n"
".quad 0x36662e646461090a,0x3131646625092034,0x202c38646625202c,0x090a3b3936646625\n"
".quad 0x09363109636f6c2e,0x6d090a3009393432,0x09203436662e6c75,0x25202c3037646625\n"
".quad 0x6625202c30316466,0x6c2e090a3b303164,0x343209363109636f,0x627573090a300937\n"
".quad 0x722509203233732e,0x36317225202c3134,0x6d090a3b3131202c,0x09203233752e766f\n"
".quad 0x3b30202c32347225,0x6c2e70746573090a,0x2509203233732e65,0x347225202c353270\n"
".quad 0x3b32347225202c31,0x203532702540090a,0x5f4c240920617262,0x3b32303032335f33\n"
".quad 0x6f6f6c3c2f2f200a,0x2074726150203e70,0x20706f6f6c20666f,0x6e696c2079646f62\n"
".quad 0x68202c3535312065,0x6562616c20646165,0x5f744c242064656c,0x0a30373939315f33\n"
".quad 0x3436662e6c756d09,0x2c30326466250920,0x202c313164662520,0x090a3b3131646625\n"
".quad 0x203436662e646461,0x202c313764662509,0x25202c3032646625,0x6d090a3b30376466\n"
".quad 0x09203436662e766f,0x30202c3237646625,0x3030303031303464,0x3030303030303030\n"
".quad 0x0a34202f2f093b30,0x74672e7074657309,0x702509203436662e,0x37646625202c3632\n"
".quad 0x3237646625202c31,0x3270252140090a3b,0x2409206172622036,0x343731335f335f4c\n"
".quad 0x5f335f4c240a3b36,0x090a3a3230303233,0x09363109636f6c2e,0x6d090a3009353532\n"
".quad 0x09203233732e766f,0x7225202c30327225,0x617262090a3b3134,0x4c240920696e752e\n"
".quad 0x5f5f69646e655744,0x4d636c614334315a,0x6f72626c65646e61,0x535f546945644974\n"
".quad 0x5f30535f30535f30,0x315f3031325f6269,0x335f335f4c240a3b,0x2f200a3a36343731\n"
".quad 0x203e706f6f6c3c2f,0x20666f2074726150,0x646f6220706f6f6c,0x3120656e696c2079\n"
".quad 0x64616568202c3535,0x64656c6562616c20,0x315f335f744c2420,0x6c2e090a30373939\n"
".quad 0x353209363109636f,0x6c756d090a300936,0x662509203436662e,0x646625202c363164\n"
".quad 0x31646625202c3131,0x2e646461090a3b30,0x6466250920343666,0x31646625202c3337\n"
".quad 0x3631646625202c36,0x662e646461090a3b,0x3164662509203436,0x2c39646625202c30\n"
".quad 0x0a3b333764662520,0x363109636f6c2e09,0x090a300937353209,0x203436662e627573\n"
".quad 0x202c343764662509,0x25202c3032646625,0x61090a3b30376466,0x09203436662e6464\n"
".quad 0x25202c3131646625,0x646625202c386466,0x6f6c2e090a3b3437,0x3835320936310963\n"
".quad 0x2e6c756d090a3009,0x6466250920343666,0x31646625202c3537,0x3031646625202c30\n"
".quad 0x09636f6c2e090a3b,0x3009363532093631,0x33732e627573090a,0x2c33347225092032\n"
".quad 0x31202c3631722520,0x2e766f6d090a3b32,0x3472250920323375,0x73090a3b30202c34\n"
".quad 0x732e656c2e707465,0x3732702509203233,0x202c33347225202c,0x40090a3b34347225\n"
".quad 0x6172622037327025,0x335f335f4c240920,0x2f200a3b34313532,0x203e706f6f6c3c2f\n"
".quad 0x20666f2074726150,0x646f6220706f6f6c,0x3120656e696c2079,0x64616568202c3535\n"
".quad 0x64656c6562616c20,0x315f335f744c2420,0x756d090a30373939,0x2509203436662e6c\n"
".quad 0x6625202c30326466,0x646625202c313164,0x646461090a3b3131,0x662509203436662e\n"
".quad 0x646625202c363764,0x37646625202c3032,0x2e766f6d090a3b35,0x6466250920343666\n"
".quad 0x30346430202c3737,0x3030303030303031,0x093b303030303030,0x6573090a34202f2f\n"
".quad 0x36662e74672e7074,0x2c38327025092034,0x202c363764662520,0x090a3b3737646625\n"
".quad 0x6220383270252140,0x335f4c2409206172,0x0a3b38353232335f,0x3532335f335f4c24\n"
".quad 0x6f6c2e090a3a3431,0x3436320936310963,0x2e766f6d090a3009,0x3272250920323373\n"
".quad 0x3b33347225202c30,0x6e752e617262090a,0x6557444c24092069,0x34315a5f5f69646e\n"
".quad 0x646e614d636c6143,0x6449746f72626c65,0x535f30535f546945,0x5f62695f30535f30\n"
".quad 0x240a3b315f303132,0x353232335f335f4c,0x6c3c2f2f200a3a38,0x726150203e706f6f\n"
".quad 0x6f6f6c20666f2074,0x6c2079646f622070,0x2c35353120656e69,0x616c206461656820\n"
".quad 0x4c242064656c6562,0x373939315f335f74,0x09636f6c2e090a30,0x3009353632093631\n"
".quad 0x36662e6c756d090a,0x3631646625092034,0x2c3131646625202c,0x0a3b303164662520\n"
".quad 0x3436662e64646109,0x2c38376466250920,0x202c363164662520,0x090a3b3631646625\n"
".quad 0x203436662e646461,0x202c303164662509,0x6625202c39646625,0x6c2e090a3b383764\n"
".quad 0x363209363109636f,0x627573090a300936,0x662509203436662e,0x646625202c393764\n"
".quad 0x37646625202c3032,0x2e646461090a3b35,0x6466250920343666,0x38646625202c3131\n"
".quad 0x3b3937646625202c,0x3109636f6c2e090a,0x0a30093736320936,0x3436662e6c756d09\n"
".quad 0x2c30386466250920,0x202c303164662520,0x090a3b3031646625,0x09363109636f6c2e\n"
".quad 0x73090a3009353632,0x09203233732e6275,0x7225202c35347225,0x0a3b3331202c3631\n"
".quad 0x3233752e766f6d09,0x202c363472250920,0x70746573090a3b30,0x203233732e656c2e\n"
".quad 0x25202c3932702509,0x347225202c353472,0x32702540090a3b36,0x2409206172622039\n"
".quad 0x323033335f335f4c,0x6c3c2f2f200a3b36,0x726150203e706f6f,0x6f6f6c20666f2074\n"
".quad 0x6c2079646f622070,0x2c35353120656e69,0x616c206461656820,0x4c242064656c6562\n"
".quad 0x373939315f335f74,0x662e6c756d090a30,0x3264662509203436,0x3131646625202c30\n"
".quad 0x3b3131646625202c,0x36662e646461090a,0x3138646625092034,0x2c3032646625202c\n"
".quad 0x0a3b303864662520,0x3436662e766f6d09,0x2c32386466250920,0x3030313034643020\n"
".quad 0x3030303030303030,0x202f2f093b303030,0x2e70746573090a34,0x09203436662e7467\n"
".quad 0x6625202c30337025,0x646625202c313864,0x252140090a3b3238,0x2061726220303370\n"
".quad 0x32335f335f4c2409,0x5f4c240a3b303737,0x3a36323033335f33,0x3109636f6c2e090a\n"
".quad 0x0a30093337320936,0x3233732e766f6d09,0x202c303272250920,0x62090a3b35347225\n"
".quad 0x0920696e752e6172,0x69646e6557444c24,0x6c614334315a5f5f,0x626c65646e614d63\n"
".quad 0x5469456449746f72,0x535f30535f30535f,0x3031325f62695f30,0x335f4c240a3b315f\n"
".quad 0x0a3a30373732335f,0x706f6f6c3c2f2f20,0x6f2074726150203e,0x6220706f6f6c2066\n"
".quad 0x656e696c2079646f,0x6568202c35353120,0x6c6562616c206461,0x335f744c24206465\n"
".quad 0x090a30373939315f,0x09363109636f6c2e,0x6d090a3009343732,0x09203436662e6c75\n"
".quad 0x25202c3631646625,0x6625202c31316466,0x6461090a3b303164,0x2509203436662e64\n"
".quad 0x6625202c33386466,0x646625202c363164,0x646461090a3b3631,0x662509203436662e\n"
".quad 0x646625202c303164,0x3338646625202c39,0x09636f6c2e090a3b,0x3009353732093631\n"
".quad 0x36662e627573090a,0x3438646625092034,0x2c3032646625202c,0x0a3b303864662520\n"
".quad 0x3436662e64646109,0x2c31316466250920,0x25202c3864662520,0x2e090a3b34386466\n"
".quad 0x3209363109636f6c,0x756d090a30093637,0x2509203436662e6c,0x6625202c35386466\n"
".quad 0x646625202c303164,0x6f6c2e090a3b3031,0x3437320936310963,0x2e627573090a3009\n"
".quad 0x3472250920323373,0x2c36317225202c37,0x6f6d090a3b343120,0x2509203233752e76\n"
".quad 0x0a3b30202c383472,0x656c2e7074657309,0x702509203233732e,0x37347225202c3133\n"
".quad 0x0a3b38347225202c,0x6220313370254009,0x335f4c2409206172,0x0a3b38333533335f\n"
".quad 0x706f6f6c3c2f2f20,0x6f2074726150203e,0x6220706f6f6c2066,0x656e696c2079646f\n"
".quad 0x6568202c35353120,0x6c6562616c206461,0x335f744c24206465,0x090a30373939315f\n"
".quad 0x203436662e6c756d,0x202c303264662509,0x25202c3131646625,0x61090a3b31316466\n"
".quad 0x09203436662e6464,0x25202c3638646625,0x6625202c30326466,0x6f6d090a3b353864\n"
".quad 0x2509203436662e76,0x6430202c37386466,0x3030303030313034,0x3030303030303030\n"
".quad 0x090a34202f2f093b,0x2e74672e70746573,0x3370250920343666,0x3638646625202c32\n"
".quad 0x3b3738646625202c,0x323370252140090a,0x4c24092061726220,0x32383233335f335f\n"
".quad 0x335f335f4c240a3b,0x2e090a3a38333533,0x3209363109636f6c,0x6f6d090a30093238\n"
".quad 0x2509203233732e76,0x347225202c303272,0x2e617262090a3b37,0x444c240920696e75\n"
".quad 0x5a5f5f69646e6557,0x614d636c61433431,0x746f72626c65646e,0x30535f5469456449\n"
".quad 0x695f30535f30535f,0x3b315f3031325f62,0x33335f335f4c240a,0x2f2f200a3a323832\n"
".quad 0x50203e706f6f6c3c,0x6c20666f20747261,0x79646f6220706f6f,0x353120656e696c20\n"
".quad 0x2064616568202c35,0x2064656c6562616c,0x39315f335f744c24,0x6f6c2e090a303739\n"
".quad 0x3338320936310963,0x2e6c756d090a3009,0x6466250920343666,0x31646625202c3631\n"
".quad 0x3031646625202c31,0x662e646461090a3b,0x3864662509203436,0x3631646625202c38\n"
".quad 0x3b3631646625202c,0x36662e646461090a,0x3031646625092034,0x202c39646625202c\n"
".quad 0x090a3b3838646625,0x09363109636f6c2e,0x73090a3009343832,0x09203436662e6275\n"
".quad 0x25202c3938646625,0x6625202c30326466,0x6461090a3b353864,0x2509203436662e64\n"
".quad 0x6625202c31316466,0x38646625202c3864,0x636f6c2e090a3b39,0x0935383209363109\n"
".quad 0x662e6c756d090a30,0x3964662509203436,0x3031646625202c30,0x3b3031646625202c\n"
".quad 0x3109636f6c2e090a,0x0a30093338320936,0x3233732e62757309,0x202c393472250920\n"
".quad 0x3531202c36317225,0x752e766f6d090a3b,0x3035722509203233,0x6573090a3b30202c\n"
".quad 0x33732e656c2e7074,0x2c33337025092032,0x25202c3934722520,0x2540090a3b303572\n"
".quad 0x2061726220333370,0x34335f335f4c2409,0x2f2f200a3b303530,0x50203e706f6f6c3c\n"
".quad 0x6c20666f20747261,0x79646f6220706f6f,0x353120656e696c20,0x2064616568202c35\n"
".quad 0x2064656c6562616c,0x39315f335f744c24,0x6c756d090a303739,0x662509203436662e\n"
".quad 0x646625202c303264,0x31646625202c3131,0x2e646461090a3b31,0x6466250920343666\n"
".quad 0x32646625202c3139,0x3039646625202c30,0x662e766f6d090a3b,0x3964662509203436\n"
".quad 0x3130346430202c32,0x3030303030303030,0x2f093b3030303030,0x746573090a34202f\n"
".quad 0x3436662e74672e70,0x202c343370250920,0x25202c3139646625,0x40090a3b32396466\n"
".quad 0x7262203433702521,0x5f335f4c24092061,0x240a3b3439373333,0x353034335f335f4c\n"
".quad 0x636f6c2e090a3a30,0x0931393209363109,0x732e766f6d090a30,0x3032722509203233\n"
".quad 0x0a3b39347225202c,0x696e752e61726209,0x6e6557444c240920,0x4334315a5f5f6964\n"
".quad 0x65646e614d636c61,0x456449746f72626c,0x30535f30535f5469,0x325f62695f30535f\n"
".quad 0x4c240a3b315f3031,0x34393733335f335f,0x6f6c3c2f2f200a3a,0x74726150203e706f\n"
".quad 0x706f6f6c20666f20,0x696c2079646f6220,0x202c35353120656e,0x62616c2064616568\n"
".quad 0x744c242064656c65,0x30373939315f335f,0x3109636f6c2e090a,0x0a30093239320936\n"
".quad 0x3436662e6c756d09,0x2c36316466250920,0x202c313164662520,0x090a3b3031646625\n"
".quad 0x203436662e646461,0x202c333964662509,0x25202c3631646625,0x61090a3b36316466\n"
".quad 0x09203436662e6464,0x25202c3031646625,0x646625202c396466,0x6f6c2e090a3b3339\n"
".quad 0x3339320936310963,0x2e627573090a3009,0x6466250920343666,0x32646625202c3439\n"
".quad 0x3039646625202c30,0x662e646461090a3b,0x3164662509203436,0x2c38646625202c31\n"
".quad 0x0a3b343964662520,0x363109636f6c2e09,0x090a300934393209,0x203436662e6c756d\n"
".quad 0x202c353964662509,0x25202c3031646625,0x2e090a3b30316466,0x3209363109636f6c\n"
".quad 0x7573090a30093239,0x2509203233732e62,0x317225202c313572,0x090a3b3631202c36\n"
".quad 0x203233752e766f6d,0x30202c3235722509,0x2e70746573090a3b,0x09203233732e656c\n"
".quad 0x7225202c35337025,0x32357225202c3135,0x3533702540090a3b,0x4c24092061726220\n"
".quad 0x32363534335f335f,0x6f6c3c2f2f200a3b,0x74726150203e706f,0x706f6f6c20666f20\n"
".quad 0x696c2079646f6220,0x202c35353120656e,0x62616c2064616568,0x744c242064656c65\n"
".quad 0x30373939315f335f,0x36662e6c756d090a,0x3032646625092034,0x2c3131646625202c\n"
".quad 0x0a3b313164662520,0x3436662e64646109,0x2c36396466250920,0x202c303264662520\n"
".quad 0x090a3b3539646625,0x203436662e766f6d,0x202c373964662509,0x3030303130346430\n"
".quad 0x3030303030303030,0x34202f2f093b3030,0x672e70746573090a,0x2509203436662e74\n"
".quad 0x646625202c363370,0x39646625202c3639,0x70252140090a3b37,0x0920617262203633\n"
".quad 0x3334335f335f4c24,0x335f4c240a3b3630,0x0a3a32363534335f,0x363109636f6c2e09\n"
".quad 0x090a300930303309,0x203233732e766f6d,0x25202c3032722509,0x7262090a3b313572\n"
".quad 0x240920696e752e61,0x5f69646e6557444c,0x636c614334315a5f,0x72626c65646e614d\n"
".quad 0x5f5469456449746f,0x30535f30535f3053,0x5f3031325f62695f,0x5f335f4c240a3b31\n"
".quad 0x200a3a3630333433,0x3e706f6f6c3c2f2f,0x666f207472615020,0x6f6220706f6f6c20\n"
".quad 0x20656e696c207964,0x616568202c353531,0x656c6562616c2064,0x5f335f744c242064\n"
".quad 0x2e090a3037393931,0x3309363109636f6c,0x756d090a30093130,0x2509203436662e6c\n"
".quad 0x6625202c36316466,0x646625202c313164,0x646461090a3b3031,0x662509203436662e\n"
".quad 0x646625202c383964,0x31646625202c3631,0x2e646461090a3b36,0x6466250920343666\n"
".quad 0x39646625202c3031,0x3b3839646625202c,0x3109636f6c2e090a,0x0a30093230330936\n"
".quad 0x3436662e62757309,0x2c39396466250920,0x202c303264662520,0x090a3b3539646625\n"
".quad 0x203436662e646461,0x202c313164662509,0x6625202c38646625,0x6c2e090a3b393964\n"
".quad 0x303309363109636f,0x6c756d090a300933,0x662509203436662e,0x6625202c30303164\n"
".quad 0x646625202c303164,0x6f6c2e090a3b3031,0x3130330936310963,0x2e627573090a3009\n"
".quad 0x3572250920323373,0x2c36317225202c33,0x6f6d090a3b373120,0x2509203233752e76\n"
".quad 0x0a3b30202c343572,0x656c2e7074657309,0x702509203233732e,0x33357225202c3733\n"
".quad 0x0a3b34357225202c,0x6220373370254009,0x335f4c2409206172,0x0a3b34373035335f\n"
".quad 0x706f6f6c3c2f2f20,0x6f2074726150203e,0x6220706f6f6c2066,0x656e696c2079646f\n"
".quad 0x6568202c35353120,0x6c6562616c206461,0x335f744c24206465,0x090a30373939315f\n"
".quad 0x203436662e6c756d,0x202c303264662509,0x25202c3131646625,0x61090a3b31316466\n"
".quad 0x09203436662e6464,0x202c313031646625,0x25202c3032646625,0x090a3b3030316466\n"
".quad 0x203436662e766f6d,0x2c32303164662509,0x3030313034643020,0x3030303030303030\n"
".quad 0x202f2f093b303030,0x2e70746573090a34,0x09203436662e7467,0x6625202c38337025\n"
".quad 0x6625202c31303164,0x40090a3b32303164,0x7262203833702521,0x5f335f4c24092061\n"
".quad 0x240a3b3831383433,0x373035335f335f4c,0x636f6c2e090a3a34,0x0939303309363109\n"
".quad 0x732e766f6d090a30,0x3032722509203233,0x0a3b33357225202c,0x696e752e61726209\n"
".quad 0x6e6557444c240920,0x4334315a5f5f6964,0x65646e614d636c61,0x456449746f72626c\n"
".quad 0x30535f30535f5469,0x325f62695f30535f,0x4c240a3b315f3031,0x38313834335f335f\n"
".quad 0x6f6c3c2f2f200a3a,0x74726150203e706f,0x706f6f6c20666f20,0x696c2079646f6220\n"
".quad 0x202c35353120656e,0x62616c2064616568,0x744c242064656c65,0x30373939315f335f\n"
".quad 0x3109636f6c2e090a,0x0a30093031330936,0x3436662e6c756d09,0x2c36316466250920\n"
".quad 0x202c313164662520,0x090a3b3031646625,0x203436662e646461,0x2c33303164662509\n"
".quad 0x202c363164662520,0x090a3b3631646625,0x203436662e646461,0x202c303164662509\n"
".quad 0x6625202c39646625,0x2e090a3b33303164,0x3309363109636f6c,0x7573090a30093131\n"
".quad 0x2509203436662e62,0x25202c3430316466,0x6625202c30326466,0x61090a3b30303164\n"
".quad 0x09203436662e6464,0x25202c3131646625,0x646625202c386466,0x6c2e090a3b343031\n"
".quad 0x313309363109636f,0x6c756d090a300932,0x662509203436662e,0x6625202c35303164\n"
".quad 0x646625202c303164,0x6f6c2e090a3b3031,0x3031330936310963,0x2e627573090a3009\n"
".quad 0x3572250920323373,0x2c36317225202c35,0x6f6d090a3b383120,0x2509203233752e76\n"
".quad 0x0a3b30202c363572,0x656c2e7074657309,0x702509203233732e,0x35357225202c3933\n"
".quad 0x0a3b36357225202c,0x6220393370254009,0x335f4c2409206172,0x0a3b36383535335f\n"
".quad 0x706f6f6c3c2f2f20,0x6f2074726150203e,0x6220706f6f6c2066,0x656e696c2079646f\n"
".quad 0x6568202c35353120,0x6c6562616c206461,0x335f744c24206465,0x090a30373939315f\n"
".quad 0x203436662e6c756d,0x202c303264662509,0x25202c3131646625,0x61090a3b31316466\n"
".quad 0x09203436662e6464,0x202c363031646625,0x25202c3032646625,0x090a3b3530316466\n"
".quad 0x203436662e766f6d,0x2c37303164662509,0x3030313034643020,0x3030303030303030\n"
".quad 0x202f2f093b303030,0x2e70746573090a34,0x09203436662e7467,0x6625202c30347025\n"
".quad 0x6625202c36303164,0x40090a3b37303164,0x7262203034702521,0x5f335f4c24092061\n"
".quad 0x240a3b3033333533,0x383535335f335f4c,0x636f6c2e090a3a36,0x0938313309363109\n"
".quad 0x732e766f6d090a30,0x3032722509203233,0x0a3b35357225202c,0x696e752e61726209\n"
".quad 0x6e6557444c240920,0x4334315a5f5f6964,0x65646e614d636c61,0x456449746f72626c\n"
".quad 0x30535f30535f5469,0x325f62695f30535f,0x4c240a3b315f3031,0x30333335335f335f\n"
".quad 0x6f6c3c2f2f200a3a,0x74726150203e706f,0x706f6f6c20666f20,0x696c2079646f6220\n"
".quad 0x202c35353120656e,0x62616c2064616568,0x744c242064656c65,0x30373939315f335f\n"
".quad 0x3109636f6c2e090a,0x0a30093931330936,0x3436662e6c756d09,0x2c36316466250920\n"
".quad 0x202c313164662520,0x090a3b3031646625,0x203436662e646461,0x2c38303164662509\n"
".quad 0x202c363164662520,0x090a3b3631646625,0x203436662e646461,0x202c303164662509\n"
".quad 0x6625202c39646625,0x2e090a3b38303164,0x3309363109636f6c,0x7573090a30093032\n"
".quad 0x2509203436662e62,0x25202c3930316466,0x6625202c30326466,0x61090a3b35303164\n"
".quad 0x09203436662e6464,0x25202c3131646625,0x646625202c386466,0x6c2e090a3b393031\n"
".quad 0x323309363109636f,0x6c756d090a300931,0x662509203436662e,0x6625202c30313164\n"
".quad 0x646625202c303164,0x6f6c2e090a3b3031,0x3532330936310963,0x2e627573090a3009\n"
".quad 0x3172250920323373,0x2c36317225202c36,0x6c2e090a3b393120,0x313309363109636f\n"
".quad 0x766f6d090a300939,0x722509203233732e,0x090a3b30202c3735,0x2e656c2e70746573\n"
".quad 0x3370250920323373,0x202c36317225202c,0x40090a3b37357225,0x2061726220337025\n"
".quad 0x36335f335f4c2409,0x2f2f200a3b383930,0x50203e706f6f6c3c,0x6c20666f20747261\n"
".quad 0x79646f6220706f6f,0x353120656e696c20,0x2064616568202c35,0x2064656c6562616c\n"
".quad 0x39315f335f744c24,0x6c756d090a303739,0x662509203436662e,0x646625202c303264\n"
".quad 0x31646625202c3131,0x2e646461090a3b31,0x6466250920343666,0x646625202c313131\n"
".quad 0x31646625202c3032,0x766f6d090a3b3031,0x662509203436662e,0x6430202c32313164\n"
".quad 0x3030303030313034,0x3030303030303030,0x090a34202f2f093b,0x2e74672e70746573\n"
".quad 0x3470250920343666,0x3131646625202c31,0x3131646625202c31,0x70252140090a3b32\n"
".quad 0x0920617262203134,0x3835335f335f4c24,0x335f4c240a3b3234,0x0a3a38393036335f\n"
".quad 0x363109636f6c2e09,0x090a300937323309,0x203233732e766f6d,0x25202c3032722509\n"
".quad 0x7262090a3b363172,0x240920696e752e61,0x5f69646e6557444c,0x636c614334315a5f\n"
".quad 0x72626c65646e614d,0x5f5469456449746f,0x30535f30535f3053,0x5f3031325f62695f\n"
".quad 0x5f335f4c240a3b31,0x200a3a3234383533,0x3e706f6f6c3c2f2f,0x666f207472615020\n"
".quad 0x6f6220706f6f6c20,0x20656e696c207964,0x616568202c353531,0x656c6562616c2064\n"
".quad 0x5f335f744c242064,0x2e090a3037393931,0x3309363109636f6c,0x756d090a30093832\n"
".quad 0x2509203436662e6c,0x6625202c36316466,0x646625202c313164,0x646461090a3b3031\n"
".quad 0x662509203436662e,0x6625202c33313164,0x646625202c363164,0x646461090a3b3631\n"
".quad 0x662509203436662e,0x646625202c303164,0x3131646625202c39,0x636f6c2e090a3b33\n"
".quad 0x0939323309363109,0x662e627573090a30,0x3164662509203436,0x32646625202c3431\n"
".quad 0x3131646625202c30,0x2e646461090a3b30,0x6466250920343666,0x38646625202c3131\n"
".quad 0x343131646625202c,0x09636f6c2e090a3b,0x3009303333093631,0x36662e6c756d090a\n"
".quad 0x3231646625092034,0x2c3031646625202c,0x0a3b303164662520,0x363109636f6c2e09\n"
".quad 0x090a300931333309,0x203436662e6c756d,0x202c333164662509,0x25202c3131646625\n"
".quad 0x2e090a3b31316466,0x3309363109636f6c,0x7262090a30093832,0x240920696e752e61\n"
".quad 0x3939315f335f744c,0x57444c240a3b3037,0x315a5f5f69646e65,0x6e614d636c614334\n"
".quad 0x49746f72626c6564,0x5f30535f54694564,0x62695f30535f3053,0x0a3a315f3031325f\n"
".quad 0x373109636f6c2e09,0x6d090a3009313209,0x09203233732e766f,0x3b30202c38357225\n"
".quad 0x672e70746573090a,0x2509203233732e74,0x327225202c323470,0x3b38357225202c30\n"
".quad 0x3109636f6c2e090a,0x0a30093133310936,0x617261702e646c09,0x2509203233732e6d\n"
".quad 0x5f5f5b202c353172,0x6d72617061647563,0x6e614d36315a5f5f,0x30746f72626c6564\n"
".quad 0x45644930316d735f,0x7261686375365076,0x32535f5469696934,0x535f32535f32535f\n"
".quad 0x6269695f30535f32,0x5d68636e7572635f,0x09636f6c2e090a3b,0x0a30093132093731\n"
".quad 0x3233732e62757309,0x202c393572250920,0x7225202c35317225,0x766f6d090a3b3032\n"
".quad 0x722509203233732e,0x090a3b30202c3036,0x3233732e706c6573,0x202c313672250920\n"
".quad 0x7225202c39357225,0x32347025202c3036,0x752e766f6d090a3b,0x3236722509203233\n"
".quad 0x6573090a3b30202c,0x33732e71652e7074,0x2c33347025092032,0x25202c3136722520\n"
".quad 0x2540090a3b323672,0x2061726220333470,0x335f335f744c2409,0x2e090a3b34333637\n"
".quad 0x3209373109636f6c,0x2e646c090a300938,0x33732e6d61726170,0x2c33367225092032\n"
".quad 0x616475635f5f5b20,0x315a5f5f6d726170,0x626c65646e614d36,0x316d735f30746f72\n"
".quad 0x7536507645644930,0x6969693472616863,0x5f32535f32535f54,0x30535f32535f3253\n"
".quad 0x696e615f6269695f,0x72466e6f6974616d,0x61090a3b5d656d61,0x09203233732e6464\n"
".quad 0x7225202c34367225,0x31367225202c3336,0x61702e646c090a3b,0x092038752e6d6172\n"
".quad 0x5f5b202c35367225,0x726170616475635f,0x614d36315a5f5f6d,0x746f72626c65646e\n"
".quad 0x644930316d735f30,0x6168637536507645,0x535f546969693472,0x5f32535f32535f32\n"
".quad 0x69695f30535f3253,0x73726f6c6f635f62,0x756d090a3b5d302b,0x3233732e6f6c2e6c\n"
".quad 0x202c363672250920,0x7225202c34367225,0x747663090a3b3536,0x203233752e38752e\n"
".quad 0x25202c3736722509,0x6c2e090a3b363672,0x393209373109636f,0x702e646c090a3009\n"
".quad 0x2038752e6d617261,0x5b202c3836722509,0x6170616475635f5f,0x4d36315a5f5f6d72\n"
".quad 0x6f72626c65646e61,0x4930316d735f3074,0x6863753650764564,0x5f54696969347261\n"
".quad 0x32535f32535f3253,0x695f30535f32535f,0x726f6c6f635f6269,0x6d090a3b5d312b73\n"
".quad 0x33732e6f6c2e6c75,0x2c39367225092032,0x25202c3436722520,0x7663090a3b383672\n"
".quad 0x3233752e38752e74,0x202c303772250920,0x2e090a3b39367225,0x3309373109636f6c\n"
".quad 0x2e646c090a300930,0x38752e6d61726170,0x202c313772250920,0x70616475635f5f5b\n"
".quad 0x36315a5f5f6d7261,0x72626c65646e614d,0x30316d735f30746f,0x6375365076456449\n"
".quad 0x5469696934726168,0x535f32535f32535f,0x5f30535f32535f32,0x6f6c6f635f626969\n"
".quad 0x090a3b5d322b7372,0x732e6f6c2e6c756d,0x3237722509203233,0x202c34367225202c\n"
".quad 0x63090a3b31377225,0x33752e38752e7476,0x2c33377225092032,0x090a3b3237722520\n"
".quad 0x20696e752e617262,0x335f335f744c2409,0x4c240a3b38373337,0x333637335f335f74\n"
".quad 0x636f6c2e090a3a34,0x3009343309373109,0x33752e766f6d090a,0x2c33377225092032\n"
".quad 0x766f6d090a3b3020,0x722509203233752e,0x090a3b30202c3037,0x203233752e766f6d\n"
".quad 0x30202c3736722509,0x5f335f744c240a3b,0x090a3a3837333733,0x09373109636f6c2e\n"
".quad 0x646c090a30093031,0x732e6d617261702e,0x2c37722509203233,0x616475635f5f5b20\n"
".quad 0x315a5f5f6d726170,0x626c65646e614d36,0x316d735f30746f72,0x7536507645644930\n"
".quad 0x6969693472616863,0x5f32535f32535f54,0x30535f32535f3253,0x616d695f6269695f\n"
".quad 0x2e090a3b5d576567,0x3309373109636f6c,0x6c756d090a300934,0x203233732e6f6c2e\n"
".quad 0x25202c3437722509,0x3b367225202c3772,0x33732e646461090a,0x2c35377225092032\n"
".quad 0x25202c3437722520,0x6c756d090a3b3472,0x203233752e6f6c2e,0x25202c3637722509\n"
".quad 0x0a3b34202c353772,0x3436752e74766309,0x722509203233752e,0x36377225202c3164\n"
".quad 0x61702e646c090a3b,0x203436752e6d6172,0x5b202c3264722509,0x6170616475635f5f\n"
".quad 0x4d36315a5f5f6d72,0x6f72626c65646e61,0x4930316d735f3074,0x6863753650764564\n"
".quad 0x5f54696969347261,0x32535f32535f3253,0x695f30535f32535f,0x3b5d7473645f6269\n"
".quad 0x36752e646461090a,0x2c33647225092034,0x25202c3164722520,0x646c090a3b326472\n"
".quad 0x732e6d617261702e,0x3737722509203233,0x6475635f5f5b202c,0x5a5f5f6d72617061\n"
".quad 0x6c65646e614d3631,0x6d735f30746f7262,0x3650764564493031,0x6969347261686375\n"
".quad 0x32535f32535f5469,0x535f32535f32535f,0x72665f6269695f30,0x6d090a3b5d656d61\n"
".quad 0x09203233752e766f,0x3b30202c38377225,0x6e2e70746573090a,0x2509203233732e65\n"
".quad 0x377225202c343470,0x3b38377225202c37,0x203434702540090a,0x744c240920617262\n"
".quad 0x36343138335f335f,0x09636f6c2e090a3b,0x0a30093134093731,0x3233752e766f6d09\n"
".quad 0x202c393772250920,0x672e7473090a3b30,0x34762e6c61626f6c,0x72255b092038752e\n"
".quad 0x7b202c5d302b3364,0x3772252c37367225,0x252c333772252c30,0x62090a3b7d393772\n"
".quad 0x0920696e752e6172,0x37335f335f744c24,0x744c240a3b303938,0x36343138335f335f\n"
".quad 0x09636f6c2e090a3a,0x0a30093433093731,0x617261702e646c09,0x2509203233732e6d\n"
".quad 0x5f5f5b202c373772,0x6d72617061647563,0x6e614d36315a5f5f,0x30746f72626c6564\n"
".quad 0x45644930316d735f,0x7261686375365076,0x32535f5469696934,0x535f32535f32535f\n"
".quad 0x6269695f30535f32,0x3b5d656d6172665f,0x3109636f6c2e090a,0x090a300935340937\n"
".quad 0x203233732e646461,0x25202c3038722509,0x0a3b31202c373772,0x3233732e72687309\n"
".quad 0x202c313872250920,0x3133202c30387225,0x732e766f6d090a3b,0x3238722509203233\n"
".quad 0x6e61090a3b31202c,0x2509203233622e64,0x387225202c333872,0x3b32387225202c31\n"
".quad 0x33732e646461090a,0x2c34387225092032,0x25202c3338722520,0x6873090a3b303872\n"
".quad 0x2509203233732e72,0x387225202c353872,0x6c090a3b31202c34,0x6c61626f6c672e64\n"
".quad 0x092038752e34762e,0x72252c363872257b,0x2c383872252c3738,0x6472255b202c7d5f\n"
".quad 0x6d090a3b5d302b33,0x33732e6f6c2e6c75,0x2c39387225092032,0x25202c3737722520\n"
".quad 0x6461090a3b363872,0x2509203233732e64,0x367225202c303972,0x3b39387225202c37\n"
".quad 0x33732e646461090a,0x2c31397225092032,0x25202c3538722520,0x6964090a3b303972\n"
".quad 0x2509203233732e76,0x397225202c323972,0x3b30387225202c31,0x3109636f6c2e090a\n"
".quad 0x090a300936340937,0x732e6f6c2e6c756d,0x3339722509203233,0x202c37377225202c\n"
".quad 0x61090a3b37387225,0x09203233732e6464,0x7225202c34397225,0x33397225202c3037\n"
".quad 0x732e646461090a3b,0x3539722509203233,0x202c35387225202c,0x64090a3b34397225\n"
".quad 0x09203233732e7669,0x7225202c36397225,0x30387225202c3539,0x6c672e7473090a3b\n"
".quad 0x2e32762e6c61626f,0x6472255b09203875,0x257b202c5d302b33,0x363972252c323972\n"
".quad 0x636f6c2e090a3b7d,0x3009373409373109,0x6f6c2e6c756d090a,0x722509203233732e\n"
".quad 0x37377225202c3739,0x0a3b38387225202c,0x3233732e64646109,0x202c383972250920\n"
".quad 0x7225202c33377225,0x646461090a3b3739,0x722509203233732e,0x35387225202c3939\n"
".quad 0x0a3b38397225202c,0x3233732e76696409,0x2c30303172250920,0x25202c3939722520\n"
".quad 0x7473090a3b303872,0x2e6c61626f6c672e,0x6472255b09203875,0x7225202c5d322b33\n"
".quad 0x744c240a3b303031,0x30393837335f335f,0x5f335f744c240a3a,0x090a3a3435333633\n"
".quad 0x09373109636f6c2e,0x7865090a30093035,0x57444c240a3b7469,0x36315a5f5f646e65\n"
".quad 0x72626c65646e614d,0x30316d735f30746f,0x6375365076456449,0x5469696934726168\n"
".quad 0x535f32535f32535f,0x5f30535f32535f32,0x207d090a3a626969,0x4d36315a5f202f2f\n"
".quad 0x6f72626c65646e61,0x4930316d735f3074,0x6863753650764564,0x5f54696969347261\n"
".quad 0x32535f32535f3253,0x695f30535f32535f,0x6e652e090a0a6269,0x36315a5f20797274\n"
".quad 0x72626c65646e614d,0x30316d735f31746f,0x6375365076456649,0x5469696934726168\n"
".quad 0x535f32535f32535f,0x5f30535f32535f32,0x09090a2820626969,0x2e206d617261702e\n"
".quad 0x75635f5f20343675,0x5f5f6d7261706164,0x65646e614d36315a,0x735f31746f72626c\n"
".quad 0x507645664930316d,0x6934726168637536,0x535f32535f546969,0x5f32535f32535f32\n"
".quad 0x645f6269695f3053,0x702e09090a2c7473,0x33732e206d617261,0x616475635f5f2032\n"
".quad 0x315a5f5f6d726170,0x626c65646e614d36,0x316d735f31746f72,0x7536507645664930\n"
".quad 0x6969693472616863,0x5f32535f32535f54,0x30535f32535f3253,0x616d695f6269695f\n"
".quad 0x2e09090a2c576567,0x732e206d61726170,0x6475635f5f203233,0x5a5f5f6d72617061\n"
".quad 0x6c65646e614d3631,0x6d735f31746f7262,0x3650764566493031,0x6969347261686375\n"
".quad 0x32535f32535f5469,0x535f32535f32535f,0x6d695f6269695f30,0x09090a2c48656761\n"
".quad 0x2e206d617261702e,0x75635f5f20323373,0x5f5f6d7261706164,0x65646e614d36315a\n"
".quad 0x735f31746f72626c,0x507645664930316d,0x6934726168637536,0x535f32535f546969\n"
".quad 0x5f32535f32535f32,0x635f6269695f3053,0x090a2c68636e7572,0x206d617261702e09\n"
".quad 0x635f5f203233662e,0x5f6d726170616475,0x646e614d36315a5f,0x5f31746f72626c65\n"
".quad 0x7645664930316d73,0x3472616863753650,0x5f32535f54696969,0x32535f32535f3253\n"
".quad 0x5f6269695f30535f,0x09090a2c66664f78,0x2e206d617261702e,0x75635f5f20323366\n"
".quad 0x5f5f6d7261706164,0x65646e614d36315a,0x735f31746f72626c,0x507645664930316d\n"
".quad 0x6934726168637536,0x535f32535f546969,0x5f32535f32535f32,0x795f6269695f3053\n"
".quad 0x2e09090a2c66664f,0x662e206d61726170,0x6475635f5f203233,0x5a5f5f6d72617061\n"
".quad 0x6c65646e614d3631,0x6d735f31746f7262,0x3650764566493031,0x6969347261686375\n"
".quad 0x32535f32535f5469,0x535f32535f32535f,0x4a785f6269695f30,0x61702e09090a2c50\n"
".quad 0x3233662e206d6172,0x70616475635f5f20,0x36315a5f5f6d7261,0x72626c65646e614d\n"
".quad 0x30316d735f31746f,0x6375365076456649,0x5469696934726168,0x535f32535f32535f\n"
".quad 0x5f30535f32535f32,0x2c504a795f626969,0x617261702e09090a,0x5f203233662e206d\n"
".quad 0x726170616475635f,0x614d36315a5f5f6d,0x746f72626c65646e,0x664930316d735f31\n"
".quad 0x6168637536507645,0x535f546969693472,0x5f32535f32535f32,0x69695f30535f3253\n"
".quad 0x2c656c6163735f62,0x617261702e09090a,0x6e67696c612e206d,0x5f2038622e203420\n"
".quad 0x726170616475635f,0x614d36315a5f5f6d,0x746f72626c65646e,0x664930316d735f31\n"
".quad 0x6168637536507645,0x535f546969693472,0x5f32535f32535f32,0x69695f30535f3253\n"
".quad 0x73726f6c6f635f62,0x2e09090a2c5d345b,0x732e206d61726170,0x6475635f5f203233\n"
".quad 0x5a5f5f6d72617061,0x6c65646e614d3631,0x6d735f31746f7262,0x3650764566493031\n"
".quad 0x6969347261686375,0x32535f32535f5469,0x535f32535f32535f,0x72665f6269695f30\n"
".quad 0x2e09090a2c656d61,0x732e206d61726170,0x6475635f5f203233,0x5a5f5f6d72617061\n"
".quad 0x6c65646e614d3631,0x6d735f31746f7262,0x3650764566493031,0x6969347261686375\n"
".quad 0x32535f32535f5469,0x535f32535f32535f,0x6e615f6269695f30,0x466e6f6974616d69\n"
".quad 0x09090a2c656d6172,0x2e206d617261702e,0x6475635f5f203873,0x5a5f5f6d72617061\n"
".quad 0x6c65646e614d3631,0x6d735f31746f7262,0x3650764566493031,0x6969347261686375\n"
".quad 0x32535f32535f5469,0x535f32535f32535f,0x73695f6269695f30,0x2e090a7b090a294a\n"
".quad 0x3631752e20676572,0x3b3e363c68722520,0x2e206765722e090a,0x313c722520323375\n"
".quad 0x722e090a3b3e3938,0x203436752e206765,0x0a3b3e393c647225,0x662e206765722e09\n"
".quad 0x31313c6625203233,0x65722e090a3b3e36,0x20646572702e2067,0x0a3b3e30353c7025\n"
".quad 0x373109636f6c2e09,0x240a300935303109,0x6e6967656257444c,0x6e614d36315a5f5f\n"
".quad 0x31746f72626c6564,0x45664930316d735f,0x7261686375365076,0x32535f5469696934\n"
".quad 0x535f32535f32535f,0x6269695f30535f32,0x752e766f6d090a3a,0x3168722509203631\n"
".quad 0x646961746325202c,0x766f6d090a3b782e,0x722509203631752e,0x69746e25202c3268\n"
".quad 0x756d090a3b782e64,0x752e656469772e6c,0x2c31722509203631,0x25202c3168722520\n"
".quad 0x6f6d090a3b326872,0x2509203631752e76,0x746325202c336872,0x090a3b792e646961\n"
".quad 0x203631752e766f6d,0x25202c3468722509,0x0a3b792e6469746e,0x6469772e6c756d09\n"
".quad 0x2509203631752e65,0x33687225202c3272,0x0a3b34687225202c,0x3233752e74766309\n"
".quad 0x722509203631752e,0x2e64697425202c33,0x2e646461090a3b78,0x3472250920323375\n"
".quad 0x25202c337225202c,0x747663090a3b3172,0x3631752e3233752e,0x25202c3572250920\n"
".quad 0x090a3b792e646974,0x203233752e646461,0x7225202c36722509,0x0a3b327225202c35\n"
".quad 0x617261702e646c09,0x2509203233732e6d,0x635f5f5b202c3772,0x5f6d726170616475\n"
".quad 0x646e614d36315a5f,0x5f31746f72626c65,0x7645664930316d73,0x3472616863753650\n"
".quad 0x5f32535f54696969,0x32535f32535f3253,0x5f6269695f30535f,0x3b5d486567616d69\n"
".quad 0x7261702e646c090a,0x09203233732e6d61,0x5f5f5b202c387225,0x6d72617061647563\n"
".quad 0x6e614d36315a5f5f,0x31746f72626c6564,0x45664930316d735f,0x7261686375365076\n"
".quad 0x32535f5469696934,0x535f32535f32535f,0x6269695f30535f32,0x5d576567616d695f\n"
".quad 0x672e746573090a3b,0x33732e3233752e74,0x202c397225092032,0x367225202c377225\n"
".quad 0x732e67656e090a3b,0x3031722509203233,0x090a3b397225202c,0x752e74672e746573\n"
".quad 0x09203233732e3233,0x7225202c31317225,0x0a3b347225202c38,0x3233732e67656e09\n"
".quad 0x202c323172250920,0x61090a3b31317225,0x09203233622e646e,0x7225202c33317225\n"
".quad 0x32317225202c3031,0x752e766f6d090a3b,0x3431722509203233,0x6573090a3b30202c\n"
".quad 0x33732e71652e7074,0x202c317025092032,0x7225202c33317225,0x702540090a3b3431\n"
".quad 0x2409206172622031,0x3533345f345f744c,0x2e646c090a3b3232,0x33732e6d61726170\n"
".quad 0x202c387225092032,0x70616475635f5f5b,0x36315a5f5f6d7261,0x72626c65646e614d\n"
".quad 0x30316d735f31746f,0x6375365076456649,0x5469696934726168,0x535f32535f32535f\n"
".quad 0x5f30535f32535f32,0x67616d695f626969,0x6c2e090a3b5d5765,0x313109373109636f\n"
".quad 0x6c756d090a300933,0x203233732e6f6c2e,0x25202c3531722509,0x3b367225202c3872\n"
".quad 0x33732e646461090a,0x2c36317225092032,0x25202c3531722520,0x2e646c090a3b3472\n"
".quad 0x36752e6d61726170,0x2c31647225092034,0x616475635f5f5b20,0x315a5f5f6d726170\n"
".quad 0x626c65646e614d36,0x316d735f31746f72,0x7536507645664930,0x6969693472616863\n"
".quad 0x5f32535f32535f54,0x30535f32535f3253,0x7473645f6269695f,0x2e6c756d090a3b5d\n"
".quad 0x09203233752e6f6c,0x7225202c37317225,0x090a3b34202c3631,0x2e3436752e747663\n"
".quad 0x6472250920323375,0x3b37317225202c32,0x36752e646461090a,0x2c33647225092034\n"
".quad 0x25202c3264722520,0x646c090a3b316472,0x2e6c61626f6c672e,0x7b092038752e3476\n"
".quad 0x3172252c38317225,0x5f2c303272252c39,0x336472255b202c7d,0x6f6d090a3b5d302b\n"
".quad 0x2509203233752e76,0x0a3b30202c313272,0x656c2e7074657309,0x702509203233732e\n"
".quad 0x202c347225202c32,0x40090a3b31327225,0x2061726220327025,0x345f345f744c2409\n"
".quad 0x6c090a3b30393234,0x6c61626f6c672e64,0x092038752e34762e,0x72252c323272257b\n"
".quad 0x2c343272252c3332,0x6472255b202c7d5f,0x090a3b5d342d2b33,0x09373109636f6c2e\n"
".quad 0x73090a3009383131,0x09203233732e6275,0x7225202c35327225,0x30327225202c3432\n"
".quad 0x732e736261090a3b,0x3632722509203233,0x0a3b35327225202c,0x3233732e766f6d09\n"
".quad 0x202c373272250920,0x746573090a3b3031,0x2e3233752e74672e,0x3272250920323373\n"
".quad 0x2c36327225202c38,0x090a3b3732722520,0x203233732e67656e,0x25202c3932722509\n"
".quad 0x7573090a3b383272,0x2509203233732e62,0x327225202c303372,0x3b38317225202c32\n"
".quad 0x33732e736261090a,0x2c31337225092032,0x090a3b3033722520,0x203233732e766f6d\n"
".quad 0x31202c3233722509,0x2e746573090a3b30,0x732e3233752e7467,0x3333722509203233\n"
".quad 0x202c31337225202c,0x6e090a3b32337225,0x09203233732e6765,0x7225202c34337225\n"
".quad 0x627573090a3b3333,0x722509203233732e,0x33327225202c3533,0x0a3b39317225202c\n"
".quad 0x3233732e73626109,0x202c363372250920,0x6d090a3b35337225,0x09203233732e766f\n"
".quad 0x3031202c37337225,0x672e746573090a3b,0x33732e3233752e74,0x2c38337225092032\n"
".quad 0x25202c3633722520,0x656e090a3b373372,0x2509203233732e67,0x337225202c393372\n"
".quad 0x622e726f090a3b38,0x3034722509203233,0x202c34337225202c,0x6f090a3b39337225\n"
".quad 0x2509203233622e72,0x327225202c313472,0x3b30347225202c39,0x6e752e617262090a\n"
".quad 0x345f744c24092069,0x0a3b34333034345f,0x34345f345f744c24,0x6f6d090a3a303932\n"
".quad 0x2509203233732e76,0x0a3b30202c313472,0x34345f345f744c24,0x6461090a3a343330\n"
".quad 0x2509203233732e64,0x347225202c323472,0x6c2e090a3b31202c,0x303109373109636f\n"
".quad 0x2e646c090a300935,0x33732e6d61726170,0x202c387225092032,0x70616475635f5f5b\n"
".quad 0x36315a5f5f6d7261,0x72626c65646e614d,0x30316d735f31746f,0x6375365076456649\n"
".quad 0x5469696934726168,0x535f32535f32535f,0x5f30535f32535f32,0x67616d695f626969\n"
".quad 0x6c2e090a3b5d5765,0x313109373109636f,0x746573090a300938,0x3233732e656c2e70\n"
".quad 0x25202c3370250920,0x32347225202c3872,0x2033702540090a3b,0x744c240920617262\n"
".quad 0x36343534345f345f,0x6c672e646c090a3b,0x2e34762e6c61626f,0x3472257b09203875\n"
".quad 0x252c343472252c33,0x202c7d5f2c353472,0x5d342b336472255b,0x09636f6c2e090a3b\n"
".quad 0x3009303231093731,0x33732e627573090a,0x2c36347225092032,0x25202c3534722520\n"
".quad 0x6261090a3b303272,0x2509203233732e73,0x347225202c373472,0x2e766f6d090a3b36\n"
".quad 0x3472250920323373,0x090a3b3031202c38,0x752e74672e746573,0x09203233732e3233\n"
".quad 0x7225202c39347225,0x38347225202c3734,0x732e67656e090a3b,0x3035722509203233\n"
".quad 0x0a3b39347225202c,0x3233732e62757309,0x202c313572250920,0x7225202c33347225\n"
".quad 0x736261090a3b3831,0x722509203233732e,0x31357225202c3235,0x732e766f6d090a3b\n"
".quad 0x3335722509203233,0x73090a3b3031202c,0x33752e74672e7465,0x2509203233732e32\n"
".quad 0x357225202c343572,0x3b33357225202c32,0x33732e67656e090a,0x2c35357225092032\n"
".quad 0x090a3b3435722520,0x203233732e627573,0x25202c3635722509,0x317225202c343472\n"
".quad 0x2e736261090a3b39,0x3572250920323373,0x3b36357225202c37,0x33732e766f6d090a\n"
".quad 0x2c38357225092032,0x6573090a3b303120,0x3233752e74672e74,0x722509203233732e\n"
".quad 0x37357225202c3935,0x0a3b38357225202c,0x3233732e67656e09,0x202c303672250920\n"
".quad 0x6f090a3b39357225,0x2509203233622e72,0x357225202c313672,0x3b30367225202c35\n"
".quad 0x3233622e726f090a,0x202c323672250920,0x7225202c30357225,0x646461090a3b3136\n"
".quad 0x722509203233732e,0x31347225202c3134,0x0a3b32367225202c,0x34345f345f744c24\n"
".quad 0x6f6d090a3a363435,0x2509203233752e76,0x0a3b30202c333672,0x656c2e7074657309\n"
".quad 0x702509203233732e,0x202c367225202c34,0x40090a3b33367225,0x2061726220347025\n"
".quad 0x345f345f744c2409,0x2e090a3b38353035,0x3109373109636f6c,0x646c090a30093530\n"
".quad 0x732e6d617261702e,0x2c38722509203233,0x616475635f5f5b20,0x315a5f5f6d726170\n"
".quad 0x626c65646e614d36,0x316d735f31746f72,0x7536507645664930,0x6969693472616863\n"
".quad 0x5f32535f32535f54,0x30535f32535f3253,0x616d695f6269695f,0x2e090a3b5d576567\n"
".quad 0x3109373109636f6c,0x7573090a30093232,0x2509203233732e62,0x317225202c343672\n"
".quad 0x0a3b387225202c36,0x2e6f6c2e6c756d09,0x3672250920323375,0x2c34367225202c35\n"
".quad 0x747663090a3b3420,0x3233752e3436752e,0x202c346472250920,0x2e090a3b35367225\n"
".quad 0x3109373109636f6c,0x646c090a30093331,0x752e6d617261702e,0x3164722509203436\n"
".quad 0x6475635f5f5b202c,0x5a5f5f6d72617061,0x6c65646e614d3631,0x6d735f31746f7262\n"
".quad 0x3650764566493031,0x6969347261686375,0x32535f32535f5469,0x535f32535f32535f\n"
".quad 0x73645f6269695f30,0x6f6c2e090a3b5d74,0x3232310937310963,0x2e646461090a3009\n"
".quad 0x6472250920343675,0x2c34647225202c35,0x090a3b3164722520,0x61626f6c672e646c\n"
".quad 0x2038752e34762e6c,0x252c363672257b09,0x383672252c373672,0x72255b202c7d5f2c\n"
".quad 0x090a3b5d302b3564,0x203233732e627573,0x25202c3936722509,0x327225202c383672\n"
".quad 0x2e736261090a3b30,0x3772250920323373,0x3b39367225202c30,0x33732e766f6d090a\n"
".quad 0x2c31377225092032,0x6573090a3b303120,0x3233752e74672e74,0x722509203233732e\n"
".quad 0x30377225202c3237,0x0a3b31377225202c,0x3233732e67656e09,0x202c333772250920\n"
".quad 0x73090a3b32377225,0x09203233732e6275,0x7225202c34377225,0x38317225202c3636\n"
".quad 0x732e736261090a3b,0x3537722509203233,0x0a3b34377225202c,0x3233732e766f6d09\n"
".quad 0x202c363772250920,0x746573090a3b3031,0x2e3233752e74672e,0x3772250920323373\n"
".quad 0x2c35377225202c37,0x090a3b3637722520,0x203233732e67656e,0x25202c3837722509\n"
".quad 0x7573090a3b373772,0x2509203233732e62,0x367225202c393772,0x3b39317225202c37\n"
".quad 0x33732e736261090a,0x2c30387225092032,0x090a3b3937722520,0x203233732e766f6d\n"
".quad 0x31202c3138722509,0x2e746573090a3b30,0x732e3233752e7467,0x3238722509203233\n"
".quad 0x202c30387225202c,0x6e090a3b31387225,0x09203233732e6765,0x7225202c33387225\n"
".quad 0x2e726f090a3b3238,0x3872250920323362,0x2c38377225202c34,0x090a3b3338722520\n"
".quad 0x09203233622e726f,0x7225202c35387225,0x34387225202c3337,0x732e646461090a3b\n"
".quad 0x3134722509203233,0x202c31347225202c,0x4c240a3b35387225,0x353035345f345f74\n"
".quad 0x2e646461090a3a38,0x3872250920323373,0x202c367225202c36,0x636f6c2e090a3b31\n"
".quad 0x0935303109373109,0x61702e646c090a30,0x203233732e6d6172,0x5f5b202c37722509\n"
".quad 0x726170616475635f,0x614d36315a5f5f6d,0x746f72626c65646e,0x664930316d735f31\n"
".quad 0x6168637536507645,0x535f546969693472,0x5f32535f32535f32,0x69695f30535f3253\n"
".quad 0x486567616d695f62,0x636f6c2e090a3b5d,0x0932323109373109,0x2e70746573090a30\n"
".quad 0x09203233732e656c,0x377225202c357025,0x0a3b36387225202c,0x7262203570254009\n"
".quad 0x345f744c24092061,0x0a3b30373535345f,0x373109636f6c2e09,0x090a300935303109\n"
".quad 0x6d617261702e646c,0x722509203233732e,0x75635f5f5b202c38,0x5f5f6d7261706164\n"
".quad 0x65646e614d36315a,0x735f31746f72626c,0x507645664930316d,0x6934726168637536\n"
".quad 0x535f32535f546969,0x5f32535f32535f32,0x695f6269695f3053,0x0a3b5d576567616d\n"
".quad 0x373109636f6c2e09,0x090a300934323109,0x203233732e646461,0x25202c3738722509\n"
".quad 0x387225202c363172,0x6c2e6c756d090a3b,0x2509203233752e6f,0x387225202c383872\n"
".quad 0x63090a3b34202c37,0x752e3436752e7476,0x3664722509203233,0x0a3b38387225202c\n"
".quad 0x373109636f6c2e09,0x090a300933313109,0x6d617261702e646c,0x722509203436752e\n"
".quad 0x635f5f5b202c3164,0x5f6d726170616475,0x646e614d36315a5f,0x5f31746f72626c65\n"
".quad 0x7645664930316d73,0x3472616863753650,0x5f32535f54696969,0x32535f32535f3253\n"
".quad 0x5f6269695f30535f,0x2e090a3b5d747364,0x3109373109636f6c,0x6461090a30093432\n"
".quad 0x2509203436752e64,0x647225202c376472,0x3b31647225202c36,0x6f6c672e646c090a\n"
".quad 0x752e34762e6c6162,0x393872257b092038,0x72252c303972252c,0x5b202c7d5f2c3139\n"
".quad 0x3b5d302b37647225,0x33732e627573090a,0x2c32397225092032,0x25202c3139722520\n"
".quad 0x6261090a3b303272,0x2509203233732e73,0x397225202c333972,0x2e766f6d090a3b32\n"
".quad 0x3972250920323373,0x090a3b3031202c34,0x752e74672e746573,0x09203233732e3233\n"
".quad 0x7225202c35397225,0x34397225202c3339,0x732e67656e090a3b,0x3639722509203233\n"
".quad 0x0a3b35397225202c,0x3233732e62757309,0x202c373972250920,0x7225202c39387225\n"
".quad 0x736261090a3b3831,0x722509203233732e,0x37397225202c3839,0x732e766f6d090a3b\n"
".quad 0x3939722509203233,0x73090a3b3031202c,0x33752e74672e7465,0x2509203233732e32\n"
".quad 0x7225202c30303172,0x39397225202c3839,0x732e67656e090a3b,0x3031722509203233\n"
".quad 0x3030317225202c31,0x732e627573090a3b,0x3031722509203233,0x2c30397225202c32\n"
".quad 0x090a3b3931722520,0x203233732e736261,0x202c333031722509,0x090a3b3230317225\n"
".quad 0x203233732e766f6d,0x202c343031722509,0x746573090a3b3031,0x2e3233752e74672e\n"
".quad 0x3172250920323373,0x30317225202c3530,0x3430317225202c33,0x732e67656e090a3b\n"
".quad 0x3031722509203233,0x3530317225202c36,0x33622e726f090a3b,0x3730317225092032\n"
".quad 0x2c3130317225202c,0x0a3b363031722520,0x203233622e726f09,0x202c383031722509\n"
".quad 0x7225202c36397225,0x6461090a3b373031,0x2509203233732e64,0x347225202c313472\n"
".quad 0x3830317225202c31,0x5f345f744c240a3b,0x090a3a3037353534,0x203233752e766f6d\n"
".quad 0x202c393031722509,0x70746573090a3b30,0x203233732e71652e,0x7225202c36702509\n"
".quad 0x30317225202c3134,0x36702540090a3b39,0x4c24092061726220,0x383036345f345f74\n"
".quad 0x636f6c2e090a3b32,0x0931333109363109,0x61702e646c090a30,0x203233732e6d6172\n"
".quad 0x202c303131722509,0x70616475635f5f5b,0x36315a5f5f6d7261,0x72626c65646e614d\n"
".quad 0x30316d735f31746f,0x6375365076456649,0x5469696934726168,0x535f32535f32535f\n"
".quad 0x5f30535f32535f32,0x6e7572635f626969,0x6f6d090a3b5d6863,0x2509203233732e76\n"
".quad 0x7225202c31313172,0x7663090a3b303131,0x3233662e6e722e74,0x662509203233732e\n"
".quad 0x0a3b347225202c31,0x2e6e722e74766309,0x203233732e323366,0x7225202c32662509\n"
".quad 0x702e646c090a3b36,0x3233662e6d617261,0x5b202c3366250920,0x6170616475635f5f\n"
".quad 0x4d36315a5f5f6d72,0x6f72626c65646e61,0x4930316d735f3174,0x6863753650764566\n"
".quad 0x5f54696969347261,0x32535f32535f3253,0x695f30535f32535f,0x656c6163735f6269\n"
".quad 0x702e646c090a3b5d,0x3233662e6d617261,0x5b202c3466250920,0x6170616475635f5f\n"
".quad 0x4d36315a5f5f6d72,0x6f72626c65646e61,0x4930316d735f3174,0x6863753650764566\n"
".quad 0x5f54696969347261,0x32535f32535f3253,0x695f30535f32535f,0x5d66664f785f6269\n"
".quad 0x662e64616d090a3b,0x2c35662509203233,0x6625202c31662520,0x0a3b346625202c33\n"
".quad 0x617261702e646c09,0x2509203233662e6d,0x635f5f5b202c3666,0x5f6d726170616475\n"
".quad 0x646e614d36315a5f,0x5f31746f72626c65,0x7645664930316d73,0x3472616863753650\n"
".quad 0x5f32535f54696969,0x32535f32535f3253,0x5f6269695f30535f,0x090a3b5d66664f79\n"
".quad 0x203233662e64616d,0x6625202c37662509,0x202c336625202c32,0x646c090a3b366625\n"
".quad 0x732e6d617261702e,0x3231317225092038,0x6475635f5f5b202c,0x5a5f5f6d72617061\n"
".quad 0x6c65646e614d3631,0x6d735f31746f7262,0x3650764566493031,0x6969347261686375\n"
".quad 0x32535f32535f5469,0x535f32535f32535f,0x73695f6269695f30,0x766f6d090a3b5d4a\n"
".quad 0x722509203233752e,0x0a3b30202c333131,0x71652e7074657309,0x702509203233732e\n"
".quad 0x3231317225202c37,0x3b3331317225202c,0x622037702540090a,0x5f744c2409206172\n"
".quad 0x3b30353836345f34,0x3109636f6c2e090a,0x0a30093633310936,0x617261702e646c09\n"
".quad 0x2509203233662e6d,0x635f5f5b202c3866,0x5f6d726170616475,0x646e614d36315a5f\n"
".quad 0x5f31746f72626c65,0x7645664930316d73,0x3472616863753650,0x5f32535f54696969\n"
".quad 0x32535f32535f3253,0x5f6269695f30535f,0x2e090a3b5d504a78,0x3109363109636f6c\n"
".quad 0x646c090a30093733,0x662e6d617261702e,0x2c39662509203233,0x616475635f5f5b20\n"
".quad 0x315a5f5f6d726170,0x626c65646e614d36,0x316d735f31746f72,0x7536507645664930\n"
".quad 0x6969693472616863,0x5f32535f32535f54,0x30535f32535f3253,0x504a795f6269695f\n"
".quad 0x636f6c2e090a3b5d,0x0938333109363109,0x662e766f6d090a30,0x3031662509203233\n"
".quad 0x090a3b376625202c,0x09363109636f6c2e,0x6d090a3009393331,0x09203233662e766f\n"
".quad 0x6625202c31316625,0x636f6c2e090a3b35,0x0930343109363109,0x662e6c756d090a30\n"
".quad 0x3231662509203233,0x25202c376625202c,0x6f6c2e090a3b3766,0x3134310936310963\n"
".quad 0x2e6c756d090a3009,0x3166250920323366,0x202c356625202c33,0x7262090a3b356625\n"
".quad 0x240920696e752e61,0x3536345f345f744c,0x5f744c240a3b3439,0x3a30353836345f34\n"
".quad 0x3109636f6c2e090a,0x0a30093534310936,0x3233662e766f6d09,0x25202c3866250920\n"
".quad 0x6f6c2e090a3b3566,0x3634310936310963,0x2e766f6d090a3009,0x3966250920323366\n"
".quad 0x090a3b376625202c,0x09363109636f6c2e,0x6d090a3009303531,0x09203233662e766f\n"
".quad 0x6630202c33316625,0x3030303030303030,0x2f2f09202020203b,0x2e766f6d090a3020\n"
".quad 0x3166250920323366,0x3030306630202c32,0x20203b3030303030,0x0a30202f2f092020\n"
".quad 0x3233662e766f6d09,0x202c313166250920,0x3030303030306630,0x09202020203b3030\n"
".quad 0x6f6d090a30202f2f,0x2509203233662e76,0x306630202c303166,0x3b30303030303030\n"
".quad 0x202f2f0920202020,0x5f345f744c240a30,0x090a3a3439353634,0x203233732e766f6d\n"
".quad 0x202c343131722509,0x636f6c2e090a3b30,0x0931333109363109,0x61702e646c090a30\n"
".quad 0x203233732e6d6172,0x202c303131722509,0x70616475635f5f5b,0x36315a5f5f6d7261\n"
".quad 0x72626c65646e614d,0x30316d735f31746f,0x6375365076456649,0x5469696934726168\n"
".quad 0x535f32535f32535f,0x5f30535f32535f32,0x6e7572635f626969,0x6c2e090a3b5d6863\n"
".quad 0x353109363109636f,0x746573090a300930,0x3233732e656c2e70,0x25202c3870250920\n"
".quad 0x7225202c30313172,0x744c240a3b343131,0x34393337325f345f,0x6f6c3c2f2f200a3a\n"
".quad 0x706f6f4c203e706f,0x696c2079646f6220,0x090a35353120656e,0x09363109636f6c2e\n"
".quad 0x40090a3009353531,0x2061726220387025,0x33335f345f4c2409,0x2f2f200a3b383335\n"
".quad 0x50203e706f6f6c3c,0x6c20666f20747261,0x79646f6220706f6f,0x353120656e696c20\n"
".quad 0x2064616568202c35,0x2064656c6562616c,0x37325f345f744c24,0x646461090a343933\n"
".quad 0x662509203233662e,0x33316625202c3431,0x0a3b32316625202c,0x3233662e766f6d09\n"
".quad 0x202c353166250920,0x3030303830346630,0x09202020203b3030,0x6573090a34202f2f\n"
".quad 0x33662e74672e7074,0x202c397025092032,0x6625202c34316625,0x252140090a3b3531\n"
".quad 0x0920617262203970,0x3233335f345f4c24,0x345f4c240a3b3238,0x0a3a38333533335f\n"
".quad 0x363109636f6c2e09,0x090a300936353109,0x203233732e766f6d,0x202c353131722509\n"
".quad 0x090a3b3131317225,0x20696e752e617262,0x646e6557444c2409,0x614334315a5f5f69\n"
".quad 0x6c65646e614d636c,0x69456649746f7262,0x5f30535f30535f54,0x31325f62695f3053\n"
".quad 0x5f4c240a3b315f31,0x3a32383233335f34,0x6f6f6c3c2f2f200a,0x2074726150203e70\n"
".quad 0x20706f6f6c20666f,0x6e696c2079646f62,0x68202c3535312065,0x6562616c20646165\n"
".quad 0x5f744c242064656c,0x0a34393337325f34,0x363109636f6c2e09,0x090a300937353109\n"
".quad 0x203233662e6c756d,0x25202c3631662509,0x316625202c313166,0x2e646461090a3b30\n"
".quad 0x3166250920323366,0x2c36316625202c37,0x090a3b3631662520,0x203233662e646461\n"
".quad 0x25202c3031662509,0x37316625202c3966,0x09636f6c2e090a3b,0x3009383531093631\n"
".quad 0x33662e627573090a,0x2c38316625092032,0x25202c3331662520,0x6461090a3b323166\n"
".quad 0x2509203233662e64,0x386625202c313166,0x0a3b38316625202c,0x363109636f6c2e09\n"
".quad 0x090a300939353109,0x203233662e6c756d,0x25202c3931662509,0x316625202c303166\n"
".quad 0x636f6c2e090a3b30,0x0937353109363109,0x732e627573090a30,0x3131722509203233\n"
".quad 0x3131317225202c36,0x6f6d090a3b31202c,0x2509203233752e76,0x3b30202c37313172\n"
".quad 0x6c2e70746573090a,0x2509203233732e65,0x317225202c303170,0x31317225202c3631\n"
".quad 0x31702540090a3b37,0x2409206172622030,0x353034335f345f4c,0x6c3c2f2f200a3b30\n"
".quad 0x726150203e706f6f,0x6f6f6c20666f2074,0x6c2079646f622070,0x2c35353120656e69\n"
".quad 0x616c206461656820,0x4c242064656c6562,0x393337325f345f74,0x662e6c756d090a34\n"
".quad 0x3032662509203233,0x202c31316625202c,0x61090a3b31316625,0x09203233662e6464\n"
".quad 0x6625202c31326625,0x39316625202c3032,0x662e766f6d090a3b,0x3232662509203233\n"
".quad 0x303830346630202c,0x2020203b30303030,0x090a34202f2f0920,0x2e74672e70746573\n"
".quad 0x3170250920323366,0x2c31326625202c31,0x090a3b3232662520,0x6220313170252140\n"
".quad 0x345f4c2409206172,0x0a3b34393733335f,0x3034335f345f4c24,0x6f6c2e090a3a3035\n"
".quad 0x3536310936310963,0x2e766f6d090a3009,0x3172250920323373,0x31317225202c3531\n"
".quad 0x2e617262090a3b36,0x444c240920696e75,0x5a5f5f69646e6557,0x614d636c61433431\n"
".quad 0x746f72626c65646e,0x30535f5469456649,0x695f30535f30535f,0x3b315f3131325f62\n"
".quad 0x33335f345f4c240a,0x2f2f200a3a343937,0x50203e706f6f6c3c,0x6c20666f20747261\n"
".quad 0x79646f6220706f6f,0x353120656e696c20,0x2064616568202c35,0x2064656c6562616c\n"
".quad 0x37325f345f744c24,0x6f6c2e090a343933,0x3636310936310963,0x2e6c756d090a3009\n"
".quad 0x3166250920323366,0x2c31316625202c36,0x090a3b3031662520,0x203233662e646461\n"
".quad 0x25202c3332662509,0x316625202c363166,0x2e646461090a3b36,0x3166250920323366\n"
".quad 0x202c396625202c30,0x2e090a3b33326625,0x3109363109636f6c,0x7573090a30093736\n"
".quad 0x2509203233662e62,0x326625202c343266,0x3b39316625202c30,0x33662e646461090a\n"
".quad 0x2c31316625092032,0x6625202c38662520,0x6f6c2e090a3b3432,0x3836310936310963\n"
".quad 0x2e6c756d090a3009,0x3266250920323366,0x2c30316625202c35,0x090a3b3031662520\n"
".quad 0x09363109636f6c2e,0x73090a3009363631,0x09203233732e6275,0x25202c3831317225\n"
".quad 0x3b32202c31313172,0x33752e766f6d090a,0x3931317225092032,0x6573090a3b30202c\n"
".quad 0x33732e656c2e7074,0x2c32317025092032,0x202c383131722520,0x090a3b3931317225\n"
".quad 0x7262203231702540,0x5f345f4c24092061,0x200a3b3236353433,0x3e706f6f6c3c2f2f\n"
".quad 0x666f207472615020,0x6f6220706f6f6c20,0x20656e696c207964,0x616568202c353531\n"
".quad 0x656c6562616c2064,0x5f345f744c242064,0x6d090a3439333732,0x09203233662e6c75\n"
".quad 0x6625202c30326625,0x31316625202c3131,0x662e646461090a3b,0x3632662509203233\n"
".quad 0x202c30326625202c,0x6d090a3b35326625,0x09203233662e766f,0x6630202c37326625\n"
".quad 0x3030303030383034,0x2f2f09202020203b,0x70746573090a3420,0x203233662e74672e\n"
".quad 0x25202c3331702509,0x326625202c363266,0x70252140090a3b37,0x0920617262203331\n"
".quad 0x3334335f345f4c24,0x345f4c240a3b3630,0x0a3a32363534335f,0x363109636f6c2e09\n"
".quad 0x090a300934373109,0x203233732e766f6d,0x202c353131722509,0x090a3b3831317225\n"
".quad 0x20696e752e617262,0x646e6557444c2409,0x614334315a5f5f69,0x6c65646e614d636c\n"
".quad 0x69456649746f7262,0x5f30535f30535f54,0x31325f62695f3053,0x5f4c240a3b315f31\n"
".quad 0x3a36303334335f34,0x6f6f6c3c2f2f200a,0x2074726150203e70,0x20706f6f6c20666f\n"
".quad 0x6e696c2079646f62,0x68202c3535312065,0x6562616c20646165,0x5f744c242064656c\n"
".quad 0x0a34393337325f34,0x363109636f6c2e09,0x090a300935373109,0x203233662e6c756d\n"
".quad 0x25202c3631662509,0x316625202c313166,0x2e646461090a3b30,0x3266250920323366\n"
".quad 0x2c36316625202c38,0x090a3b3631662520,0x203233662e646461,0x25202c3031662509\n"
".quad 0x38326625202c3966,0x09636f6c2e090a3b,0x3009363731093631,0x33662e627573090a\n"
".quad 0x2c39326625092032,0x25202c3032662520,0x6461090a3b353266,0x2509203233662e64\n"
".quad 0x386625202c313166,0x0a3b39326625202c,0x363109636f6c2e09,0x090a300937373109\n"
".quad 0x203233662e6c756d,0x25202c3033662509,0x316625202c303166,0x636f6c2e090a3b30\n"
".quad 0x0935373109363109,0x732e627573090a30,0x3231722509203233,0x3131317225202c30\n"
".quad 0x6f6d090a3b33202c,0x2509203233752e76,0x3b30202c31323172,0x6c2e70746573090a\n"
".quad 0x2509203233732e65,0x317225202c343170,0x32317225202c3032,0x31702540090a3b31\n"
".quad 0x2409206172622034,0x373035335f345f4c,0x6c3c2f2f200a3b34,0x726150203e706f6f\n"
".quad 0x6f6f6c20666f2074,0x6c2079646f622070,0x2c35353120656e69,0x616c206461656820\n"
".quad 0x4c242064656c6562,0x393337325f345f74,0x662e6c756d090a34,0x3032662509203233\n"
".quad 0x202c31316625202c,0x61090a3b31316625,0x09203233662e6464,0x6625202c31336625\n"
".quad 0x30336625202c3032,0x662e766f6d090a3b,0x3233662509203233,0x303830346630202c\n"
".quad 0x2020203b30303030,0x090a34202f2f0920,0x2e74672e70746573,0x3170250920323366\n"
".quad 0x2c31336625202c35,0x090a3b3233662520,0x6220353170252140,0x345f4c2409206172\n"
".quad 0x0a3b38313834335f,0x3035335f345f4c24,0x6f6c2e090a3a3437,0x3338310936310963\n"
".quad 0x2e766f6d090a3009,0x3172250920323373,0x32317225202c3531,0x2e617262090a3b30\n"
".quad 0x444c240920696e75,0x5a5f5f69646e6557,0x614d636c61433431,0x746f72626c65646e\n"
".quad 0x30535f5469456649,0x695f30535f30535f,0x3b315f3131325f62,0x34335f345f4c240a\n"
".quad 0x2f2f200a3a383138,0x50203e706f6f6c3c,0x6c20666f20747261,0x79646f6220706f6f\n"
".quad 0x353120656e696c20,0x2064616568202c35,0x2064656c6562616c,0x37325f345f744c24\n"
".quad 0x6f6c2e090a343933,0x3438310936310963,0x2e6c756d090a3009,0x3166250920323366\n"
".quad 0x2c31316625202c36,0x090a3b3031662520,0x203233662e646461,0x25202c3333662509\n"
".quad 0x316625202c363166,0x2e646461090a3b36,0x3166250920323366,0x202c396625202c30\n"
".quad 0x2e090a3b33336625,0x3109363109636f6c,0x7573090a30093538,0x2509203233662e62\n"
".quad 0x326625202c343366,0x3b30336625202c30,0x33662e646461090a,0x2c31316625092032\n"
".quad 0x6625202c38662520,0x6f6c2e090a3b3433,0x3638310936310963,0x2e6c756d090a3009\n"
".quad 0x3366250920323366,0x2c30316625202c35,0x090a3b3031662520,0x09363109636f6c2e\n"
".quad 0x73090a3009343831,0x09203233732e6275,0x25202c3232317225,0x3b34202c31313172\n"
".quad 0x33752e766f6d090a,0x3332317225092032,0x6573090a3b30202c,0x33732e656c2e7074\n"
".quad 0x2c36317025092032,0x202c323231722520,0x090a3b3332317225,0x7262203631702540\n"
".quad 0x5f345f4c24092061,0x200a3b3638353533,0x3e706f6f6c3c2f2f,0x666f207472615020\n"
".quad 0x6f6220706f6f6c20,0x20656e696c207964,0x616568202c353531,0x656c6562616c2064\n"
".quad 0x5f345f744c242064,0x6d090a3439333732,0x09203233662e6c75,0x6625202c30326625\n"
".quad 0x31316625202c3131,0x662e646461090a3b,0x3633662509203233,0x202c30326625202c\n"
".quad 0x6d090a3b35336625,0x09203233662e766f,0x6630202c37336625,0x3030303030383034\n"
".quad 0x2f2f09202020203b,0x70746573090a3420,0x203233662e74672e,0x25202c3731702509\n"
".quad 0x336625202c363366,0x70252140090a3b37,0x0920617262203731,0x3335335f345f4c24\n"
".quad 0x345f4c240a3b3033,0x0a3a36383535335f,0x363109636f6c2e09,0x090a300932393109\n"
".quad 0x203233732e766f6d,0x202c353131722509,0x090a3b3232317225,0x20696e752e617262\n"
".quad 0x646e6557444c2409,0x614334315a5f5f69,0x6c65646e614d636c,0x69456649746f7262\n"
".quad 0x5f30535f30535f54,0x31325f62695f3053,0x5f4c240a3b315f31,0x3a30333335335f34\n"
".quad 0x6f6f6c3c2f2f200a,0x2074726150203e70,0x20706f6f6c20666f,0x6e696c2079646f62\n"
".quad 0x68202c3535312065,0x6562616c20646165,0x5f744c242064656c,0x0a34393337325f34\n"
".quad 0x363109636f6c2e09,0x090a300933393109,0x203233662e6c756d,0x25202c3631662509\n"
".quad 0x316625202c313166,0x2e646461090a3b30,0x3366250920323366,0x2c36316625202c38\n"
".quad 0x090a3b3631662520,0x203233662e646461,0x25202c3031662509,0x38336625202c3966\n"
".quad 0x09636f6c2e090a3b,0x3009343931093631,0x33662e627573090a,0x2c39336625092032\n"
".quad 0x25202c3032662520,0x6461090a3b353366,0x2509203233662e64,0x386625202c313166\n"
".quad 0x0a3b39336625202c,0x363109636f6c2e09,0x090a300935393109,0x203233662e6c756d\n"
".quad 0x25202c3034662509,0x316625202c303166,0x636f6c2e090a3b30,0x0933393109363109\n"
".quad 0x732e627573090a30,0x3231722509203233,0x3131317225202c34,0x6f6d090a3b35202c\n"
".quad 0x2509203233752e76,0x3b30202c35323172,0x6c2e70746573090a,0x2509203233732e65\n"
".quad 0x317225202c383170,0x32317225202c3432,0x31702540090a3b35,0x2409206172622038\n"
".quad 0x393036335f345f4c,0x6c3c2f2f200a3b38,0x726150203e706f6f,0x6f6f6c20666f2074\n"
".quad 0x6c2079646f622070,0x2c35353120656e69,0x616c206461656820,0x4c242064656c6562\n"
".quad 0x393337325f345f74,0x662e6c756d090a34,0x3032662509203233,0x202c31316625202c\n"
".quad 0x61090a3b31316625,0x09203233662e6464,0x6625202c31346625,0x30346625202c3032\n"
".quad 0x662e766f6d090a3b,0x3234662509203233,0x303830346630202c,0x2020203b30303030\n"
".quad 0x090a34202f2f0920,0x2e74672e70746573,0x3170250920323366,0x2c31346625202c39\n"
".quad 0x090a3b3234662520,0x6220393170252140,0x345f4c2409206172,0x0a3b32343835335f\n"
".quad 0x3036335f345f4c24,0x6f6c2e090a3a3839,0x3130320936310963,0x2e766f6d090a3009\n"
".quad 0x3172250920323373,0x32317225202c3531,0x2e617262090a3b34,0x444c240920696e75\n"
".quad 0x5a5f5f69646e6557,0x614d636c61433431,0x746f72626c65646e,0x30535f5469456649\n"
".quad 0x695f30535f30535f,0x3b315f3131325f62,0x35335f345f4c240a,0x2f2f200a3a323438\n"
".quad 0x50203e706f6f6c3c,0x6c20666f20747261,0x79646f6220706f6f,0x353120656e696c20\n"
".quad 0x2064616568202c35,0x2064656c6562616c,0x37325f345f744c24,0x6f6c2e090a343933\n"
".quad 0x3230320936310963,0x2e6c756d090a3009,0x3166250920323366,0x2c31316625202c36\n"
".quad 0x090a3b3031662520,0x203233662e646461,0x25202c3334662509,0x316625202c363166\n"
".quad 0x2e646461090a3b36,0x3166250920323366,0x202c396625202c30,0x2e090a3b33346625\n"
".quad 0x3209363109636f6c,0x7573090a30093330,0x2509203233662e62,0x326625202c343466\n"
".quad 0x3b30346625202c30,0x33662e646461090a,0x2c31316625092032,0x6625202c38662520\n"
".quad 0x6f6c2e090a3b3434,0x3430320936310963,0x2e6c756d090a3009,0x3466250920323366\n"
".quad 0x2c30316625202c35,0x090a3b3031662520,0x09363109636f6c2e,0x73090a3009323032\n"
".quad 0x09203233732e6275,0x25202c3632317225,0x3b36202c31313172,0x33752e766f6d090a\n"
".quad 0x3732317225092032,0x6573090a3b30202c,0x33732e656c2e7074,0x2c30327025092032\n"
".quad 0x202c363231722520,0x090a3b3732317225,0x7262203032702540,0x5f345f4c24092061\n"
".quad 0x200a3b3031363633,0x3e706f6f6c3c2f2f,0x666f207472615020,0x6f6220706f6f6c20\n"
".quad 0x20656e696c207964,0x616568202c353531,0x656c6562616c2064,0x5f345f744c242064\n"
".quad 0x6d090a3439333732,0x09203233662e6c75,0x6625202c30326625,0x31316625202c3131\n"
".quad 0x662e646461090a3b,0x3634662509203233,0x202c30326625202c,0x6d090a3b35346625\n"
".quad 0x09203233662e766f,0x6630202c37346625,0x3030303030383034,0x2f2f09202020203b\n"
".quad 0x70746573090a3420,0x203233662e74672e,0x25202c3132702509,0x346625202c363466\n"
".quad 0x70252140090a3b37,0x0920617262203132,0x3336335f345f4c24,0x345f4c240a3b3435\n"
".quad 0x0a3a30313636335f,0x363109636f6c2e09,0x090a300930313209,0x203233732e766f6d\n"
".quad 0x202c353131722509,0x090a3b3632317225,0x20696e752e617262,0x646e6557444c2409\n"
".quad 0x614334315a5f5f69,0x6c65646e614d636c,0x69456649746f7262,0x5f30535f30535f54\n"
".quad 0x31325f62695f3053,0x5f4c240a3b315f31,0x3a34353336335f34,0x6f6f6c3c2f2f200a\n"
".quad 0x2074726150203e70,0x20706f6f6c20666f,0x6e696c2079646f62,0x68202c3535312065\n"
".quad 0x6562616c20646165,0x5f744c242064656c,0x0a34393337325f34,0x363109636f6c2e09\n"
".quad 0x090a300931313209,0x203233662e6c756d,0x25202c3631662509,0x316625202c313166\n"
".quad 0x2e646461090a3b30,0x3466250920323366,0x2c36316625202c38,0x090a3b3631662520\n"
".quad 0x203233662e646461,0x25202c3031662509,0x38346625202c3966,0x09636f6c2e090a3b\n"
".quad 0x3009323132093631,0x33662e627573090a,0x2c39346625092032,0x25202c3032662520\n"
".quad 0x6461090a3b353466,0x2509203233662e64,0x386625202c313166,0x0a3b39346625202c\n"
".quad 0x363109636f6c2e09,0x090a300933313209,0x203233662e6c756d,0x25202c3035662509\n"
".quad 0x316625202c303166,0x636f6c2e090a3b30,0x0931313209363109,0x732e627573090a30\n"
".quad 0x3231722509203233,0x3131317225202c38,0x6f6d090a3b37202c,0x2509203233752e76\n"
".quad 0x3b30202c39323172,0x6c2e70746573090a,0x2509203233732e65,0x317225202c323270\n"
".quad 0x32317225202c3832,0x32702540090a3b39,0x2409206172622032,0x323137335f345f4c\n"
".quad 0x6c3c2f2f200a3b32,0x726150203e706f6f,0x6f6f6c20666f2074,0x6c2079646f622070\n"
".quad 0x2c35353120656e69,0x616c206461656820,0x4c242064656c6562,0x393337325f345f74\n"
".quad 0x662e6c756d090a34,0x3032662509203233,0x202c31316625202c,0x61090a3b31316625\n"
".quad 0x09203233662e6464,0x6625202c31356625,0x30356625202c3032,0x662e766f6d090a3b\n"
".quad 0x3235662509203233,0x303830346630202c,0x2020203b30303030,0x090a34202f2f0920\n"
".quad 0x2e74672e70746573,0x3270250920323366,0x2c31356625202c33,0x090a3b3235662520\n"
".quad 0x6220333270252140,0x345f4c2409206172,0x0a3b36363836335f,0x3137335f345f4c24\n"
".quad 0x6f6c2e090a3a3232,0x3931320936310963,0x2e766f6d090a3009,0x3172250920323373\n"
".quad 0x32317225202c3531,0x2e617262090a3b38,0x444c240920696e75,0x5a5f5f69646e6557\n"
".quad 0x614d636c61433431,0x746f72626c65646e,0x30535f5469456649,0x695f30535f30535f\n"
".quad 0x3b315f3131325f62,0x36335f345f4c240a,0x2f2f200a3a363638,0x50203e706f6f6c3c\n"
".quad 0x6c20666f20747261,0x79646f6220706f6f,0x353120656e696c20,0x2064616568202c35\n"
".quad 0x2064656c6562616c,0x37325f345f744c24,0x6f6c2e090a343933,0x3032320936310963\n"
".quad 0x2e6c756d090a3009,0x3166250920323366,0x2c31316625202c36,0x090a3b3031662520\n"
".quad 0x203233662e646461,0x25202c3335662509,0x316625202c363166,0x2e646461090a3b36\n"
".quad 0x3166250920323366,0x202c396625202c30,0x2e090a3b33356625,0x3209363109636f6c\n"
".quad 0x7573090a30093132,0x2509203233662e62,0x326625202c343566,0x3b30356625202c30\n"
".quad 0x33662e646461090a,0x2c31316625092032,0x6625202c38662520,0x6f6c2e090a3b3435\n"
".quad 0x3232320936310963,0x2e6c756d090a3009,0x3566250920323366,0x2c30316625202c35\n"
".quad 0x090a3b3031662520,0x09363109636f6c2e,0x73090a3009303232,0x09203233732e6275\n"
".quad 0x25202c3033317225,0x3b38202c31313172,0x33752e766f6d090a,0x3133317225092032\n"
".quad 0x6573090a3b30202c,0x33732e656c2e7074,0x2c34327025092032,0x202c303331722520\n"
".quad 0x090a3b3133317225,0x7262203432702540,0x5f345f4c24092061,0x200a3b3433363733\n"
".quad 0x3e706f6f6c3c2f2f,0x666f207472615020,0x6f6220706f6f6c20,0x20656e696c207964\n"
".quad 0x616568202c353531,0x656c6562616c2064,0x5f345f744c242064,0x6d090a3439333732\n"
".quad 0x09203233662e6c75,0x6625202c30326625,0x31316625202c3131,0x662e646461090a3b\n"
".quad 0x3635662509203233,0x202c30326625202c,0x6d090a3b35356625,0x09203233662e766f\n"
".quad 0x6630202c37356625,0x3030303030383034,0x2f2f09202020203b,0x70746573090a3420\n"
".quad 0x203233662e74672e,0x25202c3532702509,0x356625202c363566,0x70252140090a3b37\n"
".quad 0x0920617262203532,0x3337335f345f4c24,0x345f4c240a3b3837,0x0a3a34333637335f\n"
".quad 0x363109636f6c2e09,0x090a300938323209,0x203233732e766f6d,0x202c353131722509\n"
".quad 0x090a3b3033317225,0x20696e752e617262,0x646e6557444c2409,0x614334315a5f5f69\n"
".quad 0x6c65646e614d636c,0x69456649746f7262,0x5f30535f30535f54,0x31325f62695f3053\n"
".quad 0x5f4c240a3b315f31,0x3a38373337335f34,0x6f6f6c3c2f2f200a,0x2074726150203e70\n"
".quad 0x20706f6f6c20666f,0x6e696c2079646f62,0x68202c3535312065,0x6562616c20646165\n"
".quad 0x5f744c242064656c,0x0a34393337325f34,0x363109636f6c2e09,0x090a300939323209\n"
".quad 0x203233662e6c756d,0x25202c3631662509,0x316625202c313166,0x2e646461090a3b30\n"
".quad 0x3566250920323366,0x2c36316625202c38,0x090a3b3631662520,0x203233662e646461\n"
".quad 0x25202c3031662509,0x38356625202c3966,0x09636f6c2e090a3b,0x3009303332093631\n"
".quad 0x33662e627573090a,0x2c39356625092032,0x25202c3032662520,0x6461090a3b353566\n"
".quad 0x2509203233662e64,0x386625202c313166,0x0a3b39356625202c,0x363109636f6c2e09\n"
".quad 0x090a300931333209,0x203233662e6c756d,0x25202c3036662509,0x316625202c303166\n"
".quad 0x636f6c2e090a3b30,0x0939323209363109,0x732e627573090a30,0x3331722509203233\n"
".quad 0x3131317225202c32,0x6f6d090a3b39202c,0x2509203233752e76,0x3b30202c33333172\n"
".quad 0x6c2e70746573090a,0x2509203233732e65,0x317225202c363270,0x33317225202c3233\n"
".quad 0x32702540090a3b33,0x2409206172622036,0x343138335f345f4c,0x6c3c2f2f200a3b36\n"
".quad 0x726150203e706f6f,0x6f6f6c20666f2074,0x6c2079646f622070,0x2c35353120656e69\n"
".quad 0x616c206461656820,0x4c242064656c6562,0x393337325f345f74,0x662e6c756d090a34\n"
".quad 0x3032662509203233,0x202c31316625202c,0x61090a3b31316625,0x09203233662e6464\n"
".quad 0x6625202c31366625,0x30366625202c3032,0x662e766f6d090a3b,0x3236662509203233\n"
".quad 0x303830346630202c,0x2020203b30303030,0x090a34202f2f0920,0x2e74672e70746573\n"
".quad 0x3270250920323366,0x2c31366625202c37,0x090a3b3236662520,0x6220373270252140\n"
".quad 0x345f4c2409206172,0x0a3b30393837335f,0x3138335f345f4c24,0x6f6c2e090a3a3634\n"
".quad 0x3733320936310963,0x2e766f6d090a3009,0x3172250920323373,0x33317225202c3531\n"
".quad 0x2e617262090a3b32,0x444c240920696e75,0x5a5f5f69646e6557,0x614d636c61433431\n"
".quad 0x746f72626c65646e,0x30535f5469456649,0x695f30535f30535f,0x3b315f3131325f62\n"
".quad 0x37335f345f4c240a,0x2f2f200a3a303938,0x50203e706f6f6c3c,0x6c20666f20747261\n"
".quad 0x79646f6220706f6f,0x353120656e696c20,0x2064616568202c35,0x2064656c6562616c\n"
".quad 0x37325f345f744c24,0x6f6c2e090a343933,0x3833320936310963,0x2e6c756d090a3009\n"
".quad 0x3166250920323366,0x2c31316625202c36,0x090a3b3031662520,0x203233662e646461\n"
".quad 0x25202c3336662509,0x316625202c363166,0x2e646461090a3b36,0x3166250920323366\n"
".quad 0x202c396625202c30,0x2e090a3b33366625,0x3209363109636f6c,0x7573090a30093933\n"
".quad 0x2509203233662e62,0x326625202c343666,0x3b30366625202c30,0x33662e646461090a\n"
".quad 0x2c31316625092032,0x6625202c38662520,0x6f6c2e090a3b3436,0x3034320936310963\n"
".quad 0x2e6c756d090a3009,0x3666250920323366,0x2c30316625202c35,0x090a3b3031662520\n"
".quad 0x09363109636f6c2e,0x73090a3009383332,0x09203233732e6275,0x25202c3433317225\n"
".quad 0x3031202c31313172,0x752e766f6d090a3b,0x3331722509203233,0x73090a3b30202c35\n"
".quad 0x732e656c2e707465,0x3832702509203233,0x2c3433317225202c,0x0a3b353331722520\n"
".quad 0x6220383270254009,0x345f4c2409206172,0x0a3b38353638335f,0x706f6f6c3c2f2f20\n"
".quad 0x6f2074726150203e,0x6220706f6f6c2066,0x656e696c2079646f,0x6568202c35353120\n"
".quad 0x6c6562616c206461,0x345f744c24206465,0x090a34393337325f,0x203233662e6c756d\n"
".quad 0x25202c3032662509,0x316625202c313166,0x2e646461090a3b31,0x3666250920323366\n"
".quad 0x2c30326625202c36,0x090a3b3536662520,0x203233662e766f6d,0x30202c3736662509\n"
".quad 0x3030303038303466,0x2f09202020203b30,0x746573090a34202f,0x3233662e74672e70\n"
".quad 0x202c393270250920,0x6625202c36366625,0x252140090a3b3736,0x2061726220393270\n"
".quad 0x38335f345f4c2409,0x5f4c240a3b323034,0x3a38353638335f34,0x3109636f6c2e090a\n"
".quad 0x0a30093634320936,0x3233732e766f6d09,0x2c35313172250920,0x0a3b343331722520\n"
".quad 0x696e752e61726209,0x6e6557444c240920,0x4334315a5f5f6964,0x65646e614d636c61\n"
".quad 0x456649746f72626c,0x30535f30535f5469,0x325f62695f30535f,0x4c240a3b315f3131\n"
".quad 0x32303438335f345f,0x6f6c3c2f2f200a3a,0x74726150203e706f,0x706f6f6c20666f20\n"
".quad 0x696c2079646f6220,0x202c35353120656e,0x62616c2064616568,0x744c242064656c65\n"
".quad 0x34393337325f345f,0x3109636f6c2e090a,0x0a30093734320936,0x3233662e6c756d09\n"
".quad 0x202c363166250920,0x6625202c31316625,0x646461090a3b3031,0x662509203233662e\n"
".quad 0x36316625202c3836,0x0a3b36316625202c,0x3233662e64646109,0x202c303166250920\n"
".quad 0x366625202c396625,0x636f6c2e090a3b38,0x0938343209363109,0x662e627573090a30\n"
".quad 0x3936662509203233,0x202c30326625202c,0x61090a3b35366625,0x09203233662e6464\n"
".quad 0x6625202c31316625,0x3b39366625202c38,0x3109636f6c2e090a,0x0a30093934320936\n"
".quad 0x3233662e6c756d09,0x202c303766250920,0x6625202c30316625,0x6f6c2e090a3b3031\n"
".quad 0x3734320936310963,0x2e627573090a3009,0x3172250920323373,0x31317225202c3633\n"
".quad 0x090a3b3131202c31,0x203233752e766f6d,0x202c373331722509,0x70746573090a3b30\n"
".quad 0x203233732e656c2e,0x25202c3033702509,0x7225202c36333172,0x2540090a3b373331\n"
".quad 0x2061726220303370,0x39335f345f4c2409,0x2f2f200a3b303731,0x50203e706f6f6c3c\n"
".quad 0x6c20666f20747261,0x79646f6220706f6f,0x353120656e696c20,0x2064616568202c35\n"
".quad 0x2064656c6562616c,0x37325f345f744c24,0x6c756d090a343933,0x662509203233662e\n"
".quad 0x31316625202c3032,0x0a3b31316625202c,0x3233662e64646109,0x202c313766250920\n"
".quad 0x6625202c30326625,0x766f6d090a3b3037,0x662509203233662e,0x30346630202c3237\n"
".quad 0x203b303030303038,0x34202f2f09202020,0x672e70746573090a,0x2509203233662e74\n"
".quad 0x376625202c313370,0x3b32376625202c31,0x313370252140090a,0x4c24092061726220\n"
".quad 0x34313938335f345f,0x335f345f4c240a3b,0x2e090a3a30373139,0x3209363109636f6c\n"
".quad 0x6f6d090a30093535,0x2509203233732e76,0x7225202c35313172,0x7262090a3b363331\n"
".quad 0x240920696e752e61,0x5f69646e6557444c,0x636c614334315a5f,0x72626c65646e614d\n"
".quad 0x5f5469456649746f,0x30535f30535f3053,0x5f3131325f62695f,0x5f345f4c240a3b31\n"
".quad 0x200a3a3431393833,0x3e706f6f6c3c2f2f,0x666f207472615020,0x6f6220706f6f6c20\n"
".quad 0x20656e696c207964,0x616568202c353531,0x656c6562616c2064,0x5f345f744c242064\n"
".quad 0x2e090a3439333732,0x3209363109636f6c,0x756d090a30093635,0x2509203233662e6c\n"
".quad 0x316625202c363166,0x3b30316625202c31,0x33662e646461090a,0x2c33376625092032\n"
".quad 0x25202c3631662520,0x6461090a3b363166,0x2509203233662e64,0x396625202c303166\n"
".quad 0x0a3b33376625202c,0x363109636f6c2e09,0x090a300937353209,0x203233662e627573\n"
".quad 0x25202c3437662509,0x376625202c303266,0x2e646461090a3b30,0x3166250920323366\n"
".quad 0x202c386625202c31,0x2e090a3b34376625,0x3209363109636f6c,0x756d090a30093835\n"
".quad 0x2509203233662e6c,0x316625202c353766,0x3b30316625202c30,0x3109636f6c2e090a\n"
".quad 0x0a30093635320936,0x3233732e62757309,0x2c38333172250920,0x202c313131722520\n"
".quad 0x766f6d090a3b3231,0x722509203233752e,0x0a3b30202c393331,0x656c2e7074657309\n"
".quad 0x702509203233732e,0x33317225202c3233,0x3933317225202c38,0x3233702540090a3b\n"
".quad 0x4c24092061726220,0x32383639335f345f,0x6f6c3c2f2f200a3b,0x74726150203e706f\n"
".quad 0x706f6f6c20666f20,0x696c2079646f6220,0x202c35353120656e,0x62616c2064616568\n"
".quad 0x744c242064656c65,0x34393337325f345f,0x33662e6c756d090a,0x2c30326625092032\n"
".quad 0x25202c3131662520,0x6461090a3b313166,0x2509203233662e64,0x326625202c363766\n"
".quad 0x3b35376625202c30,0x33662e766f6d090a,0x2c37376625092032,0x3030383034663020\n"
".quad 0x202020203b303030,0x73090a34202f2f09,0x662e74672e707465,0x3333702509203233\n"
".quad 0x202c36376625202c,0x40090a3b37376625,0x7262203333702521,0x5f345f4c24092061\n"
".quad 0x240a3b3632343933,0x383639335f345f4c,0x636f6c2e090a3a32,0x0934363209363109\n"
".quad 0x732e766f6d090a30,0x3131722509203233,0x3833317225202c35,0x752e617262090a3b\n"
".quad 0x57444c240920696e,0x315a5f5f69646e65,0x6e614d636c614334,0x49746f72626c6564\n"
".quad 0x5f30535f54694566,0x62695f30535f3053,0x0a3b315f3131325f,0x3439335f345f4c24\n"
".quad 0x3c2f2f200a3a3632,0x6150203e706f6f6c,0x6f6c20666f207472,0x2079646f6220706f\n"
".quad 0x35353120656e696c,0x6c2064616568202c,0x242064656c656261,0x3337325f345f744c\n"
".quad 0x636f6c2e090a3439,0x0935363209363109,0x662e6c756d090a30,0x3631662509203233\n"
".quad 0x202c31316625202c,0x61090a3b30316625,0x09203233662e6464,0x6625202c38376625\n"
".quad 0x36316625202c3631,0x662e646461090a3b,0x3031662509203233,0x25202c396625202c\n"
".quad 0x6c2e090a3b383766,0x363209363109636f,0x627573090a300936,0x662509203233662e\n"
".quad 0x30326625202c3937,0x0a3b35376625202c,0x3233662e64646109,0x202c313166250920\n"
".quad 0x376625202c386625,0x636f6c2e090a3b39,0x0937363209363109,0x662e6c756d090a30\n"
".quad 0x3038662509203233,0x202c30316625202c,0x2e090a3b30316625,0x3209363109636f6c\n"
".quad 0x7573090a30093536,0x2509203233732e62,0x7225202c30343172,0x3b3331202c313131\n"
".quad 0x33752e766f6d090a,0x3134317225092032,0x6573090a3b30202c,0x33732e656c2e7074\n"
".quad 0x2c34337025092032,0x202c303431722520,0x090a3b3134317225,0x7262203433702540\n"
".quad 0x5f345f4c24092061,0x200a3b3439313034,0x3e706f6f6c3c2f2f,0x666f207472615020\n"
".quad 0x6f6220706f6f6c20,0x20656e696c207964,0x616568202c353531,0x656c6562616c2064\n"
".quad 0x5f345f744c242064,0x6d090a3439333732,0x09203233662e6c75,0x6625202c30326625\n"
".quad 0x31316625202c3131,0x662e646461090a3b,0x3138662509203233,0x202c30326625202c\n"
".quad 0x6d090a3b30386625,0x09203233662e766f,0x6630202c32386625,0x3030303030383034\n"
".quad 0x2f2f09202020203b,0x70746573090a3420,0x203233662e74672e,0x25202c3533702509\n"
".quad 0x386625202c313866,0x70252140090a3b32,0x0920617262203533,0x3939335f345f4c24\n"
".quad 0x345f4c240a3b3833,0x0a3a34393130345f,0x363109636f6c2e09,0x090a300933373209\n"
".quad 0x203233732e766f6d,0x202c353131722509,0x090a3b3034317225,0x20696e752e617262\n"
".quad 0x646e6557444c2409,0x614334315a5f5f69,0x6c65646e614d636c,0x69456649746f7262\n"
".quad 0x5f30535f30535f54,0x31325f62695f3053,0x5f4c240a3b315f31,0x3a38333939335f34\n"
".quad 0x6f6f6c3c2f2f200a,0x2074726150203e70,0x20706f6f6c20666f,0x6e696c2079646f62\n"
".quad 0x68202c3535312065,0x6562616c20646165,0x5f744c242064656c,0x0a34393337325f34\n"
".quad 0x363109636f6c2e09,0x090a300934373209,0x203233662e6c756d,0x25202c3631662509\n"
".quad 0x316625202c313166,0x2e646461090a3b30,0x3866250920323366,0x2c36316625202c33\n"
".quad 0x090a3b3631662520,0x203233662e646461,0x25202c3031662509,0x33386625202c3966\n"
".quad 0x09636f6c2e090a3b,0x3009353732093631,0x33662e627573090a,0x2c34386625092032\n"
".quad 0x25202c3032662520,0x6461090a3b303866,0x2509203233662e64,0x386625202c313166\n"
".quad 0x0a3b34386625202c,0x363109636f6c2e09,0x090a300936373209,0x203233662e6c756d\n"
".quad 0x25202c3538662509,0x316625202c303166,0x636f6c2e090a3b30,0x0934373209363109\n"
".quad 0x732e627573090a30,0x3431722509203233,0x3131317225202c32,0x6d090a3b3431202c\n"
".quad 0x09203233752e766f,0x30202c3334317225,0x2e70746573090a3b,0x09203233732e656c\n"
".quad 0x7225202c36337025,0x317225202c323431,0x702540090a3b3334,0x0920617262203633\n"
".quad 0x3730345f345f4c24,0x3c2f2f200a3b3630,0x6150203e706f6f6c,0x6f6c20666f207472\n"
".quad 0x2079646f6220706f,0x35353120656e696c,0x6c2064616568202c,0x242064656c656261\n"
".quad 0x3337325f345f744c,0x2e6c756d090a3439,0x3266250920323366,0x2c31316625202c30\n"
".quad 0x090a3b3131662520,0x203233662e646461,0x25202c3638662509,0x386625202c303266\n"
".quad 0x2e766f6d090a3b35,0x3866250920323366,0x3830346630202c37,0x20203b3030303030\n"
".quad 0x0a34202f2f092020,0x74672e7074657309,0x702509203233662e,0x36386625202c3733\n"
".quad 0x0a3b37386625202c,0x2037337025214009,0x5f4c240920617262,0x3b30353430345f34\n"
".quad 0x30345f345f4c240a,0x6c2e090a3a363037,0x383209363109636f,0x766f6d090a300932\n"
".quad 0x722509203233732e,0x317225202c353131,0x617262090a3b3234,0x4c240920696e752e\n"
".quad 0x5f5f69646e655744,0x4d636c614334315a,0x6f72626c65646e61,0x535f546945664974\n"
".quad 0x5f30535f30535f30,0x315f3131325f6269,0x345f345f4c240a3b,0x2f200a3a30353430\n"
".quad 0x203e706f6f6c3c2f,0x20666f2074726150,0x646f6220706f6f6c,0x3120656e696c2079\n"
".quad 0x64616568202c3535,0x64656c6562616c20,0x325f345f744c2420,0x6c2e090a34393337\n"
".quad 0x383209363109636f,0x6c756d090a300933,0x662509203233662e,0x31316625202c3631\n"
".quad 0x0a3b30316625202c,0x3233662e64646109,0x202c383866250920,0x6625202c36316625\n"
".quad 0x646461090a3b3631,0x662509203233662e,0x2c396625202c3031,0x090a3b3838662520\n"
".quad 0x09363109636f6c2e,0x73090a3009343832,0x09203233662e6275,0x6625202c39386625\n"
".quad 0x35386625202c3032,0x662e646461090a3b,0x3131662509203233,0x25202c386625202c\n"
".quad 0x6c2e090a3b393866,0x383209363109636f,0x6c756d090a300935,0x662509203233662e\n"
".quad 0x30316625202c3039,0x0a3b30316625202c,0x363109636f6c2e09,0x090a300933383209\n"
".quad 0x203233732e627573,0x202c343431722509,0x31202c3131317225,0x2e766f6d090a3b35\n"
".quad 0x3172250920323375,0x090a3b30202c3534,0x2e656c2e70746573,0x3370250920323373\n"
".quad 0x3434317225202c38,0x3b3534317225202c,0x203833702540090a,0x5f4c240920617262\n"
".quad 0x3b38313231345f34,0x6f6f6c3c2f2f200a,0x2074726150203e70,0x20706f6f6c20666f\n"
".quad 0x6e696c2079646f62,0x68202c3535312065,0x6562616c20646165,0x5f744c242064656c\n"
".quad 0x0a34393337325f34,0x3233662e6c756d09,0x202c303266250920,0x6625202c31316625\n"
".quad 0x646461090a3b3131,0x662509203233662e,0x30326625202c3139,0x0a3b30396625202c\n"
".quad 0x3233662e766f6d09,0x202c323966250920,0x3030303830346630,0x09202020203b3030\n"
".quad 0x6573090a34202f2f,0x33662e74672e7074,0x2c39337025092032,0x25202c3139662520\n"
".quad 0x2140090a3b323966,0x6172622039337025,0x345f345f4c240920,0x4c240a3b32363930\n"
".quad 0x38313231345f345f,0x09636f6c2e090a3a,0x3009313932093631,0x33732e766f6d090a\n"
".quad 0x3531317225092032,0x3b3434317225202c,0x6e752e617262090a,0x6557444c24092069\n"
".quad 0x34315a5f5f69646e,0x646e614d636c6143,0x6649746f72626c65,0x535f30535f546945\n"
".quad 0x5f62695f30535f30,0x240a3b315f313132,0x363930345f345f4c,0x6c3c2f2f200a3a32\n"
".quad 0x726150203e706f6f,0x6f6f6c20666f2074,0x6c2079646f622070,0x2c35353120656e69\n"
".quad 0x616c206461656820,0x4c242064656c6562,0x393337325f345f74,0x09636f6c2e090a34\n"
".quad 0x3009323932093631,0x33662e6c756d090a,0x2c36316625092032,0x25202c3131662520\n"
".quad 0x6461090a3b303166,0x2509203233662e64,0x316625202c333966,0x3b36316625202c36\n"
".quad 0x33662e646461090a,0x2c30316625092032,0x6625202c39662520,0x6f6c2e090a3b3339\n"
".quad 0x3339320936310963,0x2e627573090a3009,0x3966250920323366,0x2c30326625202c34\n"
".quad 0x090a3b3039662520,0x203233662e646461,0x25202c3131662509,0x34396625202c3866\n"
".quad 0x09636f6c2e090a3b,0x3009343932093631,0x33662e6c756d090a,0x2c35396625092032\n"
".quad 0x25202c3031662520,0x6c2e090a3b303166,0x393209363109636f,0x627573090a300932\n"
".quad 0x722509203233732e,0x317225202c363431,0x0a3b3631202c3131,0x3233752e766f6d09\n"
".quad 0x2c37343172250920,0x746573090a3b3020,0x3233732e656c2e70,0x202c303470250920\n"
".quad 0x25202c3634317225,0x40090a3b37343172,0x6172622030347025,0x345f345f4c240920\n"
".quad 0x2f200a3b30333731,0x203e706f6f6c3c2f,0x20666f2074726150,0x646f6220706f6f6c\n"
".quad 0x3120656e696c2079,0x64616568202c3535,0x64656c6562616c20,0x325f345f744c2420\n"
".quad 0x756d090a34393337,0x2509203233662e6c,0x316625202c303266,0x3b31316625202c31\n"
".quad 0x33662e646461090a,0x2c36396625092032,0x25202c3032662520,0x6f6d090a3b353966\n"
".quad 0x2509203233662e76,0x346630202c373966,0x3b30303030303830,0x202f2f0920202020\n"
".quad 0x2e70746573090a34,0x09203233662e7467,0x6625202c31347025,0x37396625202c3639\n"
".quad 0x3470252140090a3b,0x2409206172622031,0x373431345f345f4c,0x5f345f4c240a3b34\n"
".quad 0x090a3a3033373134,0x09363109636f6c2e,0x6d090a3009303033,0x09203233732e766f\n"
".quad 0x25202c3531317225,0x62090a3b36343172,0x0920696e752e6172,0x69646e6557444c24\n"
".quad 0x6c614334315a5f5f,0x626c65646e614d63,0x5469456649746f72,0x535f30535f30535f\n"
".quad 0x3131325f62695f30,0x345f4c240a3b315f,0x0a3a34373431345f,0x706f6f6c3c2f2f20\n"
".quad 0x6f2074726150203e,0x6220706f6f6c2066,0x656e696c2079646f,0x6568202c35353120\n"
".quad 0x6c6562616c206461,0x345f744c24206465,0x090a34393337325f,0x09363109636f6c2e\n"
".quad 0x6d090a3009313033,0x09203233662e6c75,0x6625202c36316625,0x30316625202c3131\n"
".quad 0x662e646461090a3b,0x3839662509203233,0x202c36316625202c,0x61090a3b36316625\n"
".quad 0x09203233662e6464,0x6625202c30316625,0x3b38396625202c39,0x3109636f6c2e090a\n"
".quad 0x0a30093230330936,0x3233662e62757309,0x202c393966250920,0x6625202c30326625\n"
".quad 0x646461090a3b3539,0x662509203233662e,0x2c386625202c3131,0x090a3b3939662520\n"
".quad 0x09363109636f6c2e,0x6d090a3009333033,0x09203233662e6c75,0x25202c3030316625\n"
".quad 0x316625202c303166,0x636f6c2e090a3b30,0x0931303309363109,0x732e627573090a30\n"
".quad 0x3431722509203233,0x3131317225202c38,0x6d090a3b3731202c,0x09203233752e766f\n"
".quad 0x30202c3934317225,0x2e70746573090a3b,0x09203233732e656c,0x7225202c32347025\n"
".quad 0x317225202c383431,0x702540090a3b3934,0x0920617262203234,0x3232345f345f4c24\n"
".quad 0x3c2f2f200a3b3234,0x6150203e706f6f6c,0x6f6c20666f207472,0x2079646f6220706f\n"
".quad 0x35353120656e696c,0x6c2064616568202c,0x242064656c656261,0x3337325f345f744c\n"
".quad 0x2e6c756d090a3439,0x3266250920323366,0x2c31316625202c30,0x090a3b3131662520\n"
".quad 0x203233662e646461,0x202c313031662509,0x6625202c30326625,0x6f6d090a3b303031\n"
".quad 0x2509203233662e76,0x6630202c32303166,0x3030303030383034,0x202f2f092020203b\n"
".quad 0x2e70746573090a34,0x09203233662e7467,0x6625202c33347025,0x316625202c313031\n"
".quad 0x252140090a3b3230,0x2061726220333470,0x31345f345f4c2409,0x5f4c240a3b363839\n"
".quad 0x3a32343232345f34,0x3109636f6c2e090a,0x0a30093930330936,0x3233732e766f6d09\n"
".quad 0x2c35313172250920,0x0a3b383431722520,0x696e752e61726209,0x6e6557444c240920\n"
".quad 0x4334315a5f5f6964,0x65646e614d636c61,0x456649746f72626c,0x30535f30535f5469\n"
".quad 0x325f62695f30535f,0x4c240a3b315f3131,0x36383931345f345f,0x6f6c3c2f2f200a3a\n"
".quad 0x74726150203e706f,0x706f6f6c20666f20,0x696c2079646f6220,0x202c35353120656e\n"
".quad 0x62616c2064616568,0x744c242064656c65,0x34393337325f345f,0x3109636f6c2e090a\n"
".quad 0x0a30093031330936,0x3233662e6c756d09,0x202c363166250920,0x6625202c31316625\n"
".quad 0x646461090a3b3031,0x662509203233662e,0x316625202c333031,0x3b36316625202c36\n"
".quad 0x33662e646461090a,0x2c30316625092032,0x6625202c39662520,0x6c2e090a3b333031\n"
".quad 0x313309363109636f,0x627573090a300931,0x662509203233662e,0x326625202c343031\n"
".quad 0x3030316625202c30,0x662e646461090a3b,0x3131662509203233,0x25202c386625202c\n"
".quad 0x2e090a3b34303166,0x3309363109636f6c,0x756d090a30093231,0x2509203233662e6c\n"
".quad 0x6625202c35303166,0x30316625202c3031,0x09636f6c2e090a3b,0x3009303133093631\n"
".quad 0x33732e627573090a,0x3035317225092032,0x2c3131317225202c,0x6f6d090a3b383120\n"
".quad 0x2509203233752e76,0x3b30202c31353172,0x6c2e70746573090a,0x2509203233732e65\n"
".quad 0x317225202c343470,0x35317225202c3035,0x34702540090a3b31,0x2409206172622034\n"
".quad 0x353732345f345f4c,0x6c3c2f2f200a3b34,0x726150203e706f6f,0x6f6f6c20666f2074\n"
".quad 0x6c2079646f622070,0x2c35353120656e69,0x616c206461656820,0x4c242064656c6562\n"
".quad 0x393337325f345f74,0x662e6c756d090a34,0x3032662509203233,0x202c31316625202c\n"
".quad 0x61090a3b31316625,0x09203233662e6464,0x25202c3630316625,0x316625202c303266\n"
".quad 0x766f6d090a3b3530,0x662509203233662e,0x346630202c373031,0x3b30303030303830\n"
".quad 0x34202f2f09202020,0x672e70746573090a,0x2509203233662e74,0x316625202c353470\n"
".quad 0x30316625202c3630,0x70252140090a3b37,0x0920617262203534,0x3432345f345f4c24\n"
".quad 0x345f4c240a3b3839,0x0a3a34353732345f,0x363109636f6c2e09,0x090a300938313309\n"
".quad 0x203233732e766f6d,0x202c353131722509,0x090a3b3035317225,0x20696e752e617262\n"
".quad 0x646e6557444c2409,0x614334315a5f5f69,0x6c65646e614d636c,0x69456649746f7262\n"
".quad 0x5f30535f30535f54,0x31325f62695f3053,0x5f4c240a3b315f31,0x3a38393432345f34\n"
".quad 0x6f6f6c3c2f2f200a,0x2074726150203e70,0x20706f6f6c20666f,0x6e696c2079646f62\n"
".quad 0x68202c3535312065,0x6562616c20646165,0x5f744c242064656c,0x0a34393337325f34\n"
".quad 0x363109636f6c2e09,0x090a300939313309,0x203233662e6c756d,0x25202c3631662509\n"
".quad 0x316625202c313166,0x2e646461090a3b30,0x3166250920323366,0x36316625202c3830\n"
".quad 0x0a3b36316625202c,0x3233662e64646109,0x202c303166250920,0x316625202c396625\n"
".quad 0x6f6c2e090a3b3830,0x3032330936310963,0x2e627573090a3009,0x3166250920323366\n"
".quad 0x30326625202c3930,0x3b3530316625202c,0x33662e646461090a,0x2c31316625092032\n"
".quad 0x6625202c38662520,0x6c2e090a3b393031,0x323309363109636f,0x6c756d090a300931\n"
".quad 0x662509203233662e,0x316625202c303131,0x3b30316625202c30,0x3109636f6c2e090a\n"
".quad 0x0a30093532330936,0x3233732e62757309,0x2c31313172250920,0x202c313131722520\n"
".quad 0x6f6c2e090a3b3931,0x3931330936310963,0x2e766f6d090a3009,0x3172250920323373\n"
".quad 0x090a3b30202c3235,0x2e656c2e70746573,0x3870250920323373,0x2c3131317225202c\n"
".quad 0x0a3b323531722520,0x7262203870254009,0x5f345f4c24092061,0x200a3b3636323334\n"
".quad 0x3e706f6f6c3c2f2f,0x666f207472615020,0x6f6220706f6f6c20,0x20656e696c207964\n"
".quad 0x616568202c353531,0x656c6562616c2064,0x5f345f744c242064,0x6d090a3439333732\n"
".quad 0x09203233662e6c75,0x6625202c30326625,0x31316625202c3131,0x662e646461090a3b\n"
".quad 0x3131662509203233,0x2c30326625202c31,0x0a3b303131662520,0x3233662e766f6d09\n"
".quad 0x2c32313166250920,0x3030383034663020,0x092020203b303030,0x6573090a34202f2f\n"
".quad 0x33662e74672e7074,0x2c36347025092032,0x202c313131662520,0x090a3b3231316625\n"
".quad 0x6220363470252140,0x345f4c2409206172,0x0a3b30313033345f,0x3233345f345f4c24\n"
".quad 0x6f6c2e090a3a3636,0x3732330936310963,0x2e766f6d090a3009,0x3172250920323373\n"
".quad 0x31317225202c3531,0x2e617262090a3b31,0x444c240920696e75,0x5a5f5f69646e6557\n"
".quad 0x614d636c61433431,0x746f72626c65646e,0x30535f5469456649,0x695f30535f30535f\n"
".quad 0x3b315f3131325f62,0x33345f345f4c240a,0x2f2f200a3a303130,0x50203e706f6f6c3c\n"
".quad 0x6c20666f20747261,0x79646f6220706f6f,0x353120656e696c20,0x2064616568202c35\n"
".quad 0x2064656c6562616c,0x37325f345f744c24,0x6f6c2e090a343933,0x3832330936310963\n"
".quad 0x2e6c756d090a3009,0x3166250920323366,0x2c31316625202c36,0x090a3b3031662520\n"
".quad 0x203233662e646461,0x202c333131662509,0x6625202c36316625,0x646461090a3b3631\n"
".quad 0x662509203233662e,0x2c396625202c3031,0x0a3b333131662520,0x363109636f6c2e09\n"
".quad 0x090a300939323309,0x203233662e627573,0x202c343131662509,0x6625202c30326625\n"
".quad 0x6461090a3b303131,0x2509203233662e64,0x386625202c313166,0x3b3431316625202c\n"
".quad 0x3109636f6c2e090a,0x0a30093033330936,0x3233662e6c756d09,0x202c323166250920\n"
".quad 0x6625202c30316625,0x6f6c2e090a3b3031,0x3133330936310963,0x2e6c756d090a3009\n"
".quad 0x3166250920323366,0x2c31316625202c33,0x090a3b3131662520,0x09363109636f6c2e\n"
".quad 0x62090a3009383233,0x0920696e752e6172,0x37325f345f744c24,0x444c240a3b343933\n"
".quad 0x5a5f5f69646e6557,0x614d636c61433431,0x746f72626c65646e,0x30535f5469456649\n"
".quad 0x695f30535f30535f,0x3a315f3131325f62,0x3109636f6c2e090a,0x0a30093133310937\n"
".quad 0x3233732e766f6d09,0x2c33353172250920,0x746573090a3b3020,0x3233732e74672e70\n"
".quad 0x202c373470250920,0x25202c3531317225,0x2e090a3b33353172,0x3109363109636f6c\n"
".quad 0x646c090a30093133,0x732e6d617261702e,0x3131722509203233,0x75635f5f5b202c30\n"
".quad 0x5f5f6d7261706164,0x65646e614d36315a,0x735f31746f72626c,0x507645664930316d\n"
".quad 0x6934726168637536,0x535f32535f546969,0x5f32535f32535f32,0x635f6269695f3053\n"
".quad 0x0a3b5d68636e7572,0x373109636f6c2e09,0x090a300931333109,0x203233732e627573\n"
".quad 0x202c343531722509,0x25202c3031317225,0x6d090a3b35313172,0x09203233732e766f\n"
".quad 0x30202c3535317225,0x2e706c6573090a3b,0x3172250920323373,0x35317225202c3635\n"
".quad 0x3535317225202c34,0x0a3b37347025202c,0x3233752e766f6d09,0x2c37353172250920\n"
".quad 0x746573090a3b3020,0x3233732e71652e70,0x202c383470250920,0x25202c3635317225\n"
".quad 0x40090a3b37353172,0x6172622038347025,0x5f345f744c240920,0x090a3b3236333734\n"
".quad 0x09373109636f6c2e,0x6c090a3009383331,0x2e6d617261702e64,0x3172250920323373\n"
".quad 0x635f5f5b202c3835,0x5f6d726170616475,0x646e614d36315a5f,0x5f31746f72626c65\n"
".quad 0x7645664930316d73,0x3472616863753650,0x5f32535f54696969,0x32535f32535f3253\n"
".quad 0x5f6269695f30535f,0x6f6974616d696e61,0x3b5d656d6172466e,0x33732e646461090a\n"
".quad 0x3935317225092032,0x2c3835317225202c,0x0a3b363531722520,0x617261702e646c09\n"
".quad 0x7225092038752e6d,0x5f5f5b202c303631,0x6d72617061647563,0x6e614d36315a5f5f\n"
".quad 0x31746f72626c6564,0x45664930316d735f,0x7261686375365076,0x32535f5469696934\n"
".quad 0x535f32535f32535f,0x6269695f30535f32,0x2b73726f6c6f635f,0x6c756d090a3b5d30\n"
".quad 0x203233732e6f6c2e,0x202c313631722509,0x25202c3935317225,0x63090a3b30363172\n"
".quad 0x33752e38752e7476,0x3236317225092032,0x3b3136317225202c,0x3109636f6c2e090a\n"
".quad 0x0a30093933310937,0x617261702e646c09,0x7225092038752e6d,0x5f5f5b202c333631\n"
".quad 0x6d72617061647563,0x6e614d36315a5f5f,0x31746f72626c6564,0x45664930316d735f\n"
".quad 0x7261686375365076,0x32535f5469696934,0x535f32535f32535f,0x6269695f30535f32\n"
".quad 0x2b73726f6c6f635f,0x6c756d090a3b5d31,0x203233732e6f6c2e,0x202c343631722509\n"
".quad 0x25202c3935317225,0x63090a3b33363172,0x33752e38752e7476,0x3536317225092032\n"
".quad 0x3b3436317225202c,0x3109636f6c2e090a,0x0a30093034310937,0x617261702e646c09\n"
".quad 0x7225092038752e6d,0x5f5f5b202c363631,0x6d72617061647563,0x6e614d36315a5f5f\n"
".quad 0x31746f72626c6564,0x45664930316d735f,0x7261686375365076,0x32535f5469696934\n"
".quad 0x535f32535f32535f,0x6269695f30535f32,0x2b73726f6c6f635f,0x6c756d090a3b5d32\n"
".quad 0x203233732e6f6c2e,0x202c373631722509,0x25202c3935317225,0x63090a3b36363172\n"
".quad 0x33752e38752e7476,0x3836317225092032,0x3b3736317225202c,0x6e752e617262090a\n"
".quad 0x345f744c24092069,0x0a3b36303137345f,0x37345f345f744c24,0x6c2e090a3a323633\n"
".quad 0x343109373109636f,0x766f6d090a300934,0x722509203233752e,0x0a3b30202c383631\n"
".quad 0x3233752e766f6d09,0x2c35363172250920,0x766f6d090a3b3020,0x722509203233752e\n"
".quad 0x0a3b30202c323631,0x37345f345f744c24,0x6c2e090a3a363031,0x353109373109636f\n"
".quad 0x2e646c090a300930,0x33732e6d61726170,0x3936317225092032,0x6475635f5f5b202c\n"
".quad 0x5a5f5f6d72617061,0x6c65646e614d3631,0x6d735f31746f7262,0x3650764566493031\n"
".quad 0x6969347261686375,0x32535f32535f5469,0x535f32535f32535f,0x72665f6269695f30\n"
".quad 0x61090a3b5d656d61,0x09203233732e6464,0x25202c3037317225,0x3b31202c39363172\n"
".quad 0x33732e726873090a,0x3137317225092032,0x2c3037317225202c,0x6f6d090a3b313320\n"
".quad 0x2509203233732e76,0x3b31202c32373172,0x33622e646e61090a,0x3337317225092032\n"
".quad 0x2c3137317225202c,0x0a3b323731722520,0x3233732e64646109,0x2c34373172250920\n"
".quad 0x202c333731722520,0x090a3b3037317225,0x203233732e726873,0x202c353731722509\n"
".quad 0x31202c3437317225,0x6c2e6c756d090a3b,0x2509203233732e6f,0x7225202c36373172\n"
".quad 0x317225202c393631,0x2e646461090a3b38,0x3172250920323373,0x36317225202c3737\n"
".quad 0x3637317225202c32,0x732e646461090a3b,0x3731722509203233,0x3537317225202c38\n"
".quad 0x3b3737317225202c,0x33732e766964090a,0x3937317225092032,0x2c3837317225202c\n"
".quad 0x0a3b303731722520,0x373109636f6c2e09,0x090a300931353109,0x732e6f6c2e6c756d\n"
".quad 0x3831722509203233,0x3936317225202c30,0x0a3b39317225202c,0x3233732e64646109\n"
".quad 0x2c31383172250920,0x202c353631722520,0x090a3b3038317225,0x203233732e646461\n"
".quad 0x202c323831722509,0x25202c3537317225,0x64090a3b31383172,0x09203233732e7669\n"
".quad 0x25202c3338317225,0x7225202c32383172,0x7473090a3b303731,0x2e6c61626f6c672e\n"
".quad 0x5b092038752e3276,0x2c5d302b33647225,0x2c39373172257b20,0x0a3b7d3338317225\n"
".quad 0x373109636f6c2e09,0x090a300932353109,0x732e6f6c2e6c756d,0x3831722509203233\n"
".quad 0x3936317225202c34,0x0a3b30327225202c,0x3233732e64646109,0x2c35383172250920\n"
".quad 0x202c383631722520,0x090a3b3438317225,0x203233732e646461,0x202c363831722509\n"
".quad 0x25202c3537317225,0x64090a3b35383172,0x09203233732e7669,0x25202c3738317225\n"
".quad 0x7225202c36383172,0x7473090a3b303731,0x2e6c61626f6c672e,0x6472255b09203875\n"
".quad 0x7225202c5d322b33,0x744c240a3b373831,0x32383036345f345f,0x5f345f744c240a3a\n"
".quad 0x090a3a3232353334,0x09373109636f6c2e,0x65090a3009353531,0x444c240a3b746978\n"
".quad 0x315a5f5f646e6557,0x626c65646e614d36,0x316d735f31746f72,0x7536507645664930\n"
".quad 0x6969693472616863,0x5f32535f32535f54,0x30535f32535f3253,0x7d090a3a6269695f\n"
".quad 0x36315a5f202f2f20,0x72626c65646e614d,0x30316d735f31746f,0x6375365076456649\n"
".quad 0x5469696934726168,0x535f32535f32535f,0x5f30535f32535f32,0x652e090a0a626969\n"
".quad 0x315a5f207972746e,0x626c65646e614d36,0x316d735f31746f72,0x7536507645644930\n"
".quad 0x6969693472616863,0x5f32535f32535f54,0x30535f32535f3253,0x090a28206269695f\n"
".quad 0x206d617261702e09,0x635f5f203436752e,0x5f6d726170616475,0x646e614d36315a5f\n"
".quad 0x5f31746f72626c65,0x7645644930316d73,0x3472616863753650,0x5f32535f54696969\n"
".quad 0x32535f32535f3253,0x5f6269695f30535f,0x2e09090a2c747364,0x732e206d61726170\n"
".quad 0x6475635f5f203233,0x5a5f5f6d72617061,0x6c65646e614d3631,0x6d735f31746f7262\n"
".quad 0x3650764564493031,0x6969347261686375,0x32535f32535f5469,0x535f32535f32535f\n"
".quad 0x6d695f6269695f30,0x09090a2c57656761,0x2e206d617261702e,0x75635f5f20323373\n"
".quad 0x5f5f6d7261706164,0x65646e614d36315a,0x735f31746f72626c,0x507645644930316d\n"
".quad 0x6934726168637536,0x535f32535f546969,0x5f32535f32535f32,0x695f6269695f3053\n"
".quad 0x090a2c486567616d,0x206d617261702e09,0x635f5f203233732e,0x5f6d726170616475\n"
".quad 0x646e614d36315a5f,0x5f31746f72626c65,0x7645644930316d73,0x3472616863753650\n"
".quad 0x5f32535f54696969,0x32535f32535f3253,0x5f6269695f30535f,0x0a2c68636e757263\n"
".quad 0x6d617261702e0909,0x5f5f203436662e20,0x6d72617061647563,0x6e614d36315a5f5f\n"
".quad 0x31746f72626c6564,0x45644930316d735f,0x7261686375365076,0x32535f5469696934\n"
".quad 0x535f32535f32535f,0x6269695f30535f32,0x090a2c66664f785f,0x206d617261702e09\n"
".quad 0x635f5f203436662e,0x5f6d726170616475,0x646e614d36315a5f,0x5f31746f72626c65\n"
".quad 0x7645644930316d73,0x3472616863753650,0x5f32535f54696969,0x32535f32535f3253\n"
".quad 0x5f6269695f30535f,0x09090a2c66664f79,0x2e206d617261702e,0x75635f5f20343666\n"
".quad 0x5f5f6d7261706164,0x65646e614d36315a,0x735f31746f72626c,0x507645644930316d\n"
".quad 0x6934726168637536,0x535f32535f546969,0x5f32535f32535f32,0x785f6269695f3053\n"
".quad 0x702e09090a2c504a,0x36662e206d617261,0x616475635f5f2034,0x315a5f5f6d726170\n"
".quad 0x626c65646e614d36,0x316d735f31746f72,0x7536507645644930,0x6969693472616863\n"
".quad 0x5f32535f32535f54,0x30535f32535f3253,0x504a795f6269695f,0x7261702e09090a2c\n"
".quad 0x203436662e206d61,0x6170616475635f5f,0x4d36315a5f5f6d72,0x6f72626c65646e61\n"
".quad 0x4930316d735f3174,0x6863753650764564,0x5f54696969347261,0x32535f32535f3253\n"
".quad 0x695f30535f32535f,0x656c6163735f6269,0x7261702e09090a2c,0x67696c612e206d61\n"
".quad 0x2038622e2034206e,0x6170616475635f5f,0x4d36315a5f5f6d72,0x6f72626c65646e61\n"
".quad 0x4930316d735f3174,0x6863753650764564,0x5f54696969347261,0x32535f32535f3253\n"
".quad 0x695f30535f32535f,0x726f6c6f635f6269,0x09090a2c5d345b73,0x2e206d617261702e\n"
".quad 0x75635f5f20323373,0x5f5f6d7261706164,0x65646e614d36315a,0x735f31746f72626c\n"
".quad 0x507645644930316d,0x6934726168637536,0x535f32535f546969,0x5f32535f32535f32\n"
".quad 0x665f6269695f3053,0x09090a2c656d6172,0x2e206d617261702e,0x75635f5f20323373\n"
".quad 0x5f5f6d7261706164,0x65646e614d36315a,0x735f31746f72626c,0x507645644930316d\n"
".quad 0x6934726168637536,0x535f32535f546969,0x5f32535f32535f32,0x615f6269695f3053\n"
".quad 0x6e6f6974616d696e,0x090a2c656d617246,0x206d617261702e09,0x75635f5f2038732e\n"
".quad 0x5f5f6d7261706164,0x65646e614d36315a,0x735f31746f72626c,0x507645644930316d\n"
".quad 0x6934726168637536,0x535f32535f546969,0x5f32535f32535f32,0x695f6269695f3053\n"
".quad 0x090a7b090a294a73,0x31752e206765722e,0x3e363c6872252036,0x206765722e090a3b\n"
".quad 0x3c7225203233752e,0x2e090a3b3e393831,0x3436752e20676572,0x3b3e393c64722520\n"
".quad 0x2e206765722e090a,0x3c64662520343666,0x2e090a3b3e363131,0x6572702e20676572\n"
".quad 0x3e30353c70252064,0x09636f6c2e090a3b,0x3009353031093731,0x67656257444c240a\n"
".quad 0x4d36315a5f5f6e69,0x6f72626c65646e61,0x4930316d735f3174,0x6863753650764564\n"
".quad 0x5f54696969347261,0x32535f32535f3253,0x695f30535f32535f,0x766f6d090a3a6269\n"
".quad 0x722509203631752e,0x61746325202c3168,0x6d090a3b782e6469,0x09203631752e766f\n"
".quad 0x6e25202c32687225,0x090a3b782e646974,0x656469772e6c756d,0x722509203631752e\n"
".quad 0x2c31687225202c31,0x090a3b3268722520,0x203631752e766f6d,0x25202c3368722509\n"
".quad 0x3b792e6469617463,0x31752e766f6d090a,0x2c34687225092036,0x792e6469746e2520\n"
".quad 0x772e6c756d090a3b,0x203631752e656469,0x7225202c32722509,0x34687225202c3368\n"
".quad 0x752e747663090a3b,0x09203631752e3233,0x697425202c337225,0x6461090a3b782e64\n"
".quad 0x2509203233752e64,0x2c337225202c3472,0x63090a3b31722520,0x752e3233752e7476\n"
".quad 0x2c35722509203631,0x3b792e6469742520,0x33752e646461090a,0x202c367225092032\n"
".quad 0x327225202c357225,0x61702e646c090a3b,0x203233732e6d6172,0x5f5b202c37722509\n"
".quad 0x726170616475635f,0x614d36315a5f5f6d,0x746f72626c65646e,0x644930316d735f31\n"
".quad 0x6168637536507645,0x535f546969693472,0x5f32535f32535f32,0x69695f30535f3253\n"
".quad 0x486567616d695f62,0x702e646c090a3b5d,0x3233732e6d617261,0x5b202c3872250920\n"
".quad 0x6170616475635f5f,0x4d36315a5f5f6d72,0x6f72626c65646e61,0x4930316d735f3174\n"
".quad 0x6863753650764564,0x5f54696969347261,0x32535f32535f3253,0x695f30535f32535f\n"
".quad 0x6567616d695f6269,0x746573090a3b5d57,0x2e3233752e74672e,0x3972250920323373\n"
".quad 0x25202c377225202c,0x67656e090a3b3672,0x722509203233732e,0x3b397225202c3031\n"
".quad 0x74672e746573090a,0x3233732e3233752e,0x202c313172250920,0x347225202c387225\n"
".quad 0x732e67656e090a3b,0x3231722509203233,0x0a3b31317225202c,0x3233622e646e6109\n"
".quad 0x202c333172250920,0x7225202c30317225,0x766f6d090a3b3231,0x722509203233752e\n"
".quad 0x090a3b30202c3431,0x2e71652e70746573,0x3170250920323373,0x202c33317225202c\n"
".quad 0x40090a3b34317225,0x2061726220317025,0x345f355f744c2409,0x6c090a3b32323533\n"
".quad 0x2e6d617261702e64,0x3872250920323373,0x6475635f5f5b202c,0x5a5f5f6d72617061\n"
".quad 0x6c65646e614d3631,0x6d735f31746f7262,0x3650764564493031,0x6969347261686375\n"
".quad 0x32535f32535f5469,0x535f32535f32535f,0x6d695f6269695f30,0x090a3b5d57656761\n"
".quad 0x09373109636f6c2e,0x6d090a3009333131,0x33732e6f6c2e6c75,0x2c35317225092032\n"
".quad 0x7225202c38722520,0x2e646461090a3b36,0x3172250920323373,0x2c35317225202c36\n"
".quad 0x6c090a3b34722520,0x2e6d617261702e64,0x6472250920343675,0x75635f5f5b202c31\n"
".quad 0x5f5f6d7261706164,0x65646e614d36315a,0x735f31746f72626c,0x507645644930316d\n"
".quad 0x6934726168637536,0x535f32535f546969,0x5f32535f32535f32,0x645f6269695f3053\n"
".quad 0x756d090a3b5d7473,0x3233752e6f6c2e6c,0x202c373172250920,0x3b34202c36317225\n"
".quad 0x36752e747663090a,0x2509203233752e34,0x317225202c326472,0x2e646461090a3b37\n"
".quad 0x6472250920343675,0x2c32647225202c33,0x090a3b3164722520,0x61626f6c672e646c\n"
".quad 0x2038752e34762e6c,0x252c383172257b09,0x303272252c393172,0x72255b202c7d5f2c\n"
".quad 0x090a3b5d302b3364,0x203233752e766f6d,0x30202c3132722509,0x2e70746573090a3b\n"
".quad 0x09203233732e656c,0x347225202c327025,0x0a3b31327225202c,0x7262203270254009\n"
".quad 0x355f744c24092061,0x0a3b30393234345f,0x626f6c672e646c09,0x38752e34762e6c61\n"
".quad 0x2c323272257b0920,0x3272252c33327225,0x255b202c7d5f2c34,0x3b5d342d2b336472\n"
".quad 0x3109636f6c2e090a,0x0a30093831310937,0x3233732e62757309,0x202c353272250920\n"
".quad 0x7225202c34327225,0x736261090a3b3032,0x722509203233732e,0x35327225202c3632\n"
".quad 0x732e766f6d090a3b,0x3732722509203233,0x73090a3b3031202c,0x33752e74672e7465\n"
".quad 0x2509203233732e32,0x327225202c383272,0x3b37327225202c36,0x33732e67656e090a\n"
".quad 0x2c39327225092032,0x090a3b3832722520,0x203233732e627573,0x25202c3033722509\n"
".quad 0x317225202c323272,0x2e736261090a3b38,0x3372250920323373,0x3b30337225202c31\n"
".quad 0x33732e766f6d090a,0x2c32337225092032,0x6573090a3b303120,0x3233752e74672e74\n"
".quad 0x722509203233732e,0x31337225202c3333,0x0a3b32337225202c,0x3233732e67656e09\n"
".quad 0x202c343372250920,0x73090a3b33337225,0x09203233732e6275,0x7225202c35337225\n"
".quad 0x39317225202c3332,0x732e736261090a3b,0x3633722509203233,0x0a3b35337225202c\n"
".quad 0x3233732e766f6d09,0x202c373372250920,0x746573090a3b3031,0x2e3233752e74672e\n"
".quad 0x3372250920323373,0x2c36337225202c38,0x090a3b3733722520,0x203233732e67656e\n"
".quad 0x25202c3933722509,0x726f090a3b383372,0x722509203233622e,0x34337225202c3034\n"
".quad 0x0a3b39337225202c,0x203233622e726f09,0x25202c3134722509,0x347225202c393272\n"
".quad 0x2e617262090a3b30,0x744c240920696e75,0x34333034345f355f,0x5f355f744c240a3b\n"
".quad 0x090a3a3039323434,0x203233732e766f6d,0x30202c3134722509,0x5f355f744c240a3b\n"
".quad 0x090a3a3433303434,0x203233732e646461,0x25202c3234722509,0x090a3b31202c3472\n"
".quad 0x09373109636f6c2e,0x6c090a3009353031,0x2e6d617261702e64,0x3872250920323373\n"
".quad 0x6475635f5f5b202c,0x5a5f5f6d72617061,0x6c65646e614d3631,0x6d735f31746f7262\n"
".quad 0x3650764564493031,0x6969347261686375,0x32535f32535f5469,0x535f32535f32535f\n"
".quad 0x6d695f6269695f30,0x090a3b5d57656761,0x09373109636f6c2e,0x73090a3009383131\n"
".quad 0x732e656c2e707465,0x2c33702509203233,0x7225202c38722520,0x702540090a3b3234\n"
".quad 0x2409206172622033,0x3534345f355f744c,0x2e646c090a3b3634,0x762e6c61626f6c67\n"
".quad 0x257b092038752e34,0x343472252c333472,0x7d5f2c353472252c,0x2b336472255b202c\n"
".quad 0x6f6c2e090a3b5d34,0x3032310937310963,0x2e627573090a3009,0x3472250920323373\n"
".quad 0x2c35347225202c36,0x090a3b3032722520,0x203233732e736261,0x25202c3734722509\n"
".quad 0x6f6d090a3b363472,0x2509203233732e76,0x3b3031202c383472,0x74672e746573090a\n"
".quad 0x3233732e3233752e,0x202c393472250920,0x7225202c37347225,0x67656e090a3b3834\n"
".quad 0x722509203233732e,0x39347225202c3035,0x732e627573090a3b,0x3135722509203233\n"
".quad 0x202c33347225202c,0x61090a3b38317225,0x09203233732e7362,0x7225202c32357225\n"
".quad 0x766f6d090a3b3135,0x722509203233732e,0x0a3b3031202c3335,0x2e74672e74657309\n"
".quad 0x203233732e323375,0x25202c3435722509,0x357225202c323572,0x2e67656e090a3b33\n"
".quad 0x3572250920323373,0x3b34357225202c35,0x33732e627573090a,0x2c36357225092032\n"
".quad 0x25202c3434722520,0x6261090a3b393172,0x2509203233732e73,0x357225202c373572\n"
".quad 0x2e766f6d090a3b36,0x3572250920323373,0x090a3b3031202c38,0x752e74672e746573\n"
".quad 0x09203233732e3233,0x7225202c39357225,0x38357225202c3735,0x732e67656e090a3b\n"
".quad 0x3036722509203233,0x0a3b39357225202c,0x203233622e726f09,0x25202c3136722509\n"
".quad 0x367225202c353572,0x622e726f090a3b30,0x3236722509203233,0x202c30357225202c\n"
".quad 0x61090a3b31367225,0x09203233732e6464,0x7225202c31347225,0x32367225202c3134\n"
".quad 0x5f355f744c240a3b,0x090a3a3634353434,0x203233752e766f6d,0x30202c3336722509\n"
".quad 0x2e70746573090a3b,0x09203233732e656c,0x367225202c347025,0x0a3b33367225202c\n"
".quad 0x7262203470254009,0x355f744c24092061,0x0a3b38353035345f,0x373109636f6c2e09\n"
".quad 0x090a300935303109,0x6d617261702e646c,0x722509203233732e,0x75635f5f5b202c38\n"
".quad 0x5f5f6d7261706164,0x65646e614d36315a,0x735f31746f72626c,0x507645644930316d\n"
".quad 0x6934726168637536,0x535f32535f546969,0x5f32535f32535f32,0x695f6269695f3053\n"
".quad 0x0a3b5d576567616d,0x373109636f6c2e09,0x090a300932323109,0x203233732e627573\n"
".quad 0x25202c3436722509,0x387225202c363172,0x6c2e6c756d090a3b,0x2509203233752e6f\n"
".quad 0x367225202c353672,0x63090a3b34202c34,0x752e3436752e7476,0x3464722509203233\n"
".quad 0x0a3b35367225202c,0x373109636f6c2e09,0x090a300933313109,0x6d617261702e646c\n"
".quad 0x722509203436752e,0x635f5f5b202c3164,0x5f6d726170616475,0x646e614d36315a5f\n"
".quad 0x5f31746f72626c65,0x7645644930316d73,0x3472616863753650,0x5f32535f54696969\n"
".quad 0x32535f32535f3253,0x5f6269695f30535f,0x2e090a3b5d747364,0x3109373109636f6c\n"
".quad 0x6461090a30093232,0x2509203436752e64,0x647225202c356472,0x3b31647225202c34\n"
".quad 0x6f6c672e646c090a,0x752e34762e6c6162,0x363672257b092038,0x72252c373672252c\n"
".quad 0x5b202c7d5f2c3836,0x3b5d302b35647225,0x33732e627573090a,0x2c39367225092032\n"
".quad 0x25202c3836722520,0x6261090a3b303272,0x2509203233732e73,0x367225202c303772\n"
".quad 0x2e766f6d090a3b39,0x3772250920323373,0x090a3b3031202c31,0x752e74672e746573\n"
".quad 0x09203233732e3233,0x7225202c32377225,0x31377225202c3037,0x732e67656e090a3b\n"
".quad 0x3337722509203233,0x0a3b32377225202c,0x3233732e62757309,0x202c343772250920\n"
".quad 0x7225202c36367225,0x736261090a3b3831,0x722509203233732e,0x34377225202c3537\n"
".quad 0x732e766f6d090a3b,0x3637722509203233,0x73090a3b3031202c,0x33752e74672e7465\n"
".quad 0x2509203233732e32,0x377225202c373772,0x3b36377225202c35,0x33732e67656e090a\n"
".quad 0x2c38377225092032,0x090a3b3737722520,0x203233732e627573,0x25202c3937722509\n"
".quad 0x317225202c373672,0x2e736261090a3b39,0x3872250920323373,0x3b39377225202c30\n"
".quad 0x33732e766f6d090a,0x2c31387225092032,0x6573090a3b303120,0x3233752e74672e74\n"
".quad 0x722509203233732e,0x30387225202c3238,0x0a3b31387225202c,0x3233732e67656e09\n"
".quad 0x202c333872250920,0x6f090a3b32387225,0x2509203233622e72,0x377225202c343872\n"
".quad 0x3b33387225202c38,0x3233622e726f090a,0x202c353872250920,0x7225202c33377225\n"
".quad 0x646461090a3b3438,0x722509203233732e,0x31347225202c3134,0x0a3b35387225202c\n"
".quad 0x35345f355f744c24,0x6461090a3a383530,0x2509203233732e64,0x367225202c363872\n"
".quad 0x6c2e090a3b31202c,0x303109373109636f,0x2e646c090a300935,0x33732e6d61726170\n"
".quad 0x202c377225092032,0x70616475635f5f5b,0x36315a5f5f6d7261,0x72626c65646e614d\n"
".quad 0x30316d735f31746f,0x6375365076456449,0x5469696934726168,0x535f32535f32535f\n"
".quad 0x5f30535f32535f32,0x67616d695f626969,0x6c2e090a3b5d4865,0x323109373109636f\n"
".quad 0x746573090a300932,0x3233732e656c2e70,0x25202c3570250920,0x36387225202c3772\n"
".quad 0x2035702540090a3b,0x744c240920617262,0x30373535345f355f,0x09636f6c2e090a3b\n"
".quad 0x3009353031093731,0x7261702e646c090a,0x09203233732e6d61,0x5f5f5b202c387225\n"
".quad 0x6d72617061647563,0x6e614d36315a5f5f,0x31746f72626c6564,0x45644930316d735f\n"
".quad 0x7261686375365076,0x32535f5469696934,0x535f32535f32535f,0x6269695f30535f32\n"
".quad 0x5d576567616d695f,0x09636f6c2e090a3b,0x3009343231093731,0x33732e646461090a\n"
".quad 0x2c37387225092032,0x25202c3631722520,0x6c756d090a3b3872,0x203233752e6f6c2e\n"
".quad 0x25202c3838722509,0x0a3b34202c373872,0x3436752e74766309,0x722509203233752e\n"
".quad 0x38387225202c3664,0x09636f6c2e090a3b,0x3009333131093731,0x7261702e646c090a\n"
".quad 0x09203436752e6d61,0x5f5b202c31647225,0x726170616475635f,0x614d36315a5f5f6d\n"
".quad 0x746f72626c65646e,0x644930316d735f31,0x6168637536507645,0x535f546969693472\n"
".quad 0x5f32535f32535f32,0x69695f30535f3253,0x0a3b5d7473645f62,0x373109636f6c2e09\n"
".quad 0x090a300934323109,0x203436752e646461,0x25202c3764722509,0x647225202c366472\n"
".quad 0x672e646c090a3b31,0x34762e6c61626f6c,0x72257b092038752e,0x2c303972252c3938\n"
".quad 0x2c7d5f2c31397225,0x302b376472255b20,0x2e627573090a3b5d,0x3972250920323373\n"
".quad 0x2c31397225202c32,0x090a3b3032722520,0x203233732e736261,0x25202c3339722509\n"
".quad 0x6f6d090a3b323972,0x2509203233732e76,0x3b3031202c343972,0x74672e746573090a\n"
".quad 0x3233732e3233752e,0x202c353972250920,0x7225202c33397225,0x67656e090a3b3439\n"
".quad 0x722509203233732e,0x35397225202c3639,0x732e627573090a3b,0x3739722509203233\n"
".quad 0x202c39387225202c,0x61090a3b38317225,0x09203233732e7362,0x7225202c38397225\n"
".quad 0x766f6d090a3b3739,0x722509203233732e,0x0a3b3031202c3939,0x2e74672e74657309\n"
".quad 0x203233732e323375,0x202c303031722509,0x7225202c38397225,0x67656e090a3b3939\n"
".quad 0x722509203233732e,0x317225202c313031,0x627573090a3b3030,0x722509203233732e\n"
".quad 0x397225202c323031,0x3b39317225202c30,0x33732e736261090a,0x3330317225092032\n"
".quad 0x3b3230317225202c,0x33732e766f6d090a,0x3430317225092032,0x73090a3b3031202c\n"
".quad 0x33752e74672e7465,0x2509203233732e32,0x7225202c35303172,0x317225202c333031\n"
".quad 0x67656e090a3b3430,0x722509203233732e,0x317225202c363031,0x2e726f090a3b3530\n"
".quad 0x3172250920323362,0x30317225202c3730,0x3630317225202c31,0x33622e726f090a3b\n"
".quad 0x3830317225092032,0x202c36397225202c,0x090a3b3730317225,0x203233732e646461\n"
".quad 0x25202c3134722509,0x317225202c313472,0x5f744c240a3b3830,0x3a30373535345f35\n"
".quad 0x33752e766f6d090a,0x3930317225092032,0x6573090a3b30202c,0x33732e71652e7074\n"
".quad 0x202c367025092032,0x7225202c31347225,0x2540090a3b393031,0x0920617262203670\n"
".quad 0x36345f355f744c24,0x6c2e090a3b323830,0x333109363109636f,0x2e646c090a300931\n"
".quad 0x33732e6d61726170,0x3031317225092032,0x6475635f5f5b202c,0x5a5f5f6d72617061\n"
".quad 0x6c65646e614d3631,0x6d735f31746f7262,0x3650764564493031,0x6969347261686375\n"
".quad 0x32535f32535f5469,0x535f32535f32535f,0x72635f6269695f30,0x090a3b5d68636e75\n"
".quad 0x203233732e766f6d,0x202c313131722509,0x090a3b3031317225,0x6d617261702e646c\n"
".quad 0x662509203436662e,0x635f5f5b202c3164,0x5f6d726170616475,0x646e614d36315a5f\n"
".quad 0x5f31746f72626c65,0x7645644930316d73,0x3472616863753650,0x5f32535f54696969\n"
".quad 0x32535f32535f3253,0x5f6269695f30535f,0x0a3b5d656c616373,0x617261702e646c09\n"
".quad 0x2509203436662e6d,0x5f5f5b202c326466,0x6d72617061647563,0x6e614d36315a5f5f\n"
".quad 0x31746f72626c6564,0x45644930316d735f,0x7261686375365076,0x32535f5469696934\n"
".quad 0x535f32535f32535f,0x6269695f30535f32,0x0a3b5d66664f785f,0x2e6e722e74766309\n"
".quad 0x203233732e343666,0x25202c3364662509,0x64616d090a3b3472,0x203436662e6e722e\n"
".quad 0x25202c3464662509,0x646625202c336466,0x3b32646625202c31,0x7261702e646c090a\n"
".quad 0x09203436662e6d61,0x5f5b202c35646625,0x726170616475635f,0x614d36315a5f5f6d\n"
".quad 0x746f72626c65646e,0x644930316d735f31,0x6168637536507645,0x535f546969693472\n"
".quad 0x5f32535f32535f32,0x69695f30535f3253,0x3b5d66664f795f62,0x6e722e747663090a\n"
".quad 0x3233732e3436662e,0x202c366466250920,0x616d090a3b367225,0x3436662e6e722e64\n"
".quad 0x202c376466250920,0x6625202c36646625,0x35646625202c3164,0x61702e646c090a3b\n"
".quad 0x092038732e6d6172,0x5b202c3231317225,0x6170616475635f5f,0x4d36315a5f5f6d72\n"
".quad 0x6f72626c65646e61,0x4930316d735f3174,0x6863753650764564,0x5f54696969347261\n"
".quad 0x32535f32535f3253,0x695f30535f32535f,0x3b5d4a73695f6269,0x33752e766f6d090a\n"
".quad 0x3331317225092032,0x6573090a3b30202c,0x33732e71652e7074,0x202c377025092032\n"
".quad 0x25202c3231317225,0x40090a3b33313172,0x2061726220377025,0x345f355f744c2409\n"
".quad 0x2e090a3b30353836,0x3109363109636f6c,0x646c090a30093633,0x662e6d617261702e\n"
".quad 0x3864662509203436,0x6475635f5f5b202c,0x5a5f5f6d72617061,0x6c65646e614d3631\n"
".quad 0x6d735f31746f7262,0x3650764564493031,0x6969347261686375,0x32535f32535f5469\n"
".quad 0x535f32535f32535f,0x4a785f6269695f30,0x6f6c2e090a3b5d50,0x3733310936310963\n"
".quad 0x702e646c090a3009,0x3436662e6d617261,0x202c396466250920,0x70616475635f5f5b\n"
".quad 0x36315a5f5f6d7261,0x72626c65646e614d,0x30316d735f31746f,0x6375365076456449\n"
".quad 0x5469696934726168,0x535f32535f32535f,0x5f30535f32535f32,0x5d504a795f626969\n"
".quad 0x09636f6c2e090a3b,0x3009383331093631,0x36662e766f6d090a,0x3031646625092034\n"
".quad 0x0a3b37646625202c,0x363109636f6c2e09,0x090a300939333109,0x203436662e766f6d\n"
".quad 0x202c313164662509,0x2e090a3b34646625,0x3109363109636f6c,0x756d090a30093034\n"
".quad 0x2509203436662e6c,0x6625202c32316466,0x37646625202c3764,0x09636f6c2e090a3b\n"
".quad 0x3009313431093631,0x36662e6c756d090a,0x3331646625092034,0x202c34646625202c\n"
".quad 0x62090a3b34646625,0x0920696e752e6172,0x36345f355f744c24,0x744c240a3b343935\n"
".quad 0x30353836345f355f,0x09636f6c2e090a3a,0x3009353431093631,0x36662e766f6d090a\n"
".quad 0x2c38646625092034,0x090a3b3464662520,0x09363109636f6c2e,0x6d090a3009363431\n"
".quad 0x09203436662e766f,0x6625202c39646625,0x6f6c2e090a3b3764,0x3035310936310963\n"
".quad 0x2e766f6d090a3009,0x6466250920343666,0x30306430202c3331,0x3030303030303030\n"
".quad 0x093b303030303030,0x6f6d090a30202f2f,0x2509203436662e76,0x6430202c32316466\n"
".quad 0x3030303030303030,0x3030303030303030,0x090a30202f2f093b,0x203436662e766f6d\n"
".quad 0x202c313164662509,0x3030303030306430,0x3030303030303030,0x30202f2f093b3030\n"
".quad 0x36662e766f6d090a,0x3031646625092034,0x303030306430202c,0x3030303030303030\n"
".quad 0x2f2f093b30303030,0x355f744c240a3020,0x0a3a34393536345f,0x3233732e766f6d09\n"
".quad 0x2c34313172250920,0x6f6c2e090a3b3020,0x3133310936310963,0x702e646c090a3009\n"
".quad 0x3233732e6d617261,0x2c30313172250920,0x616475635f5f5b20,0x315a5f5f6d726170\n"
".quad 0x626c65646e614d36,0x316d735f31746f72,0x7536507645644930,0x6969693472616863\n"
".quad 0x5f32535f32535f54,0x30535f32535f3253,0x7572635f6269695f,0x2e090a3b5d68636e\n"
".quad 0x3109363109636f6c,0x6573090a30093035,0x33732e656c2e7074,0x202c387025092032\n"
".quad 0x25202c3031317225,0x4c240a3b34313172,0x393337325f355f74,0x6c3c2f2f200a3a34\n"
".quad 0x6f6f4c203e706f6f,0x6c2079646f622070,0x0a35353120656e69,0x363109636f6c2e09\n"
".quad 0x090a300935353109,0x6172622038702540,0x335f355f4c240920,0x2f200a3b38333533\n"
".quad 0x203e706f6f6c3c2f,0x20666f2074726150,0x646f6220706f6f6c,0x3120656e696c2079\n"
".quad 0x64616568202c3535,0x64656c6562616c20,0x325f355f744c2420,0x6461090a34393337\n"
".quad 0x2509203436662e64,0x6625202c34316466,0x646625202c333164,0x766f6d090a3b3231\n"
".quad 0x662509203436662e,0x346430202c353164,0x3030303030303130,0x3b30303030303030\n"
".quad 0x73090a34202f2f09,0x662e74672e707465,0x2c39702509203436,0x202c343164662520\n"
".quad 0x090a3b3531646625,0x7262203970252140,0x5f355f4c24092061,0x240a3b3238323333\n"
".quad 0x333533335f355f4c,0x636f6c2e090a3a38,0x0936353109363109,0x732e766f6d090a30\n"
".quad 0x3131722509203233,0x3131317225202c35,0x752e617262090a3b,0x57444c240920696e\n"
".quad 0x315a5f5f69646e65,0x6e614d636c614334,0x49746f72626c6564,0x5f30535f54694564\n"
".quad 0x62695f30535f3053,0x0a3b315f3231325f,0x3233335f355f4c24,0x3c2f2f200a3a3238\n"
".quad 0x6150203e706f6f6c,0x6f6c20666f207472,0x2079646f6220706f,0x35353120656e696c\n"
".quad 0x6c2064616568202c,0x242064656c656261,0x3337325f355f744c,0x636f6c2e090a3439\n"
".quad 0x0937353109363109,0x662e6c756d090a30,0x3164662509203436,0x3131646625202c36\n"
".quad 0x3b3031646625202c,0x36662e646461090a,0x3731646625092034,0x2c3631646625202c\n"
".quad 0x0a3b363164662520,0x3436662e64646109,0x2c30316466250920,0x25202c3964662520\n"
".quad 0x2e090a3b37316466,0x3109363109636f6c,0x7573090a30093835,0x2509203436662e62\n"
".quad 0x6625202c38316466,0x646625202c333164,0x646461090a3b3231,0x662509203436662e\n"
".quad 0x646625202c313164,0x3831646625202c38,0x09636f6c2e090a3b,0x3009393531093631\n"
".quad 0x36662e6c756d090a,0x3931646625092034,0x2c3031646625202c,0x0a3b303164662520\n"
".quad 0x363109636f6c2e09,0x090a300937353109,0x203233732e627573,0x202c363131722509\n"
".quad 0x31202c3131317225,0x752e766f6d090a3b,0x3131722509203233,0x73090a3b30202c37\n"
".quad 0x732e656c2e707465,0x3031702509203233,0x2c3631317225202c,0x0a3b373131722520\n"
".quad 0x6220303170254009,0x355f4c2409206172,0x0a3b30353034335f,0x706f6f6c3c2f2f20\n"
".quad 0x6f2074726150203e,0x6220706f6f6c2066,0x656e696c2079646f,0x6568202c35353120\n"
".quad 0x6c6562616c206461,0x355f744c24206465,0x090a34393337325f,0x203436662e6c756d\n"
".quad 0x202c303264662509,0x25202c3131646625,0x61090a3b31316466,0x09203436662e6464\n"
".quad 0x25202c3132646625,0x6625202c30326466,0x6f6d090a3b393164,0x2509203436662e76\n"
".quad 0x6430202c32326466,0x3030303030313034,0x3030303030303030,0x090a34202f2f093b\n"
".quad 0x2e74672e70746573,0x3170250920343666,0x3132646625202c31,0x3b3232646625202c\n"
".quad 0x313170252140090a,0x4c24092061726220,0x34393733335f355f,0x335f355f4c240a3b\n"
".quad 0x2e090a3a30353034,0x3109363109636f6c,0x6f6d090a30093536,0x2509203233732e76\n"
".quad 0x7225202c35313172,0x7262090a3b363131,0x240920696e752e61,0x5f69646e6557444c\n"
".quad 0x636c614334315a5f,0x72626c65646e614d,0x5f5469456449746f,0x30535f30535f3053\n"
".quad 0x5f3231325f62695f,0x5f355f4c240a3b31,0x200a3a3439373333,0x3e706f6f6c3c2f2f\n"
".quad 0x666f207472615020,0x6f6220706f6f6c20,0x20656e696c207964,0x616568202c353531\n"
".quad 0x656c6562616c2064,0x5f355f744c242064,0x2e090a3439333732,0x3109363109636f6c\n"
".quad 0x756d090a30093636,0x2509203436662e6c,0x6625202c36316466,0x646625202c313164\n"
".quad 0x646461090a3b3031,0x662509203436662e,0x646625202c333264,0x31646625202c3631\n"
".quad 0x2e646461090a3b36,0x6466250920343666,0x39646625202c3031,0x3b3332646625202c\n"
".quad 0x3109636f6c2e090a,0x0a30093736310936,0x3436662e62757309,0x2c34326466250920\n"
".quad 0x202c303264662520,0x090a3b3931646625,0x203436662e646461,0x202c313164662509\n"
".quad 0x6625202c38646625,0x6c2e090a3b343264,0x363109363109636f,0x6c756d090a300938\n"
".quad 0x662509203436662e,0x646625202c353264,0x31646625202c3031,0x636f6c2e090a3b30\n"
".quad 0x0936363109363109,0x732e627573090a30,0x3131722509203233,0x3131317225202c38\n"
".quad 0x6f6d090a3b32202c,0x2509203233752e76,0x3b30202c39313172,0x6c2e70746573090a\n"
".quad 0x2509203233732e65,0x317225202c323170,0x31317225202c3831,0x31702540090a3b39\n"
".quad 0x2409206172622032,0x363534335f355f4c,0x6c3c2f2f200a3b32,0x726150203e706f6f\n"
".quad 0x6f6f6c20666f2074,0x6c2079646f622070,0x2c35353120656e69,0x616c206461656820\n"
".quad 0x4c242064656c6562,0x393337325f355f74,0x662e6c756d090a34,0x3264662509203436\n"
".quad 0x3131646625202c30,0x3b3131646625202c,0x36662e646461090a,0x3632646625092034\n"
".quad 0x2c3032646625202c,0x0a3b353264662520,0x3436662e766f6d09,0x2c37326466250920\n"
".quad 0x3030313034643020,0x3030303030303030,0x202f2f093b303030,0x2e70746573090a34\n"
".quad 0x09203436662e7467,0x6625202c33317025,0x646625202c363264,0x252140090a3b3732\n"
".quad 0x2061726220333170,0x34335f355f4c2409,0x5f4c240a3b363033,0x3a32363534335f35\n"
".quad 0x3109636f6c2e090a,0x0a30093437310936,0x3233732e766f6d09,0x2c35313172250920\n"
".quad 0x0a3b383131722520,0x696e752e61726209,0x6e6557444c240920,0x4334315a5f5f6964\n"
".quad 0x65646e614d636c61,0x456449746f72626c,0x30535f30535f5469,0x325f62695f30535f\n"
".quad 0x4c240a3b315f3231,0x36303334335f355f,0x6f6c3c2f2f200a3a,0x74726150203e706f\n"
".quad 0x706f6f6c20666f20,0x696c2079646f6220,0x202c35353120656e,0x62616c2064616568\n"
".quad 0x744c242064656c65,0x34393337325f355f,0x3109636f6c2e090a,0x0a30093537310936\n"
".quad 0x3436662e6c756d09,0x2c36316466250920,0x202c313164662520,0x090a3b3031646625\n"
".quad 0x203436662e646461,0x202c383264662509,0x25202c3631646625,0x61090a3b36316466\n"
".quad 0x09203436662e6464,0x25202c3031646625,0x646625202c396466,0x6f6c2e090a3b3832\n"
".quad 0x3637310936310963,0x2e627573090a3009,0x6466250920343666,0x32646625202c3932\n"
".quad 0x3532646625202c30,0x662e646461090a3b,0x3164662509203436,0x2c38646625202c31\n"
".quad 0x0a3b393264662520,0x363109636f6c2e09,0x090a300937373109,0x203436662e6c756d\n"
".quad 0x202c303364662509,0x25202c3031646625,0x2e090a3b30316466,0x3109363109636f6c\n"
".quad 0x7573090a30093537,0x2509203233732e62,0x7225202c30323172,0x0a3b33202c313131\n"
".quad 0x3233752e766f6d09,0x2c31323172250920,0x746573090a3b3020,0x3233732e656c2e70\n"
".quad 0x202c343170250920,0x25202c3032317225,0x40090a3b31323172,0x6172622034317025\n"
".quad 0x335f355f4c240920,0x2f200a3b34373035,0x203e706f6f6c3c2f,0x20666f2074726150\n"
".quad 0x646f6220706f6f6c,0x3120656e696c2079,0x64616568202c3535,0x64656c6562616c20\n"
".quad 0x325f355f744c2420,0x756d090a34393337,0x2509203436662e6c,0x6625202c30326466\n"
".quad 0x646625202c313164,0x646461090a3b3131,0x662509203436662e,0x646625202c313364\n"
".quad 0x33646625202c3032,0x2e766f6d090a3b30,0x6466250920343666,0x30346430202c3233\n"
".quad 0x3030303030303031,0x093b303030303030,0x6573090a34202f2f,0x36662e74672e7074\n"
".quad 0x2c35317025092034,0x202c313364662520,0x090a3b3233646625,0x6220353170252140\n"
".quad 0x355f4c2409206172,0x0a3b38313834335f,0x3035335f355f4c24,0x6f6c2e090a3a3437\n"
".quad 0x3338310936310963,0x2e766f6d090a3009,0x3172250920323373,0x32317225202c3531\n"
".quad 0x2e617262090a3b30,0x444c240920696e75,0x5a5f5f69646e6557,0x614d636c61433431\n"
".quad 0x746f72626c65646e,0x30535f5469456449,0x695f30535f30535f,0x3b315f3231325f62\n"
".quad 0x34335f355f4c240a,0x2f2f200a3a383138,0x50203e706f6f6c3c,0x6c20666f20747261\n"
".quad 0x79646f6220706f6f,0x353120656e696c20,0x2064616568202c35,0x2064656c6562616c\n"
".quad 0x37325f355f744c24,0x6f6c2e090a343933,0x3438310936310963,0x2e6c756d090a3009\n"
".quad 0x6466250920343666,0x31646625202c3631,0x3031646625202c31,0x662e646461090a3b\n"
".quad 0x3364662509203436,0x3631646625202c33,0x3b3631646625202c,0x36662e646461090a\n"
".quad 0x3031646625092034,0x202c39646625202c,0x090a3b3333646625,0x09363109636f6c2e\n"
".quad 0x73090a3009353831,0x09203436662e6275,0x25202c3433646625,0x6625202c30326466\n"
".quad 0x6461090a3b303364,0x2509203436662e64,0x6625202c31316466,0x33646625202c3864\n"
".quad 0x636f6c2e090a3b34,0x0936383109363109,0x662e6c756d090a30,0x3364662509203436\n"
".quad 0x3031646625202c35,0x3b3031646625202c,0x3109636f6c2e090a,0x0a30093438310936\n"
".quad 0x3233732e62757309,0x2c32323172250920,0x202c313131722520,0x2e766f6d090a3b34\n"
".quad 0x3172250920323375,0x090a3b30202c3332,0x2e656c2e70746573,0x3170250920323373\n"
".quad 0x3232317225202c36,0x3b3332317225202c,0x203631702540090a,0x5f4c240920617262\n"
".quad 0x3b36383535335f35,0x6f6f6c3c2f2f200a,0x2074726150203e70,0x20706f6f6c20666f\n"
".quad 0x6e696c2079646f62,0x68202c3535312065,0x6562616c20646165,0x5f744c242064656c\n"
".quad 0x0a34393337325f35,0x3436662e6c756d09,0x2c30326466250920,0x202c313164662520\n"
".quad 0x090a3b3131646625,0x203436662e646461,0x202c363364662509,0x25202c3032646625\n"
".quad 0x6d090a3b35336466,0x09203436662e766f,0x30202c3733646625,0x3030303031303464\n"
".quad 0x3030303030303030,0x0a34202f2f093b30,0x74672e7074657309,0x702509203436662e\n"
".quad 0x33646625202c3731,0x3733646625202c36,0x3170252140090a3b,0x2409206172622037\n"
".quad 0x333335335f355f4c,0x5f355f4c240a3b30,0x090a3a3638353533,0x09363109636f6c2e\n"
".quad 0x6d090a3009323931,0x09203233732e766f,0x25202c3531317225,0x62090a3b32323172\n"
".quad 0x0920696e752e6172,0x69646e6557444c24,0x6c614334315a5f5f,0x626c65646e614d63\n"
".quad 0x5469456449746f72,0x535f30535f30535f,0x3231325f62695f30,0x355f4c240a3b315f\n"
".quad 0x0a3a30333335335f,0x706f6f6c3c2f2f20,0x6f2074726150203e,0x6220706f6f6c2066\n"
".quad 0x656e696c2079646f,0x6568202c35353120,0x6c6562616c206461,0x355f744c24206465\n"
".quad 0x090a34393337325f,0x09363109636f6c2e,0x6d090a3009333931,0x09203436662e6c75\n"
".quad 0x25202c3631646625,0x6625202c31316466,0x6461090a3b303164,0x2509203436662e64\n"
".quad 0x6625202c38336466,0x646625202c363164,0x646461090a3b3631,0x662509203436662e\n"
".quad 0x646625202c303164,0x3833646625202c39,0x09636f6c2e090a3b,0x3009343931093631\n"
".quad 0x36662e627573090a,0x3933646625092034,0x2c3032646625202c,0x0a3b353364662520\n"
".quad 0x3436662e64646109,0x2c31316466250920,0x25202c3864662520,0x2e090a3b39336466\n"
".quad 0x3109363109636f6c,0x756d090a30093539,0x2509203436662e6c,0x6625202c30346466\n"
".quad 0x646625202c303164,0x6f6c2e090a3b3031,0x3339310936310963,0x2e627573090a3009\n"
".quad 0x3172250920323373,0x31317225202c3432,0x6d090a3b35202c31,0x09203233752e766f\n"
".quad 0x30202c3532317225,0x2e70746573090a3b,0x09203233732e656c,0x7225202c38317025\n"
".quad 0x317225202c343231,0x702540090a3b3532,0x0920617262203831,0x3036335f355f4c24\n"
".quad 0x3c2f2f200a3b3839,0x6150203e706f6f6c,0x6f6c20666f207472,0x2079646f6220706f\n"
".quad 0x35353120656e696c,0x6c2064616568202c,0x242064656c656261,0x3337325f355f744c\n"
".quad 0x2e6c756d090a3439,0x6466250920343666,0x31646625202c3032,0x3131646625202c31\n"
".quad 0x662e646461090a3b,0x3464662509203436,0x3032646625202c31,0x3b3034646625202c\n"
".quad 0x36662e766f6d090a,0x3234646625092034,0x303130346430202c,0x3030303030303030\n"
".quad 0x2f2f093b30303030,0x70746573090a3420,0x203436662e74672e,0x25202c3931702509\n"
".quad 0x6625202c31346466,0x2140090a3b323464,0x6172622039317025,0x335f355f4c240920\n"
".quad 0x4c240a3b32343835,0x38393036335f355f,0x09636f6c2e090a3a,0x3009313032093631\n"
".quad 0x33732e766f6d090a,0x3531317225092032,0x3b3432317225202c,0x6e752e617262090a\n"
".quad 0x6557444c24092069,0x34315a5f5f69646e,0x646e614d636c6143,0x6449746f72626c65\n"
".quad 0x535f30535f546945,0x5f62695f30535f30,0x240a3b315f323132,0x343835335f355f4c\n"
".quad 0x6c3c2f2f200a3a32,0x726150203e706f6f,0x6f6f6c20666f2074,0x6c2079646f622070\n"
".quad 0x2c35353120656e69,0x616c206461656820,0x4c242064656c6562,0x393337325f355f74\n"
".quad 0x09636f6c2e090a34,0x3009323032093631,0x36662e6c756d090a,0x3631646625092034\n"
".quad 0x2c3131646625202c,0x0a3b303164662520,0x3436662e64646109,0x2c33346466250920\n"
".quad 0x202c363164662520,0x090a3b3631646625,0x203436662e646461,0x202c303164662509\n"
".quad 0x6625202c39646625,0x6c2e090a3b333464,0x303209363109636f,0x627573090a300933\n"
".quad 0x662509203436662e,0x646625202c343464,0x34646625202c3032,0x2e646461090a3b30\n"
".quad 0x6466250920343666,0x38646625202c3131,0x3b3434646625202c,0x3109636f6c2e090a\n"
".quad 0x0a30093430320936,0x3436662e6c756d09,0x2c35346466250920,0x202c303164662520\n"
".quad 0x090a3b3031646625,0x09363109636f6c2e,0x73090a3009323032,0x09203233732e6275\n"
".quad 0x25202c3632317225,0x3b36202c31313172,0x33752e766f6d090a,0x3732317225092032\n"
".quad 0x6573090a3b30202c,0x33732e656c2e7074,0x2c30327025092032,0x202c363231722520\n"
".quad 0x090a3b3732317225,0x7262203032702540,0x5f355f4c24092061,0x200a3b3031363633\n"
".quad 0x3e706f6f6c3c2f2f,0x666f207472615020,0x6f6220706f6f6c20,0x20656e696c207964\n"
".quad 0x616568202c353531,0x656c6562616c2064,0x5f355f744c242064,0x6d090a3439333732\n"
".quad 0x09203436662e6c75,0x25202c3032646625,0x6625202c31316466,0x6461090a3b313164\n"
".quad 0x2509203436662e64,0x6625202c36346466,0x646625202c303264,0x766f6d090a3b3534\n"
".quad 0x662509203436662e,0x346430202c373464,0x3030303030303130,0x3b30303030303030\n"
".quad 0x73090a34202f2f09,0x662e74672e707465,0x3132702509203436,0x2c3634646625202c\n"
".quad 0x0a3b373464662520,0x2031327025214009,0x5f4c240920617262,0x3b34353336335f35\n"
".quad 0x36335f355f4c240a,0x6c2e090a3a303136,0x313209363109636f,0x766f6d090a300930\n"
".quad 0x722509203233732e,0x317225202c353131,0x617262090a3b3632,0x4c240920696e752e\n"
".quad 0x5f5f69646e655744,0x4d636c614334315a,0x6f72626c65646e61,0x535f546945644974\n"
".quad 0x5f30535f30535f30,0x315f3231325f6269,0x335f355f4c240a3b,0x2f200a3a34353336\n"
".quad 0x203e706f6f6c3c2f,0x20666f2074726150,0x646f6220706f6f6c,0x3120656e696c2079\n"
".quad 0x64616568202c3535,0x64656c6562616c20,0x325f355f744c2420,0x6c2e090a34393337\n"
".quad 0x313209363109636f,0x6c756d090a300931,0x662509203436662e,0x646625202c363164\n"
".quad 0x31646625202c3131,0x2e646461090a3b30,0x6466250920343666,0x31646625202c3834\n"
".quad 0x3631646625202c36,0x662e646461090a3b,0x3164662509203436,0x2c39646625202c30\n"
".quad 0x0a3b383464662520,0x363109636f6c2e09,0x090a300932313209,0x203436662e627573\n"
".quad 0x202c393464662509,0x25202c3032646625,0x61090a3b35346466,0x09203436662e6464\n"
".quad 0x25202c3131646625,0x646625202c386466,0x6f6c2e090a3b3934,0x3331320936310963\n"
".quad 0x2e6c756d090a3009,0x6466250920343666,0x31646625202c3035,0x3031646625202c30\n"
".quad 0x09636f6c2e090a3b,0x3009313132093631,0x33732e627573090a,0x3832317225092032\n"
".quad 0x2c3131317225202c,0x766f6d090a3b3720,0x722509203233752e,0x0a3b30202c393231\n"
".quad 0x656c2e7074657309,0x702509203233732e,0x32317225202c3232,0x3932317225202c38\n"
".quad 0x3232702540090a3b,0x4c24092061726220,0x32323137335f355f,0x6f6c3c2f2f200a3b\n"
".quad 0x74726150203e706f,0x706f6f6c20666f20,0x696c2079646f6220,0x202c35353120656e\n"
".quad 0x62616c2064616568,0x744c242064656c65,0x34393337325f355f,0x36662e6c756d090a\n"
".quad 0x3032646625092034,0x2c3131646625202c,0x0a3b313164662520,0x3436662e64646109\n"
".quad 0x2c31356466250920,0x202c303264662520,0x090a3b3035646625,0x203436662e766f6d\n"
".quad 0x202c323564662509,0x3030303130346430,0x3030303030303030,0x34202f2f093b3030\n"
".quad 0x672e70746573090a,0x2509203436662e74,0x646625202c333270,0x35646625202c3135\n"
".quad 0x70252140090a3b32,0x0920617262203332,0x3836335f355f4c24,0x355f4c240a3b3636\n"
".quad 0x0a3a32323137335f,0x363109636f6c2e09,0x090a300939313209,0x203233732e766f6d\n"
".quad 0x202c353131722509,0x090a3b3832317225,0x20696e752e617262,0x646e6557444c2409\n"
".quad 0x614334315a5f5f69,0x6c65646e614d636c,0x69456449746f7262,0x5f30535f30535f54\n"
".quad 0x31325f62695f3053,0x5f4c240a3b315f32,0x3a36363836335f35,0x6f6f6c3c2f2f200a\n"
".quad 0x2074726150203e70,0x20706f6f6c20666f,0x6e696c2079646f62,0x68202c3535312065\n"
".quad 0x6562616c20646165,0x5f744c242064656c,0x0a34393337325f35,0x363109636f6c2e09\n"
".quad 0x090a300930323209,0x203436662e6c756d,0x202c363164662509,0x25202c3131646625\n"
".quad 0x61090a3b30316466,0x09203436662e6464,0x25202c3335646625,0x6625202c36316466\n"
".quad 0x6461090a3b363164,0x2509203436662e64,0x6625202c30316466,0x35646625202c3964\n"
".quad 0x636f6c2e090a3b33,0x0931323209363109,0x662e627573090a30,0x3564662509203436\n"
".quad 0x3032646625202c34,0x3b3035646625202c,0x36662e646461090a,0x3131646625092034\n"
".quad 0x202c38646625202c,0x090a3b3435646625,0x09363109636f6c2e,0x6d090a3009323232\n"
".quad 0x09203436662e6c75,0x25202c3535646625,0x6625202c30316466,0x6c2e090a3b303164\n"
".quad 0x323209363109636f,0x627573090a300930,0x722509203233732e,0x317225202c303331\n"
".quad 0x090a3b38202c3131,0x203233752e766f6d,0x202c313331722509,0x70746573090a3b30\n"
".quad 0x203233732e656c2e,0x25202c3432702509,0x7225202c30333172,0x2540090a3b313331\n"
".quad 0x2061726220343270,0x37335f355f4c2409,0x2f2f200a3b343336,0x50203e706f6f6c3c\n"
".quad 0x6c20666f20747261,0x79646f6220706f6f,0x353120656e696c20,0x2064616568202c35\n"
".quad 0x2064656c6562616c,0x37325f355f744c24,0x6c756d090a343933,0x662509203436662e\n"
".quad 0x646625202c303264,0x31646625202c3131,0x2e646461090a3b31,0x6466250920343666\n"
".quad 0x32646625202c3635,0x3535646625202c30,0x662e766f6d090a3b,0x3564662509203436\n"
".quad 0x3130346430202c37,0x3030303030303030,0x2f093b3030303030,0x746573090a34202f\n"
".quad 0x3436662e74672e70,0x202c353270250920,0x25202c3635646625,0x40090a3b37356466\n"
".quad 0x7262203532702521,0x5f355f4c24092061,0x240a3b3837333733,0x333637335f355f4c\n"
".quad 0x636f6c2e090a3a34,0x0938323209363109,0x732e766f6d090a30,0x3131722509203233\n"
".quad 0x3033317225202c35,0x752e617262090a3b,0x57444c240920696e,0x315a5f5f69646e65\n"
".quad 0x6e614d636c614334,0x49746f72626c6564,0x5f30535f54694564,0x62695f30535f3053\n"
".quad 0x0a3b315f3231325f,0x3337335f355f4c24,0x3c2f2f200a3a3837,0x6150203e706f6f6c\n"
".quad 0x6f6c20666f207472,0x2079646f6220706f,0x35353120656e696c,0x6c2064616568202c\n"
".quad 0x242064656c656261,0x3337325f355f744c,0x636f6c2e090a3439,0x0939323209363109\n"
".quad 0x662e6c756d090a30,0x3164662509203436,0x3131646625202c36,0x3b3031646625202c\n"
".quad 0x36662e646461090a,0x3835646625092034,0x2c3631646625202c,0x0a3b363164662520\n"
".quad 0x3436662e64646109,0x2c30316466250920,0x25202c3964662520,0x2e090a3b38356466\n"
".quad 0x3209363109636f6c,0x7573090a30093033,0x2509203436662e62,0x6625202c39356466\n"
".quad 0x646625202c303264,0x646461090a3b3535,0x662509203436662e,0x646625202c313164\n"
".quad 0x3935646625202c38,0x09636f6c2e090a3b,0x3009313332093631,0x36662e6c756d090a\n"
".quad 0x3036646625092034,0x2c3031646625202c,0x0a3b303164662520,0x363109636f6c2e09\n"
".quad 0x090a300939323209,0x203233732e627573,0x202c323331722509,0x39202c3131317225\n"
".quad 0x752e766f6d090a3b,0x3331722509203233,0x73090a3b30202c33,0x732e656c2e707465\n"
".quad 0x3632702509203233,0x2c3233317225202c,0x0a3b333331722520,0x6220363270254009\n"
".quad 0x355f4c2409206172,0x0a3b36343138335f,0x706f6f6c3c2f2f20,0x6f2074726150203e\n"
".quad 0x6220706f6f6c2066,0x656e696c2079646f,0x6568202c35353120,0x6c6562616c206461\n"
".quad 0x355f744c24206465,0x090a34393337325f,0x203436662e6c756d,0x202c303264662509\n"
".quad 0x25202c3131646625,0x61090a3b31316466,0x09203436662e6464,0x25202c3136646625\n"
".quad 0x6625202c30326466,0x6f6d090a3b303664,0x2509203436662e76,0x6430202c32366466\n"
".quad 0x3030303030313034,0x3030303030303030,0x090a34202f2f093b,0x2e74672e70746573\n"
".quad 0x3270250920343666,0x3136646625202c37,0x3b3236646625202c,0x373270252140090a\n"
".quad 0x4c24092061726220,0x30393837335f355f,0x335f355f4c240a3b,0x2e090a3a36343138\n"
".quad 0x3209363109636f6c,0x6f6d090a30093733,0x2509203233732e76,0x7225202c35313172\n"
".quad 0x7262090a3b323331,0x240920696e752e61,0x5f69646e6557444c,0x636c614334315a5f\n"
".quad 0x72626c65646e614d,0x5f5469456449746f,0x30535f30535f3053,0x5f3231325f62695f\n"
".quad 0x5f355f4c240a3b31,0x200a3a3039383733,0x3e706f6f6c3c2f2f,0x666f207472615020\n"
".quad 0x6f6220706f6f6c20,0x20656e696c207964,0x616568202c353531,0x656c6562616c2064\n"
".quad 0x5f355f744c242064,0x2e090a3439333732,0x3209363109636f6c,0x756d090a30093833\n"
".quad 0x2509203436662e6c,0x6625202c36316466,0x646625202c313164,0x646461090a3b3031\n"
".quad 0x662509203436662e,0x646625202c333664,0x31646625202c3631,0x2e646461090a3b36\n"
".quad 0x6466250920343666,0x39646625202c3031,0x3b3336646625202c,0x3109636f6c2e090a\n"
".quad 0x0a30093933320936,0x3436662e62757309,0x2c34366466250920,0x202c303264662520\n"
".quad 0x090a3b3036646625,0x203436662e646461,0x202c313164662509,0x6625202c38646625\n"
".quad 0x6c2e090a3b343664,0x343209363109636f,0x6c756d090a300930,0x662509203436662e\n"
".quad 0x646625202c353664,0x31646625202c3031,0x636f6c2e090a3b30,0x0938333209363109\n"
".quad 0x732e627573090a30,0x3331722509203233,0x3131317225202c34,0x6d090a3b3031202c\n"
".quad 0x09203233752e766f,0x30202c3533317225,0x2e70746573090a3b,0x09203233732e656c\n"
".quad 0x7225202c38327025,0x317225202c343331,0x702540090a3b3533,0x0920617262203832\n"
".quad 0x3638335f355f4c24,0x3c2f2f200a3b3835,0x6150203e706f6f6c,0x6f6c20666f207472\n"
".quad 0x2079646f6220706f,0x35353120656e696c,0x6c2064616568202c,0x242064656c656261\n"
".quad 0x3337325f355f744c,0x2e6c756d090a3439,0x6466250920343666,0x31646625202c3032\n"
".quad 0x3131646625202c31,0x662e646461090a3b,0x3664662509203436,0x3032646625202c36\n"
".quad 0x3b3536646625202c,0x36662e766f6d090a,0x3736646625092034,0x303130346430202c\n"
".quad 0x3030303030303030,0x2f2f093b30303030,0x70746573090a3420,0x203436662e74672e\n"
".quad 0x25202c3932702509,0x6625202c36366466,0x2140090a3b373664,0x6172622039327025\n"
".quad 0x335f355f4c240920,0x4c240a3b32303438,0x38353638335f355f,0x09636f6c2e090a3a\n"
".quad 0x3009363432093631,0x33732e766f6d090a,0x3531317225092032,0x3b3433317225202c\n"
".quad 0x6e752e617262090a,0x6557444c24092069,0x34315a5f5f69646e,0x646e614d636c6143\n"
".quad 0x6449746f72626c65,0x535f30535f546945,0x5f62695f30535f30,0x240a3b315f323132\n"
".quad 0x303438335f355f4c,0x6c3c2f2f200a3a32,0x726150203e706f6f,0x6f6f6c20666f2074\n"
".quad 0x6c2079646f622070,0x2c35353120656e69,0x616c206461656820,0x4c242064656c6562\n"
".quad 0x393337325f355f74,0x09636f6c2e090a34,0x3009373432093631,0x36662e6c756d090a\n"
".quad 0x3631646625092034,0x2c3131646625202c,0x0a3b303164662520,0x3436662e64646109\n"
".quad 0x2c38366466250920,0x202c363164662520,0x090a3b3631646625,0x203436662e646461\n"
".quad 0x202c303164662509,0x6625202c39646625,0x6c2e090a3b383664,0x343209363109636f\n"
".quad 0x627573090a300938,0x662509203436662e,0x646625202c393664,0x36646625202c3032\n"
".quad 0x2e646461090a3b35,0x6466250920343666,0x38646625202c3131,0x3b3936646625202c\n"
".quad 0x3109636f6c2e090a,0x0a30093934320936,0x3436662e6c756d09,0x2c30376466250920\n"
".quad 0x202c303164662520,0x090a3b3031646625,0x09363109636f6c2e,0x73090a3009373432\n"
".quad 0x09203233732e6275,0x25202c3633317225,0x3131202c31313172,0x752e766f6d090a3b\n"
".quad 0x3331722509203233,0x73090a3b30202c37,0x732e656c2e707465,0x3033702509203233\n"
".quad 0x2c3633317225202c,0x0a3b373331722520,0x6220303370254009,0x355f4c2409206172\n"
".quad 0x0a3b30373139335f,0x706f6f6c3c2f2f20,0x6f2074726150203e,0x6220706f6f6c2066\n"
".quad 0x656e696c2079646f,0x6568202c35353120,0x6c6562616c206461,0x355f744c24206465\n"
".quad 0x090a34393337325f,0x203436662e6c756d,0x202c303264662509,0x25202c3131646625\n"
".quad 0x61090a3b31316466,0x09203436662e6464,0x25202c3137646625,0x6625202c30326466\n"
".quad 0x6f6d090a3b303764,0x2509203436662e76,0x6430202c32376466,0x3030303030313034\n"
".quad 0x3030303030303030,0x090a34202f2f093b,0x2e74672e70746573,0x3370250920343666\n"
".quad 0x3137646625202c31,0x3b3237646625202c,0x313370252140090a,0x4c24092061726220\n"
".quad 0x34313938335f355f,0x335f355f4c240a3b,0x2e090a3a30373139,0x3209363109636f6c\n"
".quad 0x6f6d090a30093535,0x2509203233732e76,0x7225202c35313172,0x7262090a3b363331\n"
".quad 0x240920696e752e61,0x5f69646e6557444c,0x636c614334315a5f,0x72626c65646e614d\n"
".quad 0x5f5469456449746f,0x30535f30535f3053,0x5f3231325f62695f,0x5f355f4c240a3b31\n"
".quad 0x200a3a3431393833,0x3e706f6f6c3c2f2f,0x666f207472615020,0x6f6220706f6f6c20\n"
".quad 0x20656e696c207964,0x616568202c353531,0x656c6562616c2064,0x5f355f744c242064\n"
".quad 0x2e090a3439333732,0x3209363109636f6c,0x756d090a30093635,0x2509203436662e6c\n"
".quad 0x6625202c36316466,0x646625202c313164,0x646461090a3b3031,0x662509203436662e\n"
".quad 0x646625202c333764,0x31646625202c3631,0x2e646461090a3b36,0x6466250920343666\n"
".quad 0x39646625202c3031,0x3b3337646625202c,0x3109636f6c2e090a,0x0a30093735320936\n"
".quad 0x3436662e62757309,0x2c34376466250920,0x202c303264662520,0x090a3b3037646625\n"
".quad 0x203436662e646461,0x202c313164662509,0x6625202c38646625,0x6c2e090a3b343764\n"
".quad 0x353209363109636f,0x6c756d090a300938,0x662509203436662e,0x646625202c353764\n"
".quad 0x31646625202c3031,0x636f6c2e090a3b30,0x0936353209363109,0x732e627573090a30\n"
".quad 0x3331722509203233,0x3131317225202c38,0x6d090a3b3231202c,0x09203233752e766f\n"
".quad 0x30202c3933317225,0x2e70746573090a3b,0x09203233732e656c,0x7225202c32337025\n"
".quad 0x317225202c383331,0x702540090a3b3933,0x0920617262203233,0x3639335f355f4c24\n"
".quad 0x3c2f2f200a3b3238,0x6150203e706f6f6c,0x6f6c20666f207472,0x2079646f6220706f\n"
".quad 0x35353120656e696c,0x6c2064616568202c,0x242064656c656261,0x3337325f355f744c\n"
".quad 0x2e6c756d090a3439,0x6466250920343666,0x31646625202c3032,0x3131646625202c31\n"
".quad 0x662e646461090a3b,0x3764662509203436,0x3032646625202c36,0x3b3537646625202c\n"
".quad 0x36662e766f6d090a,0x3737646625092034,0x303130346430202c,0x3030303030303030\n"
".quad 0x2f2f093b30303030,0x70746573090a3420,0x203436662e74672e,0x25202c3333702509\n"
".quad 0x6625202c36376466,0x2140090a3b373764,0x6172622033337025,0x335f355f4c240920\n"
".quad 0x4c240a3b36323439,0x32383639335f355f,0x09636f6c2e090a3a,0x3009343632093631\n"
".quad 0x33732e766f6d090a,0x3531317225092032,0x3b3833317225202c,0x6e752e617262090a\n"
".quad 0x6557444c24092069,0x34315a5f5f69646e,0x646e614d636c6143,0x6449746f72626c65\n"
".quad 0x535f30535f546945,0x5f62695f30535f30,0x240a3b315f323132,0x323439335f355f4c\n"
".quad 0x6c3c2f2f200a3a36,0x726150203e706f6f,0x6f6f6c20666f2074,0x6c2079646f622070\n"
".quad 0x2c35353120656e69,0x616c206461656820,0x4c242064656c6562,0x393337325f355f74\n"
".quad 0x09636f6c2e090a34,0x3009353632093631,0x36662e6c756d090a,0x3631646625092034\n"
".quad 0x2c3131646625202c,0x0a3b303164662520,0x3436662e64646109,0x2c38376466250920\n"
".quad 0x202c363164662520,0x090a3b3631646625,0x203436662e646461,0x202c303164662509\n"
".quad 0x6625202c39646625,0x6c2e090a3b383764,0x363209363109636f,0x627573090a300936\n"
".quad 0x662509203436662e,0x646625202c393764,0x37646625202c3032,0x2e646461090a3b35\n"
".quad 0x6466250920343666,0x38646625202c3131,0x3b3937646625202c,0x3109636f6c2e090a\n"
".quad 0x0a30093736320936,0x3436662e6c756d09,0x2c30386466250920,0x202c303164662520\n"
".quad 0x090a3b3031646625,0x09363109636f6c2e,0x73090a3009353632,0x09203233732e6275\n"
".quad 0x25202c3034317225,0x3331202c31313172,0x752e766f6d090a3b,0x3431722509203233\n"
".quad 0x73090a3b30202c31,0x732e656c2e707465,0x3433702509203233,0x2c3034317225202c\n"
".quad 0x0a3b313431722520,0x6220343370254009,0x355f4c2409206172,0x0a3b34393130345f\n"
".quad 0x706f6f6c3c2f2f20,0x6f2074726150203e,0x6220706f6f6c2066,0x656e696c2079646f\n"
".quad 0x6568202c35353120,0x6c6562616c206461,0x355f744c24206465,0x090a34393337325f\n"
".quad 0x203436662e6c756d,0x202c303264662509,0x25202c3131646625,0x61090a3b31316466\n"
".quad 0x09203436662e6464,0x25202c3138646625,0x6625202c30326466,0x6f6d090a3b303864\n"
".quad 0x2509203436662e76,0x6430202c32386466,0x3030303030313034,0x3030303030303030\n"
".quad 0x090a34202f2f093b,0x2e74672e70746573,0x3370250920343666,0x3138646625202c35\n"
".quad 0x3b3238646625202c,0x353370252140090a,0x4c24092061726220,0x38333939335f355f\n"
".quad 0x345f355f4c240a3b,0x2e090a3a34393130,0x3209363109636f6c,0x6f6d090a30093337\n"
".quad 0x2509203233732e76,0x7225202c35313172,0x7262090a3b303431,0x240920696e752e61\n"
".quad 0x5f69646e6557444c,0x636c614334315a5f,0x72626c65646e614d,0x5f5469456449746f\n"
".quad 0x30535f30535f3053,0x5f3231325f62695f,0x5f355f4c240a3b31,0x200a3a3833393933\n"
".quad 0x3e706f6f6c3c2f2f,0x666f207472615020,0x6f6220706f6f6c20,0x20656e696c207964\n"
".quad 0x616568202c353531,0x656c6562616c2064,0x5f355f744c242064,0x2e090a3439333732\n"
".quad 0x3209363109636f6c,0x756d090a30093437,0x2509203436662e6c,0x6625202c36316466\n"
".quad 0x646625202c313164,0x646461090a3b3031,0x662509203436662e,0x646625202c333864\n"
".quad 0x31646625202c3631,0x2e646461090a3b36,0x6466250920343666,0x39646625202c3031\n"
".quad 0x3b3338646625202c,0x3109636f6c2e090a,0x0a30093537320936,0x3436662e62757309\n"
".quad 0x2c34386466250920,0x202c303264662520,0x090a3b3038646625,0x203436662e646461\n"
".quad 0x202c313164662509,0x6625202c38646625,0x6c2e090a3b343864,0x373209363109636f\n"
".quad 0x6c756d090a300936,0x662509203436662e,0x646625202c353864,0x31646625202c3031\n"
".quad 0x636f6c2e090a3b30,0x0934373209363109,0x732e627573090a30,0x3431722509203233\n"
".quad 0x3131317225202c32,0x6d090a3b3431202c,0x09203233752e766f,0x30202c3334317225\n"
".quad 0x2e70746573090a3b,0x09203233732e656c,0x7225202c36337025,0x317225202c323431\n"
".quad 0x702540090a3b3334,0x0920617262203633,0x3730345f355f4c24,0x3c2f2f200a3b3630\n"
".quad 0x6150203e706f6f6c,0x6f6c20666f207472,0x2079646f6220706f,0x35353120656e696c\n"
".quad 0x6c2064616568202c,0x242064656c656261,0x3337325f355f744c,0x2e6c756d090a3439\n"
".quad 0x6466250920343666,0x31646625202c3032,0x3131646625202c31,0x662e646461090a3b\n"
".quad 0x3864662509203436,0x3032646625202c36,0x3b3538646625202c,0x36662e766f6d090a\n"
".quad 0x3738646625092034,0x303130346430202c,0x3030303030303030,0x2f2f093b30303030\n"
".quad 0x70746573090a3420,0x203436662e74672e,0x25202c3733702509,0x6625202c36386466\n"
".quad 0x2140090a3b373864,0x6172622037337025,0x345f355f4c240920,0x4c240a3b30353430\n"
".quad 0x36303730345f355f,0x09636f6c2e090a3a,0x3009323832093631,0x33732e766f6d090a\n"
".quad 0x3531317225092032,0x3b3234317225202c,0x6e752e617262090a,0x6557444c24092069\n"
".quad 0x34315a5f5f69646e,0x646e614d636c6143,0x6449746f72626c65,0x535f30535f546945\n"
".quad 0x5f62695f30535f30,0x240a3b315f323132,0x353430345f355f4c,0x6c3c2f2f200a3a30\n"
".quad 0x726150203e706f6f,0x6f6f6c20666f2074,0x6c2079646f622070,0x2c35353120656e69\n"
".quad 0x616c206461656820,0x4c242064656c6562,0x393337325f355f74,0x09636f6c2e090a34\n"
".quad 0x3009333832093631,0x36662e6c756d090a,0x3631646625092034,0x2c3131646625202c\n"
".quad 0x0a3b303164662520,0x3436662e64646109,0x2c38386466250920,0x202c363164662520\n"
".quad 0x090a3b3631646625,0x203436662e646461,0x202c303164662509,0x6625202c39646625\n"
".quad 0x6c2e090a3b383864,0x383209363109636f,0x627573090a300934,0x662509203436662e\n"
".quad 0x646625202c393864,0x38646625202c3032,0x2e646461090a3b35,0x6466250920343666\n"
".quad 0x38646625202c3131,0x3b3938646625202c,0x3109636f6c2e090a,0x0a30093538320936\n"
".quad 0x3436662e6c756d09,0x2c30396466250920,0x202c303164662520,0x090a3b3031646625\n"
".quad 0x09363109636f6c2e,0x73090a3009333832,0x09203233732e6275,0x25202c3434317225\n"
".quad 0x3531202c31313172,0x752e766f6d090a3b,0x3431722509203233,0x73090a3b30202c35\n"
".quad 0x732e656c2e707465,0x3833702509203233,0x2c3434317225202c,0x0a3b353431722520\n"
".quad 0x6220383370254009,0x355f4c2409206172,0x0a3b38313231345f,0x706f6f6c3c2f2f20\n"
".quad 0x6f2074726150203e,0x6220706f6f6c2066,0x656e696c2079646f,0x6568202c35353120\n"
".quad 0x6c6562616c206461,0x355f744c24206465,0x090a34393337325f,0x203436662e6c756d\n"
".quad 0x202c303264662509,0x25202c3131646625,0x61090a3b31316466,0x09203436662e6464\n"
".quad 0x25202c3139646625,0x6625202c30326466,0x6f6d090a3b303964,0x2509203436662e76\n"
".quad 0x6430202c32396466,0x3030303030313034,0x3030303030303030,0x090a34202f2f093b\n"
".quad 0x2e74672e70746573,0x3370250920343666,0x3139646625202c39,0x3b3239646625202c\n"
".quad 0x393370252140090a,0x4c24092061726220,0x32363930345f355f,0x345f355f4c240a3b\n"
".quad 0x2e090a3a38313231,0x3209363109636f6c,0x6f6d090a30093139,0x2509203233732e76\n"
".quad 0x7225202c35313172,0x7262090a3b343431,0x240920696e752e61,0x5f69646e6557444c\n"
".quad 0x636c614334315a5f,0x72626c65646e614d,0x5f5469456449746f,0x30535f30535f3053\n"
".quad 0x5f3231325f62695f,0x5f355f4c240a3b31,0x200a3a3236393034,0x3e706f6f6c3c2f2f\n"
".quad 0x666f207472615020,0x6f6220706f6f6c20,0x20656e696c207964,0x616568202c353531\n"
".quad 0x656c6562616c2064,0x5f355f744c242064,0x2e090a3439333732,0x3209363109636f6c\n"
".quad 0x756d090a30093239,0x2509203436662e6c,0x6625202c36316466,0x646625202c313164\n"
".quad 0x646461090a3b3031,0x662509203436662e,0x646625202c333964,0x31646625202c3631\n"
".quad 0x2e646461090a3b36,0x6466250920343666,0x39646625202c3031,0x3b3339646625202c\n"
".quad 0x3109636f6c2e090a,0x0a30093339320936,0x3436662e62757309,0x2c34396466250920\n"
".quad 0x202c303264662520,0x090a3b3039646625,0x203436662e646461,0x202c313164662509\n"
".quad 0x6625202c38646625,0x6c2e090a3b343964,0x393209363109636f,0x6c756d090a300934\n"
".quad 0x662509203436662e,0x646625202c353964,0x31646625202c3031,0x636f6c2e090a3b30\n"
".quad 0x0932393209363109,0x732e627573090a30,0x3431722509203233,0x3131317225202c36\n"
".quad 0x6d090a3b3631202c,0x09203233752e766f,0x30202c3734317225,0x2e70746573090a3b\n"
".quad 0x09203233732e656c,0x7225202c30347025,0x317225202c363431,0x702540090a3b3734\n"
".quad 0x0920617262203034,0x3731345f355f4c24,0x3c2f2f200a3b3033,0x6150203e706f6f6c\n"
".quad 0x6f6c20666f207472,0x2079646f6220706f,0x35353120656e696c,0x6c2064616568202c\n"
".quad 0x242064656c656261,0x3337325f355f744c,0x2e6c756d090a3439,0x6466250920343666\n"
".quad 0x31646625202c3032,0x3131646625202c31,0x662e646461090a3b,0x3964662509203436\n"
".quad 0x3032646625202c36,0x3b3539646625202c,0x36662e766f6d090a,0x3739646625092034\n"
".quad 0x303130346430202c,0x3030303030303030,0x2f2f093b30303030,0x70746573090a3420\n"
".quad 0x203436662e74672e,0x25202c3134702509,0x6625202c36396466,0x2140090a3b373964\n"
".quad 0x6172622031347025,0x345f355f4c240920,0x4c240a3b34373431,0x30333731345f355f\n"
".quad 0x09636f6c2e090a3a,0x3009303033093631,0x33732e766f6d090a,0x3531317225092032\n"
".quad 0x3b3634317225202c,0x6e752e617262090a,0x6557444c24092069,0x34315a5f5f69646e\n"
".quad 0x646e614d636c6143,0x6449746f72626c65,0x535f30535f546945,0x5f62695f30535f30\n"
".quad 0x240a3b315f323132,0x373431345f355f4c,0x6c3c2f2f200a3a34,0x726150203e706f6f\n"
".quad 0x6f6f6c20666f2074,0x6c2079646f622070,0x2c35353120656e69,0x616c206461656820\n"
".quad 0x4c242064656c6562,0x393337325f355f74,0x09636f6c2e090a34,0x3009313033093631\n"
".quad 0x36662e6c756d090a,0x3631646625092034,0x2c3131646625202c,0x0a3b303164662520\n"
".quad 0x3436662e64646109,0x2c38396466250920,0x202c363164662520,0x090a3b3631646625\n"
".quad 0x203436662e646461,0x202c303164662509,0x6625202c39646625,0x6c2e090a3b383964\n"
".quad 0x303309363109636f,0x627573090a300932,0x662509203436662e,0x646625202c393964\n"
".quad 0x39646625202c3032,0x2e646461090a3b35,0x6466250920343666,0x38646625202c3131\n"
".quad 0x3b3939646625202c,0x3109636f6c2e090a,0x0a30093330330936,0x3436662e6c756d09\n"
".quad 0x3030316466250920,0x2c3031646625202c,0x0a3b303164662520,0x363109636f6c2e09\n"
".quad 0x090a300931303309,0x203233732e627573,0x202c383431722509,0x31202c3131317225\n"
".quad 0x2e766f6d090a3b37,0x3172250920323375,0x090a3b30202c3934,0x2e656c2e70746573\n"
".quad 0x3470250920323373,0x3834317225202c32,0x3b3934317225202c,0x203234702540090a\n"
".quad 0x5f4c240920617262,0x3b32343232345f35,0x6f6f6c3c2f2f200a,0x2074726150203e70\n"
".quad 0x20706f6f6c20666f,0x6e696c2079646f62,0x68202c3535312065,0x6562616c20646165\n"
".quad 0x5f744c242064656c,0x0a34393337325f35,0x3436662e6c756d09,0x2c30326466250920\n"
".quad 0x202c313164662520,0x090a3b3131646625,0x203436662e646461,0x2c31303164662509\n"
".quad 0x202c303264662520,0x0a3b303031646625,0x3436662e766f6d09,0x3230316466250920\n"
".quad 0x303130346430202c,0x3030303030303030,0x2f2f093b30303030,0x70746573090a3420\n"
".quad 0x203436662e74672e,0x25202c3334702509,0x25202c3130316466,0x090a3b3230316466\n"
".quad 0x6220333470252140,0x355f4c2409206172,0x0a3b36383931345f,0x3232345f355f4c24\n"
".quad 0x6f6c2e090a3a3234,0x3930330936310963,0x2e766f6d090a3009,0x3172250920323373\n"
".quad 0x34317225202c3531,0x2e617262090a3b38,0x444c240920696e75,0x5a5f5f69646e6557\n"
".quad 0x614d636c61433431,0x746f72626c65646e,0x30535f5469456449,0x695f30535f30535f\n"
".quad 0x3b315f3231325f62,0x31345f355f4c240a,0x2f2f200a3a363839,0x50203e706f6f6c3c\n"
".quad 0x6c20666f20747261,0x79646f6220706f6f,0x353120656e696c20,0x2064616568202c35\n"
".quad 0x2064656c6562616c,0x37325f355f744c24,0x6f6c2e090a343933,0x3031330936310963\n"
".quad 0x2e6c756d090a3009,0x6466250920343666,0x31646625202c3631,0x3031646625202c31\n"
".quad 0x662e646461090a3b,0x3164662509203436,0x31646625202c3330,0x3631646625202c36\n"
".quad 0x662e646461090a3b,0x3164662509203436,0x2c39646625202c30,0x3b33303164662520\n"
".quad 0x3109636f6c2e090a,0x0a30093131330936,0x3436662e62757309,0x3430316466250920\n"
".quad 0x2c3032646625202c,0x3b30303164662520,0x36662e646461090a,0x3131646625092034\n"
".quad 0x202c38646625202c,0x0a3b343031646625,0x363109636f6c2e09,0x090a300932313309\n"
".quad 0x203436662e6c756d,0x2c35303164662509,0x202c303164662520,0x090a3b3031646625\n"
".quad 0x09363109636f6c2e,0x73090a3009303133,0x09203233732e6275,0x25202c3035317225\n"
".quad 0x3831202c31313172,0x752e766f6d090a3b,0x3531722509203233,0x73090a3b30202c31\n"
".quad 0x732e656c2e707465,0x3434702509203233,0x2c3035317225202c,0x0a3b313531722520\n"
".quad 0x6220343470254009,0x355f4c2409206172,0x0a3b34353732345f,0x706f6f6c3c2f2f20\n"
".quad 0x6f2074726150203e,0x6220706f6f6c2066,0x656e696c2079646f,0x6568202c35353120\n"
".quad 0x6c6562616c206461,0x355f744c24206465,0x090a34393337325f,0x203436662e6c756d\n"
".quad 0x202c303264662509,0x25202c3131646625,0x61090a3b31316466,0x09203436662e6464\n"
".quad 0x202c363031646625,0x25202c3032646625,0x090a3b3530316466,0x203436662e766f6d\n"
".quad 0x2c37303164662509,0x3030313034643020,0x3030303030303030,0x202f2f093b303030\n"
".quad 0x2e70746573090a34,0x09203436662e7467,0x6625202c35347025,0x6625202c36303164\n"
".quad 0x40090a3b37303164,0x7262203534702521,0x5f355f4c24092061,0x240a3b3839343234\n"
".quad 0x353732345f355f4c,0x636f6c2e090a3a34,0x0938313309363109,0x732e766f6d090a30\n"
".quad 0x3131722509203233,0x3035317225202c35,0x752e617262090a3b,0x57444c240920696e\n"
".quad 0x315a5f5f69646e65,0x6e614d636c614334,0x49746f72626c6564,0x5f30535f54694564\n"
".quad 0x62695f30535f3053,0x0a3b315f3231325f,0x3432345f355f4c24,0x3c2f2f200a3a3839\n"
".quad 0x6150203e706f6f6c,0x6f6c20666f207472,0x2079646f6220706f,0x35353120656e696c\n"
".quad 0x6c2064616568202c,0x242064656c656261,0x3337325f355f744c,0x636f6c2e090a3439\n"
".quad 0x0939313309363109,0x662e6c756d090a30,0x3164662509203436,0x3131646625202c36\n"
".quad 0x3b3031646625202c,0x36662e646461090a,0x3031646625092034,0x3631646625202c38\n"
".quad 0x3b3631646625202c,0x36662e646461090a,0x3031646625092034,0x202c39646625202c\n"
".quad 0x0a3b383031646625,0x363109636f6c2e09,0x090a300930323309,0x203436662e627573\n"
".quad 0x2c39303164662509,0x202c303264662520,0x0a3b353031646625,0x3436662e64646109\n"
".quad 0x2c31316466250920,0x25202c3864662520,0x090a3b3930316466,0x09363109636f6c2e\n"
".quad 0x6d090a3009313233,0x09203436662e6c75,0x202c303131646625,0x25202c3031646625\n"
".quad 0x2e090a3b30316466,0x3309363109636f6c,0x7573090a30093532,0x2509203233732e62\n"
".quad 0x7225202c31313172,0x3b3931202c313131,0x3109636f6c2e090a,0x0a30093931330936\n"
".quad 0x3233732e766f6d09,0x2c32353172250920,0x746573090a3b3020,0x3233732e656c2e70\n"
".quad 0x25202c3870250920,0x7225202c31313172,0x2540090a3b323531,0x0920617262203870\n"
".quad 0x3233345f355f4c24,0x3c2f2f200a3b3636,0x6150203e706f6f6c,0x6f6c20666f207472\n"
".quad 0x2079646f6220706f,0x35353120656e696c,0x6c2064616568202c,0x242064656c656261\n"
".quad 0x3337325f355f744c,0x2e6c756d090a3439,0x6466250920343666,0x31646625202c3032\n"
".quad 0x3131646625202c31,0x662e646461090a3b,0x3164662509203436,0x32646625202c3131\n"
".quad 0x3131646625202c30,0x2e766f6d090a3b30,0x6466250920343666,0x346430202c323131\n"
".quad 0x3030303030303130,0x3b30303030303030,0x73090a34202f2f09,0x662e74672e707465\n"
".quad 0x3634702509203436,0x313131646625202c,0x323131646625202c,0x3470252140090a3b\n"
".quad 0x2409206172622036,0x313033345f355f4c,0x5f355f4c240a3b30,0x090a3a3636323334\n"
".quad 0x09363109636f6c2e,0x6d090a3009373233,0x09203233732e766f,0x25202c3531317225\n"
".quad 0x62090a3b31313172,0x0920696e752e6172,0x69646e6557444c24,0x6c614334315a5f5f\n"
".quad 0x626c65646e614d63,0x5469456449746f72,0x535f30535f30535f,0x3231325f62695f30\n"
".quad 0x355f4c240a3b315f,0x0a3a30313033345f,0x706f6f6c3c2f2f20,0x6f2074726150203e\n"
".quad 0x6220706f6f6c2066,0x656e696c2079646f,0x6568202c35353120,0x6c6562616c206461\n"
".quad 0x355f744c24206465,0x090a34393337325f,0x09363109636f6c2e,0x6d090a3009383233\n"
".quad 0x09203436662e6c75,0x25202c3631646625,0x6625202c31316466,0x6461090a3b303164\n"
".quad 0x2509203436662e64,0x25202c3331316466,0x6625202c36316466,0x6461090a3b363164\n"
".quad 0x2509203436662e64,0x6625202c30316466,0x31646625202c3964,0x6f6c2e090a3b3331\n"
".quad 0x3932330936310963,0x2e627573090a3009,0x6466250920343666,0x646625202c343131\n"
".quad 0x31646625202c3032,0x646461090a3b3031,0x662509203436662e,0x646625202c313164\n"
".quad 0x3131646625202c38,0x636f6c2e090a3b34,0x0930333309363109,0x662e6c756d090a30\n"
".quad 0x3164662509203436,0x3031646625202c32,0x3b3031646625202c,0x3109636f6c2e090a\n"
".quad 0x0a30093133330936,0x3436662e6c756d09,0x2c33316466250920,0x202c313164662520\n"
".quad 0x090a3b3131646625,0x09363109636f6c2e,0x62090a3009383233,0x0920696e752e6172\n"
".quad 0x37325f355f744c24,0x444c240a3b343933,0x5a5f5f69646e6557,0x614d636c61433431\n"
".quad 0x746f72626c65646e,0x30535f5469456449,0x695f30535f30535f,0x3a315f3231325f62\n"
".quad 0x3109636f6c2e090a,0x0a30093133310937,0x3233732e766f6d09,0x2c33353172250920\n"
".quad 0x746573090a3b3020,0x3233732e74672e70,0x202c373470250920,0x25202c3531317225\n"
".quad 0x2e090a3b33353172,0x3109363109636f6c,0x646c090a30093133,0x732e6d617261702e\n"
".quad 0x3131722509203233,0x75635f5f5b202c30,0x5f5f6d7261706164,0x65646e614d36315a\n"
".quad 0x735f31746f72626c,0x507645644930316d,0x6934726168637536,0x535f32535f546969\n"
".quad 0x5f32535f32535f32,0x635f6269695f3053,0x0a3b5d68636e7572,0x373109636f6c2e09\n"
".quad 0x090a300931333109,0x203233732e627573,0x202c343531722509,0x25202c3031317225\n"
".quad 0x6d090a3b35313172,0x09203233732e766f,0x30202c3535317225,0x2e706c6573090a3b\n"
".quad 0x3172250920323373,0x35317225202c3635,0x3535317225202c34,0x0a3b37347025202c\n"
".quad 0x3233752e766f6d09,0x2c37353172250920,0x746573090a3b3020,0x3233732e71652e70\n"
".quad 0x202c383470250920,0x25202c3635317225,0x40090a3b37353172,0x6172622038347025\n"
".quad 0x5f355f744c240920,0x090a3b3236333734,0x09373109636f6c2e,0x6c090a3009383331\n"
".quad 0x2e6d617261702e64,0x3172250920323373,0x635f5f5b202c3835,0x5f6d726170616475\n"
".quad 0x646e614d36315a5f,0x5f31746f72626c65,0x7645644930316d73,0x3472616863753650\n"
".quad 0x5f32535f54696969,0x32535f32535f3253,0x5f6269695f30535f,0x6f6974616d696e61\n"
".quad 0x3b5d656d6172466e,0x33732e646461090a,0x3935317225092032,0x2c3835317225202c\n"
".quad 0x0a3b363531722520,0x617261702e646c09,0x7225092038752e6d,0x5f5f5b202c303631\n"
".quad 0x6d72617061647563,0x6e614d36315a5f5f,0x31746f72626c6564,0x45644930316d735f\n"
".quad 0x7261686375365076,0x32535f5469696934,0x535f32535f32535f,0x6269695f30535f32\n"
".quad 0x2b73726f6c6f635f,0x6c756d090a3b5d30,0x203233732e6f6c2e,0x202c313631722509\n"
".quad 0x25202c3935317225,0x63090a3b30363172,0x33752e38752e7476,0x3236317225092032\n"
".quad 0x3b3136317225202c,0x3109636f6c2e090a,0x0a30093933310937,0x617261702e646c09\n"
".quad 0x7225092038752e6d,0x5f5f5b202c333631,0x6d72617061647563,0x6e614d36315a5f5f\n"
".quad 0x31746f72626c6564,0x45644930316d735f,0x7261686375365076,0x32535f5469696934\n"
".quad 0x535f32535f32535f,0x6269695f30535f32,0x2b73726f6c6f635f,0x6c756d090a3b5d31\n"
".quad 0x203233732e6f6c2e,0x202c343631722509,0x25202c3935317225,0x63090a3b33363172\n"
".quad 0x33752e38752e7476,0x3536317225092032,0x3b3436317225202c,0x3109636f6c2e090a\n"
".quad 0x0a30093034310937,0x617261702e646c09,0x7225092038752e6d,0x5f5f5b202c363631\n"
".quad 0x6d72617061647563,0x6e614d36315a5f5f,0x31746f72626c6564,0x45644930316d735f\n"
".quad 0x7261686375365076,0x32535f5469696934,0x535f32535f32535f,0x6269695f30535f32\n"
".quad 0x2b73726f6c6f635f,0x6c756d090a3b5d32,0x203233732e6f6c2e,0x202c373631722509\n"
".quad 0x25202c3935317225,0x63090a3b36363172,0x33752e38752e7476,0x3836317225092032\n"
".quad 0x3b3736317225202c,0x6e752e617262090a,0x355f744c24092069,0x0a3b36303137345f\n"
".quad 0x37345f355f744c24,0x6c2e090a3a323633,0x343109373109636f,0x766f6d090a300934\n"
".quad 0x722509203233752e,0x0a3b30202c383631,0x3233752e766f6d09,0x2c35363172250920\n"
".quad 0x766f6d090a3b3020,0x722509203233752e,0x0a3b30202c323631,0x37345f355f744c24\n"
".quad 0x6c2e090a3a363031,0x353109373109636f,0x2e646c090a300930,0x33732e6d61726170\n"
".quad 0x3936317225092032,0x6475635f5f5b202c,0x5a5f5f6d72617061,0x6c65646e614d3631\n"
".quad 0x6d735f31746f7262,0x3650764564493031,0x6969347261686375,0x32535f32535f5469\n"
".quad 0x535f32535f32535f,0x72665f6269695f30,0x61090a3b5d656d61,0x09203233732e6464\n"
".quad 0x25202c3037317225,0x3b31202c39363172,0x33732e726873090a,0x3137317225092032\n"
".quad 0x2c3037317225202c,0x6f6d090a3b313320,0x2509203233732e76,0x3b31202c32373172\n"
".quad 0x33622e646e61090a,0x3337317225092032,0x2c3137317225202c,0x0a3b323731722520\n"
".quad 0x3233732e64646109,0x2c34373172250920,0x202c333731722520,0x090a3b3037317225\n"
".quad 0x203233732e726873,0x202c353731722509,0x31202c3437317225,0x6c2e6c756d090a3b\n"
".quad 0x2509203233732e6f,0x7225202c36373172,0x317225202c393631,0x2e646461090a3b38\n"
".quad 0x3172250920323373,0x36317225202c3737,0x3637317225202c32,0x732e646461090a3b\n"
".quad 0x3731722509203233,0x3537317225202c38,0x3b3737317225202c,0x33732e766964090a\n"
".quad 0x3937317225092032,0x2c3837317225202c,0x0a3b303731722520,0x373109636f6c2e09\n"
".quad 0x090a300931353109,0x732e6f6c2e6c756d,0x3831722509203233,0x3936317225202c30\n"
".quad 0x0a3b39317225202c,0x3233732e64646109,0x2c31383172250920,0x202c353631722520\n"
".quad 0x090a3b3038317225,0x203233732e646461,0x202c323831722509,0x25202c3537317225\n"
".quad 0x64090a3b31383172,0x09203233732e7669,0x25202c3338317225,0x7225202c32383172\n"
".quad 0x7473090a3b303731,0x2e6c61626f6c672e,0x5b092038752e3276,0x2c5d302b33647225\n"
".quad 0x2c39373172257b20,0x0a3b7d3338317225,0x373109636f6c2e09,0x090a300932353109\n"
".quad 0x732e6f6c2e6c756d,0x3831722509203233,0x3936317225202c34,0x0a3b30327225202c\n"
".quad 0x3233732e64646109,0x2c35383172250920,0x202c383631722520,0x090a3b3438317225\n"
".quad 0x203233732e646461,0x202c363831722509,0x25202c3537317225,0x64090a3b35383172\n"
".quad 0x09203233732e7669,0x25202c3738317225,0x7225202c36383172,0x7473090a3b303731\n"
".quad 0x2e6c61626f6c672e,0x6472255b09203875,0x7225202c5d322b33,0x744c240a3b373831\n"
".quad 0x32383036345f355f,0x5f355f744c240a3a,0x090a3a3232353334,0x09373109636f6c2e\n"
".quad 0x65090a3009353531,0x444c240a3b746978,0x315a5f5f646e6557,0x626c65646e614d36\n"
".quad 0x316d735f31746f72,0x7536507645644930,0x6969693472616863,0x5f32535f32535f54\n"
".quad 0x30535f32535f3253,0x7d090a3a6269695f,0x36315a5f202f2f20,0x72626c65646e614d\n"
".quad 0x30316d735f31746f,0x6375365076456449,0x5469696934726168,0x535f32535f32535f\n"
".quad 0x5f30535f32535f32,0x0000000a0a626969\n"
".text");

extern "C" {

extern const unsigned long long __deviceText_$compute_13$[15658];

}

static __cudaFatPtxEntry __ptxEntries [] = {{(char*)"compute_13",(char*)__deviceText_$compute_13$},{0,0}};
static __cudaFatCubinEntry __cubinEntries[] = {{0,0}};
static __cudaFatDebugEntry __debugEntries0 = {0, 0, 0, 0} ;
static __cudaFatElfEntry __elfEntries0 = {0, 0, 0, 0} ;
static __cudaFatElfEntry __elfEntries1 = {(char*)"sm_13", (char*)__deviceText_$sm_13$, &__elfEntries0, (unsigned int)sizeof(__deviceText_$sm_13$)};



static __cudaFatCudaBinary __fatDeviceText __attribute__ ((section (".nvFatBinSegment")))= {0x1ee55a01,0x00000004,0xa14f518d,(char*)"175390f9bb27f999",(char*)"/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu",(char*)" ",__ptxEntries,__cubinEntries,&__debugEntries0,0,0,0,0,0,0x2f3c7d7e,&__elfEntries1};
# 3 "/tmp/tmpxft_000018e5_00000000-1_Mandelbrot_sm10.cudafe1.stub.c" 2
struct __T20 {uchar4 *__par0;int __par1;int __par2;int __par3;float __par4;float __par5;float __par6;float __par7;float __par8;float __par9;float __par10;uchar4 __par11;int __par12;int __par13;char __par14;int __dummy_field;};
struct __T21 {uchar4 *__par0;int __par1;int __par2;int __par3;float __par4;float __par5;float __par6;float __par7;float __par8;float __par9;float __par10;uchar4 __par11;int __par12;int __par13;char __par14;int __dummy_field;};
struct __T22 {uchar4 *__par0;int __par1;int __par2;int __par3;float __par4;float __par5;float __par6;float __par7;float __par8;uchar4 __par9;int __par10;int __par11;char __par12;int __dummy_field;};
struct __T23 {uchar4 *__par0;int __par1;int __par2;int __par3;double __par4;double __par5;double __par6;double __par7;double __par8;uchar4 __par9;int __par10;int __par11;char __par12;int __dummy_field;};
struct __T24 {uchar4 *__par0;int __par1;int __par2;int __par3;float __par4;float __par5;float __par6;float __par7;float __par8;uchar4 __par9;int __par10;int __par11;char __par12;int __dummy_field;};
struct __T25 {uchar4 *__par0;int __par1;int __par2;int __par3;double __par4;double __par5;double __par6;double __par7;double __par8;uchar4 __par9;int __par10;int __par11;char __par12;int __dummy_field;};
extern void __device_stub__Z18MandelbrotDS0_sm10P6uchar4iiifffffffS_iib(uchar4 *, const int, const int, const int, const float, const float, const float, const float, const float, const float, const float, const uchar4&, const int, const int, const bool);
extern void __device_stub__Z18MandelbrotDS1_sm10P6uchar4iiifffffffS_iib(uchar4 *, const int, const int, const int, const float, const float, const float, const float, const float, const float, const float, const uchar4&, const int, const int, const bool);
static void __device_stub__Z16Mandelbrot0_sm10IfEvP6uchar4iiiT_S2_S2_S2_S2_S0_iib(uchar4 *, const int, const int, const int, const float, const float, const float, const float, const float, const uchar4&, const int, const int, const bool);
static void __device_stub__Z16Mandelbrot0_sm10IdEvP6uchar4iiiT_S2_S2_S2_S2_S0_iib(uchar4 *, const int, const int, const int, const double, const double, const double, const double, const double, const uchar4&, const int, const int, const bool);
static void __device_stub__Z16Mandelbrot1_sm10IfEvP6uchar4iiiT_S2_S2_S2_S2_S0_iib(uchar4 *, const int, const int, const int, const float, const float, const float, const float, const float, const uchar4&, const int, const int, const bool);
static void __device_stub__Z16Mandelbrot1_sm10IdEvP6uchar4iiiT_S2_S2_S2_S2_S0_iib(uchar4 *, const int, const int, const int, const double, const double, const double, const double, const double, const uchar4&, const int, const int, const bool);
static void __sti____cudaRegisterAll_50_tmpxft_000018e5_00000000_4_Mandelbrot_sm10_cpp1_ii_2099b970(void) __attribute__((__constructor__));
void __device_stub__Z18MandelbrotDS0_sm10P6uchar4iiifffffffS_iib(uchar4 *__par0, const int __par1, const int __par2, const int __par3, const float __par4, const float __par5, const float __par6, const float __par7, const float __par8, const float __par9, const float __par10, const uchar4&__par11, const int __par12, const int __par13, const bool __par14){ struct __T20 *__T2124 = 0;
if (cudaSetupArgument((void*)(char*)&__par0, sizeof(__par0), (size_t)&__T2124->__par0) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par1, sizeof(__par1), (size_t)&__T2124->__par1) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par2, sizeof(__par2), (size_t)&__T2124->__par2) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par3, sizeof(__par3), (size_t)&__T2124->__par3) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par4, sizeof(__par4), (size_t)&__T2124->__par4) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par5, sizeof(__par5), (size_t)&__T2124->__par5) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par6, sizeof(__par6), (size_t)&__T2124->__par6) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par7, sizeof(__par7), (size_t)&__T2124->__par7) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par8, sizeof(__par8), (size_t)&__T2124->__par8) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par9, sizeof(__par9), (size_t)&__T2124->__par9) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par10, sizeof(__par10), (size_t)&__T2124->__par10) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par11, sizeof(__par11), (size_t)&__T2124->__par11) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par12, sizeof(__par12), (size_t)&__T2124->__par12) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par13, sizeof(__par13), (size_t)&__T2124->__par13) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par14, sizeof(__par14), (size_t)&__T2124->__par14) != cudaSuccess) return;{ volatile static char *__f; __f = ((char *)((void ( *)(uchar4 *, const int, const int, const int, const float, const float, const float, const float, const float, const float, const float, const uchar4, const int, const int, const bool))MandelbrotDS0_sm10)); (void)cudaLaunch(((char *)((void ( *)(uchar4 *, const int, const int, const int, const float, const float, const float, const float, const float, const float, const float, const uchar4, const int, const int, const bool))MandelbrotDS0_sm10))); };}
void MandelbrotDS0_sm10( uchar4 *__cuda_0,const int __cuda_1,const int __cuda_2,const int __cuda_3,const float __cuda_4,const float __cuda_5,const float __cuda_6,const float __cuda_7,const float __cuda_8,const float __cuda_9,const float __cuda_10,const uchar4 __cuda_11,const int __cuda_12,const int __cuda_13,const bool __cuda_14)
# 56 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
{__device_stub__Z18MandelbrotDS0_sm10P6uchar4iiifffffffS_iib( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4,__cuda_5,__cuda_6,__cuda_7,__cuda_8,__cuda_9,__cuda_10,__cuda_11,__cuda_12,__cuda_13,__cuda_14);
# 99 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
}
# 1 "/tmp/tmpxft_000018e5_00000000-1_Mandelbrot_sm10.cudafe1.stub.c"
void __device_stub__Z18MandelbrotDS1_sm10P6uchar4iiifffffffS_iib( uchar4 *__par0, const int __par1, const int __par2, const int __par3, const float __par4, const float __par5, const float __par6, const float __par7, const float __par8, const float __par9, const float __par10, const uchar4&__par11, const int __par12, const int __par13, const bool __par14) { struct __T21 *__T2125 = 0;
if (cudaSetupArgument((void*)(char*)&__par0, sizeof(__par0), (size_t)&__T2125->__par0) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par1, sizeof(__par1), (size_t)&__T2125->__par1) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par2, sizeof(__par2), (size_t)&__T2125->__par2) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par3, sizeof(__par3), (size_t)&__T2125->__par3) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par4, sizeof(__par4), (size_t)&__T2125->__par4) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par5, sizeof(__par5), (size_t)&__T2125->__par5) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par6, sizeof(__par6), (size_t)&__T2125->__par6) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par7, sizeof(__par7), (size_t)&__T2125->__par7) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par8, sizeof(__par8), (size_t)&__T2125->__par8) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par9, sizeof(__par9), (size_t)&__T2125->__par9) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par10, sizeof(__par10), (size_t)&__T2125->__par10) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par11, sizeof(__par11), (size_t)&__T2125->__par11) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par12, sizeof(__par12), (size_t)&__T2125->__par12) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par13, sizeof(__par13), (size_t)&__T2125->__par13) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par14, sizeof(__par14), (size_t)&__T2125->__par14) != cudaSuccess) return; { volatile static char *__f; __f = ((char *)((void ( *)(uchar4 *, const int, const int, const int, const float, const float, const float, const float, const float, const float, const float, const uchar4, const int, const int, const bool))MandelbrotDS1_sm10)); (void)cudaLaunch(((char *)((void ( *)(uchar4 *, const int, const int, const int, const float, const float, const float, const float, const float, const float, const float, const uchar4, const int, const int, const bool))MandelbrotDS1_sm10))); }; }
void MandelbrotDS1_sm10( uchar4 *__cuda_0,const int __cuda_1,const int __cuda_2,const int __cuda_3,const float __cuda_4,const float __cuda_5,const float __cuda_6,const float __cuda_7,const float __cuda_8,const float __cuda_9,const float __cuda_10,const uchar4 __cuda_11,const int __cuda_12,const int __cuda_13,const bool __cuda_14)
# 162 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
{__device_stub__Z18MandelbrotDS1_sm10P6uchar4iiifffffffS_iib( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4,__cuda_5,__cuda_6,__cuda_7,__cuda_8,__cuda_9,__cuda_10,__cuda_11,__cuda_12,__cuda_13,__cuda_14);
# 215 "/home/normal/checkout/gpuocelot/tests/cuda2.2/tests/Mandelbrot/Mandelbrot_sm10.cu"
}
# 1 "/tmp/tmpxft_000018e5_00000000-1_Mandelbrot_sm10.cudafe1.stub.c"
static void __device_stub__Z16Mandelbrot0_sm10IfEvP6uchar4iiiT_S2_S2_S2_S2_S0_iib( uchar4 *__par0, const int __par1, const int __par2, const int __par3, const float __par4, const float __par5, const float __par6, const float __par7, const float __par8, const uchar4&__par9, const int __par10, const int __par11, const bool __par12) { struct __T22 *__T2129 = 0;
if (cudaSetupArgument((void*)(char*)&__par0, sizeof(__par0), (size_t)&__T2129->__par0) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par1, sizeof(__par1), (size_t)&__T2129->__par1) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par2, sizeof(__par2), (size_t)&__T2129->__par2) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par3, sizeof(__par3), (size_t)&__T2129->__par3) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par4, sizeof(__par4), (size_t)&__T2129->__par4) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par5, sizeof(__par5), (size_t)&__T2129->__par5) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par6, sizeof(__par6), (size_t)&__T2129->__par6) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par7, sizeof(__par7), (size_t)&__T2129->__par7) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par8, sizeof(__par8), (size_t)&__T2129->__par8) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par9, sizeof(__par9), (size_t)&__T2129->__par9) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par10, sizeof(__par10), (size_t)&__T2129->__par10) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par11, sizeof(__par11), (size_t)&__T2129->__par11) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par12, sizeof(__par12), (size_t)&__T2129->__par12) != cudaSuccess) return; { volatile static char *__f; __f = ((char *)((void ( *)(uchar4 *, const int, const int, const int, const float, const float, const float, const float, const float, const uchar4, const int, const int, const bool))Mandelbrot0_sm10<float> )); (void)cudaLaunch(((char *)((void ( *)(uchar4 *, const int, const int, const int, const float, const float, const float, const float, const float, const uchar4, const int, const int, const bool))Mandelbrot0_sm10<float> ))); }; }
template<> void __wrapper__device_stub_Mandelbrot0_sm10<float>( uchar4 *&__cuda_0,const int &__cuda_1,const int &__cuda_2,const int &__cuda_3,const float &__cuda_4,const float &__cuda_5,const float &__cuda_6,const float &__cuda_7,const float &__cuda_8,const uchar4 &__cuda_9,const int &__cuda_10,const int &__cuda_11,const bool &__cuda_12){__device_stub__Z16Mandelbrot0_sm10IfEvP6uchar4iiiT_S2_S2_S2_S2_S0_iib( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4,__cuda_5,__cuda_6,__cuda_7,__cuda_8,__cuda_9,__cuda_10,__cuda_11,__cuda_12);}
static void __device_stub__Z16Mandelbrot0_sm10IdEvP6uchar4iiiT_S2_S2_S2_S2_S0_iib( uchar4 *__par0, const int __par1, const int __par2, const int __par3, const double __par4, const double __par5, const double __par6, const double __par7, const double __par8, const uchar4&__par9, const int __par10, const int __par11, const bool __par12) { struct __T23 *__T2130 = 0;
if (cudaSetupArgument((void*)(char*)&__par0, sizeof(__par0), (size_t)&__T2130->__par0) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par1, sizeof(__par1), (size_t)&__T2130->__par1) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par2, sizeof(__par2), (size_t)&__T2130->__par2) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par3, sizeof(__par3), (size_t)&__T2130->__par3) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par4, sizeof(__par4), (size_t)&__T2130->__par4) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par5, sizeof(__par5), (size_t)&__T2130->__par5) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par6, sizeof(__par6), (size_t)&__T2130->__par6) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par7, sizeof(__par7), (size_t)&__T2130->__par7) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par8, sizeof(__par8), (size_t)&__T2130->__par8) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par9, sizeof(__par9), (size_t)&__T2130->__par9) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par10, sizeof(__par10), (size_t)&__T2130->__par10) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par11, sizeof(__par11), (size_t)&__T2130->__par11) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par12, sizeof(__par12), (size_t)&__T2130->__par12) != cudaSuccess) return; { volatile static char *__f; __f = ((char *)((void ( *)(uchar4 *, const int, const int, const int, const double, const double, const double, const double, const double, const uchar4, const int, const int, const bool))Mandelbrot0_sm10<double> )); (void)cudaLaunch(((char *)((void ( *)(uchar4 *, const int, const int, const int, const double, const double, const double, const double, const double, const uchar4, const int, const int, const bool))Mandelbrot0_sm10<double> ))); }; }
template<> void __wrapper__device_stub_Mandelbrot0_sm10<double>( uchar4 *&__cuda_0,const int &__cuda_1,const int &__cuda_2,const int &__cuda_3,const double &__cuda_4,const double &__cuda_5,const double &__cuda_6,const double &__cuda_7,const double &__cuda_8,const uchar4 &__cuda_9,const int &__cuda_10,const int &__cuda_11,const bool &__cuda_12){__device_stub__Z16Mandelbrot0_sm10IdEvP6uchar4iiiT_S2_S2_S2_S2_S0_iib( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4,__cuda_5,__cuda_6,__cuda_7,__cuda_8,__cuda_9,__cuda_10,__cuda_11,__cuda_12);}
static void __device_stub__Z16Mandelbrot1_sm10IfEvP6uchar4iiiT_S2_S2_S2_S2_S0_iib( uchar4 *__par0, const int __par1, const int __par2, const int __par3, const float __par4, const float __par5, const float __par6, const float __par7, const float __par8, const uchar4&__par9, const int __par10, const int __par11, const bool __par12) { struct __T24 *__T2137 = 0;
if (cudaSetupArgument((void*)(char*)&__par0, sizeof(__par0), (size_t)&__T2137->__par0) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par1, sizeof(__par1), (size_t)&__T2137->__par1) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par2, sizeof(__par2), (size_t)&__T2137->__par2) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par3, sizeof(__par3), (size_t)&__T2137->__par3) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par4, sizeof(__par4), (size_t)&__T2137->__par4) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par5, sizeof(__par5), (size_t)&__T2137->__par5) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par6, sizeof(__par6), (size_t)&__T2137->__par6) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par7, sizeof(__par7), (size_t)&__T2137->__par7) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par8, sizeof(__par8), (size_t)&__T2137->__par8) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par9, sizeof(__par9), (size_t)&__T2137->__par9) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par10, sizeof(__par10), (size_t)&__T2137->__par10) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par11, sizeof(__par11), (size_t)&__T2137->__par11) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par12, sizeof(__par12), (size_t)&__T2137->__par12) != cudaSuccess) return; { volatile static char *__f; __f = ((char *)((void ( *)(uchar4 *, const int, const int, const int, const float, const float, const float, const float, const float, const uchar4, const int, const int, const bool))Mandelbrot1_sm10<float> )); (void)cudaLaunch(((char *)((void ( *)(uchar4 *, const int, const int, const int, const float, const float, const float, const float, const float, const uchar4, const int, const int, const bool))Mandelbrot1_sm10<float> ))); }; }
template<> void __wrapper__device_stub_Mandelbrot1_sm10<float>( uchar4 *&__cuda_0,const int &__cuda_1,const int &__cuda_2,const int &__cuda_3,const float &__cuda_4,const float &__cuda_5,const float &__cuda_6,const float &__cuda_7,const float &__cuda_8,const uchar4 &__cuda_9,const int &__cuda_10,const int &__cuda_11,const bool &__cuda_12){__device_stub__Z16Mandelbrot1_sm10IfEvP6uchar4iiiT_S2_S2_S2_S2_S0_iib( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4,__cuda_5,__cuda_6,__cuda_7,__cuda_8,__cuda_9,__cuda_10,__cuda_11,__cuda_12);}
static void __device_stub__Z16Mandelbrot1_sm10IdEvP6uchar4iiiT_S2_S2_S2_S2_S0_iib( uchar4 *__par0, const int __par1, const int __par2, const int __par3, const double __par4, const double __par5, const double __par6, const double __par7, const double __par8, const uchar4&__par9, const int __par10, const int __par11, const bool __par12) { struct __T25 *__T2138 = 0;
if (cudaSetupArgument((void*)(char*)&__par0, sizeof(__par0), (size_t)&__T2138->__par0) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par1, sizeof(__par1), (size_t)&__T2138->__par1) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par2, sizeof(__par2), (size_t)&__T2138->__par2) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par3, sizeof(__par3), (size_t)&__T2138->__par3) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par4, sizeof(__par4), (size_t)&__T2138->__par4) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par5, sizeof(__par5), (size_t)&__T2138->__par5) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par6, sizeof(__par6), (size_t)&__T2138->__par6) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par7, sizeof(__par7), (size_t)&__T2138->__par7) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par8, sizeof(__par8), (size_t)&__T2138->__par8) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par9, sizeof(__par9), (size_t)&__T2138->__par9) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par10, sizeof(__par10), (size_t)&__T2138->__par10) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par11, sizeof(__par11), (size_t)&__T2138->__par11) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par12, sizeof(__par12), (size_t)&__T2138->__par12) != cudaSuccess) return; { volatile static char *__f; __f = ((char *)((void ( *)(uchar4 *, const int, const int, const int, const double, const double, const double, const double, const double, const uchar4, const int, const int, const bool))Mandelbrot1_sm10<double> )); (void)cudaLaunch(((char *)((void ( *)(uchar4 *, const int, const int, const int, const double, const double, const double, const double, const double, const uchar4, const int, const int, const bool))Mandelbrot1_sm10<double> ))); }; }
template<> void __wrapper__device_stub_Mandelbrot1_sm10<double>( uchar4 *&__cuda_0,const int &__cuda_1,const int &__cuda_2,const int &__cuda_3,const double &__cuda_4,const double &__cuda_5,const double &__cuda_6,const double &__cuda_7,const double &__cuda_8,const uchar4 &__cuda_9,const int &__cuda_10,const int &__cuda_11,const bool &__cuda_12){__device_stub__Z16Mandelbrot1_sm10IdEvP6uchar4iiiT_S2_S2_S2_S2_S0_iib( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4,__cuda_5,__cuda_6,__cuda_7,__cuda_8,__cuda_9,__cuda_10,__cuda_11,__cuda_12);}
static void __sti____cudaRegisterAll_50_tmpxft_000018e5_00000000_4_Mandelbrot_sm10_cpp1_ii_2099b970(void) { __cudaFatCubinHandle = __cudaRegisterFatBinary((void*)&__fatDeviceText); atexit(__cudaUnregisterBinaryUtil); __cudaRegisterFunction(__cudaFatCubinHandle, (const char*)((void ( *)(uchar4 *, const int, const int, const int, const double, const double, const double, const double, const double, const uchar4, const int, const int, const bool))Mandelbrot1_sm10<double> ), (char*)"_Z16Mandelbrot1_sm10IdEvP6uchar4iiiT_S2_S2_S2_S2_S0_iib", "_Z16Mandelbrot1_sm10IdEvP6uchar4iiiT_S2_S2_S2_S2_S0_iib", -1, (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0); __cudaRegisterFunction(__cudaFatCubinHandle, (const char*)((void ( *)(uchar4 *, const int, const int, const int, const float, const float, const float, const float, const float, const uchar4, const int, const int, const bool))Mandelbrot1_sm10<float> ), (char*)"_Z16Mandelbrot1_sm10IfEvP6uchar4iiiT_S2_S2_S2_S2_S0_iib", "_Z16Mandelbrot1_sm10IfEvP6uchar4iiiT_S2_S2_S2_S2_S0_iib", -1, (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0); __cudaRegisterFunction(__cudaFatCubinHandle, (const char*)((void ( *)(uchar4 *, const int, const int, const int, const double, const double, const double, const double, const double, const uchar4, const int, const int, const bool))Mandelbrot0_sm10<double> ), (char*)"_Z16Mandelbrot0_sm10IdEvP6uchar4iiiT_S2_S2_S2_S2_S0_iib", "_Z16Mandelbrot0_sm10IdEvP6uchar4iiiT_S2_S2_S2_S2_S0_iib", -1, (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0); __cudaRegisterFunction(__cudaFatCubinHandle, (const char*)((void ( *)(uchar4 *, const int, const int, const int, const float, const float, const float, const float, const float, const uchar4, const int, const int, const bool))Mandelbrot0_sm10<float> ), (char*)"_Z16Mandelbrot0_sm10IfEvP6uchar4iiiT_S2_S2_S2_S2_S0_iib", "_Z16Mandelbrot0_sm10IfEvP6uchar4iiiT_S2_S2_S2_S2_S0_iib", -1, (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0); __cudaRegisterFunction(__cudaFatCubinHandle, (const char*)((void ( *)(uchar4 *, const int, const int, const int, const float, const float, const float, const float, const float, const float, const float, const uchar4, const int, const int, const bool))MandelbrotDS1_sm10), (char*)"_Z18MandelbrotDS1_sm10P6uchar4iiifffffffS_iib", "_Z18MandelbrotDS1_sm10P6uchar4iiifffffffS_iib", -1, (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0); __cudaRegisterFunction(__cudaFatCubinHandle, (const char*)((void ( *)(uchar4 *, const int, const int, const int, const float, const float, const float, const float, const float, const float, const float, const uchar4, const int, const int, const bool))MandelbrotDS0_sm10), (char*)"_Z18MandelbrotDS0_sm10P6uchar4iiifffffffS_iib", "_Z18MandelbrotDS0_sm10P6uchar4iiifffffffS_iib", -1, (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0); }
# 1 "/tmp/tmpxft_000018e5_00000000-1_Mandelbrot_sm10.cudafe1.stub.c" 2