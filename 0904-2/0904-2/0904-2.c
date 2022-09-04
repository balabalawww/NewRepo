#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d\n", i);
//	}
//	return 0;
//}



int main()
{
	int a = 0;
	int b = 0;
	int i = 0;

	scanf("%d%d", &a, &b);

	if (a > b)
		i = b;
	else
		i = a;

	while (1)
	{
		if (a % i == 0 && b % i == 0)
		{
			printf("最大公约数就是%d\n", i);
			break;
		}
		i--;
	}
	return 0;
}
//先比较两个数的大小，最大公约数一定小于等于小的那个数。然后取模，结果同时为零的即为公约数。