/*** Autogenerated by WIDL 8.4 from ../wine-8.4/include/commoncontrols.idl - Do not edit ***/

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

#ifndef __commoncontrols_h__
#define __commoncontrols_h__

#ifndef __WIDL_INLINE
#if defined(__cplusplus) || defined(_MSC_VER)
#define __WIDL_INLINE inline
#elif defined(__GNUC__)
#define __WIDL_INLINE __inline__
#endif
#endif

/* Forward declarations */

#ifndef __IImageList_FWD_DEFINED__
#define __IImageList_FWD_DEFINED__
typedef interface IImageList IImageList;
#ifdef __cplusplus
interface IImageList;
#endif /* __cplusplus */
#endif

#ifndef __IImageList2_FWD_DEFINED__
#define __IImageList2_FWD_DEFINED__
typedef interface IImageList2 IImageList2;
#ifdef __cplusplus
interface IImageList2;
#endif /* __cplusplus */
#endif

#ifndef __ImageList_FWD_DEFINED__
#define __ImageList_FWD_DEFINED__
#ifdef __cplusplus
typedef class ImageList ImageList;
#else
typedef struct ImageList ImageList;
#endif /* defined __cplusplus */
#endif /* defined __ImageList_FWD_DEFINED__ */

/* Headers for imported files */

#include <oaidl.h>
#include <ocidl.h>

