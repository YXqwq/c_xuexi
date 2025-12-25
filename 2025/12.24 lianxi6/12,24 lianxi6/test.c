#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>
int mstrlen(char* arr)
{
	assert(arr);
	char* p = arr;
	int cot = 0;
	while (*p != '\0')
	{
		cot++;
		p++;
	}
	return cot;

}
int main()
{
	char str[100];
	scanf("%[^\n]", str);
	printf("%d", mstrlen(str));


	return 0;
}