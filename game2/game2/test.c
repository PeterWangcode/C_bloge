#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()
{
	printf("***********************************************\n");
	printf("**********        0.�˳���Ϸ         **********\n");
	printf("**********        1.��ʼ��Ϸ         **********\n");
	printf("***********************************************\n");

}

void game()
{
	char mine[ROWS][COLS];  // ��Ų��úõ��׵���Ϣ
	char show[ROWS][COLS];  // ����Ų�����׵���Ϣ

	InitBoard(mine, ROWS, COLS, '0');  // ��ʼ������
	InitBoard(show, ROWS, COLS, '*');

	//DisplayBoard(mine, ROW, COL);  // ��ӡ����
	DisplayBoard(show, ROW, COL);

	SetMine(mine, ROW, COL);  // ������
	//DisplayBoard(mine, ROW, COL);

	FindMine(mine, show, ROW, COL);  // �Ų���

}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��->"); scanf("%d", &input);

		switch (input)
		{
		case 0:
			printf("�˳���Ϸ.\n");
			break;
		case 1:
			game();
			break;
		default:
			printf("�������������ѡ��.\n");
			break;
		}

	} while (input);

	return 0;
}