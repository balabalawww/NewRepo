
#include <stdio.h>
#include<stdlib.h>
#include<time.h>

void menu()
{
	printf("********************************************\n");
	printf("************** 1. ��ʼ��Ϸ *****************\n");
	printf("********************************************\n");
	printf("************** 2. �˳���Ϸ *****************\n");
	printf("********************************************\n");
}

void game()
{
	int ret = rand() % 100 + 1;
	int guess = 0;
	while (1)
	{
		printf("�������:>");
		scanf_s("%d", &guess);
		if (guess < ret)
		{
			printf("��С��,����һ�ΰ�\n");

		}
		else if (guess > ret)
		{
			printf("�´��ˣ�����һ�ΰ�\n");
		}
		else
		{
			printf("��ϲ�㣬�ش���ȷ��\n");
			break;
		}
	}
}

int main()
{
	printf("              �� �� �� �� Ϸ\n");
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();
		printf("��ѡ��:>");
		scanf_s("%d", &input);

		switch (input)
		{
		case 1:
			game();
			break;

		case 2:
			break;

		default:
			printf("ѡ���������������!\n");
			Sleep(1000);
			system("cls");
			break;
		}
	} 
	while (input);

	return 0;

}