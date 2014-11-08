#include "DxLib.h"


int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int){

	// DX���C�u����������
	ChangeWindowMode(TRUE);
	if (DxLib_Init() == -1)
	{
		return -1;
	}


	while (1)
	{
		ClearDrawScreen();
		ScreenFlip();
		if (ProcessMessage() < 0) break;
#ifdef _DEBUG
		if (CheckHitKey(KEY_INPUT_ESCAPE)) break;
#endif

	}
	// DX���C�u�����I������
	DxLib_End();
	return 0;
}