#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 3
#define COL 3//自定义棋盘大小
//初始化棋盘
void chushi_qipan(char qipan[ROW][COL], int a, int b);

//打印棋盘
void dayin_qipan(char qipan[ROW][COL], int a, int b);

//玩家下棋
void paly_wanjia(char qipan[ROW][COL], int a, int b);

//电脑下棋
//找空白位置随机下棋
void paly_diannao(char qipan[ROW][COL], int a, int b);

//判断输赢
//玩家 #
//电脑 *
//退出 C
//继续 Q
char win(char qipan[ROW][COL], int a, int b);

//判断棋盘是否填满
int qipan_max(char qipan[ROW][COL], int a, int b);