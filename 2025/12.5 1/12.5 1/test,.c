#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <errno.h>
int main()
{
	FILE* pf = fopen("D:\\vs\\项目\\2025\\12.5 1\\test.txt", "r");
	if (pf == NULL)
	{
		printf(strerror(errno));
		return 1;
	}

		fputc('h', pf);
		fputc('a', pf);
		fputc('l', pf);
		fputc('l', pf);
		fputc('o', pf);
		fputc(' ', pf);
		fputc('w', pf);
		fputc('o', pf);
		fputc('r', pf);
		fputc('d', pf);
		
		fputs(" qwq", pf);

	
	




	char arr[20];
	fgets(arr, 20, pf);
	printf("%s", arr);





	//关闭文件
	fclose(pf);
	pf = NULL;
	return 0;
}