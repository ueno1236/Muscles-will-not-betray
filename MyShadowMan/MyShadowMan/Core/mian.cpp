#include"Window.h"
#include"CoreEngine.h"

int WINAPI WinMain(
	HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	LPSTR lpCmdLine,
	INT nCmdShow) {

	if (InitCore(hInstance, "Swadow Man", 1280, 960) == FALSE)
	{
		return 0;
	}
	
		while (true)
		{
			MSG msg;

			ZeroMemory(&msg, sizeof(msg));

			while (msg.message !=WM_QUIT)
			{
				if (PeekMessage(&msg, NULL, 0, 0, PM_REMOVE)) 
				{
					TranslateMessage(&msg);
					DispatchMessage(&msg);
				}
				else
				{
					//メイン処理
				}
			}
		}


	return 0;
};