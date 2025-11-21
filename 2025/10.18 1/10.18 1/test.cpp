#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
	printf("是否删除amadeus(yes/no)\n");
	char ADD[100];
	int A = 0;
	scanf("%s", ADD);
	int a = strlen(ADD);
	
	if (a == 3)
	{
		printf("删除中\n");
		while (A < 100)
		{
			printf("%d\n", A);
			A++;


		}
		if (A >= 100)
		{
			printf("删除完毕\n");
			printf("总有一天，当时间再度交汇，在那个我们约定的日子，我们一定会在应该到达的地方再度相见\n");
		}
	}
	else if (a == 2)
	{
		printf("我永远爱着你");
	}
	return 0;
}



