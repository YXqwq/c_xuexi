#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	double a;
	printf("请输入圆的半径：");
	scanf("%lf", &a);

	double b = 6.28 * a;
 
	double c = 3.14 * a * a;

	printf("圆的周长为%.2f,面积为%.2f", b,c);

	return 0;
}