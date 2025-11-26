#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

void jiaohuan(char* es1, char* es2, int dyte)//交换
{
	for (int i = 0; i < dyte; i++)//每个字节进行交换
	{
		char p = *es1;
		*es1 = *es2;
		*es2 = p;
		es1++;
		es2++;
		


	}
}



void maopao(void* base, int sz, int dyte, int (*cmp)(const void* e1, const void* e2))//模仿qsort函数（手搓qsort）
{
	
	for (int i = 0; i < sz - 1; i++)
	{
		int cot = 1;//表示已经排好序了
		for (int j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base + j*dyte, (char*)base + (j + 1)*dyte) > 0)//判断大小
			{
				jiaohuan((char*)base + j * dyte, (char*)base + (j + 1) * dyte,dyte);//交换
				cot = 0;//表示还没排完序
			}
		}
		if (cot == 1)
		{
			//如果已经排完序直接退出
			break;
		}




	}


	






}









int main()
{
	int arr[10] = { 10,9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	maopao(arr, sz, sizeof(arr[0]), cmp_int);//冒泡排序函数



	for (int i = 0; i < sz; i++)
	{
		printf("%d ",arr[i]);//打印排完序的数组
	}



	
	return 0;
}