#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int month;
	int year;
	scanf("%d%d\n", &year,&month);

	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:printf("days=31");
		break;

	case 4:
	case 6:
	case 9:
	case 11:printf("days=30");
		break;

	case 2:
		if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
			printf("days=29");
		else
			printf("days=28");
		break;

	default:printf("ERROR!\n");
		break;


	}
	return 0;
}