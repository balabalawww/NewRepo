
#include <stdio.h>
#include<stdlib.h>
#include<time.h>

void menu()
{
	printf("********************************************\n");
	printf("************** 1. 开始游戏 *****************\n");
	printf("********************************************\n");
	printf("************** 2. 退出游戏 *****************\n");
	printf("********************************************\n");
}

void game()
{
	int ret = rand() % 100 + 1;
	int guess = 0;
	while (1)
	{
		printf("请猜数字:>");
		scanf_s("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了,再试一次吧\n");

		}
		else if (guess > ret)
		{
			printf("猜大了，再试一次吧\n");
		}
		else
		{
			printf("恭喜你，回答正确！\n");
			break;
		}
	}
}

int main()
{
	printf("              猜 数 字 游 戏\n");
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();
		printf("请选择:>");
		scanf_s("%d", &input);

		switch (input)
		{
		case 1:
			game();
			break;

		case 2:
			break;

		default:
			printf("选择错误，请重新输入!\n");
			Sleep(1000);
			system("cls");
			break;
		}
	} 
	while (input);

	return 0;

}