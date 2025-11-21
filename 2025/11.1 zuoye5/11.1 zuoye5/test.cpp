#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int a;
	float b;
	float c;
	float sb;


	printf("请输入水果编号：");
	scanf("%d", &a);
	printf("请输入水果重量：");
	scanf("%f", &b);
	switch (a)
	{
	case 1:
		c = 2.0;
		break;
	case 2:
		c = 2.5;
		break;
	case 3:
		c = 3.0;
		break;
	case 4:
		c = 4.0;
		break;
 }

	sb = c * b;


	printf("价格为%f", sb);


	return 0;
}