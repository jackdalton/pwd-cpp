#include <iostream>
#include <stdio.h>
#include <string>
#include <Windows.h>
#include <tchar.h>

#define BUFSIZE MAX_PATH

using namespace std;

int main() {
	TCHAR Buffer[BUFSIZE];
	DWORD dwRet = GetCurrentDirectory(BUFSIZE, Buffer);
	_tprintf(TEXT("%s\n"), Buffer);
}
