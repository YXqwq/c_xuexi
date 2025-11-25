#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



int my_strlen(char sp[])
{

	int cot = 0;
	char* p = &sp[0];
	while (*p != '\0')
	{
		p++;
		cot++;


	}

	return cot;
}

int main()
{
	char a[7] = "abcdef";
	char b[14] = "abcdefabcdef";

	int c = my_strlen(a);
	if (my_strlen(a) > my_strlen(b))
	{
		printf("a>b");



	}
	else
	{

		printf("a<b");


	}



	return 0;
}
