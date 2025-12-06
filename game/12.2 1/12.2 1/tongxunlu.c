#define _CRT_SECURE_NO_WARNINGS
#include "tongxulnu.h"

void zengrong(tongxunlu_cot* ps)//增容
{
	if (ps->cot == ps->rongliang)//检查是否需要增容
	{
		tongxunlu* ptr = (tongxunlu*)realloc(ps->dime, (ZENGJIA_SZ + ps->rongliang) * sizeof(tongxunlu));
		if (ptr == NULL)
		{
			printf("zengjia::%s", strerror(errno));
			return;
		}
		else
		{
			ps->dime = ptr;
			ps->rongliang += ZENGJIA_SZ;
			printf("增容成功\n");
		}


	}
}

//加载
void jiazai(tongxunlu_cot* ps)
{
	assert(ps);
	FILE* pfR = fopen("txl.txt", "rb");
	if (pfR == NULL)
	{
		perror("jiazai");
		return 1;
	}
	tongxunlu tmp = { 0 };

	while (fread(&tmp, sizeof(tongxunlu), 1, pfR) == 1)
	{
		zengrong(ps);
		ps->dime[ps->cot] = tmp;
		ps->cot++;
	}


	//关闭文件
	fclose(pfR);
	pfR = NULL;
}





void xiaohui(tongxunlu_cot* ps)//销毁通讯录
{
	assert(ps);
	free(ps->dime);
	ps->dime = NULL;
}








//静态的版本 
//void chushihua(tongxunlu_cot* pss)//初始化通讯录
//{
//	assert(pss);
//	memset(pss, 0, sizeof(tongxunlu_cot));
//	pss->cot = 0;
//}

//动态版本
int chushihua(tongxunlu_cot* pss)//初始化通讯录
{
	assert(pss);
	pss->cot = 0;
	pss->dime = (tongxunlu*)calloc(MOREN_SZ, sizeof(tongxunlu));
	if (pss->dime == NULL)
	{
		printf("chushihua::%s\n", strerror(errno));
		return 1;
	}
	pss->rongliang = MOREN_SZ;
	//加载文件的信息到通讯录中
	jiazai(pss);
	return 0;
}






//静态版本
//void zengjia(tongxunlu_cot* ps)//增加联系人
//{
//	assert(ps);
//	if (ps->cot == MAX)//保证不超出上限
//	{
//		printf("联系人已满\n");
//		return;
//	}
//	
//		printf("请输入名字:>");
//		scanf("%s", ps->dime[ps->cot].mingzi);
//		printf("请输入年龄:>");
//		scanf("%d", &(ps->dime[ps->cot].nianling));
//		printf("请输入性别:>");
//		scanf("%s", ps->dime[ps->cot].six);
//		printf("请输入电话:>");
//		scanf("%s", ps->dime[ps->cot].dianhua);
//		printf("请输入地址:>");
//		scanf("%s", ps->dime[ps->cot].dizi);
//		ps->cot++;//联系人+1
//		printf("添加联系人成功\n");
//		return;
//}

//动态版本
void zengjia(tongxunlu_cot* ps)//增加联系人
{
	assert(ps);
	//增容
	zengrong(ps);

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
		if (strcmp(ps->dime[i].mingzi, mz) == 0)//比较名字
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
	//更改
	if (sb == -1)
	{
		printf("不存在该联系人");
	}
	else
	{
		//更改
		 //选择更改方式
		int p = 0;
		int xz = 0;
		printf("1.全部修改 2.局部修改\n");
		printf("请选择:>");
		scanf("%d", &p);
		switch (p)
		{
		case 1://全部修改
			printf("请输入名字:>");
			scanf("%s", ps->dime[sb].mingzi);
			printf("请输入年龄:>");
			scanf("%d", &(ps->dime[sb].nianling));
			printf("请输入性别:>");
			scanf("%s", ps->dime[sb].six);
			printf("请输入电话:>");
			scanf("%s", ps->dime[sb].dianhua);
			printf("请输入地址:>");
			scanf("%s", ps->dime[sb].dizi);
			printf("修改成功\n");
			break;
		case 2://局部修改
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
			break;
		}
		
	}
}


void jiaohuan(tongxunlu_cot* ps, int a1, int a2)//交换
{
	assert(ps);
	tongxunlu p;//临时变量
	//交换
	p= ps->dime[a1 - 1];
	ps->dime[a1 - 1] = ps->dime[a2 - 1];
	ps->dime[a2 - 1] = p;
}





void jiaohuan_ren(tongxunlu_cot* ps)//交换联系人
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

//void caidan_qwq(tongxunlu_cot* ps)//彩蛋
//{
//	
//	strcpy(ps->dime[MAX + 1].mingzi, "牧濑红莉栖");
//	strcpy(ps->dime[MAX + 1].six, "女");
//	strcpy(ps->dime[MAX + 1].dizi, "命运石之门");
//	strcpy(ps->dime[MAX + 1].dianhua, "1130205");
//	ps->dime[MAX + 1].nianling = 18;
//
//	return;
//}

int paixu_mingzi(void* e1, void* e2)//名字排序
{
	return strcmp(((tongxunlu*)e1)->mingzi ,((tongxunlu*)e2)->mingzi);
}

int paixu_nianling(void* e1, void* e2)//年龄排序
{
	return (((tongxunlu*)e1)->nianling - ((tongxunlu*)e2)->nianling);
}

int paixu_six(void* e1, void* e2)//性别排序
{
	return strcmp(((tongxunlu*)e1)->six, ((tongxunlu*)e2)->six);
}

int paixu_dianhua(void* e1, void* e2)//电话排序
{
	return strcmp(((tongxunlu*)e1)->dianhua, ((tongxunlu*)e2)->dianhua);
}

int paixu_dizi(void* e1, void* e2)//地址排序
{
	return strcmp(((tongxunlu*)e1)->dizi, ((tongxunlu*)e2)->dizi);
}

void paixu(tongxunlu_cot* ps)//排序联系人
{
	assert(ps);
	printf("%-15s\t%-5s\t%-5s\t%-20s\t%-20s\n", "1.名字", "2.年龄", "3.性别", "4.电话", "5.地址");
	printf("请选择排序方式:>");
	int xz = 0;
	scanf("%d", &xz);
	switch (xz)
	{
	case 1://名字
		qsort(ps->dime, ps->cot, sizeof(tongxunlu), paixu_mingzi);

		break;
	case 2://年龄
		qsort(ps->dime, ps->cot, sizeof(tongxunlu), paixu_nianling);

		break;
	case 3://性别
		qsort(ps->dime, ps->cot, sizeof(tongxunlu), paixu_six);

		break;
	case 4://电话
		qsort(ps->dime, ps->cot, sizeof(tongxunlu), paixu_dianhua);

		break;
	case 5://地址
		qsort(ps->dime, ps->cot, sizeof(tongxunlu), paixu_dizi);

		break;
	}
	

	printf("排序成功\n");
}



void baochun(tongxunlu_cot* ps)
{
	assert(ps);

	FILE* pfW = fopen("txl.txt", "wb");
	if (pfW == NULL)
	{
		perror("baochun");
		return 1;
	}
	//写文件(二进制)
	int i = 0;
	for ( i = 0; i < ps->cot; i++)
	{
		fwrite(ps->dime+i, sizeof(tongxunlu),1, pfW);
	}
	 

	//关闭文件
	fclose(pfW);
	pfW = NULL;


}