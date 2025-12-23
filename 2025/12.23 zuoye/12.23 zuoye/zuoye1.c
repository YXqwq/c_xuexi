#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	FILE* A = fopen("t1.txt", "r");
	if (A == NULL)
	{
		return 1;
	}
	FILE* B = fopen("t2.txt", "w");
	if (B == NULL)
	{
		return 1;
	}
	char cot = 0;
	while ((cot = fgetc(A)) !=EOF )
	{
		if (cot != ' ')
		{
			fputc(cot, B);
			printf("%c", cot);
		}
	}
	fclose(A);
	fclose(B);
	A = NULL;
	B = NULL;


	return 0;

}