# include <stdio.h>
# include <stdlib.h>
# include <time.h>

# define EASE_COUNT 10  // 雷的个数

# define ROW 9
# define COL 9

# define ROWS ROW+2
# define COLS COL+2

void InitBoard(char arr[ROWS][COLS], int rows, int cols, char set);  // 初始化棋盘函数

void DisplayBoard(char arr[ROW][COL], int row, int col);  // 打印函数

void SetMine(char arr[ROWS][COLS], int row, int col);  // 随机布置雷

void FindMine(char arr1[ROWS][COLS], char arr2[ROWS][COLS], int row, int col);  // 排查雷