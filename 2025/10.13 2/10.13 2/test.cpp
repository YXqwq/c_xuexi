#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int A = 0;
	printf("下载中\n");
	while (A < 100)
	{
		printf("%d\n",A);
		A++;


	}
	if (A >= 100)
	{
		printf("下载完毕\n");

	}
	else
	{
		printf("下载中\n");
	}
	return 0;
}