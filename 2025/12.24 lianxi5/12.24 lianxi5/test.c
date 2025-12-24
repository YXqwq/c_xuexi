#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int findMax(int arr[], int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}



int main()
{
	int arr[10] = { 71,41,93,28,85,60,17,82,50,76 };
	int size = sizeof(arr) / sizeof(arr[0]);


	printf("%d", findMax(arr, size));





	return 0;
}