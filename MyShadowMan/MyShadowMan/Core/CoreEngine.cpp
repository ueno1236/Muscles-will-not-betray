#include"CoreEngine.h"

BOOL InitCore(HINSTANCE hInstance,CONST CHAR* WindowName, int WindowWidth, int WindowHeight)
{
	HWND hWnd;

	WindowSettings(hInstance, WindowName, WindowWidth, WindowHeight, &hWnd);

	return true;

}