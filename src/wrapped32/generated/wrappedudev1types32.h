/*********************************************************************
 * File automatically generated by rebuild_wrappers_32.py (v0.0.2.2) *
 *********************************************************************/
#ifndef __wrappedudev1TYPES32_H_
#define __wrappedudev1TYPES32_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef void (*vFpp_t)(void*, void*);

#define SUPER() ADDED_FUNCTIONS() \
	GO(udev_set_log_fn, vFpp_t)

#endif // __wrappedudev1TYPES32_H_