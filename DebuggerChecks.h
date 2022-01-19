#pragma once
#include <cinttypes>
#include <Windows.h>
#include <Winternl.h>
#include <stdio.h>
#include <Tlhelp32.h>

using namespace std;

extern "C"
{
	int adbg_BeingDebuggedPEBx64(void);
	int adbg_NtGlobalFlagPEBx64(void);
	void adbg_GetTickCountx64(void);
	void adbg_QueryPerformanceCounterx64(void);
	// void adbg_RDTSCx64(TimeKeeper*);
	void adbg_Int2Dx64(void);
	void adbg_Int3x64(void);
	void adbg_SingleStepExceptionx64(void);
};

class DebuggerChecks
{
};

