#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a1, a2, a3;
	char c1;
	scanf("%d%c%d", &a1, &c1, &a2);
	switch (c1)
	{
	case'+':a3 = a1 + a2;
		printf("%d+%d=%d\n", a1, a2, a3);
		break;
	
	case'-':a3 = a1 - a2;
		printf("%d+%d=%d\n", a1, a2, a3);
		break;

	case'*':a3 = a1 * a2;
		printf("%d*%d=%d\n", a1, a2, a3);
		break;

	case'/':a3 = a1 - a2;
		printf("%d/%d=%d\n", a1, a2, a3);
		break;

	case'%':a3 = a1 - a2;
		printf("%d%%%d=%d\n", a1, a2, a3);
		break;

	default:printf("ERROR!\n");
	}
	return 0;
}