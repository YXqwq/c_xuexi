#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main()
{
	int num1 = 0;
	int num2 = 0; /*初始化*/
	scanf("%d %d",&num1,&num2); /*输入*/
	int sum = num1 + num2; /*求和*/
	printf("%d\n", sum);/*输出*/
	return 0;
}