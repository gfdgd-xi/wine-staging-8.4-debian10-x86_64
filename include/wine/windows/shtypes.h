/*** Autogenerated by WIDL 8.4 from ../wine-8.4/include/shtypes.idl - Do not edit ***/

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

#ifndef __shtypes_h__
#define __shtypes_h__

#ifndef __WIDL_INLINE
#if defined(__cplusplus) || defined(_MSC_VER)
#define __WIDL_INLINE inline
#elif defined(__GNUC__)
#define __WIDL_INLINE __inline__
#endif
#endif

/* Forward declarations */

/* Headers for imported files */

#include <wtypes.h>

#ifdef __cplusplus
extern "C" {
#endif

#include <pshpack1.h>
typedef struct __WIDL_shtypes_generated_name_0000000B {
    WORD cb;
    BYTE abID[1];
} SHITEMID;
typedef struct __WIDL_shtypes_generated_name_0000000B *LPSHITEMID;
typedef const SHITEMID *LPCSHITEMID;
typedef struct _ITEMIDLIST {
    SHITEMID mkid;
} ITEMIDLIST;
typedef struct _ITEMIDLIST *LPITEMIDLIST;
typedef const ITEMIDLIST *LPCITEMIDLIST;
typedef LPITEMIDLIST PITEMID_CHILD;
typedef const PITEMID_CHILD PCITEMID_CHILD;
typedef LPCITEMIDLIST PCUITEMID_CHILD;
typedef LPCITEMIDLIST *PCUITEMID_CHILD_ARRAY;
typedef LPCITEMIDLIST PCUIDLIST_RELATIVE;
typedef LPITEMIDLIST PIDLIST_ABSOLUTE;
typedef LPCITEMIDLIST PCIDLIST_ABSOLUTE;
typedef LPCITEMIDLIST *PCIDLIST_ABSOLUTE_ARRAY;
#include <poppack.h>
#if 0
typedef struct __WIDL_shtypes_generated_name_0000000C {
    int dummy;
} WIN32_FIND_DATAA;
typedef struct __WIDL_shtypes_generated_name_0000000C WIN32_FIND_DATAW;
#endif
typedef enum tagSTRRET_TYPE {
    STRRET_WSTR = 0,
    STRRET_OFFSET = 1,
    STRRET_CSTR = 2
} STRRET_TYPE;
#include <pshpack8.h>
typedef struct _STRRET {
    UINT uType;
    union {
        LPWSTR pOleStr;
        UINT uOffset;
        char cStr[260];
    } DUMMYUNIONNAME;
} STRRET;
typedef struct _STRRET *LPSTRRET;
#include <poppack.h>
#include <pshpack1.h>
typedef struct __WIDL_shtypes_generated_name_0000000D {
    int fmt;
    int cxChar;
    STRRET str;
} SHELLDETAILS;
typedef struct __WIDL_shtypes_generated_name_0000000D *LPSHELLDETAILS;
#include <poppack.h>
typedef struct _COMDLG_FILTERSPEC {
    LPCWSTR pszName;
    LPCWSTR pszSpec;
} COMDLG_FILTERSPEC;
typedef enum tagSHCOLSTATE {
    SHCOLSTATE_DEFAULT = 0,
    SHCOLSTATE_TYPE_STR = 1,
    SHCOLSTATE_TYPE_INT = 2,
    SHCOLSTATE_TYPE_DATE = 3,
    SHCOLSTATE_TYPEMASK = 0xf,
    SHCOLSTATE_ONBYDEFAULT = 0x10,
    SHCOLSTATE_SLOW = 0x20,
    SHCOLSTATE_EXTENDED = 0x40,
    SHCOLSTATE_SECONDARYUI = 0x80,
    SHCOLSTATE_HIDDEN = 0x100,
    SHCOLSTATE_PREFER_VARCMP = 0x200,
    SHCOLSTATE_PREFER_FMTCMP = 0x400,
    SHCOLSTATE_NOSORTBYFOLDERNESS = 0x800,
    SHCOLSTATE_VIEWONLY = 0x10000,
    SHCOLSTATE_BATCHREAD = 0x20000,
    SHCOLSTATE_NO_GROUPBY = 0x40000,
    SHCOLSTATE_FIXED_WIDTH = 0x1000,
    SHCOLSTATE_NODPISCALE = 0x2000,
    SHCOLSTATE_FIXED_RATIO = 0x4000,
    SHCOLSTATE_DISPLAYMASK = 0xf000
} SHCOLSTATE;
typedef DWORD SHCOLSTATEF;
typedef GUID KNOWNFOLDERID;
#if 0
typedef KNOWNFOLDERID *REFKNOWNFOLDERID;
#endif
#ifdef __cplusplus
#define REFKNOWNFOLDERID const KNOWNFOLDERID &
#else
#define REFKNOWNFOLDERID const KNOWNFOLDERID * __MIDL_CONST
#endif
typedef GUID FOLDERTYPEID;
#if 0
typedef FOLDERTYPEID *REFFOLDERTYPEID;
#endif
#ifdef __cplusplus
#define REFFOLDERTYPEID const FOLDERTYPEID &
#else
#define REFFOLDERTYPEID const FOLDERTYPEID * __MIDL_CONST
#endif
typedef enum tagPERCEIVED {
    PERCEIVED_TYPE_CUSTOM = -3,
    PERCEIVED_TYPE_UNSPECIFIED = -2,
    PERCEIVED_TYPE_FOLDER = -1,
    PERCEIVED_TYPE_UNKNOWN = 0,
    PERCEIVED_TYPE_TEXT = 1,
    PERCEIVED_TYPE_IMAGE = 2,
    PERCEIVED_TYPE_AUDIO = 3,
    PERCEIVED_TYPE_VIDEO = 4,
    PERCEIVED_TYPE_COMPRESSED = 5,
    PERCEIVED_TYPE_DOCUMENT = 6,
    PERCEIVED_TYPE_SYSTEM = 7,
    PERCEIVED_TYPE_APPLICATION = 8,
    PERCEIVED_TYPE_GAMEMEDIA = 9,
    PERCEIVED_TYPE_CONTACTS = 10
} PERCEIVED;
#define PERCEIVEDFLAG_UNDEFINED     0x0000
#define PERCEIVEDFLAG_SOFTCODED     0x0001
#define PERCEIVEDFLAG_HARDCODED     0x0002
#define PERCEIVEDFLAG_NATIVESUPPORT 0x0004
#define PERCEIVEDFLAG_GDIPLUS       0x0010
#define PERCEIVEDFLAG_WMSDK         0x0020
#define PERCEIVEDFLAG_ZIPFOLDER     0x0040
typedef enum DEVICE_SCALE_FACTOR {
    DEVICE_SCALE_FACTOR_INVALID = 0,
    SCALE_100_PERCENT = 100,
    SCALE_120_PERCENT = 120,
    SCALE_125_PERCENT = 125,
    SCALE_140_PERCENT = 140,
    SCALE_150_PERCENT = 150,
    SCALE_160_PERCENT = 160,
    SCALE_175_PERCENT = 175,
    SCALE_180_PERCENT = 180,
    SCALE_200_PERCENT = 200,
    SCALE_225_PERCENT = 225,
    SCALE_250_PERCENT = 250,
    SCALE_300_PERCENT = 300,
    SCALE_350_PERCENT = 350,
    SCALE_400_PERCENT = 400,
    SCALE_450_PERCENT = 450,
    SCALE_500_PERCENT = 500
} DEVICE_SCALE_FACTOR;
/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __shtypes_h__ */
