/******************************************************************
 * File automatically generated by rebuild_wrappers_32.py (v0.0.1.1) *
 ******************************************************************/
#ifndef __wrappedlibcTYPES32_H_
#define __wrappedlibcTYPES32_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef void (*vFv_t)(void);
typedef void (*vFp_t)(void*);
typedef int32_t (*iFv_t)(void);
typedef int32_t (*iFi_t)(int32_t);
typedef int32_t (*iFL_t)(uintptr_t);
typedef int32_t (*iFp_t)(void*);
typedef int32_t (*iFh_t)(uintptr_t);
typedef int32_t (*iFO_t)(int32_t);
typedef uint32_t (*uFu_t)(uint32_t);
typedef uint32_t (*uFp_t)(void*);
typedef uint32_t (*uFV_t)(...);
typedef uint64_t (*UFp_t)(void*);
typedef uintptr_t (*LFL_t)(uintptr_t);
typedef void* (*pFv_t)(void);
typedef void* (*pFu_t)(uint32_t);
typedef void* (*pFL_t)(uintptr_t);
typedef void* (*pFp_t)(void*);
typedef void* (*pFS_t)(void*);
typedef void (*vFip_t)(int32_t, void*);
typedef void (*vFpi_t)(void*, int32_t);
typedef void (*vFpu_t)(void*, uint32_t);
typedef int32_t (*iFip_t)(int32_t, void*);
typedef int32_t (*iFpi_t)(void*, int32_t);
typedef int32_t (*iFpL_t)(void*, uintptr_t);
typedef int32_t (*iFpp_t)(void*, void*);
typedef int32_t (*iFpV_t)(void*, ...);
typedef int32_t (*iFSp_t)(void*, void*);
typedef int64_t (*IFII_t)(int64_t, int64_t);
typedef uint64_t (*UFUU_t)(uint64_t, uint64_t);
typedef void* (*pFip_t)(int32_t, void*);
typedef void* (*pFpi_t)(void*, int32_t);
typedef void* (*pFpp_t)(void*, void*);
typedef void* (*SFpp_t)(void*, void*);
typedef void (*vFipV_t)(int32_t, void*, ...);
typedef void (*vFpup_t)(void*, uint32_t, void*);
typedef void (*vFppu_t)(void*, void*, uint32_t);
typedef int32_t (*iFvpV_t)(void, void*, ...);
typedef int32_t (*iFiip_t)(int32_t, int32_t, void*);
typedef int32_t (*iFiiN_t)(int32_t, int32_t, ...);
typedef int32_t (*iFipp_t)(int32_t, void*, void*);
typedef int32_t (*iFpLi_t)(void*, uintptr_t, int32_t);
typedef int32_t (*iFppL_t)(void*, void*, uintptr_t);
typedef int32_t (*iFppp_t)(void*, void*, void*);
typedef int32_t (*iFppV_t)(void*, void*, ...);
typedef int32_t (*iFpOu_t)(void*, int32_t, uint32_t);
typedef int32_t (*iFSpp_t)(void*, void*, void*);
typedef int32_t (*iFSpV_t)(void*, void*, ...);
typedef double (*KFppa_t)(void*, void*, void*);
typedef intptr_t (*lFipi_t)(int32_t, void*, int32_t);
typedef intptr_t (*lFipL_t)(int32_t, void*, uintptr_t);
typedef intptr_t (*lFppi_t)(void*, void*, int32_t);
typedef uintptr_t (*LFppi_t)(void*, void*, int32_t);
typedef void* (*pFpii_t)(void*, int32_t, int32_t);
typedef void* (*pFppv_t)(void*, void*, void);
typedef void (*vFpLLp_t)(void*, uintptr_t, uintptr_t, void*);
typedef void (*vFpppp_t)(void*, void*, void*, void*);
typedef int32_t (*iFivpV_t)(int32_t, void, void*, ...);
typedef int32_t (*iFiiip_t)(int32_t, int32_t, int32_t, void*);
typedef int32_t (*iFipii_t)(int32_t, void*, int32_t, int32_t);
typedef int32_t (*iFLLLL_t)(uintptr_t, uintptr_t, uintptr_t, uintptr_t);
typedef int32_t (*iFpipp_t)(void*, int32_t, void*, void*);
typedef int32_t (*iFpupV_t)(void*, uint32_t, void*, ...);
typedef int32_t (*iFpLpp_t)(void*, uintptr_t, void*, void*);
typedef int32_t (*iFpLpV_t)(void*, uintptr_t, void*, ...);
typedef int32_t (*iFppiV_t)(void*, void*, int32_t, ...);
typedef int32_t (*iFpppp_t)(void*, void*, void*, void*);
typedef int32_t (*iFSvpp_t)(void*, void, void*, void*);
typedef int32_t (*iFSvpV_t)(void*, void, void*, ...);
typedef uintptr_t (*LFppiv_t)(void*, void*, int32_t, void);
typedef int32_t (*iFpvvpV_t)(void*, void, void, void*, ...);
typedef int32_t (*iFpLppp_t)(void*, uintptr_t, void*, void*, void*);
typedef void* (*pFpLLiN_t)(void*, uintptr_t, uintptr_t, int32_t, ...);
typedef int32_t (*iFpLvvpp_t)(void*, uintptr_t, void, void, void*, void*);
typedef int32_t (*iFpLiipV_t)(void*, uintptr_t, int32_t, int32_t, void*, ...);
typedef void* (*pFpLiiii_t)(void*, uintptr_t, int32_t, int32_t, int32_t, int32_t);
typedef void* (*pFpLiiiI_t)(void*, uintptr_t, int32_t, int32_t, int32_t, int64_t);
typedef int32_t (*iFpippppp_t)(void*, int32_t, void*, void*, void*, void*, void*);

