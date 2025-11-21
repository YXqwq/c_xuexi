#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

void caidan()//菜单
{
	printf("********************\n");
	printf("****** 1.play ******\n");
	printf("****** 0.exit ******\n");
	printf("********************\n");
}





void game()
{
	char sp = 0;
	char qipan[ROW][COL] = { 0 };
	//初始化棋盘函数
	chushi_qipan(qipan, ROW, COL);
	//打印棋盘
	dayin_qipan(qipan, ROW, COL);
	//下棋
	while (1)
	{
		//玩家下棋
		paly_wanjia(qipan, ROW, COL);
		dayin_qipan(qipan, ROW, COL);
		//判断输赢
		sp = win(qipan, ROW, COL);
		if (sp != 'C')
			break;
		//电脑下棋
		paly_diannao(qipan, ROW, COL);
		dayin_qipan(qipan, ROW, COL);
		//判断输赢
		sp = win(qipan, ROW, COL);
		if (sp != 'C')
			break;
	}
	//判断结果
	if (sp == '#')
	{
		printf("玩家win\n");
	}
	else if (sp == '*')
	{
		printf("电脑win\n");

	}
	else if(sp == 'Q')
	{
		printf("平局\n");
	}
	//最终结果
	dayin_qipan(qipan, ROW, COL);
}

int main()
{ 

	srand((unsigned int)time(NULL));//设置随机数生成起点
	int xz = 0;
	do
	{
		caidan();//打印菜单
		printf("请选择->");
		scanf("%d", &xz);
		//选择开始还是结束 
		switch (xz)
		{
		case 1:
		{
			//进入游戏
			game();
			break;
		}
		case 0:
		{
			printf("退出游戏\n");
			break;
		}
		default:
		{
			printf("选择错误\n");
			break;
		}
		}
	} while (xz != 0);

	return 0;
}