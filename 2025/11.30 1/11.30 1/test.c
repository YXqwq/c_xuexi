#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>
char* my_strstr(char* str1, char* str2)
{
	assert(str1 && str2);
	const char* s1 = str1;
	const char* s2 = str2;
	const char* p = str1;
	while (*p)
	{
		s1 = p;
		s2 = str2;
		while (*s1 != '\0' && *s2 != '\0' && *s2 == *s1)
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return (char*)p;
		}
		p++;


	}

	return NULL;

}






int main()
{
	char arr1[] = "yinghuaxiao";
	char arr2[] = "yinghua";
	char* p= my_strstr(arr1, arr2);

	printf("%s", p);
}