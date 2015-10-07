

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


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


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_ITestObj,0x68171867,0x2C47,0x4E2C,0xBC,0xB7,0x02,0x4C,0x56,0x70,0x77,0xA2);


MIDL_DEFINE_GUID(IID, LIBID_ATLProject1Lib,0xFF96CDB1,0xDD50,0x44BF,0xBF,0x46,0x32,0xE6,0x2D,0x8D,0x91,0x6A);


MIDL_DEFINE_GUID(IID, DIID__ITestObjEvents,0x2E501243,0xCF82,0x4137,0xB2,0x2B,0x70,0xE4,0x8B,0xD1,0x83,0x4D);


MIDL_DEFINE_GUID(CLSID, CLSID_TestObj,0x338702E1,0xD51F,0x493B,0xBF,0x0F,0xBC,0x5E,0x15,0xCB,0x4E,0x10);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



