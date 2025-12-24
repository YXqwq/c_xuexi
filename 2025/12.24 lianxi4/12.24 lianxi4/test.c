#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void strCopy(char *dest, char* src)
{
	
	char* p1 = dest;
	char* p2 = src;
	while ((*p1 = *p2) != '\0')
	{
		p1++;
		p2++;
	}
	
}




int main()
{
	char arr1[10];
	char arr2[10] = "abcdefa";


	strCopy(arr1, arr2);
	printf("%s", arr1);
	return 0;
}