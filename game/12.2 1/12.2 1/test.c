#define _CRT_SECURE_NO_WARNINGS
#include "tongxulnu.h"


void caidan()//菜单
{
	printf("*************************************\n");
	printf("*******1.增加   2.删除  3.查找*******\n");
	printf("*******4.更改   5.排序  6.显示*******\n");
	printf("*******         0.退出        *******\n");
	printf("*************************************\n");
}





int main()
{
	


	int xz = 0;//选择变量
	tongxunlu_cot txl;//创建通讯录
	//初始化通讯录
	chushihua(&txl);
	//小彩蛋
	caidan_qwq(&txl);
	do
	{
		caidan();//打印菜单 
		TP1:
		printf("请选择:>");
		scanf("%d", &xz);
		switch(xz)
		{
		case 1://增加联系人
			zengjia(&txl);
			break;
		case 2://删除联系人
			shanchu(&txl);
			break;
		case 3://查找联系人
			chazhao_txl(&txl);
			break;
		case 4://更改联系人
			genggai(&txl);
			break;
		case 5://排序联系人
			paixu(&txl);
			break;
		case 6://显示通讯录
			xianshi(&txl);
			break;
		default:
			printf("请输入正确的数字！\n");
			goto TP1;
			
		}



	} while (xz);


	return 0;
}