/*********************************************************************
 * File automatically generated by rebuild_wrappers_32.py (v0.0.2.2) *
 *********************************************************************/
#ifndef __wrappedlibxrandrTYPES32_H_
#define __wrappedlibxrandrTYPES32_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef void (*vFp_t)(void*);
typedef void* (*pFXL_t)(void*, uintptr_t);
typedef void* (*pFXpL_t)(void*, void*, uintptr_t);
typedef int32_t (*iFXpLp_t)(void*, void*, uintptr_t, void*);
typedef int32_t (*iFXpLLiiLWpi_t)(void*, void*, uintptr_t, uintptr_t, int32_t, int32_t, uintptr_t, uint16_t, void*, int32_t);

#define SUPER() ADDED_FUNCTIONS() \
	GO(XRRFreeProviderInfo, vFp_t) \
	GO(XRRFreeProviderResources, vFp_t) \
	GO(XRRGetProviderResources, pFXL_t) \
	GO(XRRGetScreenResources, pFXL_t) \
	GO(XRRGetScreenResourcesCurrent, pFXL_t) \
	GO(XRRGetCrtcInfo, pFXpL_t) \
	GO(XRRGetOutputInfo, pFXpL_t) \
	GO(XRRGetPanning, pFXpL_t) \
	GO(XRRGetProviderInfo, pFXpL_t) \
	GO(XRRSetPanning, iFXpLp_t) \
	GO(XRRSetCrtcConfig, iFXpLLiiLWpi_t)

#endif // __wrappedlibxrandrTYPES32_H_
