#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



void caidan()
{

	printf("**************************\n");
	printf("*********1.+ 2.- 3./******\n");
	printf("*********4.%% 5.* 0.t******\n");
	printf("**************************\n");
}

int jia(int x, int y)
{
	return x + y;
}

int jian(int x, int y)
{
	return x - y;
}

int chu(int x, int y)
{
	return x / y;
}

int cheng(int x, int y)
{
	return x * y;
}

int mo(int x, int y)
{
	return x % y;
}

int (*zhuanyi[6])(int, int) = { 0,jia,jian,chu,mo,cheng };

int main()
{




	int cot = 0;
	int x = 0;
	int y = 0;
	
	do
	{
		caidan();
		printf("请输入要使用的功能->");
		scanf("%d", &cot);
		if (cot == 0)
		{
			printf("退出计算器");
		}
		else if (cot >= 1 && cot <= 5)
		{
			printf("请输入两个操作数->");
			scanf("%d %d", &x, &y);
			int ret = zhuanyi[cot](x, y);
			printf("%d\n", ret);



		}
		else
		{
			printf("请输入正确的选项");
		}






	} while (cot);





	return 0;
}