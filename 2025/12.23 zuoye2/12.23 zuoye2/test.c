#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	//写文件
	FILE* A = fopen("t2.txt", "wb");
	if (A == NULL)
	{
		return 1;
	}
	double n = 0.0;
	double m = 0.0;
	while (1)
	{
		if (scanf("%lf", &n) != 1)
		{
			printf("请输入正确的数据\n");
			while (getchar() != '\n');
			continue;
		}
		if (n == -1.0)
		{
			printf("传入成功");
			break;
		}
		fwrite(&n, 8, 1, A);
		m += n;
	}
	fwrite(&m, 8, 1, A);
	fclose(A);
	A = NULL;


	//读文件
	FILE* B = fopen("t2.txt", "rb");
	if(B ==NULL)
	{
        return 0;
	}
	
	//计算文件大小
	fseek(B, 0, SEEK_END);
	long qwq = ftell(B);
	fseek(B, 0,SEEK_SET);
	// 
	int size = qwq / sizeof(double);//计算元素个数
	double* arr = (double*)malloc(qwq);
	if (arr == NULL)
	{
		return 1;
	}
	fread(arr, sizeof(double), size, B);
	for (int i = 0; i < size-1; i++)
	{
		printf("第%d个数据为%lf\n", i, arr[i]);
	}
	printf("总和为%lf\n", arr[size-1]);
	fclose(B);
	B = NULL;



	return 0;
}