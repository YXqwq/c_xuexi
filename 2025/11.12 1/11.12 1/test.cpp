#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void maopao(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)// 从第一个数开始，一共进行大交换
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)//（j< sz - 1 -i ）每次交换一次固定最后面的值
		{
			if (arr[j] > arr[j + 1])//小交换，交换更大的值在后面
			{
				int p = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = p;
		   }
		}
	}
}

int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);//求数组元素个数

	maopao(arr, sz);//进入冒泡排序函数
	int i = 0;
	for (i = 0; i < sz; i++)//打印修改后的数组
	{
		printf("%d ", arr[i]);
	}


	return 0;
}