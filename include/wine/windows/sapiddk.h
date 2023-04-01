/*** Autogenerated by WIDL 8.4 from ../wine-8.4/include/sapiddk.idl - Do not edit ***/

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

#ifndef __sapiddk_h__
#define __sapiddk_h__

#ifndef __WIDL_INLINE
#if defined(__cplusplus) || defined(_MSC_VER)
#define __WIDL_INLINE inline
#elif defined(__GNUC__)
#define __WIDL_INLINE __inline__
#endif
#endif

/* Forward declarations */

#ifndef __ISpObjectTokenEnumBuilder_FWD_DEFINED__
#define __ISpObjectTokenEnumBuilder_FWD_DEFINED__
typedef interface ISpObjectTokenEnumBuilder ISpObjectTokenEnumBuilder;
#ifdef __cplusplus
interface ISpObjectTokenEnumBuilder;
#endif /* __cplusplus */
#endif

#ifndef __SpDataKey_FWD_DEFINED__
#define __SpDataKey_FWD_DEFINED__
#ifdef __cplusplus
typedef class SpDataKey SpDataKey;
#else
typedef struct SpDataKey SpDataKey;
#endif /* defined __cplusplus */
#endif /* defined __SpDataKey_FWD_DEFINED__ */

#ifndef __SpObjectTokenEnum_FWD_DEFINED__
#define __SpObjectTokenEnum_FWD_DEFINED__
#ifdef __cplusplus
typedef class SpObjectTokenEnum SpObjectTokenEnum;
#else
typedef struct SpObjectTokenEnum SpObjectTokenEnum;
#endif /* defined __cplusplus */
#endif /* defined __SpObjectTokenEnum_FWD_DEFINED__ */

/* Headers for imported files */

#include <oaidl.h>
#include <ocidl.h>
#include <sapi.h>

#ifdef __cplusplus
extern "C" {
#endif

/*****************************************************************************
 * ISpObjectTokenEnumBuilder interface
 */
#ifndef __ISpObjectTokenEnumBuilder_INTERFACE_DEFINED__
#define __ISpObjectTokenEnumBuilder_INTERFACE_DEFINED__

DEFINE_GUID(IID_ISpObjectTokenEnumBuilder, 0x06b64f9f, 0x7fda, 0x11d2, 0xb4,0xf2, 0x00,0xc0,0x4f,0x79,0x73,0x96);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("06b64f9f-7fda-11d2-b4f2-00c04f797396")
ISpObjectTokenEnumBuilder : public IEnumSpObjectTokens
{
    virtual HRESULT STDMETHODCALLTYPE SetAttribs(
        LPCWSTR pszReqAttribs,
        LPCWSTR pszOptAttribs) = 0;

    virtual HRESULT STDMETHODCALLTYPE AddTokens(
        ULONG cTokens,
        ISpObjectToken **pToken) = 0;

    virtual HRESULT STDMETHODCALLTYPE AddTokensFromDataKey(
        ISpDataKey *pDataKey,
        LPCWSTR pszSubKey,
        LPCWSTR pszCategoryId) = 0;

    virtual HRESULT STDMETHODCALLTYPE AddTokensFromTokenEnum(
        IEnumSpObjectTokens *pTokenEnum) = 0;

    virtual HRESULT STDMETHODCALLTYPE Sort(
        LPCWSTR pszTokenIdToListFirst) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(ISpObjectTokenEnumBuilder, 0x06b64f9f, 0x7fda, 0x11d2, 0xb4,0xf2, 0x00,0xc0,0x4f,0x79,0x73,0x96)
#endif
#else
typedef struct ISpObjectTokenEnumBuilderVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISpObjectTokenEnumBuilder *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISpObjectTokenEnumBuilder *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISpObjectTokenEnumBuilder *This);

    /*** IEnumSpObjectTokens methods ***/
    HRESULT (STDMETHODCALLTYPE *Next)(
        ISpObjectTokenEnumBuilder *This,
        ULONG celt,
        ISpObjectToken **pelt,
        ULONG *pceltFetched);

    HRESULT (STDMETHODCALLTYPE *Skip)(
        ISpObjectTokenEnumBuilder *This,
        ULONG celt);

    HRESULT (STDMETHODCALLTYPE *Reset)(
        ISpObjectTokenEnumBuilder *This);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        ISpObjectTokenEnumBuilder *This,
        IEnumSpObjectTokens **ppEnum);

    HRESULT (STDMETHODCALLTYPE *Item)(
        ISpObjectTokenEnumBuilder *This,
        ULONG Index,
        ISpObjectToken **ppToken);

    HRESULT (STDMETHODCALLTYPE *GetCount)(
        ISpObjectTokenEnumBuilder *This,
        ULONG *pCount);

    /*** ISpObjectTokenEnumBuilder methods ***/
    HRESULT (STDMETHODCALLTYPE *SetAttribs)(
        ISpObjectTokenEnumBuilder *This,
        LPCWSTR pszReqAttribs,
        LPCWSTR pszOptAttribs);

    HRESULT (STDMETHODCALLTYPE *AddTokens)(
        ISpObjectTokenEnumBuilder *This,
        ULONG cTokens,
        ISpObjectToken **pToken);

    HRESULT (STDMETHODCALLTYPE *AddTokensFromDataKey)(
        ISpObjectTokenEnumBuilder *This,
        ISpDataKey *pDataKey,
        LPCWSTR pszSubKey,
        LPCWSTR pszCategoryId);

    HRESULT (STDMETHODCALLTYPE *AddTokensFromTokenEnum)(
        ISpObjectTokenEnumBuilder *This,
        IEnumSpObjectTokens *pTokenEnum);

    HRESULT (STDMETHODCALLTYPE *Sort)(
        ISpObjectTokenEnumBuilder *This,
        LPCWSTR pszTokenIdToListFirst);

    END_INTERFACE
} ISpObjectTokenEnumBuilderVtbl;

