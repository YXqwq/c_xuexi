#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>


double pingjun(int arr[], int n)//平均数
{
	double p = 0;
	for (int i = 0; i < n; i++)
	{
		p += arr[i];

	}
	p /= n;
	return p;
}

int maxp(int arr[], int n)//求最大值
{
	int max = INT_MIN;
	
	for (int i = 0; i < n; i++)
	{
		
		if (arr[i] > max)
		{
			max = arr[i];
		}
		
	}
	return max;
}

int minp(int arr[], int n)//求最小值
{
	
	int min = INT_MAX;
	for (int i = 0; i < n; i++)
	{

		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}

double fangchap(int arr[], int n, double p)//求方差
{
	double f = 0;
	for (int i = 0; i < n; i++)
	{
		f += (arr[i] - p)* (arr[i] - p);
	}
	f /= n;
	return f;

}

int main()
{
	int t = 0;
	int arr[1000] = {0};
	double p = 0;
	scanf("%d", &t);
	for (int i1 = 0; i1 < t; i1++)
	{
		int n = 0;
		scanf("%d", &n);
		for (int i2 = 0; i2 < n; i2++)
		{
			scanf("%d",&arr[i2]);
		}
		p = pingjun(arr,n);
		int max = maxp(arr, n);
		int min = minp(arr, n);
		int jicha = max - min;//求极差
		double fangcha = fangchap(arr, n, p);
		printf("%d %.3f\n", jicha, fangcha);
	}

	return 0;
}