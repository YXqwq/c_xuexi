#pragma once
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <Windows.h>
#define MAX 100



//菜单
void caidan();
//加密
void jiami(char * arr,int sz);
//写
void xie(char* arr);
//读
void du(char* arr);
//暴力破解
void pojie(char* arr,char p[25][MAX]);
//解密
void jiemi(char* arr);