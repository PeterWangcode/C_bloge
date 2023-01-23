#include "game.h"

void InitBoard(char board[ROW][COL], int row, int col)
{
	/*初始化棋盘*/
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

//void DisplayBoard(char board[ROW][COL], int row, int col)
//{
//	/*打印棋盘（不够通用，只使用3*3的棋盘）*/
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
//		if (i < row - 1)
//			printf("---|---|---\n");
//	}
//
//}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	/*打印棋盘*/
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);  //打印 空格-字符-空格
			if (j < col - 1)  // 竖杠不是所有情况下都打印
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			int j = 0;
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}

}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0, y = 0;
	printf("请选择->\n");
	while (1)
	{
		printf("请输入下棋坐标->"); scanf("%d %d", &x, &y);
		//判断下棋合法性
		if (x >= 1 && x <= ROW && y >= 1 && y <= COL)
		{
			// 判断坐标是否被占用
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("坐标已被占用，请重新选择！！！\a\n");
			}
		}
		else
		{
			printf("坐标输入有误，请重新输入！！！\n");
		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	while (1)
	{
		printf("人机->\n");
		int x = rand() % 3;
		int y = rand() % 3;

		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}
int IsFull(char board[ROW][COL], int row, int col)
{
	/*判断棋盘是否满了*/
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}
char IsWin(char board[ROW][COL], int row, int col)
{
	/*判断输赢*/
	int i = 0;
	for (i = 0; i < row; i++)
	{
		// 判断输赢
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')  // 判断三行
			return board[i][1];
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')  // 判断三列
			return board[1][i];
		// 判断对角线
		if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
			return board[1][1];
		if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
			return board[1][1];
	}
	// 判断平局
	// 如果棋盘满了返回1，不满返回0
	int ret = IsFull(board, ROW, COL);
	if (ret == 1)
		return 'Q';
	return 'c';
}