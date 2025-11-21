#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int n = 0;
	printf("请输入数字->");
	scanf("%d", &n);
  
	int i = 0;
	int p = 0;
	
	for (i = 0; i < 32; i++)
	{

		p = p + (n & 1);//括号提示优先级
		n = n >> 1;//这里要用赋值
	}
	

	printf("%d",p);

	return 0;
}


	
