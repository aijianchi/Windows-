#pragma once
#include "T_Engine.h"
class EngineTest :public T_Engine
{
public:
	virtual ~EngineTest(void);
	EngineTest(HINSTANCE h_instance, LPCTSTR sz_winclass, LPCTSTR sz_title, WORD icon = NULL, WORD sm_icon = NULL, int winwidth = WIN_WIDTH, int winheight = WIN_HEIGHT);
	//����T_Engine���е��麯��
	void GameInit();								//��Ϸ��ʼ��
	void GameLogic();								//��Ϸ�߼�����
	void GameEnd();									//��Ϸ��������
	void GamePaint(HDC hdc);						//��Ϸ��ʾ
	void GameKeyAction(int Action = KEY_SYS_NONE);	//������Ϊ����
	void GameMouseAction(int x, int y, int Action);	//�����Ϊ����
private:
	int wnd_width, wnd_height;						//��Ϸ���ڿ��
	Image* image[21];								//��ϷͼƬ
	Image* bgimg;									//��Ϸ����ͼƬ
};
