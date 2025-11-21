#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

void chushihua(char mingan[ROWS][COLS], int row, int col, char ret)//棋盘的初始化
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		
		for (j = 0; j < col; j++)
		{
		     mingan[i][j] = ret;//根据ret的值进行初始化
		}
	}
}



void dayin(char mingan[ROWS][COLS], int  row, int  col)
{
	int i = 0;
	int j = 0;
	int is = 0;
	for (is = 1; is < (row - 1)*2; is++)
	{
		printf("-");
	}
	printf("\n");
	for (i = 1; i < row-1; i++)
	{
		printf("%d ",i);
	}
	printf("\n");
	for (i = 1; i < row-1; i++)
	{
		
		for (j = 1; j < col-1; j++)
		{   
			if(j<=9)//校准棋盘坐标
			printf("%c ", mingan[i][j]);
			else if(j>9)
				printf("%c  ", mingan[i][j]);
		}
		printf("%d ", i);
		printf("\n");
		
	}
	for (is = 1; is < (row - 1) * 2; is++)
	{
		printf("-");
	}
	printf("\n");
}


void shezhi_lei(char an[ROWS][COLS], int row, int col,int lei)
{
	int x = 0;
	int y = 0;
	while(lei)
	{
		//随机设置雷
		x = rand() % row + 1;//1^9
		y = rand() % col + 1;//1^9

		if (an[x][y] == '0')
		{
			an[x][y] = '1';
			lei--;
		}
		
		
	}

}

void pai_lei(char ming[ROWS][COLS], char an[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int rows = row - 2;
	int cols = col - 2;
	int win = 0;
	while (win==0)//满足条件跳出循环
	{
		TP:
		printf("请输入坐标—>");
		scanf("%d %d", &y, &x);
		if (y == 22 || x == 33)//实现标记
		{
			printf("请输入要标记的坐标—>");
			scanf("%d %d", &y, &x);
			ming[x][y] = '#';
			dayin(ming, ROWS, COLS);
			goto TP;
		}
		else if (y == 91 || x == 91)//作弊码
		{
			dayin(an, ROWS, COLS);
			goto TP;
		}
		else if (y == 95 || x == 34)//小彩蛋捏
		{
			printf("                ／＞　　  フ\n");
			printf("                |  　_　 _|\n");
			printf("      　 　　　／` ミ＿wノ\n");
			printf("      　　 　 /　　　 　 |\n");
			printf("      　　　 /　 ヽ　　 /\n");
			printf("      　 　 │　　|　|　|\n");
			printf("      　／￣|　　 |　|　|\n");
			printf("     　 | (￣ヽ＿_ヽ_)__)\n");
			printf("      　＼二つ\n");
			goto TP;
		}
		else
		{
			if (x > 0 && x < row - 1 && y > 0 && y < col - 1)
			{
				if (an[x][y] == '1')//踩到雷了
				{
					printf("不耗！你踩着地雷了qwq\n");
					dayin(an, ROWS, COLS);
					break;
				}
				else if (an[x][y] != '1')//没踩到雷，开始排查
				{

					//int lei = lei_shu(an, x, y);
					//ming[x][y] = lei + '0';
					//打印棋盘 
					zhan_kai(ming, an, x, y);//自动展开无雷区域
					dayin(ming, ROWS, COLS);
					
					win = sheng_li(ming, an, rows, cols);//判断胜利


				}

			}
			else
			{
				printf("请输入正确的坐标\n");//没输入正确坐标时跳转
			}

		}
	}

	if (win == 1)
	{//小彩蛋
		printf("恭喜胜利\n");
		dayin(ming, ROWS, COLS);
		printf("送你只小猫qwq\n");
		printf("  ／l、\n");
		printf("（。. 。７\n");
		printf("　l、 ~ヽ\n");
		printf("  じしf_, )ノ\n");
	}

}
	




int lei_shu(char an[ROWS][COLS], int x, int y)//计算雷的个数
{
	int shu = 0;
	int i = 0;
	int j = 0;

	for (i = x - 1; i <= x + 1; i++)
	{
		for (j = y - 1; j <= y + 1; j++)
		{
			if (an[i][j] == '1')
			{
				shu++;
			}
		}
	}

	return shu;
	
}




void zhan_kai(char ming[ROWS][COLS], char an[ROWS][COLS], int x, int y)
{
	// 边界检查
	if (x <= 0 || x >= ROWS - 1 || y <= 0 || y >= COLS - 1) 
	{
		return;
	}

	// 如果格子已经被翻开或者是地雷，则返回
	if (ming[x][y] != '*' || an[x][y] == '1') {
		return;
	}

	//计算雷的个数
	int lei = lei_shu(an, x, y);
	ming[x][y] = lei + '0';


	// 如果周围有雷，停止递归
	if (lei > 0) 
	{
		return;
	}

	// 递归展开周围的8个格子
	zhan_kai(ming, an, x - 1, y - 1);  // 左上
	zhan_kai(ming, an, x - 1, y);    // 上
	zhan_kai(ming, an, x - 1, y + 1);  // 右上
	zhan_kai(ming, an, x, y - 1);    // 左
	zhan_kai(ming, an, x, y + 1);    // 右
	zhan_kai(ming, an, x + 1, y - 1);  // 左下
	zhan_kai(ming, an, x + 1, y);    // 下
	zhan_kai(ming, an, x + 1, y + 1);  // 右下
}



int sheng_li(char ming[ROWS][COLS], char an[ROWS][COLS], int row, int col)
{
	
	
	int anquan = 0;
	int p = (row * col) - LEI;//安全格数
	for (int i = 1; i <= row; i++)
	{
		for (int j = 1; j <= col; j++)
		{
			//计算翻开的没雷的坐标个数
			if (ming[i][j] != '*' && an[i][j] != '1' && ming[i][j] != '#')
			{
				anquan ++;
			}
		}
	}
	return (anquan == p) ? 1 : 0;//如果相等返回1，不相等返回0
}