#ifdef __cplusplus
extern "C" {
#endif

#if 0
typedef DWORD RGBQUAD;
typedef IUnknown *HIMAGELIST;
typedef struct __WIDL_commoncontrols_generated_name_0000001E {
    HBITMAP hbmImage;
    HBITMAP hbmMask;
    int Unused1;
    int Unused2;
    RECT rcImage;
} IMAGEINFO;
typedef IMAGEINFO *LPIMAGEINFO;
typedef struct __WIDL_commoncontrols_generated_name_0000001F {
    DWORD cbSize;
    HIMAGELIST himl;
    int i;
    HDC hdcDst;
    int x;
    int y;
    int cx;
    int cy;
    int xBitmap;
    int yBitmap;
    COLORREF rgbBk;
    COLORREF rgbFg;
    UINT fStyle;
    DWORD dwRop;
    DWORD fState;
    DWORD Frame;
    COLORREF crEffect;
} IMAGELISTDRAWPARAMS;
typedef IMAGELISTDRAWPARAMS *LPIMAGELISTDRAWPARAMS;
#endif
HRESULT WINAPI ImageList_CoCreateInstance(REFCLSID,const IUnknown *, REFIID,void **);
#define ILIF_ALPHA      0x00000001
#define ILIF_LOWQUALITY 0x00000002
/*****************************************************************************
 * IImageList interface
 */
#ifndef __IImageList_INTERFACE_DEFINED__
#define __IImageList_INTERFACE_DEFINED__

DEFINE_GUID(IID_IImageList, 0x46eb5926, 0x582e, 0x4017, 0x9f,0xdf, 0xe8,0x99,0x8d,0xaa,0x09,0x50);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("46eb5926-582e-4017-9fdf-e8998daa0950")
IImageList : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE Add(
        HBITMAP hbmImage,
        HBITMAP hbmMask,
        int *pi) = 0;

    virtual HRESULT STDMETHODCALLTYPE ReplaceIcon(
        int i,
        HICON hicon,
        int *pi) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetOverlayImage(
        int iImage,
        int iOverlay) = 0;

    virtual HRESULT STDMETHODCALLTYPE Replace(
        int i,
        HBITMAP hbmImage,
        HBITMAP hbmMask) = 0;

    virtual HRESULT STDMETHODCALLTYPE AddMasked(
        HBITMAP hbmImage,
        COLORREF crMask,
        int *pi) = 0;

    virtual HRESULT STDMETHODCALLTYPE Draw(
        IMAGELISTDRAWPARAMS *pimldp) = 0;

    virtual HRESULT STDMETHODCALLTYPE Remove(
        int i) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetIcon(
        int i,
        UINT flags,
        HICON *picon) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetImageInfo(
        int i,
        IMAGEINFO *pImageInfo) = 0;

    virtual HRESULT STDMETHODCALLTYPE Copy(
        int iDst,
        IUnknown *punkSrc,
        int iSrc,
        UINT uFlags) = 0;

    virtual HRESULT STDMETHODCALLTYPE Merge(
        int i1,
        IUnknown *punk2,
        int i2,
        int dx,
        int dy,
        REFIID riid,
        PVOID *ppv) = 0;

    virtual HRESULT STDMETHODCALLTYPE Clone(
        REFIID riid,
        PVOID *ppv) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetImageRect(
        int i,
        RECT *prc) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetIconSize(
        int *cx,
        int *cy) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetIconSize(
        int cx,
        int cy) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetImageCount(
        int *pi) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetImageCount(
        UINT uNewCount) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetBkColor(
        COLORREF clrBk,
        COLORREF *pclr) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetBkColor(
        COLORREF *pclr) = 0;

    virtual HRESULT STDMETHODCALLTYPE BeginDrag(
        int iTrack,
        int dxHotspot,
        int dyHotspot) = 0;

    virtual HRESULT STDMETHODCALLTYPE EndDrag(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE DragEnter(
        HWND hwndLock,
        int x,
        int y) = 0;

    virtual HRESULT STDMETHODCALLTYPE DragLeave(
        HWND hwndLock) = 0;

    virtual HRESULT STDMETHODCALLTYPE DragMove(
        int x,
        int y) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetDragCursorImage(
        IUnknown *punk,
        int iDrag,
        int dxHotspot,
        int dyHotspot) = 0;

    virtual HRESULT STDMETHODCALLTYPE DragShowNolock(
        BOOL fShow) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetDragImage(
        POINT *ppt,
        POINT *pptHotspot,
        REFIID riid,
        PVOID *ppv) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetItemFlags(
        int i,
        DWORD *dwFlags) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetOverlayImage(
        int iOverlay,
        int *piIndex) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IImageList, 0x46eb5926, 0x582e, 0x4017, 0x9f,0xdf, 0xe8,0x99,0x8d,0xaa,0x09,0x50)
#endif
#else
typedef struct IImageListVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IImageList *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IImageList *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IImageList *This);

    /*** IImageList methods ***/
    HRESULT (STDMETHODCALLTYPE *Add)(
        IImageList *This,
        HBITMAP hbmImage,
        HBITMAP hbmMask,
        int *pi);

    HRESULT (STDMETHODCALLTYPE *ReplaceIcon)(
        IImageList *This,
        int i,
        HICON hicon,
        int *pi);

    HRESULT (STDMETHODCALLTYPE *SetOverlayImage)(
        IImageList *This,
        int iImage,
        int iOverlay);

    HRESULT (STDMETHODCALLTYPE *Replace)(
        IImageList *This,
        int i,
        HBITMAP hbmImage,
        HBITMAP hbmMask);

    HRESULT (STDMETHODCALLTYPE *AddMasked)(
        IImageList *This,
        HBITMAP hbmImage,
        COLORREF crMask,
        int *pi);

    HRESULT (STDMETHODCALLTYPE *Draw)(
        IImageList *This,
        IMAGELISTDRAWPARAMS *pimldp);

    HRESULT (STDMETHODCALLTYPE *Remove)(
        IImageList *This,
        int i);

    HRESULT (STDMETHODCALLTYPE *GetIcon)(
        IImageList *This,
        int i,
        UINT flags,
        HICON *picon);

    HRESULT (STDMETHODCALLTYPE *GetImageInfo)(
        IImageList *This,
        int i,
        IMAGEINFO *pImageInfo);

    HRESULT (STDMETHODCALLTYPE *Copy)(
        IImageList *This,
        int iDst,
        IUnknown *punkSrc,
        int iSrc,
        UINT uFlags);

    HRESULT (STDMETHODCALLTYPE *Merge)(
        IImageList *This,
        int i1,
        IUnknown *punk2,
        int i2,
        int dx,
        int dy,
        REFIID riid,
        PVOID *ppv);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        IImageList *This,
        REFIID riid,
        PVOID *ppv);

    HRESULT (STDMETHODCALLTYPE *GetImageRect)(
        IImageList *This,
        int i,
        RECT *prc);

    HRESULT (STDMETHODCALLTYPE *GetIconSize)(
        IImageList *This,
        int *cx,
        int *cy);

    HRESULT (STDMETHODCALLTYPE *SetIconSize)(
        IImageList *This,
        int cx,
        int cy);

    HRESULT (STDMETHODCALLTYPE *GetImageCount)(
        IImageList *This,
        int *pi);

    HRESULT (STDMETHODCALLTYPE *SetImageCount)(
        IImageList *This,
        UINT uNewCount);

    HRESULT (STDMETHODCALLTYPE *SetBkColor)(
        IImageList *This,
        COLORREF clrBk,
        COLORREF *pclr);

    HRESULT (STDMETHODCALLTYPE *GetBkColor)(
        IImageList *This,
        COLORREF *pclr);

    HRESULT (STDMETHODCALLTYPE *BeginDrag)(
        IImageList *This,
        int iTrack,
        int dxHotspot,
        int dyHotspot);

    HRESULT (STDMETHODCALLTYPE *EndDrag)(
        IImageList *This);

    HRESULT (STDMETHODCALLTYPE *DragEnter)(
        IImageList *This,
        HWND hwndLock,
        int x,
        int y);

    HRESULT (STDMETHODCALLTYPE *DragLeave)(
        IImageList *This,
        HWND hwndLock);

    HRESULT (STDMETHODCALLTYPE *DragMove)(
        IImageList *This,
        int x,
        int y);

    HRESULT (STDMETHODCALLTYPE *SetDragCursorImage)(
        IImageList *This,
        IUnknown *punk,
        int iDrag,
        int dxHotspot,
        int dyHotspot);

    HRESULT (STDMETHODCALLTYPE *DragShowNolock)(
        IImageList *This,
        BOOL fShow);

    HRESULT (STDMETHODCALLTYPE *GetDragImage)(
        IImageList *This,
        POINT *ppt,
        POINT *pptHotspot,
        REFIID riid,
        PVOID *ppv);

    HRESULT (STDMETHODCALLTYPE *GetItemFlags)(
        IImageList *This,
        int i,
        DWORD *dwFlags);

    HRESULT (STDMETHODCALLTYPE *GetOverlayImage)(
        IImageList *This,
        int iOverlay,
        int *piIndex);

    END_INTERFACE
} IImageListVtbl;

