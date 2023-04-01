/*** Autogenerated by WIDL 8.4 from ../wine-8.4/include/documenttarget.idl - Do not edit ***/

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

#ifndef __documenttarget_h__
#define __documenttarget_h__

#ifndef __WIDL_INLINE
#if defined(__cplusplus) || defined(_MSC_VER)
#define __WIDL_INLINE inline
#elif defined(__GNUC__)
#define __WIDL_INLINE __inline__
#endif
#endif

/* Forward declarations */

#ifndef __IPrintDocumentPackageTarget_FWD_DEFINED__
#define __IPrintDocumentPackageTarget_FWD_DEFINED__
typedef interface IPrintDocumentPackageTarget IPrintDocumentPackageTarget;
#ifdef __cplusplus
interface IPrintDocumentPackageTarget;
#endif /* __cplusplus */
#endif

#ifndef __IPrintDocumentPackageStatusEvent_FWD_DEFINED__
#define __IPrintDocumentPackageStatusEvent_FWD_DEFINED__
typedef interface IPrintDocumentPackageStatusEvent IPrintDocumentPackageStatusEvent;
#ifdef __cplusplus
interface IPrintDocumentPackageStatusEvent;
#endif /* __cplusplus */
#endif

#ifndef __IPrintDocumentPackageTargetFactory_FWD_DEFINED__
#define __IPrintDocumentPackageTargetFactory_FWD_DEFINED__
typedef interface IPrintDocumentPackageTargetFactory IPrintDocumentPackageTargetFactory;
#ifdef __cplusplus
interface IPrintDocumentPackageTargetFactory;
#endif /* __cplusplus */
#endif

#ifndef __PrintDocumentPackageTarget_FWD_DEFINED__
#define __PrintDocumentPackageTarget_FWD_DEFINED__
#ifdef __cplusplus
typedef class PrintDocumentPackageTarget PrintDocumentPackageTarget;
#else
typedef struct PrintDocumentPackageTarget PrintDocumentPackageTarget;
#endif /* defined __cplusplus */
#endif /* defined __PrintDocumentPackageTarget_FWD_DEFINED__ */

#ifndef __PrintDocumentPackageTargetFactory_FWD_DEFINED__
#define __PrintDocumentPackageTargetFactory_FWD_DEFINED__
#ifdef __cplusplus
typedef class PrintDocumentPackageTargetFactory PrintDocumentPackageTargetFactory;
#else
typedef struct PrintDocumentPackageTargetFactory PrintDocumentPackageTargetFactory;
#endif /* defined __cplusplus */
#endif /* defined __PrintDocumentPackageTargetFactory_FWD_DEFINED__ */

/* Headers for imported files */

#include <oaidl.h>

#ifdef __cplusplus
extern "C" {
#endif

/*****************************************************************************
 * IPrintDocumentPackageTarget interface
 */
#ifndef __IPrintDocumentPackageTarget_INTERFACE_DEFINED__
#define __IPrintDocumentPackageTarget_INTERFACE_DEFINED__

DEFINE_GUID(IID_IPrintDocumentPackageTarget, 0x1b8efec4, 0x3019, 0x4c27, 0x96,0x4e, 0x36,0x72,0x02,0x15,0x69,0x06);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("1b8efec4-3019-4c27-964e-367202156906")
IPrintDocumentPackageTarget : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE GetPackageTargetTypes(
        UINT32 *targetCount,
        GUID **targetTypes) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetPackageTarget(
        REFGUID guidTargetType,
        REFIID riid,
        void **ppvTarget) = 0;

    virtual HRESULT STDMETHODCALLTYPE Cancel(
        ) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IPrintDocumentPackageTarget, 0x1b8efec4, 0x3019, 0x4c27, 0x96,0x4e, 0x36,0x72,0x02,0x15,0x69,0x06)
