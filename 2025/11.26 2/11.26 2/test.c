#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int cmp_int(void* e1, void* e2)
{
	return (*(int*)e2 - *(int*)e1);
}

int main()
{


	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int sz = sizeof(arr) / sizeof(arr[0]);
		qsort(arr, sz, sizeof(arr[0]), cmp_int);
	
		for (int i = 0; i < sz; i++)
		{
			printf("%d ", arr[i]);

		}
	return 0;
}