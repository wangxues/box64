/*********************************************************************
 * File automatically generated by rebuild_wrappers_32.py (v0.0.2.2) *
 *********************************************************************/
#ifndef __wrappedlibxextTYPES32_H_
#define __wrappedlibxextTYPES32_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef void (*vFp_t)(void*);
typedef void* (*pFp_t)(void*);
typedef void* (*pFXpp_t)(void*, void*, void*);
typedef int32_t (*iFXLpiiL_t)(void*, uintptr_t, void*, int32_t, int32_t, uintptr_t);
typedef void* (*pFXbpLiLLLii_uipbLipi_uu_t)(void*, struct_pLiLLLii_t*, uint32_t, int32_t, void*, struct_Lipi_t*, uint32_t, uint32_t);
typedef int32_t (*iFXLppiiiiuui_t)(void*, uintptr_t, void*, void*, int32_t, int32_t, int32_t, int32_t, uint32_t, uint32_t, int32_t);

#define SUPER() ADDED_FUNCTIONS() \
	GO(XdbeFreeVisualInfo, vFp_t) \
	GO(XSetExtensionErrorHandler, pFp_t) \
	GO(XdbeGetVisualInfo, pFXpp_t) \
	GO(XShmGetImage, iFXLpiiL_t) \
	GO(XShmCreateImage, pFXbpLiLLLii_uipbLipi_uu_t) \
	GO(XShmPutImage, iFXLppiiiiuui_t)

#endif // __wrappedlibxextTYPES32_H_
