#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n = 0;
	scanf("%d", &n);
	if (n < 10 || n>1000)
	{
		printf("请输入正确的数据\n");
		return 1;
	}
	FILE* A = fopen("data.txt", "wb");
	if (A == NULL)
	{
		perror("fopen A:");
		return 1;
	}

	for (int i = 10; i <= n; i++)
	{
		fprintf(A,"%d\n",i);
	}
	fclose(A);
	A = NULL;
	printf("已成功写入\n");

	//system("type data.text");

	return 0;
}