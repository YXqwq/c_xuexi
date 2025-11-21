#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main()
{
	float manei = 0.8;
	int app = 0;
	int day = 0;
	float sb = 0;
	

	for (app = 2; app <= 10; app =app * 2)
	{
		
		sb = sb + app * manei;

		day++;
	}

	float sp = sb / day;
	printf("每天的平均消费为%f", sp);

	return 0;
}