interface IImageList {
    CONST_VTBL IImageListVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IImageList_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IImageList_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IImageList_Release(This) (This)->lpVtbl->Release(This)
/*** IImageList methods ***/
#define IImageList_Add(This,hbmImage,hbmMask,pi) (This)->lpVtbl->Add(This,hbmImage,hbmMask,pi)
#define IImageList_ReplaceIcon(This,i,hicon,pi) (This)->lpVtbl->ReplaceIcon(This,i,hicon,pi)
#define IImageList_SetOverlayImage(This,iImage,iOverlay) (This)->lpVtbl->SetOverlayImage(This,iImage,iOverlay)
#define IImageList_Replace(This,i,hbmImage,hbmMask) (This)->lpVtbl->Replace(This,i,hbmImage,hbmMask)
#define IImageList_AddMasked(This,hbmImage,crMask,pi) (This)->lpVtbl->AddMasked(This,hbmImage,crMask,pi)
#define IImageList_Draw(This,pimldp) (This)->lpVtbl->Draw(This,pimldp)
#define IImageList_Remove(This,i) (This)->lpVtbl->Remove(This,i)
#define IImageList_GetIcon(This,i,flags,picon) (This)->lpVtbl->GetIcon(This,i,flags,picon)
#define IImageList_GetImageInfo(This,i,pImageInfo) (This)->lpVtbl->GetImageInfo(This,i,pImageInfo)
#define IImageList_Copy(This,iDst,punkSrc,iSrc,uFlags) (This)->lpVtbl->Copy(This,iDst,punkSrc,iSrc,uFlags)
#define IImageList_Merge(This,i1,punk2,i2,dx,dy,riid,ppv) (This)->lpVtbl->Merge(This,i1,punk2,i2,dx,dy,riid,ppv)
#define IImageList_Clone(This,riid,ppv) (This)->lpVtbl->Clone(This,riid,ppv)
#define IImageList_GetImageRect(This,i,prc) (This)->lpVtbl->GetImageRect(This,i,prc)
#define IImageList_GetIconSize(This,cx,cy) (This)->lpVtbl->GetIconSize(This,cx,cy)
#define IImageList_SetIconSize(This,cx,cy) (This)->lpVtbl->SetIconSize(This,cx,cy)
#define IImageList_GetImageCount(This,pi) (This)->lpVtbl->GetImageCount(This,pi)
#define IImageList_SetImageCount(This,uNewCount) (This)->lpVtbl->SetImageCount(This,uNewCount)
#define IImageList_SetBkColor(This,clrBk,pclr) (This)->lpVtbl->SetBkColor(This,clrBk,pclr)
#define IImageList_GetBkColor(This,pclr) (This)->lpVtbl->GetBkColor(This,pclr)
#define IImageList_BeginDrag(This,iTrack,dxHotspot,dyHotspot) (This)->lpVtbl->BeginDrag(This,iTrack,dxHotspot,dyHotspot)
#define IImageList_EndDrag(This) (This)->lpVtbl->EndDrag(This)
#define IImageList_DragEnter(This,hwndLock,x,y) (This)->lpVtbl->DragEnter(This,hwndLock,x,y)
#define IImageList_DragLeave(This,hwndLock) (This)->lpVtbl->DragLeave(This,hwndLock)
#define IImageList_DragMove(This,x,y) (This)->lpVtbl->DragMove(This,x,y)
#define IImageList_SetDragCursorImage(This,punk,iDrag,dxHotspot,dyHotspot) (This)->lpVtbl->SetDragCursorImage(This,punk,iDrag,dxHotspot,dyHotspot)
#define IImageList_DragShowNolock(This,fShow) (This)->lpVtbl->DragShowNolock(This,fShow)
#define IImageList_GetDragImage(This,ppt,pptHotspot,riid,ppv) (This)->lpVtbl->GetDragImage(This,ppt,pptHotspot,riid,ppv)
#define IImageList_GetItemFlags(This,i,dwFlags) (This)->lpVtbl->GetItemFlags(This,i,dwFlags)
#define IImageList_GetOverlayImage(This,iOverlay,piIndex) (This)->lpVtbl->GetOverlayImage(This,iOverlay,piIndex)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT IImageList_QueryInterface(IImageList* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG IImageList_AddRef(IImageList* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG IImageList_Release(IImageList* This) {
    return This->lpVtbl->Release(This);
}
/*** IImageList methods ***/
static __WIDL_INLINE HRESULT IImageList_Add(IImageList* This,HBITMAP hbmImage,HBITMAP hbmMask,int *pi) {
    return This->lpVtbl->Add(This,hbmImage,hbmMask,pi);
}
static __WIDL_INLINE HRESULT IImageList_ReplaceIcon(IImageList* This,int i,HICON hicon,int *pi) {
    return This->lpVtbl->ReplaceIcon(This,i,hicon,pi);
}
static __WIDL_INLINE HRESULT IImageList_SetOverlayImage(IImageList* This,int iImage,int iOverlay) {
    return This->lpVtbl->SetOverlayImage(This,iImage,iOverlay);
}
static __WIDL_INLINE HRESULT IImageList_Replace(IImageList* This,int i,HBITMAP hbmImage,HBITMAP hbmMask) {
    return This->lpVtbl->Replace(This,i,hbmImage,hbmMask);
}
static __WIDL_INLINE HRESULT IImageList_AddMasked(IImageList* This,HBITMAP hbmImage,COLORREF crMask,int *pi) {
    return This->lpVtbl->AddMasked(This,hbmImage,crMask,pi);
}
static __WIDL_INLINE HRESULT IImageList_Draw(IImageList* This,IMAGELISTDRAWPARAMS *pimldp) {
    return This->lpVtbl->Draw(This,pimldp);
}
static __WIDL_INLINE HRESULT IImageList_Remove(IImageList* This,int i) {
    return This->lpVtbl->Remove(This,i);
}
static __WIDL_INLINE HRESULT IImageList_GetIcon(IImageList* This,int i,UINT flags,HICON *picon) {
    return This->lpVtbl->GetIcon(This,i,flags,picon);
}
static __WIDL_INLINE HRESULT IImageList_GetImageInfo(IImageList* This,int i,IMAGEINFO *pImageInfo) {
    return This->lpVtbl->GetImageInfo(This,i,pImageInfo);
}
static __WIDL_INLINE HRESULT IImageList_Copy(IImageList* This,int iDst,IUnknown *punkSrc,int iSrc,UINT uFlags) {
    return This->lpVtbl->Copy(This,iDst,punkSrc,iSrc,uFlags);
}
static __WIDL_INLINE HRESULT IImageList_Merge(IImageList* This,int i1,IUnknown *punk2,int i2,int dx,int dy,REFIID riid,PVOID *ppv) {
    return This->lpVtbl->Merge(This,i1,punk2,i2,dx,dy,riid,ppv);
}
static __WIDL_INLINE HRESULT IImageList_Clone(IImageList* This,REFIID riid,PVOID *ppv) {
    return This->lpVtbl->Clone(This,riid,ppv);
}
static __WIDL_INLINE HRESULT IImageList_GetImageRect(IImageList* This,int i,RECT *prc) {
    return This->lpVtbl->GetImageRect(This,i,prc);
}
static __WIDL_INLINE HRESULT IImageList_GetIconSize(IImageList* This,int *cx,int *cy) {
    return This->lpVtbl->GetIconSize(This,cx,cy);
}
static __WIDL_INLINE HRESULT IImageList_SetIconSize(IImageList* This,int cx,int cy) {
    return This->lpVtbl->SetIconSize(This,cx,cy);
}
static __WIDL_INLINE HRESULT IImageList_GetImageCount(IImageList* This,int *pi) {
    return This->lpVtbl->GetImageCount(This,pi);
}
static __WIDL_INLINE HRESULT IImageList_SetImageCount(IImageList* This,UINT uNewCount) {
    return This->lpVtbl->SetImageCount(This,uNewCount);
}
static __WIDL_INLINE HRESULT IImageList_SetBkColor(IImageList* This,COLORREF clrBk,COLORREF *pclr) {
    return This->lpVtbl->SetBkColor(This,clrBk,pclr);
}
static __WIDL_INLINE HRESULT IImageList_GetBkColor(IImageList* This,COLORREF *pclr) {
    return This->lpVtbl->GetBkColor(This,pclr);
}
static __WIDL_INLINE HRESULT IImageList_BeginDrag(IImageList* This,int iTrack,int dxHotspot,int dyHotspot) {
    return This->lpVtbl->BeginDrag(This,iTrack,dxHotspot,dyHotspot);
}
static __WIDL_INLINE HRESULT IImageList_EndDrag(IImageList* This) {
    return This->lpVtbl->EndDrag(This);
}
static __WIDL_INLINE HRESULT IImageList_DragEnter(IImageList* This,HWND hwndLock,int x,int y) {
    return This->lpVtbl->DragEnter(This,hwndLock,x,y);
}
static __WIDL_INLINE HRESULT IImageList_DragLeave(IImageList* This,HWND hwndLock) {
    return This->lpVtbl->DragLeave(This,hwndLock);
}
static __WIDL_INLINE HRESULT IImageList_DragMove(IImageList* This,int x,int y) {
    return This->lpVtbl->DragMove(This,x,y);
}
static __WIDL_INLINE HRESULT IImageList_SetDragCursorImage(IImageList* This,IUnknown *punk,int iDrag,int dxHotspot,int dyHotspot) {
    return This->lpVtbl->SetDragCursorImage(This,punk,iDrag,dxHotspot,dyHotspot);
}
static __WIDL_INLINE HRESULT IImageList_DragShowNolock(IImageList* This,BOOL fShow) {
    return This->lpVtbl->DragShowNolock(This,fShow);
}
static __WIDL_INLINE HRESULT IImageList_GetDragImage(IImageList* This,POINT *ppt,POINT *pptHotspot,REFIID riid,PVOID *ppv) {
    return This->lpVtbl->GetDragImage(This,ppt,pptHotspot,riid,ppv);
}
static __WIDL_INLINE HRESULT IImageList_GetItemFlags(IImageList* This,int i,DWORD *dwFlags) {
    return This->lpVtbl->GetItemFlags(This,i,dwFlags);
}
static __WIDL_INLINE HRESULT IImageList_GetOverlayImage(IImageList* This,int iOverlay,int *piIndex) {
    return This->lpVtbl->GetOverlayImage(This,iOverlay,piIndex);
}
#endif
#endif

