#define _CRT_SECURE_NO_WARNINGS 1

# include "game.h"

void InitBoard(char arr[ROWS][COLS], int rows, int cols, char set)
{
	/*��ʼ�����̣�Ϊ���鸳ֵ��*/
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
	/*��ӡ����*/
	int i = 0;
	printf("--------ɨ����Ϸ--------\n");
	for (i = 0; i <= row; i++)  // ��ӡ�к�
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
	printf("--------ɨ����Ϸ--------\n");
}

void SetMine(char arr[ROWS][COLS], int row, int col)
{
	/*���������*/
	int count = 10;
	while (count)
	{
		int x = rand() % row + 1;  // ������� 1~9 ����
		int y = rand() % col + 1;

		if (arr[x][y] == '0')  // �����λ�ò����ף��ͽ������ó���
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
	/*�Ų���
	1.��������
	2.�жϸ������Ƿ�Ϊ��1��
		- Ϊ��1��  ��������Ϸ
		- ��Ϊ��1������ʾ��������Χ�׵���Ϣ*/
	int x = 0, y = 0;
	int win = 0;

	while (win == row * col - 10)
	{
		printf("������Ҫ�Ų������->");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (arr1[x][y] == '1')
			{
				printf("���ź����㱻ը����.\n");
				DisplayBoard(arr1, row, col);
				break;
			}
			else
			{
				// ����������£�ͳ��x, y��Χ�ж��ٸ���
				int count = get_mine_count(arr1, row, col);
				arr2[x][y] = count + '0';
				DisplayBoard(arr2, row, col);
				win++;
			}
		}
		else
			printf("�������������\a");
	}

	if (win == row * col - 10)
	{
		printf("��ϲ�㣬���׳ɹ���\a\n");
		DisplayBoard(arr2, row, col);
	}
}