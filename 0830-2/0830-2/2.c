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
		printf("ÇëÊäÈëÃÜÂë\n");
		scanf("%s", password);

		if (strcmp(password, "123456") == 0)
		{
			printf("µÇÂ½³É¹¦");
			break;
		}
		else
		{
			printf("ÃÜÂë´íÎó£¬ÇëÖØÊÔ\n");
			Sleep(500);
			system("cls");
		}
	}

	if (i == 4)
	{
		printf("´íÎóÈý´Î£¬ÍË³öµÇÂ¼\n");
	}
	return 0;
}
