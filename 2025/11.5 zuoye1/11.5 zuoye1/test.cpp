#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{

	int i = 1;
	int a = 0;
	float b = 0;
	float n = 0.01;

	while (i <= 30)
	{

		a = a + 100000;
		b = b + n;
		n = n * 2;

		i++;
	}

	printf("百万富翁给了陌生人%f元",b );
	printf("一般人给了百万富翁%d元",a );

	return 0;
}

