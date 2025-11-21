#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int arr1[4] = { 1,2,3,4 };
	int arr2[4] = { 5,6,7,8 };
	int arr3[4] = { 9,8,7,6 };
	int* parr[3] = { arr1,arr2,arr3 };




	int i = 0;

	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("%d ", parr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
