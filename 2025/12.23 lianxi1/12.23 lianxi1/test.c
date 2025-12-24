#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void SuShu(int a)
{
	for (int i = 2; i < a; i++)
	{
		if (a % i == 0)
		{
			printf("不是素数");
			return;
		}
		
	}
	printf("是素数");
}
int main()
{
	
	SuShu(100);



	return 0;
}