#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	int n = 0;
	int sb = 0;
	int a1, a2, a3;
	
	while (1)
	{

		printf("请输入三位正整数：");
		scanf("%d", &n);

		if (n > 100 && n<1000)
		{

			a1 = n / 100;
			a2 = (n/10)%10;
			a3 = n % 10;

			sb = a1 * a1 * a1 + a2 * a2 *a2+ a3 * a3 * a3;

			if (sb == n)
			{
				printf("%d是水仙花数", n);

			}
			else
			{
				printf("%d不是水仙花数", n);
			}

			break;
		}
		else
		{
			printf("请输入正整数\n");
		}
	}
	
}