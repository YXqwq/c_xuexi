#define _CRT_SECURE_NO_WARNINGS
#include "jiami.h"

//进度条
void jindutiao()
{

	for (int i = 0; i <= 100; i += 10) {
		// 清除当前行并显示新内容
		printf("\033[2K\r进度: [%-10s] %d%%",
			"##########" + (10 - i / 10), i);
		fflush(stdout);
		Sleep(100);
	}
	printf("\n完成！\n");

}






void caidan()
{
	printf("==二进制凯撒加密系统==\n");
	printf("        1.加密         \n");
	printf("        2.解密         \n");
	printf("        3.暴力破解     \n");
	printf("        0.退出         \n");
	printf("==二进制凯撒加密系统==\n");


}

//凯撒加密
void kaisa(char *arr,int py)
{
	char n = 0;
	for (int i = 0; arr[i] != '\0'; i++)
	{
		char n = arr[i];
		//判断大小写
		if (isupper(n))//大写
		{
			n = (((n - 'A') + py) % 26) + 'A';
			arr[i] = n;
		}
		else if (islower(n))//小写
		{
			n = (((n - 'a') + py) % 26) + 'a';
			arr[i] = n;
		}
		else//非字符
		{
			arr[i] = n;
		}
	}





}

//凯撒解密
void  kaisa_fan(char* arr, int py)
{
	char n = 0;
	for (int i = 0; arr[i] != '\0'; i++)
	{
		char n = arr[i];
		//判断大小写
		if (isupper(n))//大写
		{
			n = (((n - 'A') - py) % 26) + 'A';
			arr[i] = n;
		}
		else if (islower(n))//小写
		{
			n = (((n - 'a') - py) % 26) + 'a';
			arr[i] = n;
		}
		else//非字符
		{
			arr[i] = n;

		}
	}
}


//加密
void jiami(char* arr,int sz)
{
	int py = 0;//偏移值
	

	printf("请输入文本:>");
	//清空输入缓冲区
	getchar();
	fgets(arr,sz,stdin);
	printf("请输入偏移值:>");
	scanf("%d", &py);
	//开始加密
	kaisa(arr,(py % 26));
	jindutiao();
	printf("加密完成\n");
}

//写
void xie(char* arr)
{
	// 写入
	FILE* pfw = fopen("test.txt", "wb");
	if (!pfw)
	{
		perror("pfw");
		return ;
	}
	fwrite(arr, sizeof(char), strlen(arr), pfw);//写进文本
	//关闭文件
	fclose(pfw);
	pfw = NULL;
	
	printf("写入成功\n");
}

//读
void du(char* arr)
{
	FILE* pfr = fopen("test.txt", "rb");
	if (!pfr)
	{
		perror("pfr");
		return ;
	}
	fread(arr, sizeof(char), MAX, pfr);
	//关闭文件
	fclose(pfr);
	pfr = NULL;

	printf("读取成功\n");
}




//解密
void jiemi(char* arr)
{
	int xz = 0;
	printf("请输入偏移值:>");
	scanf("%d", &xz);
	//开始解密
	kaisa_fan(arr, (xz%26));
	jindutiao();
	printf("解密成功\n");
	printf("结果为%s\n", arr);

}
//暴力破解
void  pojie(char* arr,char p[25][MAX])
{
	
	int kay = 0;
	for (kay = 1; kay < 26; kay++)
	{
		int i = 0;
		
		while (arr[i] != '\0' && i < MAX - 1)
		{
			if (isalpha(arr[i]))
			{
				char n = isupper(arr[i]) ? 'A' : 'a';
				p[kay - 1][i] = (arr[i] - n - kay + 26) % 26 + n;
			}
			else
			{
				p[kay - 1][i] = arr[i];
			}
			i++;
		}
		p[kay -1][i] = '\0';
	}

	
}

//偏移值 48596 有彩蛋