#endif
#else
typedef struct IPrintDocumentPackageTargetVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IPrintDocumentPackageTarget *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IPrintDocumentPackageTarget *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IPrintDocumentPackageTarget *This);

    /*** IPrintDocumentPackageTarget methods ***/
    HRESULT (STDMETHODCALLTYPE *GetPackageTargetTypes)(
        IPrintDocumentPackageTarget *This,
        UINT32 *targetCount,
        GUID **targetTypes);

    HRESULT (STDMETHODCALLTYPE *GetPackageTarget)(
        IPrintDocumentPackageTarget *This,
        REFGUID guidTargetType,
        REFIID riid,
        void **ppvTarget);

    HRESULT (STDMETHODCALLTYPE *Cancel)(
        IPrintDocumentPackageTarget *This);

    END_INTERFACE
} IPrintDocumentPackageTargetVtbl;

interface IPrintDocumentPackageTarget {
    CONST_VTBL IPrintDocumentPackageTargetVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IPrintDocumentPackageTarget_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IPrintDocumentPackageTarget_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IPrintDocumentPackageTarget_Release(This) (This)->lpVtbl->Release(This)
/*** IPrintDocumentPackageTarget methods ***/
#define IPrintDocumentPackageTarget_GetPackageTargetTypes(This,targetCount,targetTypes) (This)->lpVtbl->GetPackageTargetTypes(This,targetCount,targetTypes)
#define IPrintDocumentPackageTarget_GetPackageTarget(This,guidTargetType,riid,ppvTarget) (This)->lpVtbl->GetPackageTarget(This,guidTargetType,riid,ppvTarget)
#define IPrintDocumentPackageTarget_Cancel(This) (This)->lpVtbl->Cancel(This)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT IPrintDocumentPackageTarget_QueryInterface(IPrintDocumentPackageTarget* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG IPrintDocumentPackageTarget_AddRef(IPrintDocumentPackageTarget* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG IPrintDocumentPackageTarget_Release(IPrintDocumentPackageTarget* This) {
    return This->lpVtbl->Release(This);
}
/*** IPrintDocumentPackageTarget methods ***/
static __WIDL_INLINE HRESULT IPrintDocumentPackageTarget_GetPackageTargetTypes(IPrintDocumentPackageTarget* This,UINT32 *targetCount,GUID **targetTypes) {
    return This->lpVtbl->GetPackageTargetTypes(This,targetCount,targetTypes);
}
static __WIDL_INLINE HRESULT IPrintDocumentPackageTarget_GetPackageTarget(IPrintDocumentPackageTarget* This,REFGUID guidTargetType,REFIID riid,void **ppvTarget) {
    return This->lpVtbl->GetPackageTarget(This,guidTargetType,riid,ppvTarget);
}
static __WIDL_INLINE HRESULT IPrintDocumentPackageTarget_Cancel(IPrintDocumentPackageTarget* This) {
    return This->lpVtbl->Cancel(This);
}
#endif
#endif

#endif


#endif  /* __IPrintDocumentPackageTarget_INTERFACE_DEFINED__ */

typedef enum PrintDocumentPackageCompletion {
    PrintDocumentPackageCompletion_InProgress = 0,
    PrintDocumentPackageCompletion_Completed = 1,
    PrintDocumentPackageCompletion_Canceled = 2,
    PrintDocumentPackageCompletion_Failed = 3
} PrintDocumentPackageCompletion;
typedef struct __WIDL_documenttarget_generated_name_0000000E {
    UINT32 JobId;
    INT32 CurrentDocument;
    INT32 CurrentPage;
    INT32 CurrentPageTotal;
    PrintDocumentPackageCompletion Completion;
    HRESULT PackageStatus;
} PrintDocumentPackageStatus;
/*****************************************************************************
 * IPrintDocumentPackageStatusEvent interface
 */
#ifndef __IPrintDocumentPackageStatusEvent_INTERFACE_DEFINED__
#define __IPrintDocumentPackageStatusEvent_INTERFACE_DEFINED__

