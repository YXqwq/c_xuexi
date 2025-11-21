#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

extern int a;

void test()
{
	printf("test-->%d\n", a);
}
int main()
{
	test();
	{
		printf("a=%d\n", a);
	}
	printf("a=%d\n", a);
		return 0;

}