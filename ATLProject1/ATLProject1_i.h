

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Wed Oct 07 12:52:13 2015
 */
/* Compiler settings for ATLProject1.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0603 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __ATLProject1_i_h__
#define __ATLProject1_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ITestObj_FWD_DEFINED__
#define __ITestObj_FWD_DEFINED__
typedef interface ITestObj ITestObj;

#endif 	/* __ITestObj_FWD_DEFINED__ */


#ifndef ___ITestObjEvents_FWD_DEFINED__
#define ___ITestObjEvents_FWD_DEFINED__
typedef interface _ITestObjEvents _ITestObjEvents;

#endif 	/* ___ITestObjEvents_FWD_DEFINED__ */


#ifndef __TestObj_FWD_DEFINED__
#define __TestObj_FWD_DEFINED__

#ifdef __cplusplus
typedef class TestObj TestObj;
#else
typedef struct TestObj TestObj;
#endif /* __cplusplus */

#endif 	/* __TestObj_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __ITestObj_INTERFACE_DEFINED__
#define __ITestObj_INTERFACE_DEFINED__

/* interface ITestObj */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ITestObj;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("68171867-2C47-4E2C-BCB7-024C567077A2")
    ITestObj : public IDispatch
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct ITestObjVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITestObj * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITestObj * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITestObj * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITestObj * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITestObj * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITestObj * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITestObj * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } ITestObjVtbl;

    interface ITestObj
    {
        CONST_VTBL struct ITestObjVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITestObj_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITestObj_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITestObj_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITestObj_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITestObj_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITestObj_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITestObj_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITestObj_INTERFACE_DEFINED__ */



#ifndef __ATLProject1Lib_LIBRARY_DEFINED__
#define __ATLProject1Lib_LIBRARY_DEFINED__

/* library ATLProject1Lib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_ATLProject1Lib;

#ifndef ___ITestObjEvents_DISPINTERFACE_DEFINED__
#define ___ITestObjEvents_DISPINTERFACE_DEFINED__

/* dispinterface _ITestObjEvents */
/* [uuid] */ 


EXTERN_C const IID DIID__ITestObjEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("2E501243-CF82-4137-B22B-70E48BD1834D")
    _ITestObjEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _ITestObjEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _ITestObjEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _ITestObjEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _ITestObjEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _ITestObjEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _ITestObjEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _ITestObjEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _ITestObjEvents * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } _ITestObjEventsVtbl;

    interface _ITestObjEvents
    {
        CONST_VTBL struct _ITestObjEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _ITestObjEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _ITestObjEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _ITestObjEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _ITestObjEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _ITestObjEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _ITestObjEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _ITestObjEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___ITestObjEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_TestObj;

#ifdef __cplusplus

class DECLSPEC_UUID("338702E1-D51F-493B-BF0F-BC5E15CB4E10")
TestObj;
#endif
#endif /* __ATLProject1Lib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


