// TestObj.cpp : Implementation of CTestObj

#include "stdafx.h"
#include "TestObj.h"

// CTestObj

STDMETHODIMP CTestObj::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* const arr[] = 
	{
		&IID_ITestObj
	};

	for (int i=0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}


STDMETHODIMP CTestObj::get_TestProp(LONG* pVal)
{
    *pVal = mTestProp;

    return S_OK;
}


STDMETHODIMP CTestObj::put_TestProp(LONG newVal)
{
    mTestProp = newVal;

    return S_OK;
}


STDMETHODIMP CTestObj::get_TestStringProp(LPCWSTR* pVal)
{
    *pVal = L"Test string";

    return S_OK;
}


STDMETHODIMP CTestObj::put_TestStringProp(LPCWSTR newVal)
{
    // TODO: Add your implementation code here

    return S_OK;
}


STDMETHODIMP CTestObj::get_TestStringProp2(BSTR* pVal)
{
    _bstr_t bstr1(mTestStringProp2);
    BSTR bstr;

    bstr = bstr1.copy();

    *pVal = bstr;

    return S_OK;
}


STDMETHODIMP CTestObj::put_TestStringProp2(BSTR newVal)
{
    _bstr_t bstrStart(newVal);

    mTestStringProp2 = (LPCWSTR)bstrStart;

    /*CString s;

    s.Format(_T("%s"), (LPCTSTR)bstrStart);*/

    return S_OK;
}
