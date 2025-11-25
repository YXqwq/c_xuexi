#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int  arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int n = 0;
	int is = -1;
	int yesno = 0;
	scanf("%d", &n);
	int* p = arr;

	for (int i = 0; i < 10; i++)
	{

		if (*p == n)
		{
			yesno = 1;
			is = i;
			break;
		}
		

		p++;
		

	}

	if (yesno)
	{
		printf("下标为%d", is);
	}
	else
	{
		printf("没找到");
	}
	return 0;
}

