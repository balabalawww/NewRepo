#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	double sum = 0, gs = 1;
	int i;
	for (i = 1; i <= 64; i++)
	{
		sum += gs;
		gs *= 2;
	}

	printf("sum=%g\n", sum);
	return 0;
}