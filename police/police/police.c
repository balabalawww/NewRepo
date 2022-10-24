#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main()
{
	int i, g, s, b, q, sqr;

	for (i = 1000; i <= 9999; i++)
	{
		g = i % 10;
		s = (i / 10) % 10;
		b = (i / 100) % 10;
		q = i / 1000;

		sqr = (int)sqrt(i);
		
		if (g == s && b == q && g != b && sqr * sqr = i)
			printf("%d\t%d\n", i, sqr);
	}
	return 0;
}