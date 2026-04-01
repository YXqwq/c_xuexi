#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define ChuShiSize 10
typedef struct XianXingBiao
{
	int* data;
	int MaxSize;
	int length;
}XianXingBiao;



//菜单
void CaiDan()
{
	printf("1.建立顺序表\n");
	printf("2.输入数据\n");
	printf("3.查找\n");
	printf("4.插入\n");
	printf("5.删除\n");
	printf("6.输出\n");
	printf("0.退出\n");
}
//初始化
void XianXingBiaoChuShiHua(XianXingBiao* L)
{
	L->data = (int*)malloc(sizeof(int) * ChuShiSize);
	L->MaxSize = ChuShiSize;
	L->length = 0;
	printf("成功建立线性表\n");
}



//输出
void ShuChu(XianXingBiao* L)
{
	for (int i = 0; i < L->length; i++)
	{
		printf("%d ", L->data[i]);
	}
	printf("\n");
}



//输入数据
void ShuRu(XianXingBiao* L)
{
	printf("请输入10个数据\n");
	for (int i = 0; i < L->MaxSize; i++)
	{
		scanf("%d", &(L->data[i]));
	}
	L->length = ChuShiSize;
	printf("输入成功\n");
	printf("当前数据为:\n");
	ShuChu(L);
}

//查找
void ChaZhao(XianXingBiao* L)
{
	int n = 0;
	printf("请输入要查找的数的下标:");
	scanf("%d", &n);
	if (n >= 0 && n < L->length)
	{
		printf("下标为%d的数据为%d\n", n, L->data[n]);
	}
	else
	{
		printf("未找到\n");
	}

}



//扩容
void KuoRong(XianXingBiao* L)
{
	L->MaxSize += 5;
	int* newdata = (int*)realloc(L->data, sizeof(int) * L->MaxSize);
	if (newdata == NULL)
	{
		return;
	}
	L->data = newdata;
}
//插入
void ChaRu(XianXingBiao* L)
{
	if (L->length == L->MaxSize)
	{
		KuoRong(L);
		printf("扩容成功\n");
	}
	int a = 0;
	int b = 0;
	printf("输入要插入的数据：");
	scanf("%d", &a);
	printf("输入要插入的位置:");
	scanf("%d", &b);
	for (int j = L->length; j>b; j--)
	{
		L->data[j] = L->data[j-1];
		
	}
	L->data[b] = a;
	L->length++;
}

//删除
void ShanChu(XianXingBiao* L)
{
	int b = 0;
	printf("请输入要删除的数据的下标");
	scanf("%d", &b);
	for (int j = b; j < L->length-1;j++)
	{
		L->data[j] = L->data[j + 1];
	}
	printf("删除成功\n");
	L->length--;
}


int main()
{
	XianXingBiao L;
	int m = 1;
	while (m)
	{
		CaiDan();
		scanf("%d", &m);
		switch (m)
		{
		case 1:
			XianXingBiaoChuShiHua(&L);
			break;
		case 2:
			ShuRu(&L);
			break;
		case 3:
			ChaZhao(&L);
			break;
		case 4:
			ChaRu(&L);
			break;
		 case 5:
			 ShanChu(&L);
			 break;
		case 6:
			ShuChu(&L);
			break;
		case 0:
			break;
		}
	}





	return 0;
}