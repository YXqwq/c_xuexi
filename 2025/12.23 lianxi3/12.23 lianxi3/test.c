#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{

	int arr[5][7];
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			scanf("%d", &(arr[i][j]));
		}
	}

	int max = arr[0][0];
	int min = arr[0][0];

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			if (arr[i][j] > max)
			{
				max = arr[i][j];
			}
			if (arr[i][j] < min)
			{
				min = arr[i][j];
			}
		}
	}


	printf("最大值为：%d\n",max);
	printf("最小值为：%d\n",min);

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}


	return 0;
}