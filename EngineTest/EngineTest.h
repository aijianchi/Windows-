#pragma once
#include "T_Engine.h"
class EngineTest :public T_Engine
{
public:
	virtual ~EngineTest(void);
	EngineTest(HINSTANCE h_instance, LPCTSTR sz_winclass, LPCTSTR sz_title, WORD icon = NULL, WORD sm_icon = NULL, int winwidth = WIN_WIDTH, int winheight = WIN_HEIGHT);
	//重载T_Engine类中的虚函数
	void GameInit();								//游戏初始化
	void GameLogic();								//游戏逻辑处理
	void GameEnd();									//游戏结束处理
	void GamePaint(HDC hdc);						//游戏显示
	void GameKeyAction(int Action = KEY_SYS_NONE);	//按键行为处理
	void GameMouseAction(int x, int y, int Action);	//鼠标行为处理
private:
	int wnd_width, wnd_height;						//游戏窗口宽高
	Image* image[21];								//游戏图片
	Image* bgimg;									//游戏背景图片
};
