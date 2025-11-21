#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//	int a = 0;
//	int b = 2;
//	int c = 3;
//	int d = 4;
//	int i = 0;
//
//	i = a++ && ++b && d++;
//
//	printf("a = %d\nb = %d\nc = %d\nd = %d\n",a,b,c,d);
//
//
//	return 0;
//
//}

int main()
{
	int a = 1;
	int b = 2;
	int c = 3;
	int d = 4;
	int i = 0;

	i = a++ || ++b || d++;

	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);


	return 0;

}