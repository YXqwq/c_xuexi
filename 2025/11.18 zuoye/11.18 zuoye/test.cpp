#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int n = 1;
//	int arr[5] = { 0 };
//	int i = 0;
//	int b = 0;
//	for (n = 1; n < 6; n++)
//	{
//		b = 0;
//		for (i = 1; i <= n; i++)
//		{
//			b = b + i;
//		
//		}
//		arr[n-1] = b;
//	}
//	
//	int j = 0;
//	for (j = 0; j < 5; j++)
//	{
//		printf("%d\n", arr[j]);
//	}
//
//
//	return 0;
//
//}

//
//#include <stdio.h>
//int main()
//{
//	int arr[5][4] = { 0 };
//	int i = 0;
//	int j = 0;
//	printf("请输入矩阵的元素");
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			scanf("%d", &arr[j][i]);
//		}
//	}
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


#include <stdio.h>
int main()
{
	int n = 0;
	int arr[3][5] = { 0 };
	int* parr = &arr[0][0];
	int i = 0;
	int j = 0;

	for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 5; j++)
				{
				scanf("%d", parr+i*5 + j);
				}
			}
	printf("初始矩阵\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%d ",*( parr + i * 5 + j));
		}
		printf("\n");
	}
	printf("\n");

	int ns=0, m=4;
	while (ns < m)
	{
		int c = 0;
		for (c = 0; c < 3; c++)
		{
			int s = 0;
			s = *(parr + c * 5 + ns);
			*(parr + c * 5 + ns) = *(parr + c * 5 + m);
			*(parr + c * 5 + m) = s;
		}
		ns++;
		m--;
	}



	printf("改后矩阵\n");

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%d ", *(parr + i * 5 + j));
		}
		printf("\n");
	}
	return 0;

}