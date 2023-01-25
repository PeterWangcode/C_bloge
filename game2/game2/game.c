#define _CRT_SECURE_NO_WARNINGS 1

# include "game.h"

void InitBoard(char arr[ROWS][COLS], int rows, int cols, char set)
{
	/*初始化棋盘（为数组赋值）*/
	int i = 0;
	for (i = 0; i < rows; i++)
	{
		int j = 0;
		for (j = 0; j < cols; j++)
		{
			arr[i][j] = set;
		}
	}
}

void DisplayBoard(char arr[ROWS][COLS], int row, int col)
{
	/*打印函数*/
	int i = 0;
	printf("--------扫雷游戏--------\n");
	for (i = 0; i <= row; i++)  // 打印列号
		printf(" %d ", i);
	putchar('\n');
	for (i = 1; i <= row; i++)
	{
		printf(" %d ", i);
		int j = 0;
		for (j = 1; j <= col; j++)
		{
			printf(" %c ", arr[i][j]);
		}
		putchar('\n');
	}
	printf("--------扫雷游戏--------\n");
}

void SetMine(char arr[ROWS][COLS], int row, int col)
{
	/*随机布置雷*/
	int count = 10;
	while (count)
	{
		int x = rand() % row + 1;  // 随机生成 1~9 的数
		int y = rand() % col + 1;

		if (arr[x][y] == '0')  // 如果该位置不是雷，就将他布置成雷
		{
			arr[x][y] = '1';
			count--;
		}
	}
}

static int get_mine_count(char arr[ROWS][COLS], int x, int y)
{
	return arr[x - 1][y] +
		arr[x - 1][y - 1] +
		arr[x][y - 1] +
		arr[x + 1][y - 1] +
		arr[x + 1][y] +
		arr[x + 1][y + 1] +
		arr[x][y + 1] +
		arr[x - 1][y + 1] + '0' * 8;
}

void FindMine(char arr1[ROWS][COLS], char arr2[ROWS][COLS], int row, int col)
{
	/*排查雷
	1.输入坐标
	2.判断该坐标是否为‘1’
		- 为‘1’  ：结束游戏
		- 不为‘1’：显示该坐标周围雷的信息*/
	int x = 0, y = 0;
	int win = 0;

	while (win == row * col - 10)
	{
		printf("请输入要排查的坐标->");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (arr1[x][y] == '1')
			{
				printf("很遗憾，你被炸死了.\n");
				DisplayBoard(arr1, row, col);
				break;
			}
			else
			{
				// 不是雷情况下，统计x, y周围有多少个雷
				int count = get_mine_count(arr1, row, col);
				arr2[x][y] = count + '0';
				DisplayBoard(arr2, row, col);
				win++;
			}
		}
		else
			printf("输入的坐标有误！\a");
	}

	if (win == row * col - 10)
	{
		printf("恭喜你，排雷成功！\a\n");
		DisplayBoard(arr2, row, col);
	}
}