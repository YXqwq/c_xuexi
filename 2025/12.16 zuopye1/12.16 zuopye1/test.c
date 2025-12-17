#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
typedef struct Biao
{
	char mingzi[10];
	int nianling;
	char six[5];

}Biao;




int main()
{
	int cot = 0;
	Biao L[5];
	for (int i = 0; i < 5; i++)
	{
		scanf("%s %d %s",L[i].mingzi,&(L[i].nianling),L[i].six);

	}

	for (int i = 0; i < 5; i++)
	{
		if (L[i].nianling >= 20 && L[i].nianling <= 50)
		{
			printf("符合要求的人：%s %d %s\n", L[i].mingzi, L[i].nianling, L[i].six);
			cot++;
		}
	}
	printf("符合要求的人数为%d\n", cot);


	return 0;
}