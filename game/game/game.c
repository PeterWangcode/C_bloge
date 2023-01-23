#include "game.h"

void InitBoard(char board[ROW][COL], int row, int col)
{
	/*��ʼ������*/
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
//	/*��ӡ���̣�����ͨ�ã�ֻʹ��3*3�����̣�*/
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
	/*��ӡ����*/
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);  //��ӡ �ո�-�ַ�-�ո�
			if (j < col - 1)  // ���ܲ�����������¶���ӡ
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
	printf("��ѡ��->\n");
	while (1)
	{
		printf("��������������->"); scanf("%d %d", &x, &y);
		//�ж�����Ϸ���
		if (x >= 1 && x <= ROW && y >= 1 && y <= COL)
		{
			// �ж������Ƿ�ռ��
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("�����ѱ�ռ�ã�������ѡ�񣡣���\a\n");
			}
		}
		else
		{
			printf("���������������������룡����\n");
		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	while (1)
	{
		printf("�˻�->\n");
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
	/*�ж������Ƿ�����*/
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
	/*�ж���Ӯ*/
	int i = 0;
	for (i = 0; i < row; i++)
	{
		// �ж���Ӯ
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')  // �ж�����
			return board[i][1];
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')  // �ж�����
			return board[1][i];
		// �ж϶Խ���
		if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
			return board[1][1];
		if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
			return board[1][1];
	}
	// �ж�ƽ��
	// ����������˷���1����������0
	int ret = IsFull(board, ROW, COL);
	if (ret == 1)
		return 'Q';
	return 'c';
}