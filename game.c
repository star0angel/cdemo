#include "game.h"
char arr[ROW][COL] = { 0 };
void initarr()
{
	for (int i=0;i<ROW;i++)
	{
		for (int j=0;j<COL;j++)
		{
			arr[i][j] = ' ';
		}
	}
}
void printboard()
{
	printf("-------\n");
	for (int i = 0; i < ROW; i++)
	{
		printf("|");
		for (int j = 0; j < COL; j++)
		{
			printf("%c%c", arr[i][j], '|');
		}
		printf("\n-------\n");
	}
	//printf("*******\n");
}
game() {
	srand((unsigned int)time(NULL));
	int x, y,num=0;
	while (1) {
		while (1)
		{
			printf("请输入你要输入的位置坐标:>");
			scanf("%d%d", &x, &y);
			if (arr[x - 1][y - 1] == ' ' && x > 0 && x <= 3 && y > 0 && y <= 3)
			{
				arr[x - 1][y - 1] = '*';
				num++;
				break;
			}
			else
			{
				printf("输入错误！");
			}
		}
		printboard();
		//win();
		do
		{
			x = rand() % 3 + 1;
			y = rand() % 3 + 1;

			if (arr[x - 1][y - 1] == ' ')
			{
				arr[x - 1][y - 1] = '&';
				num++;
				break;
			}
		} while (1);
		printboard();

	}
	

}
void gamestart()
{
	initarr();//初始化数组
	printboard();//打印棋盘
	game();
}
