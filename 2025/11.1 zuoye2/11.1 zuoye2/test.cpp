#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	float a = 0;
		printf("请输入你的成绩：");
	scanf("%f",&a);
	if (a >= 90 && a <= 100)
	{
		printf("你的等级为A");
	}
	else if (a >= 80 && a < 90)
	{
		printf("你的等级为B");

	}
	else if (a >= 70 && a < 80)
	{
		printf("你的等级为C");

	}
	else if (a >= 60 && a < 70)
	{
		printf("你的等级为D");

	}
	else if (a >= 0 && a < 60)
	{
		printf("你的等级为E");

	}
	else
	{
		printf("出现错误");

	}
		return 0;
}