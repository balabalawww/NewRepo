#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<windows.h>
int main ()
{
	int i = 0;
	char password[20] = { 0 };

	for (i = 1; i <= 3; i++)
	{
		printf("����������\n");
		scanf("%s", password);

		if (strcmp(password, "123456") == 0)
		{
			printf("��½�ɹ�");
			break;
		}
		else
		{
			printf("�������������\n");
			Sleep(500);
			system("cls");
		}
	}

	if (i == 4)
	{
		printf("�������Σ��˳���¼\n");
	}
	return 0;
}
