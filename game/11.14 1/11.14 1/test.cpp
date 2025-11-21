#define _CRT_SECURE_NO_WARNINGS

#include "game.h"


void game()
{
	//创建数组
	char ming[ROWS][COLS] = { 0 };//排查雷的信息
	char an[ROWS][COLS] = { 0 };//埋雷的信息
	//初始化棋盘
	chushihua(ming, ROWS, COLS, '*');
	chushihua(an, ROWS, COLS, '0');
	//设置雷
	shezhi_lei(an, ROW, COL, LEI);
    //打印棋盘
	dayin(ming, ROWS, COLS);
	//dayin(an, ROWS, COLS);
	//排雷
	pai_lei(ming, an, ROWS, COLS);
}











int main()
{

	srand((unsigned int)time(NULL));//设置随机数生成起点
	
	int sz = 0;
	do
	{
		printf("***********************\n");//菜单
		printf("********1.paly ********\n");
		printf("********0.exit ********\n");
		printf("***********************\n");

		printf("请选择->");
		scanf("%d", &sz);
		switch (sz)
		{
		case 1://进行游戏
		{
			game();
			break;
		}
		case 3:
		{
			printf("设置");//作废
		}
		}
	} while (sz != 0);//0时退出游戏

	return 0;
}