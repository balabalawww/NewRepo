#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char x;
	/*int a;
	a = sizeof(x);
	x = 'A';*/
	scanf("%c", &x);
	/*printf("x=%c\na=%d\n", x, a);*/
	if (x >= 65 && x <= 90)
		x += 32;
	else if(x >= 97 && x <= 122)
	x -= 32;
	printf("x=%c\n", x);
	return 0;
}