#include "pch.h"
#include "PakFile.h"
#include <Shlwapi.h>

bool CPakFile::FindINI(char * path)
{
	if (PathFileExistsA(path) == FALSE)
		return ((bool(__thiscall*)(CPakFile*, char*))0x60E9A0)(this, path);
	else
		return false;
}
