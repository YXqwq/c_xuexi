#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{

	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		perror("pf");
		return 1;

	}

	fseek(pf, 2, SEEK_SET);


	char n = fgetc(pf);
	printf("%c", n);
	fseek(pf, 2, SEEK_CUR);
	n = fgetc(pf);
	printf("%c", n);

	printf("%d", ftell(pf));

	rewind(pf);

	fclose(pf);
	pf = NULL;
	return 0;
}