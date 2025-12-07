#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	//¼ÇÂ¼ÈÕÖ¾ 
	int i = 0;
	FILE* pf = fopen("test.txt", "w");
	if (!pf)
	{

		perror("fopen");
		return 1;
	}
	fprintf(pf,"file:%s line=%d date:%s time:%s i=%d\n", __FILE__, __LINE__, __DATE__, __TIME__, i);
	fclose(pf);
	pf = NULL;
	



	return 0;
}