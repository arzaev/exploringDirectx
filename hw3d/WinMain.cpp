#include "Window.h"



int WinMain(
	HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	LPSTR lpCmdLine,
	int nCmdShow
)

{

	Window wnd(800, 300, "Box");


	MSG msg;
	BOOL gResult;
	while ( (gResult = GetMessage( &msg, nullptr, 0, 0 )) > 0 )
	{
		TranslateMessage( &msg );
		DispatchMessage( &msg );
	}

	if (gResult == -1)
	{
		return -1;
	}
	else
	{
		return msg.wParam;
	}
}