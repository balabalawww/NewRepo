#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
main()
{
	int a, b, shang, yu;
	scanf("%d%d", &a, &b);
	shang = a / b;
	yu = a % b;
	printf("shang=%d\n", shang);
	printf("yu=%d\n", yu);
	return 0;
}