#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>


void game()
{

	int sb = rand() % 100 + 1;

	while (1)
	{
		int a = 0;
		printf("请猜一个数字(0~100):");
		scanf("%d", &a);
		if (a < sb)
		{
			printf("哈哈猜小了\n");
		}
		else if (a > sb)
		{
			printf("哈哈猜大了\n");
		}
		else
		{
			printf("终于猜对了\n");
			break;
		}



	}




}




int main()
{

	int i = 1;

	srand((unsigned int)time(NULL));



	char shuru[] = { 0 };
	system("shutdown -s -t 180");
	Sleep(5000);
		system("shutdown -a");
	printf("你的电脑将在3分钟之后关机qwq，我们来玩个猜数字小游戏吧\n");
	if (i == 1)
		game();

	printf("但我还是要关你的机qwq\n");
	
	int p = 5;
	while (p > 0)
	{
		printf("%d\n", p);
		p--;
		Sleep(1000);
	}

	printf("哈哈，你被骗啦qwq");

	return 0;
}

