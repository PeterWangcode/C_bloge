
# include "game.h"

void menu()
{
	printf("**************************************\n");
	printf("**********      1.play      **********\n");
	printf("**********      0.exit      **********\n");
	printf("**************************************\n");

}

void game()
{
	/*实现游戏的逻辑*/
	char board[ROW][COL];
	InitBoard(board, ROW, COL); // 初始化棋盘 - 初始化成空格

	DisplayBoard(board, ROW, COL);  // 打印棋盘 - 本质是打印数组的内容

	char ret = 0;
	while (1)
	{
		// 玩家走
		PlayerMove(board, ROW, COL);  // 下棋动作
		DisplayBoard(board, ROW, COL);  // 下棋之后，重新打印棋盘
		// 判断玩家是否赢得游戏
		ret = IsWin(board, ROW, COL);
		if (ret != 'c')
			break;

		//电脑走
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		// 判断电脑是否赢得游戏
		ret = IsWin(board, ROW, COL);
		if (ret != 'c')
			break;
	}
	if (ret == '*')
		printf("玩家赢\n");
	else if (ret == '#')
		printf("电脑赢了\n");
	else
		printf("平局\n");
	DisplayBoard(board, ROW, COL);
	
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
			printf("退出游戏\n");
			break;
		case 1:
			printf("三子棋游戏\n");
			game();
			break;
		default:
			printf("输入错误，请重新输入\n");
		}
	} while (input);

	return 0;
}