#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define CHUSHI 3
#define ZENGR 2

//线性表
typedef struct xianxingbiao
{
	int* data;//线性表
	int Maxlen;//最大容量
	int len;//当前容量
}xianxingbiao;

//扩容
void KuoRong(xianxingbiao * L)
{
	if (L->len == L->Maxlen)
	{
		L->Maxlen += ZENGR;
		int* p = L->data;
		p = realloc(L->data, sizeof(int) * (L->Maxlen));
		if (p == NULL)
		{
			return;
		}
		else
		{
			L->data = p;
			p = NULL;
		}
	}
	
	
}
//初始化
void ChuShiHua(xianxingbiao * L)
{
	L->data = (int*)malloc(sizeof(int) * CHUSHI);
	if (L->data == NULL)
	{
		return;
	}
	L->Maxlen = CHUSHI;
	L->len = 0;
	/*for (int i = 0; i < CHUSHI; i++)
	{
		L->data[i] = 0;
	}*/


}

//插入
void ChaRu(xianxingbiao* L,int i,int e)
{
	if (i<1 || i>L->len + 1)
	{
		printf("插入无效\n");
		return;
	}
	KuoRong(L);
	for (int j = L->len ; j >= i ; j--)
	{
		L->data[j] = L->data[j - 1];
	}
	L->data[i - 1] = e;
	L->len += 1;
}

void DaYing(xianxingbiao* L)
{
	for (int i = 0; i <L->len; i++)
	{
		printf("%d ", L->data[i]);
	}
	printf("\n");
}

//删除
void SanChu(xianxingbiao* L,int i)
{
	if (i<1 || i> L->len + 1)
	{
		printf("删除无效\n");
		return;
	}
	for (int j =i;j<L->len;j++)
	{
		L->data[j - 1] = L->data[j];
	}
	L->len -= 1;
}

//按位查找
void ChaZhaoW(xianxingbiao* L,int i)
{
	printf("第%d个元素为%d",i, L->data[i - 1]);
}

//按值查找
int ChaZhaoZ(xianxingbiao* L, int e)
{
	for (int i = 0; i < L->len; i++)
	{
		if (L->data[i] == e)
		{
			return i + 1;
		}
	}
	return 0;
}


int main()
{
	xianxingbiao  L;
	int i = 0;
	int e = 0;
	int xz = 0;
	ChuShiHua(&L);
	while (1)//测试
	{
		scanf("%d", &xz);
		switch (xz)
		 {
		 case 1:
		 {
			scanf("%d %d", &i, &e);
			ChaRu(&L, i, e);
			DaYing(&L);
			break;
		 }
		 case 2:
		 {
			scanf("%d", &i);
			SanChu(&L, i);
			DaYing(&L);
			break;
		 }
			
		
		 case 3:
		 { 
			 scanf("%d", &i);
			 ChaZhaoW(&L, i);
			 break;
		 }
		 case 4:
		 {
			 scanf("%d", &e);
			 int p =ChaZhaoZ(&L, e);
			 printf("%d", p);
			 break;
		 }

		}
	}
	
	return 0;
}