DEFINE_GUID(IID_IPrintDocumentPackageStatusEvent, 0xed90c8ad, 0x5c34, 0x4d05, 0xa1,0xec, 0x0e,0x8a,0x9b,0x3a,0xd7,0xaf);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("ed90c8ad-5c34-4d05-a1ec-0e8a9b3ad7af")
IPrintDocumentPackageStatusEvent : public IDispatch
{
    virtual HRESULT STDMETHODCALLTYPE PackageStatusUpdated(
        PrintDocumentPackageStatus *packageStatus) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IPrintDocumentPackageStatusEvent, 0xed90c8ad, 0x5c34, 0x4d05, 0xa1,0xec, 0x0e,0x8a,0x9b,0x3a,0xd7,0xaf)
#endif
#else
typedef struct IPrintDocumentPackageStatusEventVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IPrintDocumentPackageStatusEvent *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IPrintDocumentPackageStatusEvent *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IPrintDocumentPackageStatusEvent *This);

    /*** IDispatch methods ***/
    HRESULT (STDMETHODCALLTYPE *GetTypeInfoCount)(
        IPrintDocumentPackageStatusEvent *This,
        UINT *pctinfo);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfo)(
        IPrintDocumentPackageStatusEvent *This,
        UINT iTInfo,
        LCID lcid,
        ITypeInfo **ppTInfo);

    HRESULT (STDMETHODCALLTYPE *GetIDsOfNames)(
        IPrintDocumentPackageStatusEvent *This,
        REFIID riid,
        LPOLESTR *rgszNames,
        UINT cNames,
        LCID lcid,
        DISPID *rgDispId);

    HRESULT (STDMETHODCALLTYPE *Invoke)(
        IPrintDocumentPackageStatusEvent *This,
        DISPID dispIdMember,
        REFIID riid,
        LCID lcid,
        WORD wFlags,
        DISPPARAMS *pDispParams,
        VARIANT *pVarResult,
        EXCEPINFO *pExcepInfo,
        UINT *puArgErr);

    /*** IPrintDocumentPackageStatusEvent methods ***/
    HRESULT (STDMETHODCALLTYPE *PackageStatusUpdated)(
        IPrintDocumentPackageStatusEvent *This,
        PrintDocumentPackageStatus *packageStatus);

    END_INTERFACE
} IPrintDocumentPackageStatusEventVtbl;

interface IPrintDocumentPackageStatusEvent {
    CONST_VTBL IPrintDocumentPackageStatusEventVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IPrintDocumentPackageStatusEvent_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IPrintDocumentPackageStatusEvent_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IPrintDocumentPackageStatusEvent_Release(This) (This)->lpVtbl->Release(This)
/*** IDispatch methods ***/
#define IPrintDocumentPackageStatusEvent_GetTypeInfoCount(This,pctinfo) (This)->lpVtbl->GetTypeInfoCount(This,pctinfo)
#define IPrintDocumentPackageStatusEvent_GetTypeInfo(This,iTInfo,lcid,ppTInfo) (This)->lpVtbl->GetTypeInfo(This,iTInfo,lcid,ppTInfo)
#define IPrintDocumentPackageStatusEvent_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) (This)->lpVtbl->GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
#define IPrintDocumentPackageStatusEvent_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) (This)->lpVtbl->Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
/*** IPrintDocumentPackageStatusEvent methods ***/
#define IPrintDocumentPackageStatusEvent_PackageStatusUpdated(This,packageStatus) (This)->lpVtbl->PackageStatusUpdated(This,packageStatus)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT IPrintDocumentPackageStatusEvent_QueryInterface(IPrintDocumentPackageStatusEvent* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG IPrintDocumentPackageStatusEvent_AddRef(IPrintDocumentPackageStatusEvent* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG IPrintDocumentPackageStatusEvent_Release(IPrintDocumentPackageStatusEvent* This) {
    return This->lpVtbl->Release(This);
}
/*** IDispatch methods ***/
static __WIDL_INLINE HRESULT IPrintDocumentPackageStatusEvent_GetTypeInfoCount(IPrintDocumentPackageStatusEvent* This,UINT *pctinfo) {
    return This->lpVtbl->GetTypeInfoCount(This,pctinfo);
}
static __WIDL_INLINE HRESULT IPrintDocumentPackageStatusEvent_GetTypeInfo(IPrintDocumentPackageStatusEvent* This,UINT iTInfo,LCID lcid,ITypeInfo **ppTInfo) {
    return This->lpVtbl->GetTypeInfo(This,iTInfo,lcid,ppTInfo);
}
static __WIDL_INLINE HRESULT IPrintDocumentPackageStatusEvent_GetIDsOfNames(IPrintDocumentPackageStatusEvent* This,REFIID riid,LPOLESTR *rgszNames,UINT cNames,LCID lcid,DISPID *rgDispId) {
    return This->lpVtbl->GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId);
}
static __WIDL_INLINE HRESULT IPrintDocumentPackageStatusEvent_Invoke(IPrintDocumentPackageStatusEvent* This,DISPID dispIdMember,REFIID riid,LCID lcid,WORD wFlags,DISPPARAMS *pDispParams,VARIANT *pVarResult,EXCEPINFO *pExcepInfo,UINT *puArgErr) {
    return This->lpVtbl->Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr);
}
/*** IPrintDocumentPackageStatusEvent methods ***/
static __WIDL_INLINE HRESULT IPrintDocumentPackageStatusEvent_PackageStatusUpdated(IPrintDocumentPackageStatusEvent* This,PrintDocumentPackageStatus *packageStatus) {
    return This->lpVtbl->PackageStatusUpdated(This,packageStatus);
}
#endif
#endif

