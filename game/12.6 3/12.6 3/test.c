#define _CRT_SECURE_NO_WARNINGS
#include "jiami.h"
int main()
{

	char arr[MAX] = { 0 };
	char p[25][MAX] = { 0 };
	int sz = sizeof(arr);
	int xz = 0;
	do
	{
		caidan();//菜单
		printf("请输入:>");
		scanf("%d", &xz);
		switch(xz)
		{
		case 1:
			//加密
			jiami(arr,sz);
			//写入文件
			xie(arr);
			break;
		case 2:
			//读取文件
			du(arr);
			//解密
			jiemi(arr);
			break;
		case 3:
			//读取文件
			du(arr);
			//暴力破解
			 pojie(arr,p);
			//结果
			 printf("可能的结果为：%s", p);
			break;
		case 0:
			break;
		default:
			printf("请输入正确的数字！\n");
		}










	} while (xz);

	return 0;
}