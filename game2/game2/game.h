# include <stdio.h>
# include <stdlib.h>
# include <time.h>

# define EASE_COUNT 10  // �׵ĸ���

# define ROW 9
# define COL 9

# define ROWS ROW+2
# define COLS COL+2

void InitBoard(char arr[ROWS][COLS], int rows, int cols, char set);  // ��ʼ�����̺���

void DisplayBoard(char arr[ROW][COL], int row, int col);  // ��ӡ����

void SetMine(char arr[ROWS][COLS], int row, int col);  // ���������

void FindMine(char arr1[ROWS][COLS], char arr2[ROWS][COLS], int row, int col);  // �Ų���