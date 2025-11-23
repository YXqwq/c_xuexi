#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int daxiaoduan()
{
	int a = 1;
	int sp = *(char*)&a;
	return sp;

}


int main()
{


	int sb = daxiaoduan();
	if (sb == 1)
	{
		printf("Ð¡¶Ë");
	}
	else
	{
		printf("´ó¶Ë");
	}
	return 0;
}