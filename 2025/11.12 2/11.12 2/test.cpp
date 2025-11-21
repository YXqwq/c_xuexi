#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int lejia(int n)
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= n; i++)
	{
		j = j + i;

	}
	return j;

}


int qiu_max(int x, int y)
{
	if (x > y)
	{
		return x;
	}
	else if (x < y)
	{
		return y;
	}
}





int sushu(int i)
{
	int q = 1;
	if (i > 1)
	{
		int	j = 0;
		for (j = 2; j < i - 1; j++)
		{
			if (i % j == 0)
			{
				q = 0;
				break;
			}

		}
	}


	else
	{
		q = 0;
	}
	return q;
}





int jie(int i)
{
	if (i <= 1)
	{
		return 1;
	}
	else if (i > 1)
	{
		return i * jie(i - 1);
	}
}







int tiaozhuan(int n)
{
	int p1 = 0;
	int sb = 0;
	printf("请输入数据：");
	scanf("%d", &p1);
	switch (n)
	{
	case 1:
	{
		sb = lejia(p1);
		break;

	}
	case 2:
	{
		printf("请输入第二个数据:");
		int p2 = 0;
		sb = qiu_max(p1, p2);
		break;

	}
	case 3:
	{
		sb = sushu(p1);
		break;

	}
	case 4:
	{
		sb = jie(p1);
		break;
	}
	}


	return sb;

}

int main()
{
	printf("请选择所要使用的函数\n");
	printf("1+2+3+...+n的和(输入1)\n");
	printf("输入两个值求输出最大值(输入2)\n");
	printf("判断素数(输入3) (结果为0为不是素数，结果为1为素数)\n");
	printf("n！(输入4)\n");
	printf("输入:");
	int n = 0;
	int sp = 0;
	scanf("%d", &n);
	sp = tiaozhuan(n);

	printf("结果为%d", sp);



	return 0;
}
 








