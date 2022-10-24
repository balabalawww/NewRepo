#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main()
{
	double a, b, c, s, Area;
	scanf("%lf%lf%lf", &a, &b, &c);
	if (a + b > c, b + c > a, a + c > b)
	{
		s = (a + b + c) / 2;
		Area = sqrt(s * (s - a) * (s - b) * (s - c));
		printf("Area=%g\n", Area);
	}
	else
		printf("ERROR!\n");
	return 0;
}