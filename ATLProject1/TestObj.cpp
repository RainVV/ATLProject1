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
