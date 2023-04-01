/*** Autogenerated by WIDL 8.4 from ../wine-8.4/include/d2d1effects_2.idl - Do not edit ***/

#ifdef _WIN32
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif
#include <rpc.h>
#include <rpcndr.h>
#endif

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __d2d1effects_2_h__
#define __d2d1effects_2_h__

#ifndef __WIDL_INLINE
#if defined(__cplusplus) || defined(_MSC_VER)
#define __WIDL_INLINE inline
#elif defined(__GNUC__)
#define __WIDL_INLINE __inline__
#endif
#endif

/* Forward declarations */

/* Headers for imported files */

#include <d2d1effects_1.h>

#ifdef __cplusplus
extern "C" {
#endif

DEFINE_GUID(CLSID_D2D1Grayscale,         0x36dde0eb,0x3725,0x42e0,0x83,0x6d,0x52,0xfb,0x20,0xae,0xe6,0x44);
DEFINE_GUID(CLSID_D2D1HighlightsShadows, 0xcadc8384,0x323f,0x4c7e,0xa3,0x61,0x2e,0x2b,0x24,0xdf,0x6e,0xe4);
typedef enum D2D1_HIGHLIGHTSANDSHADOWS_PROP {
    D2D1_HIGHLIGHTSANDSHADOWS_PROP_HIGHLIGHTS = 0x0,
    D2D1_HIGHLIGHTSANDSHADOWS_PROP_SHADOWS = 0x1,
    D2D1_HIGHLIGHTSANDSHADOWS_PROP_CLARITY = 0x2,
    D2D1_HIGHLIGHTSANDSHADOWS_PROP_INPUT_GAMMA = 0x3,
    D2D1_HIGHLIGHTSANDSHADOWS_PROP_MASK_BLUR_RADIUS = 0x4,
    D2D1_HIGHLIGHTSANDSHADOWS_PROP_FORCE_DWORD = 0xffffffff
} D2D1_HIGHLIGHTSANDSHADOWS_PROP;
typedef enum D2D1_HIGHLIGHTSANDSHADOWS_INPUT_GAMMA {
    D2D1_HIGHLIGHTSANDSHADOWS_INPUT_GAMMA_LINEAR = 0x0,
    D2D1_HIGHLIGHTSANDSHADOWS_INPUT_GAMMA_SRGB = 0x1,
    D2D1_HIGHLIGHTSANDSHADOWS_INPUT_GAMMA_FORCE_DWORD = 0xffffffff
} D2D1_HIGHLIGHTSANDSHADOWS_INPUT_GAMMA;
/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __d2d1effects_2_h__ */
