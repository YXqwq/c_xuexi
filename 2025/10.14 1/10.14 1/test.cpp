#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Add(int a, int b)
{
	return a + b;
}


int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d",&a,&b);
	int z = Add(a, b);
	printf("%d\n", z);
	return 0;
}