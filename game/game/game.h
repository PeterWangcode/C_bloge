#define _CRT_SECURE_NO_WARNINGS 1
/*头文件的包含*/
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <time.h>

/*符号的定义*/
#define ROW 3  // 定义行
#define COL 3  // 定义列

/*函数的声明*/
void InitBoard(char board[ROW][COL], int row, int col);  // 初始化棋盘函数

void DisplayBoard(char board[ROW][COL], int row, int col);  // 打印棋盘

void PlayerMove(char board[ROW][COL], int row, int col);  // 玩家下棋

void ComputerMove(char board[ROW][COL], int row, int col);  // 电脑下棋

char IsWin(char board[ROW][COL], int row, int col);  // 判断输赢