#endif


#endif  /* __IPrintDocumentPackageStatusEvent_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IPrintDocumentPackageTargetFactory interface
 */
#ifndef __IPrintDocumentPackageTargetFactory_INTERFACE_DEFINED__
#define __IPrintDocumentPackageTargetFactory_INTERFACE_DEFINED__

DEFINE_GUID(IID_IPrintDocumentPackageTargetFactory, 0xd2959bf7, 0xb31b, 0x4a3d, 0x96,0x00, 0x71,0x2e,0xb1,0x33,0x5b,0xa4);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("d2959bf7-b31b-4a3d-9600-712eb1335ba4")
IPrintDocumentPackageTargetFactory : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE CreateDocumentPackageTargetForPrintJob(
        LPCWSTR printerName,
        LPCWSTR jobName,
        IStream *jobOutputStream,
        IStream *jobPrintTicketStream,
        IPrintDocumentPackageTarget **docPackageTarget) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IPrintDocumentPackageTargetFactory, 0xd2959bf7, 0xb31b, 0x4a3d, 0x96,0x00, 0x71,0x2e,0xb1,0x33,0x5b,0xa4)
#endif
#else
typedef struct IPrintDocumentPackageTargetFactoryVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IPrintDocumentPackageTargetFactory *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IPrintDocumentPackageTargetFactory *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IPrintDocumentPackageTargetFactory *This);

    /*** IPrintDocumentPackageTargetFactory methods ***/
    HRESULT (STDMETHODCALLTYPE *CreateDocumentPackageTargetForPrintJob)(
        IPrintDocumentPackageTargetFactory *This,
        LPCWSTR printerName,
        LPCWSTR jobName,
        IStream *jobOutputStream,
        IStream *jobPrintTicketStream,
        IPrintDocumentPackageTarget **docPackageTarget);

    END_INTERFACE
} IPrintDocumentPackageTargetFactoryVtbl;