#endif


#endif  /* __IImageList_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IImageList2 interface
 */
#ifndef __IImageList2_INTERFACE_DEFINED__
#define __IImageList2_INTERFACE_DEFINED__

typedef struct tagIMAGELISTSTATS {
    DWORD cbSize;
    INT cAlloc;
    INT cUsed;
    INT cStandby;
} IMAGELISTSTATS;
DEFINE_GUID(IID_IImageList2, 0x192b9d83, 0x50fc, 0x457b, 0x90,0xa0, 0x2b,0x82,0xa8,0xb5,0xda,0xe1);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("192b9d83-50fc-457b-90a0-2b82a8b5dae1")
IImageList2 : public IImageList
{
    virtual HRESULT STDMETHODCALLTYPE Resize(
        INT x_size,
        INT y_size) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetOriginalSize(
        INT image,
        DWORD flags,
        INT *cx,
        INT *cy) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetOriginalSize(
        INT image,
        INT cx,
        INT cy) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetCallback(
        IUnknown *callback) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetCallback(
        REFIID riid,
        void **ppv) = 0;

    virtual HRESULT STDMETHODCALLTYPE ForceImagePresent(
        INT image,
        DWORD flags) = 0;

    virtual HRESULT STDMETHODCALLTYPE DiscardImages(
        INT first_image,
        INT last_image,
        DWORD flags) = 0;

    virtual HRESULT STDMETHODCALLTYPE PreloadImages(
        IMAGELISTDRAWPARAMS *params) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetStatistics(
        IMAGELISTSTATS *stats) = 0;

    virtual HRESULT STDMETHODCALLTYPE Initialize(
        INT cx,
        INT cy,
        UINT flags,
        INT initial,
        INT grow) = 0;

    virtual HRESULT STDMETHODCALLTYPE Replace2(
        INT i,
        HBITMAP image,
        HBITMAP mask,
        IUnknown *unk,
        DWORD flags) = 0;

    virtual HRESULT STDMETHODCALLTYPE ReplaceFromImageList(
        INT i,
        IImageList *imagelist,
        INT src,
        IUnknown *unk,
        DWORD flags) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IImageList2, 0x192b9d83, 0x50fc, 0x457b, 0x90,0xa0, 0x2b,0x82,0xa8,0xb5,0xda,0xe1)
