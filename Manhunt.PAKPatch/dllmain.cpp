// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"
#include "MemoryMgr.h"
#include "PakFile.h"

using namespace Memory::VP;


void Init()
{
	InjectHook(0x4D52DD, &CPakFile::FindINI, PATCH_CALL);
}


BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
		if (*(int*)0x63BC93 != 0x24448B66)
			MessageBoxA(0, "Invalid executable!", "PAKPatch", 0);
		else 
			Init();
        break;
    }
    return TRUE;
}

