#include "EngineTest.h"


int WINAPI WinMain(HINSTANCE h_instance, HINSTANCE hPrevInstance, PSTR szCmdLine, int iCmdShow)
{
	LPCTSTR WinTitle = L"T_Engine���Գ���";
	EngineTest* test = new EngineTest(h_instance, WIN_CLASS, WinTitle, NULL, NULL, 800, 600);
	T_Engine::pEngine = test;
	test->SetFrame(10);				//������Ϸ�����ˢ��Ƶ�ʣ����Ե���FRAME_SPEED����)
	test->StartEngine();
	return TRUE;
}
EngineTest::EngineTest(HINSTANCE h_instance,LPCTSTR sz_winclass,LPCTSTR sz_title,WORD icon,WORD sm_icon,int winwidth,int winheight):T_Engine(h_instance,sz_winclass,sz_title,icon,sm_icon,winwidth,winheight)
{
	wnd_width = winwidth;
	wnd_height = winheight;
}
EngineTest::~EngineTest(void)
{
	delete bgimg;
	for (int i = 0; i < 20; i++)
	{
		delete image[i];
	}
}
void EngineTest::GameEnd()						//��Ϸ��������
{

}
void EngineTest::GameInit() 						//��Ϸ��ʼ���ӿں���
{
	//������ͼƬ���ؽ���
	bgimg = new Image(L"./pngs/3.jpg");
	//��ͼƬ���ؽ���
	image[0] = new Image(L"./pngs/1.png");
	image[1] = new Image(L"./pngs/2.png");
	image[2] = new Image(L"./pngs/2.png");
	image[3] = new Image(L"./pngs/4.png");
	image[4] = new Image(L"./pngs/5.png");
	image[5] = new Image(L"./pngs/6.png");
	image[6] = new Image(L"./pngs/7.png");
	image[7] = new Image(L"./pngs/8.png");
	image[8] = new Image(L"./pngs/9.png");
	image[9] = new Image(L"./pngs/10.png");
	image[10] = new Image(L"./pngs/11.png");
	image[11] = new Image(L"./pngs/12.png");
	image[12] = new Image(L"./pngs/13.png");
	image[13] = new Image(L"./pngs/14.png");
	image[14] = new Image(L"./pngs/15.png");
	image[15] = new Image(L"./pngs/16.png");
	image[16] = new Image(L"./pngs/17.png");
	image[17] = new Image(L"./pngs/18.png");
	image[18] = new Image(L"./pngs/19.png");
	image[19] = new Image(L"./pngs/20.png");

}
void EngineTest::GameLogic() { }					//��Ϸ�߼���������GameState��
void EngineTest::GamePaint(HDC hdc) 				//��Ϸ��ʾ������ֵΪGameState��
{
	HGDIOBJ mbrush, oldbrush;
	HGDIOBJ mpen, oldpen;
	RECT mrect;
	int cell_width = wnd_width / 20;
	int cell_height = wnd_height / 20;
	Graphics g(hdc);
	g.DrawImage(bgimg, 0,0,wnd_width,wnd_height);
	for (int r = 0; r < 20; r++)
	{
		for (int c = 0; c < 20; c++)
		{
			//mpen = CreatePen(PS_SOLID, 0, RGB(240, 240, 240));
			//oldpen = SelectObject(hdc, mpen);
			//mbrush = CreateSolidBrush(RGB(rand() % 255, rand() % 255, rand() % 255));
			//oldbrush = SelectObject(hdc, mbrush);
			
			int p = rand() % 20;
			
			//string s = "E:\\QQ\\��Ϸ����\\�ϻ�03\\EngineTest\\pngs\\1.png";
			//LPCTSTR png1 = L"./pngs/1.png";
			//LPCTSTR png2 = L"E:\\QQ\\��Ϸ����\\�ϻ�03\\EngineTest\\pngs\\2.png";
			//LPCTSTR png3 = L"E:\\QQ\\��Ϸ����\\�ϻ�03\\EngineTest\\pngs\\4.png";
			
			
		
			//Image image(png1, FALSE);

			mrect.left = c*cell_width;
			mrect.right = mrect.left + cell_width;
			mrect.top = r*cell_height;
			mrect.bottom = mrect.top + cell_height;
			//g.DrawImage(&image, mrect.left, mrect.top, mrect.right, mrect.bottom);
			g.DrawImage(image[p],mrect.left, mrect.top, mrect.right-mrect.left,mrect.bottom-mrect.top);
			//FillRect(hdc, &mrect, (HBRUSH)mbrush);
			//Rectangle(hdc, mrect.left, mrect.top, mrect.right, mrect.bottom);
			//SelectObject(hdc, oldbrush);
			//DeleteObject(mbrush);
			//SelectObject(hdc, oldpen);
			//DeleteObject(mpen);
		}
	}
}
void EngineTest::GameKeyAction(int Action) { }		//��Ϸ��������
//��Ϸ�����Ϊ��������ֵΪKEY_MOUSE_ACTION)
void EngineTest::GameMouseAction(int x,int y,int Action){ }