interface IPrintDocumentPackageTargetFactory {
    CONST_VTBL IPrintDocumentPackageTargetFactoryVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IPrintDocumentPackageTargetFactory_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IPrintDocumentPackageTargetFactory_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IPrintDocumentPackageTargetFactory_Release(This) (This)->lpVtbl->Release(This)
/*** IPrintDocumentPackageTargetFactory methods ***/
#define IPrintDocumentPackageTargetFactory_CreateDocumentPackageTargetForPrintJob(This,printerName,jobName,jobOutputStream,jobPrintTicketStream,docPackageTarget) (This)->lpVtbl->CreateDocumentPackageTargetForPrintJob(This,printerName,jobName,jobOutputStream,jobPrintTicketStream,docPackageTarget)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT IPrintDocumentPackageTargetFactory_QueryInterface(IPrintDocumentPackageTargetFactory* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG IPrintDocumentPackageTargetFactory_AddRef(IPrintDocumentPackageTargetFactory* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG IPrintDocumentPackageTargetFactory_Release(IPrintDocumentPackageTargetFactory* This) {
    return This->lpVtbl->Release(This);
}
/*** IPrintDocumentPackageTargetFactory methods ***/
static __WIDL_INLINE HRESULT IPrintDocumentPackageTargetFactory_CreateDocumentPackageTargetForPrintJob(IPrintDocumentPackageTargetFactory* This,LPCWSTR printerName,LPCWSTR jobName,IStream *jobOutputStream,IStream *jobPrintTicketStream,IPrintDocumentPackageTarget **docPackageTarget) {
    return This->lpVtbl->CreateDocumentPackageTargetForPrintJob(This,printerName,jobName,jobOutputStream,jobPrintTicketStream,docPackageTarget);
}
#endif
#endif

#endif


#endif  /* __IPrintDocumentPackageTargetFactory_INTERFACE_DEFINED__ */

#ifndef __PrintDocumentTargetLib_LIBRARY_DEFINED__
#define __PrintDocumentTargetLib_LIBRARY_DEFINED__

DEFINE_GUID(LIBID_PrintDocumentTargetLib, 0x410d76f7, 0x8bb5, 0x4a7d, 0x9d,0x37, 0x9c,0x71,0xb1,0xb1,0x4d,0x14);

/*****************************************************************************
 * PrintDocumentPackageTarget coclass
 */

DEFINE_GUID(CLSID_PrintDocumentPackageTarget, 0x4842669e, 0x9947, 0x46ea, 0x8b,0xa2, 0xd8,0xcc,0xe4,0x32,0xc2,0xca);

#ifdef __cplusplus
class DECLSPEC_UUID("4842669e-9947-46ea-8ba2-d8cce432c2ca") PrintDocumentPackageTarget;
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(PrintDocumentPackageTarget, 0x4842669e, 0x9947, 0x46ea, 0x8b,0xa2, 0xd8,0xcc,0xe4,0x32,0xc2,0xca)
#endif
#endif

/*****************************************************************************
 * PrintDocumentPackageTargetFactory coclass
 */

DEFINE_GUID(CLSID_PrintDocumentPackageTargetFactory, 0x348ef17d, 0x6c81, 0x4982, 0x92,0xb4, 0xee,0x18,0x8a,0x43,0x86,0x7a);

#ifdef __cplusplus
class DECLSPEC_UUID("348ef17d-6c81-4982-92b4-ee188a43867a") PrintDocumentPackageTargetFactory;
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(PrintDocumentPackageTargetFactory, 0x348ef17d, 0x6c81, 0x4982, 0x92,0xb4, 0xee,0x18,0x8a,0x43,0x86,0x7a)
#endif
#endif

#endif /* __PrintDocumentTargetLib_LIBRARY_DEFINED__ */
DEFINE_GUID(ID_DOCUMENTPACKAGETARGET_MSXPS, 0x9cae40a8, 0xded1, 0x41c9, 0xa9, 0xfd, 0xd7, 0x35, 0xef, 0x33, 0xae, 0xda);
DEFINE_GUID(ID_DOCUMENTPACKAGETARGET_OPENXPS, 0x0056bb72, 0x8c9c, 0x4612, 0xbd, 0x0f, 0x93, 0x01, 0x2a, 0x87, 0x09, 0x9d);
DEFINE_GUID(ID_DOCUMENTPACKAGETARGET_OPENXPS_WITH_3D, 0x63dbd720, 0x8b14, 0x4577, 0xb0, 0x74, 0x7b, 0xb1, 0x1b, 0x59, 0x6d, 0x28);
/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __documenttarget_h__ */