#endif
#else
typedef struct IImageList2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IImageList2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IImageList2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IImageList2 *This);

    /*** IImageList methods ***/
    HRESULT (STDMETHODCALLTYPE *Add)(
        IImageList2 *This,
        HBITMAP hbmImage,
        HBITMAP hbmMask,
        int *pi);

    HRESULT (STDMETHODCALLTYPE *ReplaceIcon)(
        IImageList2 *This,
        int i,
        HICON hicon,
        int *pi);

    HRESULT (STDMETHODCALLTYPE *SetOverlayImage)(
        IImageList2 *This,
        int iImage,
        int iOverlay);

    HRESULT (STDMETHODCALLTYPE *Replace)(
        IImageList2 *This,
        int i,
        HBITMAP hbmImage,
        HBITMAP hbmMask);

    HRESULT (STDMETHODCALLTYPE *AddMasked)(
        IImageList2 *This,
        HBITMAP hbmImage,
        COLORREF crMask,
        int *pi);

    HRESULT (STDMETHODCALLTYPE *Draw)(
        IImageList2 *This,
        IMAGELISTDRAWPARAMS *pimldp);

    HRESULT (STDMETHODCALLTYPE *Remove)(
        IImageList2 *This,
        int i);

    HRESULT (STDMETHODCALLTYPE *GetIcon)(
        IImageList2 *This,
        int i,
        UINT flags,
        HICON *picon);

    HRESULT (STDMETHODCALLTYPE *GetImageInfo)(
        IImageList2 *This,
        int i,
        IMAGEINFO *pImageInfo);

    HRESULT (STDMETHODCALLTYPE *Copy)(
        IImageList2 *This,
        int iDst,
        IUnknown *punkSrc,
        int iSrc,
        UINT uFlags);

    HRESULT (STDMETHODCALLTYPE *Merge)(
        IImageList2 *This,
        int i1,
        IUnknown *punk2,
        int i2,
        int dx,
        int dy,
        REFIID riid,
        PVOID *ppv);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        IImageList2 *This,
        REFIID riid,
        PVOID *ppv);

    HRESULT (STDMETHODCALLTYPE *GetImageRect)(
        IImageList2 *This,
        int i,
        RECT *prc);

    HRESULT (STDMETHODCALLTYPE *GetIconSize)(
        IImageList2 *This,
        int *cx,
        int *cy);

    HRESULT (STDMETHODCALLTYPE *SetIconSize)(
        IImageList2 *This,
        int cx,
        int cy);

    HRESULT (STDMETHODCALLTYPE *GetImageCount)(
        IImageList2 *This,
        int *pi);

    HRESULT (STDMETHODCALLTYPE *SetImageCount)(
        IImageList2 *This,
        UINT uNewCount);

    HRESULT (STDMETHODCALLTYPE *SetBkColor)(
        IImageList2 *This,
        COLORREF clrBk,
        COLORREF *pclr);

    HRESULT (STDMETHODCALLTYPE *GetBkColor)(
        IImageList2 *This,
        COLORREF *pclr);

    HRESULT (STDMETHODCALLTYPE *BeginDrag)(
        IImageList2 *This,
        int iTrack,
        int dxHotspot,
        int dyHotspot);

    HRESULT (STDMETHODCALLTYPE *EndDrag)(
        IImageList2 *This);

    HRESULT (STDMETHODCALLTYPE *DragEnter)(
        IImageList2 *This,
        HWND hwndLock,
        int x,
        int y);

    HRESULT (STDMETHODCALLTYPE *DragLeave)(
        IImageList2 *This,
        HWND hwndLock);

    HRESULT (STDMETHODCALLTYPE *DragMove)(
        IImageList2 *This,
        int x,
        int y);

    HRESULT (STDMETHODCALLTYPE *SetDragCursorImage)(
        IImageList2 *This,
        IUnknown *punk,
        int iDrag,
        int dxHotspot,
        int dyHotspot);

    HRESULT (STDMETHODCALLTYPE *DragShowNolock)(
        IImageList2 *This,
        BOOL fShow);

    HRESULT (STDMETHODCALLTYPE *GetDragImage)(
        IImageList2 *This,
        POINT *ppt,
        POINT *pptHotspot,
        REFIID riid,
        PVOID *ppv);

    HRESULT (STDMETHODCALLTYPE *GetItemFlags)(
        IImageList2 *This,
        int i,
        DWORD *dwFlags);

    HRESULT (STDMETHODCALLTYPE *GetOverlayImage)(
        IImageList2 *This,
        int iOverlay,
        int *piIndex);

    /*** IImageList2 methods ***/
    HRESULT (STDMETHODCALLTYPE *Resize)(
        IImageList2 *This,
        INT x_size,
        INT y_size);

    HRESULT (STDMETHODCALLTYPE *GetOriginalSize)(
        IImageList2 *This,
        INT image,
        DWORD flags,
        INT *cx,
        INT *cy);

    HRESULT (STDMETHODCALLTYPE *SetOriginalSize)(
        IImageList2 *This,
        INT image,
        INT cx,
        INT cy);

    HRESULT (STDMETHODCALLTYPE *SetCallback)(
        IImageList2 *This,
        IUnknown *callback);

    HRESULT (STDMETHODCALLTYPE *GetCallback)(
        IImageList2 *This,
        REFIID riid,
        void **ppv);

    HRESULT (STDMETHODCALLTYPE *ForceImagePresent)(
        IImageList2 *This,
        INT image,
        DWORD flags);

    HRESULT (STDMETHODCALLTYPE *DiscardImages)(
        IImageList2 *This,
        INT first_image,
        INT last_image,
        DWORD flags);

    HRESULT (STDMETHODCALLTYPE *PreloadImages)(
        IImageList2 *This,
        IMAGELISTDRAWPARAMS *params);

    HRESULT (STDMETHODCALLTYPE *GetStatistics)(
        IImageList2 *This,
        IMAGELISTSTATS *stats);

    HRESULT (STDMETHODCALLTYPE *Initialize)(
        IImageList2 *This,
        INT cx,
        INT cy,
        UINT flags,
        INT initial,
        INT grow);

    HRESULT (STDMETHODCALLTYPE *Replace2)(
        IImageList2 *This,
        INT i,
        HBITMAP image,
        HBITMAP mask,
        IUnknown *unk,
        DWORD flags);

    HRESULT (STDMETHODCALLTYPE *ReplaceFromImageList)(
        IImageList2 *This,
        INT i,
        IImageList *imagelist,
        INT src,
        IUnknown *unk,
        DWORD flags);

    END_INTERFACE
} IImageList2Vtbl;

