
#include "game.h"


void menu()
{
	printf("1.开始游戏   0.退出游戏：>");
}
int main()
{
	int input;
	do 
	{
		menu();//菜单
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			gamestart();
			break;
			//continue;
		case 0:
			printf("退出游戏。\n");
			break;
		default:
			printf("选择错误。\n");
			break;
		}

	} while (input);
	
	return 0;
}