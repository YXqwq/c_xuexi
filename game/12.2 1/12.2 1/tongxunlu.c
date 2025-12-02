#define _CRT_SECURE_NO_WARNINGS
#include "tongxulnu.h"
void chushihua(tongxunlu_cot* pss)//初始化通讯录
{
	assert(pss);
	memset(pss, 0, sizeof(tongxunlu_cot));
	pss->cot = 0;
}


void zengjia(tongxunlu_cot* ps)//增加联系人
{
	assert(ps);
	if (ps->cot == MAX)
	{
		printf("联系人已满\n");
		return;
	}
	
		printf("请输入名字:>");
		scanf("%s", ps->dime[ps->cot].mingzi);
		printf("请输入年龄:>");
		scanf("%d", &(ps->dime[ps->cot].nianling));
		printf("请输入性别:>");
		scanf("%s", ps->dime[ps->cot].six);
		printf("请输入电话:>");
		scanf("%s", ps->dime[ps->cot].dianhua);
		printf("请输入地址:>");
		scanf("%s", ps->dime[ps->cot].dizi);
		ps->cot++;//联系人+1
		printf("添加联系人成功\n");
		return;
}

void xianshi(tongxunlu_cot* ps)//显示通讯录
{
	assert(ps);
	printf("%-15s\t%-5s\t%-5s\t%-20s\t%-20s\t%-5s\n","名字","年龄","性别","电话","地址","序号");
	int i = 0;//计数器
	for (i = 0; i < ps->cot; i++)
	{
		printf("%-15s\t%-5d\t%-5s\t%-20s\t%-20s\t%-5d\n",
			ps->dime[i].mingzi,
			ps->dime[i].nianling,
			ps->dime[i].six,
			ps->dime[i].dianhua,
			ps->dime[i].dizi,i+1);

	}
}

int chazhao(tongxunlu_cot* ps, char* mz)//查找
{
	assert(ps);
	int i = 0;
	for (i = 0; i < ps->cot; i++)
	{
		if (strcmp(ps->dime[i].mingzi, mz) == 0)
		{
			return i;
		}
	}
	return -1;
}


void shanchu(tongxunlu_cot* ps)//删除联系人
{
	assert(ps);
	char mz[MAX_mingzi] = {0};
	printf("请选择要删除的联系人的名字;>");
	scanf("%s", mz);
	//查找
	int sb = chazhao(ps, mz);//接收联系人的下标
	//删除
	if (sb == -1)
	{
		printf("未找到该联系人\n");
	}
	else
	{
		for (int i = sb; i < (ps->cot) - 1; i++)
		{
			ps->dime[i] = ps->dime[i + 1];//从要删的地方覆盖 
		}
		ps->cot --;//联系人人数-1
		printf("删除成功\n");
	}

}

void chazhao_txl(tongxunlu_cot* ps)//查找联系人
{
	assert(ps);
	char mz[MAX_mingzi] = { 0 };
	printf("请输入要查找人的姓名;>");
	scanf("%s", mz);
	//查找
	int sb = chazhao(ps, mz);//找到下标
	if (sb == -1)
	{
		printf("没有这个联系人\n");
	}
	else
	{
		printf("查找成功\n");
		printf("%-15s\t%-5s\t%-5s\t%-20s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
		printf("%-15s\t%-5d\t%-5s\t%-20s\t%-20s\n",
			ps->dime[sb].mingzi,
			ps->dime[sb].nianling,
			ps->dime[sb].six,
			ps->dime[sb].dianhua,
			ps->dime[sb].dizi);
	}

}

void genggai(tongxunlu_cot* ps)//更改联系人
{
	assert(ps);
	char mz[MAX_mingzi] = { 0 };
	printf("请输入要更改的联系人的姓名:>");
	scanf("%s", mz);
	//查找
	int sb = chazhao(ps, mz);
	if (sb == -1)
	{
		printf("不存在该联系人");
	}
	else
	{
		//更改
		int xz = 0;
		printf("%-15s\t%-5s\t%-5s\t%-20s\t%-20s\n", "1.名字", "2.年龄", "3.性别", "4.电话", "5.地址");
		printf("%-15s\t%-5d\t%-5s\t%-20s\t%-20s\n",
			ps->dime[sb].mingzi,
			ps->dime[sb].nianling,
			ps->dime[sb].six,
			ps->dime[sb].dianhua,
			ps->dime[sb].dizi);
		printf("请输入要更改的内容:>");
		scanf("%d", &xz);
		switch (xz)
		{
		case 1:
			printf("请修改:>");
			scanf("%s", ps->dime[sb].mingzi);
			printf("修改成功\n");
			break;
		case 2:
			printf("请修改:>");
			scanf("%d", ps->dime[sb].nianling);
			printf("修改成功\n");
			break;
		case 3:
			printf("请修改:>");
			scanf("%s", ps->dime[sb].six);
			printf("修改成功\n");
			break;
		case 4:
			printf("请修改:>");
			scanf("%s", ps->dime[sb].dianhua);
			printf("修改成功\n");
			break;
		case 5:
			printf("请修改:>");
			scanf("%s", ps->dime[sb].dizi);
			printf("修改成功\n");
			break;
		default:
			printf("请输入正确的数字！\n");
			

		}
	}
}


void jiaohuan(tongxunlu_cot* ps, int a1, int a2)//交换
{
	assert(ps);
	tongxunlu p;//临时变量
	
	p= ps->dime[a1 - 1];
	ps->dime[a1 - 1] = ps->dime[a2 - 1];
	ps->dime[a2 - 1] = p;
}





void paixu(tongxunlu_cot* ps)//排序联系人
{
	assert(ps);
	int a1 = 0;
	int a2 = 0;
	if (ps->cot < 2)
	{
		printf("两个联系人才能交换\n");
	}
	
	else
	{
		printf("请输入两个联系人的序号:>");
		scanf("%d %d", &a1, &a2);
		 if (a1 == a2)
		 {
			printf("不要进行自己和自己换这种事");
	     }
		if (a1  < ps->cot && a2 < ps->cot && a1>0 && a2>0)
		{
			//交换
			jiaohuan(ps, a1, a2);
			
		}
		else
		{
			printf("请输入有效序号");
		}
	}
	
}

void caidan_qwq(tongxunlu_cot* ps)//彩蛋
{
	scanf("%s", ps->dime[MAX+1].mingzi);
	scanf("%d", &(ps->dime[MAX+1].nianling));
	scanf("%s", ps->dime[MAX+1].six);
	scanf("%s", ps->dime[MAX+1].dianhua);
	strcpy(ps->dime[MAX + 1].mingzi, "牧濑红莉栖");
	strcpy(ps->dime[MAX + 1].six, "女");
	strcpy(ps->dime[MAX + 1].dizi, "命运石之门");
	strcpy(ps->dime[MAX + 1].dianhua, "1130205");
	ps->dime[MAX + 1].nianling = 18;

	return;
}