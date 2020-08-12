#pragma once
#include <ntifs.h>
extern ULONG_PTR g_ssdt;
extern ULONG_PTR g_shadowssdt;

NTSTATUS MapFileInMemory(PULONG_PTR base, PHANDLE phfile, PHANDLE phsection, PUNICODE_STRING path);
NTSTATUS GetFuncAddrByIndex(ULONG32 index);
NTSTATUS GetSyscallTableBase();
NTSTATUS OneFuncHookCheck();
NTSTATUS AllFuncHookCheck();