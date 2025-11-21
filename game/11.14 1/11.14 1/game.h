#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define LEI 10



void game();
void chushihua(char mingan[ROWS][COLS], int row, int col, char ret);
void dayin(char mingan[ROWS][COLS], int  row,int  col);
void shezhi_lei(char an[ROWS][COLS], int row, int col,int lei);
void pai_lei(char ming[ROWS][COLS], char an[ROWS][COLS],int row,int col);
int lei_shu(char an[ROWS][COLS], int x, int y);
int sheng_li(char ming[ROWS][COLS], char an[ROWS][COLS], int row, int col);
void zhan_kai(char ming[ROWS][COLS], char an[ROWS][COLS], int x, int y);
