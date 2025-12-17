#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct Che
{
	char mingzi[20];
	char xinghao[10];
	char yanshe[10];
	int jiage;
}Che;

int paixu(void* e1, void* e2)
{
	return (((Che*)e1)->jiage - ((Che*)e2)->jiage);
}

int main()
{
	Che L[5];
	for (int i = 0; i < 5; i++)
	{
		scanf("%s %s %s %d", L[i].mingzi, L[i].xinghao, L[i].yanshe, &(L[i].jiage));

	}

	qsort(L, 5, sizeof(Che), paixu);
	for (int i = 0; i < 5; i++)
	{
		printf("%s %s %s %d\n", L[i].mingzi, L[i].xinghao, L[i].yanshe, (L[i].jiage));
	}



	return 0;
}