interface ISpObjectTokenEnumBuilder {
    CONST_VTBL ISpObjectTokenEnumBuilderVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define ISpObjectTokenEnumBuilder_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define ISpObjectTokenEnumBuilder_AddRef(This) (This)->lpVtbl->AddRef(This)
#define ISpObjectTokenEnumBuilder_Release(This) (This)->lpVtbl->Release(This)
/*** IEnumSpObjectTokens methods ***/
#define ISpObjectTokenEnumBuilder_Next(This,celt,pelt,pceltFetched) (This)->lpVtbl->Next(This,celt,pelt,pceltFetched)
#define ISpObjectTokenEnumBuilder_Skip(This,celt) (This)->lpVtbl->Skip(This,celt)
#define ISpObjectTokenEnumBuilder_Reset(This) (This)->lpVtbl->Reset(This)
#define ISpObjectTokenEnumBuilder_Clone(This,ppEnum) (This)->lpVtbl->Clone(This,ppEnum)
#define ISpObjectTokenEnumBuilder_Item(This,Index,ppToken) (This)->lpVtbl->Item(This,Index,ppToken)
#define ISpObjectTokenEnumBuilder_GetCount(This,pCount) (This)->lpVtbl->GetCount(This,pCount)
/*** ISpObjectTokenEnumBuilder methods ***/
#define ISpObjectTokenEnumBuilder_SetAttribs(This,pszReqAttribs,pszOptAttribs) (This)->lpVtbl->SetAttribs(This,pszReqAttribs,pszOptAttribs)
#define ISpObjectTokenEnumBuilder_AddTokens(This,cTokens,pToken) (This)->lpVtbl->AddTokens(This,cTokens,pToken)
#define ISpObjectTokenEnumBuilder_AddTokensFromDataKey(This,pDataKey,pszSubKey,pszCategoryId) (This)->lpVtbl->AddTokensFromDataKey(This,pDataKey,pszSubKey,pszCategoryId)
#define ISpObjectTokenEnumBuilder_AddTokensFromTokenEnum(This,pTokenEnum) (This)->lpVtbl->AddTokensFromTokenEnum(This,pTokenEnum)
#define ISpObjectTokenEnumBuilder_Sort(This,pszTokenIdToListFirst) (This)->lpVtbl->Sort(This,pszTokenIdToListFirst)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT ISpObjectTokenEnumBuilder_QueryInterface(ISpObjectTokenEnumBuilder* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG ISpObjectTokenEnumBuilder_AddRef(ISpObjectTokenEnumBuilder* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG ISpObjectTokenEnumBuilder_Release(ISpObjectTokenEnumBuilder* This) {
    return This->lpVtbl->Release(This);
}
/*** IEnumSpObjectTokens methods ***/
static __WIDL_INLINE HRESULT ISpObjectTokenEnumBuilder_Next(ISpObjectTokenEnumBuilder* This,ULONG celt,ISpObjectToken **pelt,ULONG *pceltFetched) {
    return This->lpVtbl->Next(This,celt,pelt,pceltFetched);
}
static __WIDL_INLINE HRESULT ISpObjectTokenEnumBuilder_Skip(ISpObjectTokenEnumBuilder* This,ULONG celt) {
    return This->lpVtbl->Skip(This,celt);
}
static __WIDL_INLINE HRESULT ISpObjectTokenEnumBuilder_Reset(ISpObjectTokenEnumBuilder* This) {
    return This->lpVtbl->Reset(This);
}
static __WIDL_INLINE HRESULT ISpObjectTokenEnumBuilder_Clone(ISpObjectTokenEnumBuilder* This,IEnumSpObjectTokens **ppEnum) {
    return This->lpVtbl->Clone(This,ppEnum);
}
static __WIDL_INLINE HRESULT ISpObjectTokenEnumBuilder_Item(ISpObjectTokenEnumBuilder* This,ULONG Index,ISpObjectToken **ppToken) {
    return This->lpVtbl->Item(This,Index,ppToken);
}
static __WIDL_INLINE HRESULT ISpObjectTokenEnumBuilder_GetCount(ISpObjectTokenEnumBuilder* This,ULONG *pCount) {
    return This->lpVtbl->GetCount(This,pCount);
}
/*** ISpObjectTokenEnumBuilder methods ***/
static __WIDL_INLINE HRESULT ISpObjectTokenEnumBuilder_SetAttribs(ISpObjectTokenEnumBuilder* This,LPCWSTR pszReqAttribs,LPCWSTR pszOptAttribs) {
    return This->lpVtbl->SetAttribs(This,pszReqAttribs,pszOptAttribs);
}
static __WIDL_INLINE HRESULT ISpObjectTokenEnumBuilder_AddTokens(ISpObjectTokenEnumBuilder* This,ULONG cTokens,ISpObjectToken **pToken) {
    return This->lpVtbl->AddTokens(This,cTokens,pToken);
}
static __WIDL_INLINE HRESULT ISpObjectTokenEnumBuilder_AddTokensFromDataKey(ISpObjectTokenEnumBuilder* This,ISpDataKey *pDataKey,LPCWSTR pszSubKey,LPCWSTR pszCategoryId) {
    return This->lpVtbl->AddTokensFromDataKey(This,pDataKey,pszSubKey,pszCategoryId);
}
static __WIDL_INLINE HRESULT ISpObjectTokenEnumBuilder_AddTokensFromTokenEnum(ISpObjectTokenEnumBuilder* This,IEnumSpObjectTokens *pTokenEnum) {
    return This->lpVtbl->AddTokensFromTokenEnum(This,pTokenEnum);
}
static __WIDL_INLINE HRESULT ISpObjectTokenEnumBuilder_Sort(ISpObjectTokenEnumBuilder* This,LPCWSTR pszTokenIdToListFirst) {
    return This->lpVtbl->Sort(This,pszTokenIdToListFirst);
}
#endif
#endif

