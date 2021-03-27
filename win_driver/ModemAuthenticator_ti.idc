//
// +-------------------------------------------------------------------------+
// |   This file has been generated by The Interactive Disassembler (IDA)    |
// |           Copyright (c) 2015 Hex-Rays, <support@hex-rays.com>           |
// |                      License info: 48-3257-7594-82                      |
// |                             James Laird-Wah                             |
// +-------------------------------------------------------------------------+
//
//
//      This file contains the user-defined type definitions.
//      To use it press F2 in IDA and enter the name of this file.
//

#define UNLOADED_FILE   1
#include <idc.idc>

static main(void)
{
  Enums();              // enumerations
  Structures();         // structure types
  ApplyStrucTInfos();
	LowVoids(0x7FFE0000);
	HighVoids(0x7FFC8FF50000);
}

//------------------------------------------------------------------------
// Information about enum types

static Enums(void) {
        auto id;
        BeginTypeUpdating(UTP_ENUM);
        EndTypeUpdating(UTP_ENUM);
}

static ApplyStrucTInfos_0(void) {
        auto id;
	id = GetStrucIdByName("GUID");
	SetType(GetMemberId(id, 0x0), "unsigned __int32");
	SetType(GetMemberId(id, 0x4), "unsigned __int16");
	SetType(GetMemberId(id, 0x6), "unsigned __int16");
	SetType(GetMemberId(id, 0x8), "unsigned __int8[8]");
	id = GetStrucIdByName("_RTL_CRITICAL_SECTION");
	SetType(GetMemberId(id, 0x0), "PRTL_CRITICAL_SECTION_DEBUG");
	SetType(GetMemberId(id, 0x8), "LONG");
	SetType(GetMemberId(id, 0xC), "LONG");
	SetType(GetMemberId(id, 0x10), "HANDLE");
	SetType(GetMemberId(id, 0x18), "HANDLE");
	SetType(GetMemberId(id, 0x20), "ULONG_PTR");
	id = GetStrucIdByName("_SYSTEMTIME");
	SetType(GetMemberId(id, 0x0), "WORD");
	SetType(GetMemberId(id, 0x2), "WORD");
	SetType(GetMemberId(id, 0x4), "WORD");
	SetType(GetMemberId(id, 0x6), "WORD");
	SetType(GetMemberId(id, 0x8), "WORD");
	SetType(GetMemberId(id, 0xA), "WORD");
	SetType(GetMemberId(id, 0xC), "WORD");
	SetType(GetMemberId(id, 0xE), "WORD");
	id = GetStrucIdByName("IID");
	SetType(GetMemberId(id, 0x0), "unsigned __int32");
	SetType(GetMemberId(id, 0x4), "unsigned __int16");
	SetType(GetMemberId(id, 0x6), "unsigned __int16");
	SetType(GetMemberId(id, 0x8), "unsigned __int8[8]");
	id = GetStrucIdByName("SAFEARRAYBOUND");
	SetType(GetMemberId(id, 0x0), "ULONG");
	SetType(GetMemberId(id, 0x4), "LONG");
	id = GetStrucIdByName("_SERVICE_STATUS");
	SetType(GetMemberId(id, 0x0), "DWORD");
	SetType(GetMemberId(id, 0x4), "DWORD");
	SetType(GetMemberId(id, 0x8), "DWORD");
	SetType(GetMemberId(id, 0xC), "DWORD");
	SetType(GetMemberId(id, 0x10), "DWORD");
	SetType(GetMemberId(id, 0x14), "DWORD");
	SetType(GetMemberId(id, 0x18), "DWORD");
	id = GetStrucIdByName("SERVICE_TABLE_ENTRYA");
	SetType(GetMemberId(id, 0x0), "LPSTR");
	SetType(GetMemberId(id, 0x8), "LPSERVICE_MAIN_FUNCTIONA");
	id = GetStrucIdByName("_EXCEPTION_POINTERS");
	SetType(GetMemberId(id, 0x0), "PEXCEPTION_RECORD");
	SetType(GetMemberId(id, 0x8), "PCONTEXT");
	id = GetStrucIdByName("_FILETIME");
	SetType(GetMemberId(id, 0x0), "DWORD");
	SetType(GetMemberId(id, 0x4), "DWORD");
	id = GetStrucIdByName("LARGE_INTEGER");
	SetType(GetMemberId(id, 0x0), "_LARGE_INTEGER::$837407842DC9087486FDFA5FEB63B74E");
	SetType(GetMemberId(id, 0x1), "_LARGE_INTEGER::$837407842DC9087486FDFA5FEB63B74E");
	SetType(GetMemberId(id, 0x2), "LONGLONG");
	id = GetStrucIdByName("_LARGE_INTEGER::$837407842DC9087486FDFA5FEB63B74E");
	SetType(GetMemberId(id, 0x0), "DWORD");
	SetType(GetMemberId(id, 0x4), "LONG");
	id = GetStrucIdByName("_CONTEXT");
	SetType(GetMemberId(id, 0x0), "DWORD64");
	SetType(GetMemberId(id, 0x8), "DWORD64");
	SetType(GetMemberId(id, 0x10), "DWORD64");
	SetType(GetMemberId(id, 0x18), "DWORD64");
	SetType(GetMemberId(id, 0x20), "DWORD64");
	SetType(GetMemberId(id, 0x28), "DWORD64");
	SetType(GetMemberId(id, 0x30), "DWORD");
	SetType(GetMemberId(id, 0x34), "DWORD");
	SetType(GetMemberId(id, 0x38), "WORD");
	SetType(GetMemberId(id, 0x3A), "WORD");
	SetType(GetMemberId(id, 0x3C), "WORD");
	SetType(GetMemberId(id, 0x3E), "WORD");
	SetType(GetMemberId(id, 0x40), "WORD");
	SetType(GetMemberId(id, 0x42), "WORD");
	SetType(GetMemberId(id, 0x44), "DWORD");
	SetType(GetMemberId(id, 0x48), "DWORD64");
	SetType(GetMemberId(id, 0x50), "DWORD64");
	SetType(GetMemberId(id, 0x58), "DWORD64");
	SetType(GetMemberId(id, 0x60), "DWORD64");
	SetType(GetMemberId(id, 0x68), "DWORD64");
	SetType(GetMemberId(id, 0x70), "DWORD64");
	SetType(GetMemberId(id, 0x78), "DWORD64");
	SetType(GetMemberId(id, 0x80), "DWORD64");
	SetType(GetMemberId(id, 0x88), "DWORD64");
	SetType(GetMemberId(id, 0x90), "DWORD64");
	SetType(GetMemberId(id, 0x98), "DWORD64");
	SetType(GetMemberId(id, 0xA0), "DWORD64");
	SetType(GetMemberId(id, 0xA8), "DWORD64");
	SetType(GetMemberId(id, 0xB0), "DWORD64");
	SetType(GetMemberId(id, 0xB8), "DWORD64");
	SetType(GetMemberId(id, 0xC0), "DWORD64");
	SetType(GetMemberId(id, 0xC8), "DWORD64");
	SetType(GetMemberId(id, 0xD0), "DWORD64");
	SetType(GetMemberId(id, 0xD8), "DWORD64");
	SetType(GetMemberId(id, 0xE0), "DWORD64");
	SetType(GetMemberId(id, 0xE8), "DWORD64");
	SetType(GetMemberId(id, 0xF0), "DWORD64");
	SetType(GetMemberId(id, 0xF8), "DWORD64");
	SetType(GetMemberId(id, 0x100), "_CONTEXT::$D2ECA93702C646ACAFACD524BE9E8FEB");
	SetType(GetMemberId(id, 0x300), "M128A[26]");
	SetType(GetMemberId(id, 0x4A0), "DWORD64");
	SetType(GetMemberId(id, 0x4A8), "DWORD64");
	SetType(GetMemberId(id, 0x4B0), "DWORD64");
	SetType(GetMemberId(id, 0x4B8), "DWORD64");
	SetType(GetMemberId(id, 0x4C0), "DWORD64");
	SetType(GetMemberId(id, 0x4C8), "DWORD64");
	id = GetStrucIdByName("_CONTEXT::$D2ECA93702C646ACAFACD524BE9E8FEB");
	SetType(GetMemberId(id, 0x0), "XMM_SAVE_AREA32");
	SetType(GetMemberId(id, 0x1), "_CONTEXT::$D2ECA93702C646ACAFACD524BE9E8FEB::$897D11C01F73F7E79A06B0B9ED9B9414");
	id = GetStrucIdByName("XMM_SAVE_AREA32");
	SetType(GetMemberId(id, 0x0), "WORD");
	SetType(GetMemberId(id, 0x2), "WORD");
	SetType(GetMemberId(id, 0x4), "BYTE");
	SetType(GetMemberId(id, 0x5), "BYTE");
	SetType(GetMemberId(id, 0x6), "WORD");
	SetType(GetMemberId(id, 0x8), "DWORD");
	SetType(GetMemberId(id, 0xC), "WORD");
	SetType(GetMemberId(id, 0xE), "WORD");
	SetType(GetMemberId(id, 0x10), "DWORD");
	SetType(GetMemberId(id, 0x14), "WORD");
	SetType(GetMemberId(id, 0x16), "WORD");
	SetType(GetMemberId(id, 0x18), "DWORD");
	SetType(GetMemberId(id, 0x1C), "DWORD");
	SetType(GetMemberId(id, 0x20), "M128A[8]");
	SetType(GetMemberId(id, 0xA0), "M128A[16]");
	SetType(GetMemberId(id, 0x1A0), "BYTE[96]");
	id = GetStrucIdByName("M128A");
	SetType(GetMemberId(id, 0x0), "ULONGLONG");
	SetType(GetMemberId(id, 0x8), "LONGLONG");
	id = GetStrucIdByName("_CONTEXT::$D2ECA93702C646ACAFACD524BE9E8FEB::$897D11C01F73F7E79A06B0B9ED9B9414");
	SetType(GetMemberId(id, 0x0), "M128A[2]");
	SetType(GetMemberId(id, 0x20), "M128A[8]");
	SetType(GetMemberId(id, 0xA0), "M128A");
	SetType(GetMemberId(id, 0xB0), "M128A");
	SetType(GetMemberId(id, 0xC0), "M128A");
	SetType(GetMemberId(id, 0xD0), "M128A");
	SetType(GetMemberId(id, 0xE0), "M128A");
	SetType(GetMemberId(id, 0xF0), "M128A");
	SetType(GetMemberId(id, 0x100), "M128A");
	SetType(GetMemberId(id, 0x110), "M128A");
	SetType(GetMemberId(id, 0x120), "M128A");
	SetType(GetMemberId(id, 0x130), "M128A");
	SetType(GetMemberId(id, 0x140), "M128A");
	SetType(GetMemberId(id, 0x150), "M128A");
	SetType(GetMemberId(id, 0x160), "M128A");
	SetType(GetMemberId(id, 0x170), "M128A");
	SetType(GetMemberId(id, 0x180), "M128A");
	SetType(GetMemberId(id, 0x190), "M128A");
	id = GetStrucIdByName("EXCEPTION_RECORD");
	SetType(GetMemberId(id, 0x0), "DWORD");
	SetType(GetMemberId(id, 0x4), "DWORD");
	SetType(GetMemberId(id, 0x8), "_EXCEPTION_RECORD *");
	SetType(GetMemberId(id, 0x10), "PVOID");
	SetType(GetMemberId(id, 0x18), "DWORD");
	SetType(GetMemberId(id, 0x20), "ULONG_PTR[15]");
	id = GetStrucIdByName("RUNTIME_FUNCTION");
	id = GetStrucIdByName("UNWIND_INFO");
	id = GetStrucIdByName("UNWIND_CODE");
	id = GetStrucIdByName("C_SCOPE_TABLE");
	id = GetStrucIdByName("FuncInfo");
	id = GetStrucIdByName("ESTypeList");
	id = GetStrucIdByName("IPtoStateMap");
	id = GetStrucIdByName("UnwindMapEntry");
	id = GetStrucIdByName("TryBlockMapEntry");
	id = GetStrucIdByName("HandlerType");
	id = GetStrucIdByName("TypeDescriptor");
	id = GetStrucIdByName("hash_context");
	id = GetStrucIdByName("HKEY__");
	SetType(GetMemberId(id, 0x0), "int");
	return id;
}

