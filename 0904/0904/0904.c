#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d%d", &a, &b, &c);

	if (a < b)
	{
		int min = a;
		a = b;
		b = min;
	}

	if (a < c)
	{
		int min = a;
		a = c;
		c = min;
	}

	if (b < c)
	{
		int min = b;
		b = c;
		c = min;
	}

	printf("%d %d %d", a, b, c);
	return 0;
}
//从大到小输出三个数字
