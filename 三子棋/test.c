<<<<<<< HEAD
#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void menu()
{
	printf("***************************\n");
	printf("********   1. play  *******\n");
	printf("********   0. exit  *******\n");
	printf("***************************\n");
}
void game()
{
	char ret = 0;
	 //���ݵĴ洢�Ƕ�ά����
	char board[ROW][COL];
	//��ʼ������ - ��ʼ��Ϊ�ո�
	Initboard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		//�������
		PlayMove(board,ROW,COL);
		ret = CheckWin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);
		//��������
		ComputerMove(board,ROW,COL);//����AI���漴����
		ret = CheckWin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);
	}
	if (ret == '*')
		printf("���Ӯ��\n");
	else if (ret == '#')
		printf("����Ӯ��\n");
	else if (ret == 'Q')
		printf("ƽ��\n");
}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//��������Ϸ
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�üһ�ⶼ��ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
=======
#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void menu()
{
	printf("***************************\n");
	printf("********   1. play  *******\n");
	printf("********   0. exit  *******\n");
	printf("***************************\n");
}
void game()
{
	char ret = 0;
	 //���ݵĴ洢�Ƕ�ά����
	char board[ROW][COL];
	//��ʼ������ - ��ʼ��Ϊ�ո�
	Initboard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		//�������
		PlayMove(board,ROW,COL);
		ret = CheckWin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);
		//��������
		ComputerMove(board,ROW,COL);//����AI���漴����
		ret = CheckWin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);
	}
	if (ret == '*')
		printf("���Ӯ��\n");
	else if (ret == '#')
		printf("����Ӯ��\n");
	else if (ret == 'Q')
		printf("ƽ��\n");
}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//��������Ϸ
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�üһ�ⶼ��ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
>>>>>>> 2a3db5307ebbcce20d7c7b672e42bd30f89fefdf
}