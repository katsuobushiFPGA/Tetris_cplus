#include "DxLib.h"


int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int){

	// DXライブラリ初期化
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
	// DXライブラリ終了処理
	DxLib_End();
	return 0;
}