#define SUPER() ADDED_FUNCTIONS() \
	GO(freeaddrinfo, vFp_t) \
	GO(__close_nocancel, iFi_t) \
	GO(getifaddrs, iFp_t) \
	GO(getwc, iFh_t) \
	GO(__ctype_b_loc, pFv_t) \
	GO(__ctype_tolower_loc, pFv_t) \
	GO(__ctype_toupper_loc, pFv_t) \
	GO(__errno_location, pFv_t) \
	GO(__h_errno_location, pFv_t) \
	GO(localeconv, pFv_t) \
	GO(getpwuid, pFu_t) \
	GO(gethostbyname, pFp_t) \
	GO(gmtime, pFp_t) \
	GO(localtime, pFp_t) \
	GO(getmntent, pFS_t) \
	GO(futimes, iFip_t) \
	GO(getrlimit, iFip_t) \
	GO(setrlimit, iFip_t) \
	GO(backtrace, iFpi_t) \
	GO(alphasort64, iFpp_t) \
	GO(execvp, iFpp_t) \
	GO(statvfs, iFpp_t) \
	GO(utimes, iFpp_t) \
	GO(execl, iFpV_t) \
	GO(execlp, iFpV_t) \
	GO(statvfs64, iFSp_t) \
	GO(signal, pFip_t) \
	GO(backtrace_symbols, pFpi_t) \
	GO(gmtime_r, pFpp_t) \
	GO(localtime_r, pFpp_t) \
	GO(_ITM_addUserCommitAction, vFpup_t) \
	GO(vswscanf, iFppp_t) \
	GO(swscanf, iFppV_t) \
	GO(fscanf, iFSpV_t) \
	GO(__strtold_l, KFppa_t) \
	GO(strtold_l, KFppa_t) \
	GO(recvmsg, lFipi_t) \
	GO(sendmsg, lFipi_t) \
	GO(__realpath_chk, pFppv_t) \
	GO(__libc_init, vFpppp_t) \
	GO(getaddrinfo, iFpppp_t)

#endif // __wrappedlibcTYPES32_H_
