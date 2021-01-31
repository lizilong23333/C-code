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
	 //数据的存储是二维数组
	char board[ROW][COL];
	//初始化棋盘 - 初始化为空格
	Initboard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		//玩家下棋
		PlayMove(board,ROW,COL);
		ret = CheckWin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);
		//电脑下棋
		ComputerMove(board,ROW,COL);//暂无AI，随即下棋
		ret = CheckWin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);
	}
	if (ret == '*')
		printf("玩家赢了\n");
	else if (ret == '#')
		printf("电脑赢了\n");
	else if (ret == 'Q')
		printf("平局\n");
}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//三子棋游戏
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("好家伙，这都能选错，你最好重新选！\n");
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
	 //数据的存储是二维数组
	char board[ROW][COL];
	//初始化棋盘 - 初始化为空格
	Initboard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		//玩家下棋
		PlayMove(board,ROW,COL);
		ret = CheckWin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);
		//电脑下棋
		ComputerMove(board,ROW,COL);//暂无AI，随即下棋
		ret = CheckWin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);
	}
	if (ret == '*')
		printf("玩家赢了\n");
	else if (ret == '#')
		printf("电脑赢了\n");
	else if (ret == 'Q')
		printf("平局\n");
}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//三子棋游戏
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("好家伙，这都能选错，你最好重新选！\n");
			break;
		}
	} while (input);
	return 0;
>>>>>>> 2a3db5307ebbcce20d7c7b672e42bd30f89fefdf
}