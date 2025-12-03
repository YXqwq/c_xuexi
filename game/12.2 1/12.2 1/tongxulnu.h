#pragma once
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#define MOREN_SZ 3
#define ZENGJIA_SZ 2
#define MAX 100
#define MAX_mingzi 15
#define MAX_nianling 100
#define MAX_six 10
#define MAX_dianhua 20
#define MAX_dizi 20

typedef struct tongxunlu//创造个人信息结构体
{
	char mingzi[MAX_mingzi];//名字
	int nianling ;//年龄
	char six[MAX_six];//性别
	char dianhua[MAX_dianhua];//电话
	char dizi[MAX_dizi];//地址
}tongxunlu;

typedef struct tongxunlu_cot
{
	tongxunlu* dime;//每个人的信息
	int cot;//联系人个数
	int rongliang;//通讯录容量
}tongxunlu_cot;

//初始化通讯录
int chushihua(tongxunlu_cot* ps);
//销毁通讯录
void xiaohui(tongxunlu_cot* ps);
//增加通讯录
void zengjia(tongxunlu_cot* ps);
//显示通讯录
void xianshi(tongxunlu_cot* ps);
//删除联系人
void shanchu(tongxunlu_cot* ps);
//查找联系人
void chazhao_txl(tongxunlu_cot* ps);
//更改联系人
void genggai(tongxunlu_cot* ps);
//交换联系人
void jiaohuan_ren(tongxunlu_cot* ps);
//排序联系人
void paixu(tongxunlu_cot* ps);
//彩蛋
void caidan_qwq(tongxunlu_cot* ps);