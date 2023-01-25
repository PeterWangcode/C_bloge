#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()
{
	printf("***********************************************\n");
	printf("**********        0.退出游戏         **********\n");
	printf("**********        1.开始游戏         **********\n");
	printf("***********************************************\n");

}

void game()
{
	char mine[ROWS][COLS];  // 存放布置好的雷的信息
	char show[ROWS][COLS];  // 存放排查出的雷的信息

	InitBoard(mine, ROWS, COLS, '0');  // 初始化棋盘
	InitBoard(show, ROWS, COLS, '*');

	//DisplayBoard(mine, ROW, COL);  // 打印函数
	DisplayBoard(show, ROW, COL);

	SetMine(mine, ROW, COL);  // 布置雷
	//DisplayBoard(mine, ROW, COL);

	FindMine(mine, show, ROW, COL);  // 排查雷

}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择->"); scanf("%d", &input);

		switch (input)
		{
		case 0:
			printf("退出游戏.\n");
			break;
		case 1:
			game();
			break;
		default:
			printf("输入错误，请重新选择.\n");
			break;
		}

	} while (input);

	return 0;
}