#endif


#endif  /* __ISpObjectTokenEnumBuilder_INTERFACE_DEFINED__ */

#ifndef __SpeechDDKLib_LIBRARY_DEFINED__
#define __SpeechDDKLib_LIBRARY_DEFINED__

DEFINE_GUID(LIBID_SpeechDDKLib, 0x9903f14c, 0x12ce, 0x4c99, 0x99,0x86, 0x2e,0xe3,0xd7,0xd5,0x88,0xa8);

/*****************************************************************************
 * SpDataKey coclass
 */

DEFINE_GUID(CLSID_SpDataKey, 0xd9f6ee60, 0x58c9, 0x458b, 0x88,0xe1, 0x2f,0x90,0x8f,0xd7,0xf8,0x7c);

#ifdef __cplusplus
class DECLSPEC_UUID("d9f6ee60-58c9-458b-88e1-2f908fd7f87c") SpDataKey;
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(SpDataKey, 0xd9f6ee60, 0x58c9, 0x458b, 0x88,0xe1, 0x2f,0x90,0x8f,0xd7,0xf8,0x7c)
#endif
#endif

/*****************************************************************************
 * SpObjectTokenEnum coclass
 */

DEFINE_GUID(CLSID_SpObjectTokenEnum, 0x3918d75f, 0x0acb, 0x41f2, 0xb7,0x33, 0x92,0xaa,0x15,0xbc,0xec,0xf6);

#ifdef __cplusplus
class DECLSPEC_UUID("3918d75f-0acb-41f2-b733-92aa15bcecf6") SpObjectTokenEnum;
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(SpObjectTokenEnum, 0x3918d75f, 0x0acb, 0x41f2, 0xb7,0x33, 0x92,0xaa,0x15,0xbc,0xec,0xf6)
#endif
#endif

#endif /* __SpeechDDKLib_LIBRARY_DEFINED__ */
/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __sapiddk_h__ */
