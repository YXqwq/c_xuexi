#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
typedef struct Ren
{
	char gonghao[10];
	char xingming[10];
	int nianling;
	int manei;
}Ren;
int main()
{
	//写文件
	FILE* A = fopen("t1.txt", "wb");
	if (A == NULL)
	{
		return 1;
	}
	Ren arr[5];
	int cot = 0;
	while (1)
	{
		if (cot == 5)
		{
			break;
		}
		printf("请输入工号");
		scanf("%s", arr[cot].gonghao);
		while (getchar() != '\n');

		printf("请输入姓名");
		scanf("%s", arr[cot].xingming);
		while (getchar() != '\n');

		printf("请输入年龄");
		scanf("%d", &(arr[cot].nianling));
		while (getchar() != '\n');

		printf("请输入基本工资");
		scanf("%d", &(arr[cot].manei));
		while (getchar() != '\n');

		cot++;
	}
	printf("添加成功\n");
	fwrite(arr, sizeof(arr), 5, A);
	fclose(A);
	A = NULL;


	//读文件
	FILE* B = fopen("t1.txt", "rb");
	if (B == NULL)
	{
		return 1;
	}

	Ren app[5];
	fread(app, sizeof(app),5, B);
	int n = 0;
	for (int i = 0; i < 5; i++)
	{
		printf("第%d人\n", i);
		printf("工号：%s\n",app[i].gonghao);
		
		printf("姓名：%s\n",app[i].xingming);
		printf("年龄：%d\n",app[i].nianling);
		printf("基本工资:%d\n",app[i].manei);
		n += app[i].manei;
	}
	printf("平均工资为%f\n", n / 5.0);


	fclose(B);
	B = NULL;



	return 0;
}