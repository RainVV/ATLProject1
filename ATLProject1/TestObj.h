// TestObj.h : Declaration of the CTestObj

#pragma once
#include "resource.h"       // main symbols



#include "ATLProject1_i.h"
#include "_ITestObjEvents_CP.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CTestObj

class ATL_NO_VTABLE CTestObj :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CTestObj, &CLSID_TestObj>,
	public ISupportErrorInfo,
	public IConnectionPointContainerImpl<CTestObj>,
	public CProxy_ITestObjEvents<CTestObj>,
	public IDispatchImpl<ITestObj, &IID_ITestObj, &LIBID_ATLProject1Lib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CTestObj()
	{
        mTestStringProp2 = L"Test string";
	}

DECLARE_REGISTRY_RESOURCEID(IDR_TESTOBJ)


BEGIN_COM_MAP(CTestObj)
	COM_INTERFACE_ENTRY(ITestObj)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
	COM_INTERFACE_ENTRY(IConnectionPointContainer)
END_COM_MAP()

BEGIN_CONNECTION_POINT_MAP(CTestObj)
	CONNECTION_POINT_ENTRY(__uuidof(_ITestObjEvents))
END_CONNECTION_POINT_MAP()
// ISupportsErrorInfo
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);


	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

public:



    STDMETHOD(get_TestProp)(LONG* pVal);
    STDMETHOD(put_TestProp)(LONG newVal);

private:
    LONG mTestProp;
    LPCWSTR mTestStringProp2;
public:
    STDMETHOD(get_TestStringProp)(LPCWSTR* pVal);
    STDMETHOD(put_TestStringProp)(LPCWSTR newVal);
    STDMETHOD(get_TestStringProp2)(BSTR* pVal);
    STDMETHOD(put_TestStringProp2)(BSTR newVal);
};

OBJECT_ENTRY_AUTO(__uuidof(TestObj), CTestObj)