interface IImageList2 {
    CONST_VTBL IImageList2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IImageList2_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IImageList2_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IImageList2_Release(This) (This)->lpVtbl->Release(This)
/*** IImageList methods ***/
#define IImageList2_Add(This,hbmImage,hbmMask,pi) (This)->lpVtbl->Add(This,hbmImage,hbmMask,pi)
#define IImageList2_ReplaceIcon(This,i,hicon,pi) (This)->lpVtbl->ReplaceIcon(This,i,hicon,pi)
#define IImageList2_SetOverlayImage(This,iImage,iOverlay) (This)->lpVtbl->SetOverlayImage(This,iImage,iOverlay)
#define IImageList2_Replace(This,i,hbmImage,hbmMask) (This)->lpVtbl->Replace(This,i,hbmImage,hbmMask)
#define IImageList2_AddMasked(This,hbmImage,crMask,pi) (This)->lpVtbl->AddMasked(This,hbmImage,crMask,pi)
#define IImageList2_Draw(This,pimldp) (This)->lpVtbl->Draw(This,pimldp)
#define IImageList2_Remove(This,i) (This)->lpVtbl->Remove(This,i)
#define IImageList2_GetIcon(This,i,flags,picon) (This)->lpVtbl->GetIcon(This,i,flags,picon)
#define IImageList2_GetImageInfo(This,i,pImageInfo) (This)->lpVtbl->GetImageInfo(This,i,pImageInfo)
#define IImageList2_Copy(This,iDst,punkSrc,iSrc,uFlags) (This)->lpVtbl->Copy(This,iDst,punkSrc,iSrc,uFlags)
#define IImageList2_Merge(This,i1,punk2,i2,dx,dy,riid,ppv) (This)->lpVtbl->Merge(This,i1,punk2,i2,dx,dy,riid,ppv)
#define IImageList2_Clone(This,riid,ppv) (This)->lpVtbl->Clone(This,riid,ppv)
#define IImageList2_GetImageRect(This,i,prc) (This)->lpVtbl->GetImageRect(This,i,prc)
#define IImageList2_GetIconSize(This,cx,cy) (This)->lpVtbl->GetIconSize(This,cx,cy)
#define IImageList2_SetIconSize(This,cx,cy) (This)->lpVtbl->SetIconSize(This,cx,cy)
#define IImageList2_GetImageCount(This,pi) (This)->lpVtbl->GetImageCount(This,pi)
#define IImageList2_SetImageCount(This,uNewCount) (This)->lpVtbl->SetImageCount(This,uNewCount)
#define IImageList2_SetBkColor(This,clrBk,pclr) (This)->lpVtbl->SetBkColor(This,clrBk,pclr)
#define IImageList2_GetBkColor(This,pclr) (This)->lpVtbl->GetBkColor(This,pclr)
#define IImageList2_BeginDrag(This,iTrack,dxHotspot,dyHotspot) (This)->lpVtbl->BeginDrag(This,iTrack,dxHotspot,dyHotspot)
#define IImageList2_EndDrag(This) (This)->lpVtbl->EndDrag(This)
#define IImageList2_DragEnter(This,hwndLock,x,y) (This)->lpVtbl->DragEnter(This,hwndLock,x,y)
#define IImageList2_DragLeave(This,hwndLock) (This)->lpVtbl->DragLeave(This,hwndLock)
#define IImageList2_DragMove(This,x,y) (This)->lpVtbl->DragMove(This,x,y)
#define IImageList2_SetDragCursorImage(This,punk,iDrag,dxHotspot,dyHotspot) (This)->lpVtbl->SetDragCursorImage(This,punk,iDrag,dxHotspot,dyHotspot)
#define IImageList2_DragShowNolock(This,fShow) (This)->lpVtbl->DragShowNolock(This,fShow)
#define IImageList2_GetDragImage(This,ppt,pptHotspot,riid,ppv) (This)->lpVtbl->GetDragImage(This,ppt,pptHotspot,riid,ppv)
#define IImageList2_GetItemFlags(This,i,dwFlags) (This)->lpVtbl->GetItemFlags(This,i,dwFlags)
#define IImageList2_GetOverlayImage(This,iOverlay,piIndex) (This)->lpVtbl->GetOverlayImage(This,iOverlay,piIndex)
/*** IImageList2 methods ***/
#define IImageList2_Resize(This,x_size,y_size) (This)->lpVtbl->Resize(This,x_size,y_size)
#define IImageList2_GetOriginalSize(This,image,flags,cx,cy) (This)->lpVtbl->GetOriginalSize(This,image,flags,cx,cy)
#define IImageList2_SetOriginalSize(This,image,cx,cy) (This)->lpVtbl->SetOriginalSize(This,image,cx,cy)
#define IImageList2_SetCallback(This,callback) (This)->lpVtbl->SetCallback(This,callback)
#define IImageList2_GetCallback(This,riid,ppv) (This)->lpVtbl->GetCallback(This,riid,ppv)
#define IImageList2_ForceImagePresent(This,image,flags) (This)->lpVtbl->ForceImagePresent(This,image,flags)
#define IImageList2_DiscardImages(This,first_image,last_image,flags) (This)->lpVtbl->DiscardImages(This,first_image,last_image,flags)
#define IImageList2_PreloadImages(This,params) (This)->lpVtbl->PreloadImages(This,params)
#define IImageList2_GetStatistics(This,stats) (This)->lpVtbl->GetStatistics(This,stats)
#define IImageList2_Initialize(This,cx,cy,flags,initial,grow) (This)->lpVtbl->Initialize(This,cx,cy,flags,initial,grow)
#define IImageList2_Replace2(This,i,image,mask,unk,flags) (This)->lpVtbl->Replace2(This,i,image,mask,unk,flags)
#define IImageList2_ReplaceFromImageList(This,i,imagelist,src,unk,flags) (This)->lpVtbl->ReplaceFromImageList(This,i,imagelist,src,unk,flags)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT IImageList2_QueryInterface(IImageList2* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG IImageList2_AddRef(IImageList2* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG IImageList2_Release(IImageList2* This) {
    return This->lpVtbl->Release(This);
}
/*** IImageList methods ***/
static __WIDL_INLINE HRESULT IImageList2_Add(IImageList2* This,HBITMAP hbmImage,HBITMAP hbmMask,int *pi) {
    return This->lpVtbl->Add(This,hbmImage,hbmMask,pi);
}
static __WIDL_INLINE HRESULT IImageList2_ReplaceIcon(IImageList2* This,int i,HICON hicon,int *pi) {
    return This->lpVtbl->ReplaceIcon(This,i,hicon,pi);
}
static __WIDL_INLINE HRESULT IImageList2_SetOverlayImage(IImageList2* This,int iImage,int iOverlay) {
    return This->lpVtbl->SetOverlayImage(This,iImage,iOverlay);
}
static __WIDL_INLINE HRESULT IImageList2_Replace(IImageList2* This,int i,HBITMAP hbmImage,HBITMAP hbmMask) {
    return This->lpVtbl->Replace(This,i,hbmImage,hbmMask);
}
static __WIDL_INLINE HRESULT IImageList2_AddMasked(IImageList2* This,HBITMAP hbmImage,COLORREF crMask,int *pi) {
    return This->lpVtbl->AddMasked(This,hbmImage,crMask,pi);
}
static __WIDL_INLINE HRESULT IImageList2_Draw(IImageList2* This,IMAGELISTDRAWPARAMS *pimldp) {
    return This->lpVtbl->Draw(This,pimldp);
}
static __WIDL_INLINE HRESULT IImageList2_Remove(IImageList2* This,int i) {
    return This->lpVtbl->Remove(This,i);
}
static __WIDL_INLINE HRESULT IImageList2_GetIcon(IImageList2* This,int i,UINT flags,HICON *picon) {
    return This->lpVtbl->GetIcon(This,i,flags,picon);
}
static __WIDL_INLINE HRESULT IImageList2_GetImageInfo(IImageList2* This,int i,IMAGEINFO *pImageInfo) {
    return This->lpVtbl->GetImageInfo(This,i,pImageInfo);
}
static __WIDL_INLINE HRESULT IImageList2_Copy(IImageList2* This,int iDst,IUnknown *punkSrc,int iSrc,UINT uFlags) {
    return This->lpVtbl->Copy(This,iDst,punkSrc,iSrc,uFlags);
}
static __WIDL_INLINE HRESULT IImageList2_Merge(IImageList2* This,int i1,IUnknown *punk2,int i2,int dx,int dy,REFIID riid,PVOID *ppv) {
    return This->lpVtbl->Merge(This,i1,punk2,i2,dx,dy,riid,ppv);
}
static __WIDL_INLINE HRESULT IImageList2_Clone(IImageList2* This,REFIID riid,PVOID *ppv) {
    return This->lpVtbl->Clone(This,riid,ppv);
}
static __WIDL_INLINE HRESULT IImageList2_GetImageRect(IImageList2* This,int i,RECT *prc) {
    return This->lpVtbl->GetImageRect(This,i,prc);
}
static __WIDL_INLINE HRESULT IImageList2_GetIconSize(IImageList2* This,int *cx,int *cy) {
    return This->lpVtbl->GetIconSize(This,cx,cy);
}
static __WIDL_INLINE HRESULT IImageList2_SetIconSize(IImageList2* This,int cx,int cy) {
    return This->lpVtbl->SetIconSize(This,cx,cy);
}
static __WIDL_INLINE HRESULT IImageList2_GetImageCount(IImageList2* This,int *pi) {
    return This->lpVtbl->GetImageCount(This,pi);
}
static __WIDL_INLINE HRESULT IImageList2_SetImageCount(IImageList2* This,UINT uNewCount) {
    return This->lpVtbl->SetImageCount(This,uNewCount);
}
static __WIDL_INLINE HRESULT IImageList2_SetBkColor(IImageList2* This,COLORREF clrBk,COLORREF *pclr) {
    return This->lpVtbl->SetBkColor(This,clrBk,pclr);
}
static __WIDL_INLINE HRESULT IImageList2_GetBkColor(IImageList2* This,COLORREF *pclr) {
    return This->lpVtbl->GetBkColor(This,pclr);
}
static __WIDL_INLINE HRESULT IImageList2_BeginDrag(IImageList2* This,int iTrack,int dxHotspot,int dyHotspot) {
    return This->lpVtbl->BeginDrag(This,iTrack,dxHotspot,dyHotspot);
}
static __WIDL_INLINE HRESULT IImageList2_EndDrag(IImageList2* This) {
    return This->lpVtbl->EndDrag(This);
}
static __WIDL_INLINE HRESULT IImageList2_DragEnter(IImageList2* This,HWND hwndLock,int x,int y) {
    return This->lpVtbl->DragEnter(This,hwndLock,x,y);
}
static __WIDL_INLINE HRESULT IImageList2_DragLeave(IImageList2* This,HWND hwndLock) {
    return This->lpVtbl->DragLeave(This,hwndLock);
}
static __WIDL_INLINE HRESULT IImageList2_DragMove(IImageList2* This,int x,int y) {
    return This->lpVtbl->DragMove(This,x,y);
}
static __WIDL_INLINE HRESULT IImageList2_SetDragCursorImage(IImageList2* This,IUnknown *punk,int iDrag,int dxHotspot,int dyHotspot) {
    return This->lpVtbl->SetDragCursorImage(This,punk,iDrag,dxHotspot,dyHotspot);
}
static __WIDL_INLINE HRESULT IImageList2_DragShowNolock(IImageList2* This,BOOL fShow) {
    return This->lpVtbl->DragShowNolock(This,fShow);
}
static __WIDL_INLINE HRESULT IImageList2_GetDragImage(IImageList2* This,POINT *ppt,POINT *pptHotspot,REFIID riid,PVOID *ppv) {
    return This->lpVtbl->GetDragImage(This,ppt,pptHotspot,riid,ppv);
}
static __WIDL_INLINE HRESULT IImageList2_GetItemFlags(IImageList2* This,int i,DWORD *dwFlags) {
    return This->lpVtbl->GetItemFlags(This,i,dwFlags);
}
static __WIDL_INLINE HRESULT IImageList2_GetOverlayImage(IImageList2* This,int iOverlay,int *piIndex) {
    return This->lpVtbl->GetOverlayImage(This,iOverlay,piIndex);
}
/*** IImageList2 methods ***/
static __WIDL_INLINE HRESULT IImageList2_Resize(IImageList2* This,INT x_size,INT y_size) {
    return This->lpVtbl->Resize(This,x_size,y_size);
}
static __WIDL_INLINE HRESULT IImageList2_GetOriginalSize(IImageList2* This,INT image,DWORD flags,INT *cx,INT *cy) {
    return This->lpVtbl->GetOriginalSize(This,image,flags,cx,cy);
}
static __WIDL_INLINE HRESULT IImageList2_SetOriginalSize(IImageList2* This,INT image,INT cx,INT cy) {
    return This->lpVtbl->SetOriginalSize(This,image,cx,cy);
}
static __WIDL_INLINE HRESULT IImageList2_SetCallback(IImageList2* This,IUnknown *callback) {
    return This->lpVtbl->SetCallback(This,callback);
}
static __WIDL_INLINE HRESULT IImageList2_GetCallback(IImageList2* This,REFIID riid,void **ppv) {
    return This->lpVtbl->GetCallback(This,riid,ppv);
}
static __WIDL_INLINE HRESULT IImageList2_ForceImagePresent(IImageList2* This,INT image,DWORD flags) {
    return This->lpVtbl->ForceImagePresent(This,image,flags);
}
static __WIDL_INLINE HRESULT IImageList2_DiscardImages(IImageList2* This,INT first_image,INT last_image,DWORD flags) {
    return This->lpVtbl->DiscardImages(This,first_image,last_image,flags);
}
static __WIDL_INLINE HRESULT IImageList2_PreloadImages(IImageList2* This,IMAGELISTDRAWPARAMS *params) {
    return This->lpVtbl->PreloadImages(This,params);
}
static __WIDL_INLINE HRESULT IImageList2_GetStatistics(IImageList2* This,IMAGELISTSTATS *stats) {
    return This->lpVtbl->GetStatistics(This,stats);
}
static __WIDL_INLINE HRESULT IImageList2_Initialize(IImageList2* This,INT cx,INT cy,UINT flags,INT initial,INT grow) {
    return This->lpVtbl->Initialize(This,cx,cy,flags,initial,grow);
}
static __WIDL_INLINE HRESULT IImageList2_Replace2(IImageList2* This,INT i,HBITMAP image,HBITMAP mask,IUnknown *unk,DWORD flags) {
    return This->lpVtbl->Replace2(This,i,image,mask,unk,flags);
}
static __WIDL_INLINE HRESULT IImageList2_ReplaceFromImageList(IImageList2* This,INT i,IImageList *imagelist,INT src,IUnknown *unk,DWORD flags) {
    return This->lpVtbl->ReplaceFromImageList(This,i,imagelist,src,unk,flags);
}
#endif
#endif

#endif


#endif  /* __IImageList2_INTERFACE_DEFINED__ */

#ifndef __CommonControlObjects_LIBRARY_DEFINED__
#define __CommonControlObjects_LIBRARY_DEFINED__

DEFINE_GUID(LIBID_CommonControlObjects, 0xbcada15b, 0xb428, 0x420c, 0x8d,0x28, 0x02,0x35,0x90,0x92,0x4c,0x9f);

/*****************************************************************************
 * ImageList coclass
 */

DEFINE_GUID(CLSID_ImageList, 0x7c476ba2, 0x02b1, 0x48f4, 0x80,0x48, 0xb2,0x46,0x19,0xdd,0xc0,0x58);

#ifdef __cplusplus
class DECLSPEC_UUID("7c476ba2-02b1-48f4-8048-b24619ddc058") ImageList;
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(ImageList, 0x7c476ba2, 0x02b1, 0x48f4, 0x80,0x48, 0xb2,0x46,0x19,0xdd,0xc0,0x58)
#endif
#endif

#endif /* __CommonControlObjects_LIBRARY_DEFINED__ */
/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __commoncontrols_h__ */
