
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
	/*ʵ����Ϸ���߼�*/
	char board[ROW][COL];
	InitBoard(board, ROW, COL); // ��ʼ������ - ��ʼ���ɿո�

	DisplayBoard(board, ROW, COL);  // ��ӡ���� - �����Ǵ�ӡ���������

	char ret = 0;
	while (1)
	{
		// �����
		PlayerMove(board, ROW, COL);  // ���嶯��
		DisplayBoard(board, ROW, COL);  // ����֮�����´�ӡ����
		// �ж�����Ƿ�Ӯ����Ϸ
		ret = IsWin(board, ROW, COL);
		if (ret != 'c')
			break;

		//������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		// �жϵ����Ƿ�Ӯ����Ϸ
		ret = IsWin(board, ROW, COL);
		if (ret != 'c')
			break;
	}
	if (ret == '*')
		printf("���Ӯ\n");
	else if (ret == '#')
		printf("����Ӯ��\n");
	else
		printf("ƽ��\n");
	DisplayBoard(board, ROW, COL);
	
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
			printf("�˳���Ϸ\n");
			break;
		case 1:
			printf("��������Ϸ\n");
			game();
			break;
		default:
			printf("�����������������\n");
		}
	} while (input);

	return 0;
}