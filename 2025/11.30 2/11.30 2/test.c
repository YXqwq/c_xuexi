#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int* getnext(char P[], unsigned int p)
{
	if (p < 2)
	{
		return 0;
	}
	int* next = (int*)malloc((int)p * sizeof(int));//动态分配next数组
	next[0] = 0;
	next[1] = 0;
	int comp = 0;
	int cur = 2;
	while (cur < p)
	{
		if (P[cur - 1] == P[comp])
		{
			next[cur] = comp + 1;
			cur++;
			comp++;
		}
		else if (comp > 0)//不等，comp可以回退
		{
			comp = next[comp];
		}
		else//不等，comp = 0，无法回退
		{
			next[cur++] = 0;
		}
	}

	return next;
}

int kmp(char* S, char* P)
{
	int* next = getnext(P, strlen(P));//接收next数组
	int sCur = 0;//S的定位
	int pCur = 0;//P的定位
	int plen = (int)strlen(P);//P最终位置
	int slen = (int)strlen(S);//S最终位置

	if (plen == 0)
	{
		return 0;//空字符串匹配任意字符串的开始
	}
	while (sCur < slen && pCur < plen)
	{
		if (S[sCur] == P[pCur])
		{
			sCur++;
			pCur++;

		}
		else if (pCur > 0)//不等，pCur大于零，根据next回退
		{
			pCur = next[pCur];
		}
		else//不等，pCur为0，右移一位模式串（P）
		{
			sCur++;
		}




	}

	free(next);//释放next数组内存
	return pCur == ((int)strlen(P)) ? sCur - ((int)strlen(P)) : -1;//等于返回相等的起始地址，不等于返回 -1


}

char* my_strstr(char* S, char* P)
{
	int pos = kmp(S, P);
	
	if (pos != -1)
	{
		return S + pos;//相等的起始地址
	}
	else
	{
		return NULL;//返回空指针
	}

}









int main()
{
	
	char S[] = "abcabcabd";
	char P[] = "abcabd";
	
	
	

	printf("%s", my_strstr(S, P));

	return 0;
}

