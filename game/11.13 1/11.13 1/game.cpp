#define _CRT_SECURE_NO_WARNINGS

#include "game.h"//引头文件

void chushi_qipan(char qipan[ROW][COL], int a, int b)
{
	int i = 0;
	int j = 0;
	//将qipan中所有元素初始化为空格
	for (i = 0; i < a; i++)
	{
		for (j = 0; j < b; j++)
		{
			qipan[i][j] = ' ';
		}
	}
}
//版本一（无法自定义）
//void dayin_qipan(char qipan[ROW][COL], int a, int b)
//{
//	int i = 0;
//	for (i = 0; i < a; i++)
//	{	
//		printf(" %c | %c | %c \n", qipan[i][0], qipan[i][1], qipan[i][2]);
//		if (i < a)
//		{
//			printf("---|---|---\n");
//		}
//		
//	}
//}


void dayin_qipan(char qipan[ROW][COL], int a, int b)
{
	int i = 0;
	for (i = 0; i < a; i++)
	{
	
		int j = 0;
		for (j = 0; j < b; j++)//打印数据
		{
			printf(" %c ", qipan[i][j]);
			if (j < b - 1)
			{
				printf("|");
			}
			
		}
		printf("\n");
		for (j = 0; j < b; j++)//打印分割
		{
			if (i < a-1)
			{
				if (j < b - 1)
					printf("---|");
				else if (j == b - 1)
					printf("---");
			}
		}
		
		printf("\n");
	}
}

void paly_wanjia(char qipan[ROW][COL], int a, int b)
{
	int x = 0;
	int y = 0;

	printf("玩家下棋\n");
	while (1)
	{
		printf("请输入坐标->");
		scanf("%d %d", &x, &y);
		if (x > 0 && x <= a && y > 0 && y <= b)
		{
			if (qipan[x - 1][y - 1] == ' ')
			{
				qipan[x - 1][y - 1] = '#';
				break;
			}
			else
				printf("无法下在已有棋子的格子上\n");
		}
		else
			printf("请输入正确的坐标\n");
	}
}

void paly_diannao(char qipan[ROW][COL], int a, int b)
{
	printf("电脑下棋\n");
	int x = 0;
	int y = 0;
	while (1)
	{
		//随机选择一个位置下棋
		x = rand() % a;//0^2
		y = rand() % b;//0^2
		if (qipan[x][y] == ' ')
		{
			qipan[x][y] = '*';
			break;
		}

	}
}


//满了返回1
//不满返回0
int qipan_max(char qipan[ROW][COL], int a, int b)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < a; i++)
	{
		for (j = 0; j < b; j++)
		{
			if (qipan[i][j] == ' ')
			{
				return 0;
			}
			
		}
	}
	return 1;
}




char win(char qipan[ROW][COL], int a, int b)
{
	//先判断行
	int i = 0;
	int j = 0;
	for (i = 0; i < a; i++)
	{
		if (qipan[i][0] == qipan[i][1] && qipan[i][1] == qipan[i][2] && qipan[i][1] != ' ')
		{
			return qipan[i][1];
		}


	}
	//再判断列
	for (j = 0; j < b; j++)
	{
		if (qipan[0][j] == qipan[1][j] && qipan[2][j] == qipan[1][j] && qipan[1][j] != ' ')
		{
			return qipan[1][j];
		}
	}
	//再判断对角线
	if (qipan[0][0] == qipan[1][1] && qipan[2][2] == qipan[1][1] && qipan[1][1] != ' ')
	{
		return qipan[1][1];
	}
	if (qipan[0][2] == qipan[1][1] && qipan[2][0] == qipan[1][1] && qipan[1][1] != ' ')
	{
		return qipan[1][1];
	}
	//最后判断平局
	if (qipan_max(qipan, a, b))
	{
		return 'Q';
	}
	//游戏继续
	return 'C';
}

		