//------------------------------------------------------------------------
// Information about type information for structure members

static ApplyStrucTInfos() {
	ApplyStrucTInfos_0();
}

static Structures_0(id) {
        auto mid;

	id = AddStrucEx(-1,"GUID",0);
	id = AddStrucEx(-1,"_RTL_CRITICAL_SECTION",0);
	id = AddStrucEx(-1,"_SYSTEMTIME",0);
	id = AddStrucEx(-1,"IID",0);
	id = AddStrucEx(-1,"SAFEARRAYBOUND",0);
	id = AddStrucEx(-1,"_SERVICE_STATUS",0);
	id = AddStrucEx(-1,"SERVICE_TABLE_ENTRYA",0);
	id = AddStrucEx(-1,"_EXCEPTION_POINTERS",0);
	id = AddStrucEx(-1,"_FILETIME",0);
	id = AddStrucEx(-1,"LARGE_INTEGER",1);
	id = AddStrucEx(-1,"_LARGE_INTEGER::$837407842DC9087486FDFA5FEB63B74E",0);
	id = AddStrucEx(-1,"_CONTEXT",0);
	id = AddStrucEx(-1,"_CONTEXT::$D2ECA93702C646ACAFACD524BE9E8FEB",1);
	id = AddStrucEx(-1,"XMM_SAVE_AREA32",0);
	id = AddStrucEx(-1,"M128A",0);
	id = AddStrucEx(-1,"_CONTEXT::$D2ECA93702C646ACAFACD524BE9E8FEB::$897D11C01F73F7E79A06B0B9ED9B9414",0);
	id = AddStrucEx(-1,"EXCEPTION_RECORD",0);
	id = AddStrucEx(-1,"RUNTIME_FUNCTION",0);
	id = AddStrucEx(-1,"UNWIND_INFO",0);
	id = AddStrucEx(-1,"UNWIND_CODE",0);
	id = AddStrucEx(-1,"C_SCOPE_TABLE",0);
	id = AddStrucEx(-1,"FuncInfo",0);
	id = AddStrucEx(-1,"ESTypeList",0);
	id = AddStrucEx(-1,"IPtoStateMap",0);
	id = AddStrucEx(-1,"UnwindMapEntry",0);
	id = AddStrucEx(-1,"TryBlockMapEntry",0);
	id = AddStrucEx(-1,"HandlerType",0);
	id = AddStrucEx(-1,"TypeDescriptor",0);
	id = AddStrucEx(-1,"hash_context",0);
	id = AddStrucEx(-1,"HKEY__",0);
	
	id = GetStrucIdByName("GUID");
	mid = AddStrucMember(id,"Data1",	0,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"Data2",	0X4,	0x10000400,	-1,	2);
	mid = AddStrucMember(id,"Data3",	0X6,	0x10000400,	-1,	2);
	mid = AddStrucMember(id,"Data4",	0X8,	0x000400,	-1,	8);
	SetStrucAlign(id,2);
	
	id = GetStrucIdByName("_RTL_CRITICAL_SECTION");
	mid = AddStrucMember(id,"DebugInfo",	0,	0x35500400,	0XFFFFFFFFFFFFFFFF,	8,	0XFFFFFFFFFFFFFFFF,	0,	0x000009);
	mid = AddStrucMember(id,"LockCount",	0X8,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"RecursionCount",	0XC,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"OwningThread",	0X10,	0x35500400,	0XFFFFFFFFFFFFFFFF,	8,	0XFFFFFFFFFFFFFFFF,	0,	0x000009);
	mid = AddStrucMember(id,"LockSemaphore",	0X18,	0x35500400,	0XFFFFFFFFFFFFFFFF,	8,	0XFFFFFFFFFFFFFFFF,	0,	0x000009);
	mid = AddStrucMember(id,"SpinCount",	0X20,	0x30000400,	-1,	8);
	SetStrucAlign(id,3);
	
	id = GetStrucIdByName("_SYSTEMTIME");
	mid = AddStrucMember(id,"wYear",	0,	0x10000400,	-1,	2);
	mid = AddStrucMember(id,"wMonth",	0X2,	0x10000400,	-1,	2);
	mid = AddStrucMember(id,"wDayOfWeek",	0X4,	0x10000400,	-1,	2);
	mid = AddStrucMember(id,"wDay",	0X6,	0x10000400,	-1,	2);
	mid = AddStrucMember(id,"wHour",	0X8,	0x10000400,	-1,	2);
	mid = AddStrucMember(id,"wMinute",	0XA,	0x10000400,	-1,	2);
	mid = AddStrucMember(id,"wSecond",	0XC,	0x10000400,	-1,	2);
	mid = AddStrucMember(id,"wMilliseconds",	0XE,	0x10000400,	-1,	2);
	SetStrucAlign(id,1);
	
	id = GetStrucIdByName("IID");
	mid = AddStrucMember(id,"Data1",	0,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"Data2",	0X4,	0x10000400,	-1,	2);
	mid = AddStrucMember(id,"Data3",	0X6,	0x10000400,	-1,	2);
	mid = AddStrucMember(id,"Data4",	0X8,	0x000400,	-1,	8);
	SetStrucAlign(id,2);
	
	id = GetStrucIdByName("SAFEARRAYBOUND");
	mid = AddStrucMember(id,"cElements",	0,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"lLbound",	0X4,	0x20000400,	-1,	4);
	SetStrucAlign(id,2);
	
	id = GetStrucIdByName("_SERVICE_STATUS");
	mid = AddStrucMember(id,"dwServiceType",	0,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"dwCurrentState",	0X4,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"dwControlsAccepted",	0X8,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"dwWin32ExitCode",	0XC,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"dwServiceSpecificExitCode",	0X10,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"dwCheckPoint",	0X14,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"dwWaitHint",	0X18,	0x20000400,	-1,	4);
	SetStrucAlign(id,2);
	
	id = GetStrucIdByName("SERVICE_TABLE_ENTRYA");
	mid = AddStrucMember(id,"lpServiceName",	0,	0x35500400,	0XFFFFFFFFFFFFFFFF,	8,	0XFFFFFFFFFFFFFFFF,	0,	0x000009);
	mid = AddStrucMember(id,"lpServiceProc",	0X8,	0x35500400,	0XFFFFFFFFFFFFFFFF,	8,	0XFFFFFFFFFFFFFFFF,	0,	0x000009);
	SetStrucAlign(id,3);
	
	id = GetStrucIdByName("_EXCEPTION_POINTERS");
	mid = AddStrucMember(id,"ExceptionRecord",	0,	0x35500400,	0XFFFFFFFFFFFFFFFF,	8,	0XFFFFFFFFFFFFFFFF,	0,	0x000009);
	mid = AddStrucMember(id,"ContextRecord",	0X8,	0x35500400,	0XFFFFFFFFFFFFFFFF,	8,	0XFFFFFFFFFFFFFFFF,	0,	0x000009);
	SetStrucAlign(id,3);
	
	id = GetStrucIdByName("_FILETIME");
	mid = AddStrucMember(id,"dwLowDateTime",	0,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"dwHighDateTime",	0X4,	0x20000400,	-1,	4);
	SetStrucAlign(id,2);
	
	id = GetStrucIdByName("_LARGE_INTEGER::$837407842DC9087486FDFA5FEB63B74E");
	mid = AddStrucMember(id,"LowPart",	0,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"HighPart",	0X4,	0x20000400,	-1,	4);
	SetStrucAlign(id,2);
	
	id = GetStrucIdByName("LARGE_INTEGER");
	mid = AddStrucMember(id,"anonymous_0",	0,	0x60000400,	GetStrucIdByName("_LARGE_INTEGER::$837407842DC9087486FDFA5FEB63B74E"),	8);
	mid = AddStrucMember(id,"u",	0,	0x60000400,	GetStrucIdByName("_LARGE_INTEGER::$837407842DC9087486FDFA5FEB63B74E"),	8);
	mid = AddStrucMember(id,"QuadPart",	0,	0x30000400,	-1,	8);
	SetStrucAlign(id,3);
	
	id = GetStrucIdByName("M128A");
	mid = AddStrucMember(id,"Low",	0,	0x30000400,	-1,	8);
	mid = AddStrucMember(id,"High",	0X8,	0x30000400,	-1,	8);
	SetStrucAlign(id,4);
	
	id = GetStrucIdByName("XMM_SAVE_AREA32");
	mid = AddStrucMember(id,"ControlWord",	0,	0x10000400,	-1,	2);
	mid = AddStrucMember(id,"StatusWord",	0X2,	0x10000400,	-1,	2);
	mid = AddStrucMember(id,"TagWord",	0X4,	0x000400,	-1,	1);
	mid = AddStrucMember(id,"Reserved1",	0X5,	0x000400,	-1,	1);
	mid = AddStrucMember(id,"ErrorOpcode",	0X6,	0x10000400,	-1,	2);
	mid = AddStrucMember(id,"ErrorOffset",	0X8,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"ErrorSelector",	0XC,	0x10000400,	-1,	2);
	mid = AddStrucMember(id,"Reserved2",	0XE,	0x10000400,	-1,	2);
	mid = AddStrucMember(id,"DataOffset",	0X10,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"DataSelector",	0X14,	0x10000400,	-1,	2);
	mid = AddStrucMember(id,"Reserved3",	0X16,	0x10000400,	-1,	2);
	mid = AddStrucMember(id,"_MxCsr",	0X18,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"MxCsr_Mask",	0X1C,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"FloatRegisters",	0X20,	0x60000400,	GetStrucIdByName("M128A"),	128);
	mid = AddStrucMember(id,"XmmRegisters",	0XA0,	0x60000400,	GetStrucIdByName("M128A"),	256);
	mid = AddStrucMember(id,"Reserved4",	0X1A0,	0x000400,	-1,	96);
	SetStrucAlign(id,4);
	
	id = GetStrucIdByName("_CONTEXT::$D2ECA93702C646ACAFACD524BE9E8FEB::$897D11C01F73F7E79A06B0B9ED9B9414");
	mid = AddStrucMember(id,"Header",	0,	0x60000400,	GetStrucIdByName("M128A"),	32);
	mid = AddStrucMember(id,"Legacy",	0X20,	0x60000400,	GetStrucIdByName("M128A"),	128);
	mid = AddStrucMember(id,"_Xmm0",	0XA0,	0x60000400,	GetStrucIdByName("M128A"),	16);
	mid = AddStrucMember(id,"_Xmm1",	0XB0,	0x60000400,	GetStrucIdByName("M128A"),	16);
	mid = AddStrucMember(id,"_Xmm2",	0XC0,	0x60000400,	GetStrucIdByName("M128A"),	16);
	mid = AddStrucMember(id,"_Xmm3",	0XD0,	0x60000400,	GetStrucIdByName("M128A"),	16);
	mid = AddStrucMember(id,"_Xmm4",	0XE0,	0x60000400,	GetStrucIdByName("M128A"),	16);
	mid = AddStrucMember(id,"_Xmm5",	0XF0,	0x60000400,	GetStrucIdByName("M128A"),	16);
	mid = AddStrucMember(id,"_Xmm6",	0X100,	0x60000400,	GetStrucIdByName("M128A"),	16);
	mid = AddStrucMember(id,"_Xmm7",	0X110,	0x60000400,	GetStrucIdByName("M128A"),	16);
	mid = AddStrucMember(id,"_Xmm8",	0X120,	0x60000400,	GetStrucIdByName("M128A"),	16);
	mid = AddStrucMember(id,"_Xmm9",	0X130,	0x60000400,	GetStrucIdByName("M128A"),	16);
	mid = AddStrucMember(id,"_Xmm10",	0X140,	0x60000400,	GetStrucIdByName("M128A"),	16);
	mid = AddStrucMember(id,"_Xmm11",	0X150,	0x60000400,	GetStrucIdByName("M128A"),	16);
	mid = AddStrucMember(id,"_Xmm12",	0X160,	0x60000400,	GetStrucIdByName("M128A"),	16);
	mid = AddStrucMember(id,"_Xmm13",	0X170,	0x60000400,	GetStrucIdByName("M128A"),	16);
	mid = AddStrucMember(id,"_Xmm14",	0X180,	0x60000400,	GetStrucIdByName("M128A"),	16);
	mid = AddStrucMember(id,"_Xmm15",	0X190,	0x60000400,	GetStrucIdByName("M128A"),	16);
	SetStrucAlign(id,4);
	
	id = GetStrucIdByName("_CONTEXT::$D2ECA93702C646ACAFACD524BE9E8FEB");
	mid = AddStrucMember(id,"FltSave",	0,	0x60000400,	GetStrucIdByName("XMM_SAVE_AREA32"),	512);
	mid = AddStrucMember(id,"anonymous_0",	0,	0x60000400,	GetStrucIdByName("_CONTEXT::$D2ECA93702C646ACAFACD524BE9E8FEB::$897D11C01F73F7E79A06B0B9ED9B9414"),	416);
	SetStrucAlign(id,4);
	
	id = GetStrucIdByName("_CONTEXT");
	mid = AddStrucMember(id,"P1Home",	0,	0x30000400,	-1,	8);
	mid = AddStrucMember(id,"P2Home",	0X8,	0x30000400,	-1,	8);
	mid = AddStrucMember(id,"P3Home",	0X10,	0x30000400,	-1,	8);
	mid = AddStrucMember(id,"P4Home",	0X18,	0x30000400,	-1,	8);
	mid = AddStrucMember(id,"P5Home",	0X20,	0x30000400,	-1,	8);
	mid = AddStrucMember(id,"P6Home",	0X28,	0x30000400,	-1,	8);
	mid = AddStrucMember(id,"ContextFlags",	0X30,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"_MxCsr",	0X34,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"SegCs",	0X38,	0x10000400,	-1,	2);
	mid = AddStrucMember(id,"SegDs",	0X3A,	0x10000400,	-1,	2);
	mid = AddStrucMember(id,"SegEs",	0X3C,	0x10000400,	-1,	2);
	mid = AddStrucMember(id,"SegFs",	0X3E,	0x10000400,	-1,	2);
	mid = AddStrucMember(id,"SegGs",	0X40,	0x10000400,	-1,	2);
	mid = AddStrucMember(id,"SegSs",	0X42,	0x10000400,	-1,	2);
	mid = AddStrucMember(id,"EFlags",	0X44,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"Dr0",	0X48,	0x30000400,	-1,	8);
	mid = AddStrucMember(id,"Dr1",	0X50,	0x30000400,	-1,	8);
	mid = AddStrucMember(id,"Dr2",	0X58,	0x30000400,	-1,	8);
	mid = AddStrucMember(id,"Dr3",	0X60,	0x30000400,	-1,	8);
	mid = AddStrucMember(id,"Dr6",	0X68,	0x30000400,	-1,	8);
	mid = AddStrucMember(id,"Dr7",	0X70,	0x30000400,	-1,	8);
	mid = AddStrucMember(id,"_Rax",	0X78,	0x30000400,	-1,	8);
	mid = AddStrucMember(id,"_Rcx",	0X80,	0x30000400,	-1,	8);
	mid = AddStrucMember(id,"_Rdx",	0X88,	0x30000400,	-1,	8);
	mid = AddStrucMember(id,"_Rbx",	0X90,	0x30000400,	-1,	8);
	mid = AddStrucMember(id,"_Rsp",	0X98,	0x30000400,	-1,	8);
	mid = AddStrucMember(id,"_Rbp",	0XA0,	0x30000400,	-1,	8);
	mid = AddStrucMember(id,"_Rsi",	0XA8,	0x30000400,	-1,	8);
	mid = AddStrucMember(id,"_Rdi",	0XB0,	0x30000400,	-1,	8);
	mid = AddStrucMember(id,"_R8",	0XB8,	0x30000400,	-1,	8);
	mid = AddStrucMember(id,"_R9",	0XC0,	0x30000400,	-1,	8);
	mid = AddStrucMember(id,"_R10",	0XC8,	0x30000400,	-1,	8);
	mid = AddStrucMember(id,"_R11",	0XD0,	0x30000400,	-1,	8);
	mid = AddStrucMember(id,"_R12",	0XD8,	0x30000400,	-1,	8);
	mid = AddStrucMember(id,"_R13",	0XE0,	0x30000400,	-1,	8);
	mid = AddStrucMember(id,"_R14",	0XE8,	0x30000400,	-1,	8);
	mid = AddStrucMember(id,"_R15",	0XF0,	0x30000400,	-1,	8);
	mid = AddStrucMember(id,"_Rip",	0XF8,	0x30000400,	-1,	8);
	mid = AddStrucMember(id,"anonymous_0",	0X100,	0x60000400,	GetStrucIdByName("_CONTEXT::$D2ECA93702C646ACAFACD524BE9E8FEB"),	512);
	mid = AddStrucMember(id,"VectorRegister",	0X300,	0x60000400,	GetStrucIdByName("M128A"),	416);
	mid = AddStrucMember(id,"VectorControl",	0X4A0,	0x30000400,	-1,	8);
	mid = AddStrucMember(id,"DebugControl",	0X4A8,	0x30000400,	-1,	8);
	mid = AddStrucMember(id,"LastBranchToRip",	0X4B0,	0x30000400,	-1,	8);
	mid = AddStrucMember(id,"LastBranchFromRip",	0X4B8,	0x30000400,	-1,	8);
	mid = AddStrucMember(id,"LastExceptionToRip",	0X4C0,	0x30000400,	-1,	8);
	mid = AddStrucMember(id,"LastExceptionFromRip",	0X4C8,	0x30000400,	-1,	8);
	SetStrucAlign(id,4);
	
	id = GetStrucIdByName("EXCEPTION_RECORD");
	mid = AddStrucMember(id,"ExceptionCode",	0,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"ExceptionFlags",	0X4,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"ExceptionRecord",	0X8,	0x35500400,	0XFFFFFFFFFFFFFFFF,	8,	0XFFFFFFFFFFFFFFFF,	0,	0x000009);
	mid = AddStrucMember(id,"ExceptionAddress",	0X10,	0x35500400,	0XFFFFFFFFFFFFFFFF,	8,	0XFFFFFFFFFFFFFFFF,	0,	0x000009);
	mid = AddStrucMember(id,"NumberParameters",	0X18,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"ExceptionInformation",	0X20,	0x30000400,	-1,	120);
	SetStrucAlign(id,3);
	
	id = GetStrucIdByName("RUNTIME_FUNCTION");
	mid = AddStrucMember(id,"FunctionStart",	0,	0x25500400,	0X7FF6CE4B0000,	4,	0XFFFFFFFFFFFFFFFF,	0,	0x000019);
	mid = AddStrucMember(id,"FunctionEnd",	0X4,	0x25500400,	0X7FF6CE4B0000,	4,	0XFFFFFFFFFFFFFFFF,	0,	0x000039);
	mid = AddStrucMember(id,"UnwindInfo",	0X8,	0x25500400,	0X7FF6CE4B0000,	4,	0XFFFFFFFFFFFFFFFF,	0,	0x000019);
	
	id = GetStrucIdByName("UNWIND_INFO");
	mid = AddStrucMember(id,"Ver3_Flags",	0,	0x1100400,	-1,	1);
	mid = AddStrucMember(id,"PrologSize",	0X1,	0x1100400,	-1,	1);
	mid = AddStrucMember(id,"CntUnwindCodes",	0X2,	0x1100400,	-1,	1);
	mid = AddStrucMember(id,"FrReg_FrRegOff",	0X3,	0x1100400,	-1,	1);
	
	id = GetStrucIdByName("UNWIND_CODE");
	mid = AddStrucMember(id,"PrologOff",	0,	0x1100400,	-1,	1);
	mid = AddStrucMember(id,"OpCode_OpInfo",	0X1,	0x1100400,	-1,	1);
	
	id = GetStrucIdByName("C_SCOPE_TABLE");
	mid = AddStrucMember(id,"Begin",	0,	0x25500400,	0X7FF6CE4B0000,	4,	0XFFFFFFFFFFFFFFFF,	0,	0x000019);
	mid = AddStrucMember(id,"End",	0X4,	0x25500400,	0X7FF6CE4B0000,	4,	0XFFFFFFFFFFFFFFFF,	0,	0x000039);
	mid = AddStrucMember(id,"Handler",	0X8,	0x25500400,	0X7FF6CE4B0000,	4,	0XFFFFFFFFFFFFFFFF,	0,	0x000019);
	mid = AddStrucMember(id,"Target",	0XC,	0x25500400,	0X7FF6CE4B0000,	4,	0XFFFFFFFFFFFFFFFF,	0,	0x000019);
	
	id = GetStrucIdByName("FuncInfo");
	mid = AddStrucMember(id,"magicNumber",	0,	0x21100400,	-1,	4);
	mid = AddStrucMember(id,"maxState",	0X4,	0x22200400,	-1,	4);
	mid = AddStrucMember(id,"pUnwindMap",	0X8,	0x25500400,	0X7FF6CE4B0000,	4,	0XFFFFFFFFFFFFFFFF,	0,	0x000019);
	mid = AddStrucMember(id,"nTryBlocks",	0XC,	0x22200400,	-1,	4);
	mid = AddStrucMember(id,"pTryBlockMap",	0X10,	0x25500400,	0X7FF6CE4B0000,	4,	0XFFFFFFFFFFFFFFFF,	0,	0x000019);
	mid = AddStrucMember(id,"nIPMapEntries",	0X14,	0x22200400,	-1,	4);
	mid = AddStrucMember(id,"pIPtoStateMap",	0X18,	0x25500400,	0X7FF6CE4B0000,	4,	0XFFFFFFFFFFFFFFFF,	0,	0x000019);
	mid = AddStrucMember(id,"dispUnwindHelp",	0X1C,	0x22200400,	-1,	4);
	mid = AddStrucMember(id,"pESTypeList",	0X20,	0x25500400,	0X7FF6CE4B0000,	4,	0XFFFFFFFFFFFFFFFF,	0,	0x000019);
	mid = AddStrucMember(id,"EHFlags",	0X24,	0x21100400,	-1,	4);
	
	id = GetStrucIdByName("ESTypeList");
	mid = AddStrucMember(id,"nCount",	0,	0x22200400,	-1,	4);
	mid = AddStrucMember(id,"pTypeArray",	0X4,	0x25500400,	0X7FF6CE4B0000,	4,	0XFFFFFFFFFFFFFFFF,	0,	0x000019);
	
	id = GetStrucIdByName("IPtoStateMap");
	mid = AddStrucMember(id,"pc",	0,	0x25500400,	0X7FF6CE4B0000,	4,	0XFFFFFFFFFFFFFFFF,	0,	0x000019);
	mid = AddStrucMember(id,"state",	0X4,	0x22200400,	-1,	4);
	
	id = GetStrucIdByName("UnwindMapEntry");
	mid = AddStrucMember(id,"toState",	0,	0x22200400,	-1,	4);
	mid = AddStrucMember(id,"action",	0X4,	0x25500400,	0X7FF6CE4B0000,	4,	0XFFFFFFFFFFFFFFFF,	0,	0x000019);
	
	id = GetStrucIdByName("TryBlockMapEntry");
	mid = AddStrucMember(id,"tryLow",	0,	0x22200400,	-1,	4);
	mid = AddStrucMember(id,"tryHigh",	0X4,	0x22200400,	-1,	4);
	mid = AddStrucMember(id,"catchHigh",	0X8,	0x22200400,	-1,	4);
	mid = AddStrucMember(id,"nCatches",	0XC,	0x22200400,	-1,	4);
	mid = AddStrucMember(id,"pHandlerArray",	0X10,	0x25500400,	0X7FF6CE4B0000,	4,	0XFFFFFFFFFFFFFFFF,	0,	0x000019);
	
	id = GetStrucIdByName("HandlerType");
	mid = AddStrucMember(id,"adjectives",	0,	0x21100400,	-1,	4);
	mid = AddStrucMember(id,"pType",	0X4,	0x25500400,	0X7FF6CE4B0000,	4,	0XFFFFFFFFFFFFFFFF,	0,	0x000019);
	mid = AddStrucMember(id,"dispCatchObj",	0X8,	0x22200400,	-1,	4);
	mid = AddStrucMember(id,"addressOfHandler",	0XC,	0x25500400,	0X7FF6CE4B0000,	4,	0XFFFFFFFFFFFFFFFF,	0,	0x000019);
	
	id = GetStrucIdByName("TypeDescriptor");
	mid = AddStrucMember(id,"pVFTable",	0,	0x35500400,	0XFFFFFFFFFFFFFFFF,	8,	0XFFFFFFFFFFFFFFFF,	0,	0x000009);
	mid = AddStrucMember(id,"spare",	0X8,	0x35500400,	0XFFFFFFFFFFFFFFFF,	8,	0XFFFFFFFFFFFFFFFF,	0,	0x000009);
	mid = AddStrucMember(id,"name",	0X10,	0x50000400,	0,	0);
	
	id = GetStrucIdByName("hash_context");
	mid = AddStrucMember(id,"field_0",	0,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"field_4",	0X4,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"field_8",	0X8,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"field_C",	0XC,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"state",	0X88,	0x20000400,	-1,	32);
	
	id = GetStrucIdByName("HKEY__");
	mid = AddStrucMember(id,"unused",	0,	0x20000400,	-1,	4);
	SetStrucAlign(id,2);
	return id;
}

//------------------------------------------------------------------------
// Information about structure types

static Structures(void) {
        auto id;
        BeginTypeUpdating(UTP_STRUCT);
	id = Structures_0(id);
        EndTypeUpdating(UTP_STRUCT);
}

// End of file.
