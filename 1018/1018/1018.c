#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	double a, b, c, delt, x1, x2;
	scanf("%lf%lf%lf", &a, &b, &c);
	delt = b * b - 4 * a * c;
	if (delt >= 0)
	{
		x1 = (-b + sqrt(delt));
		x2 = (-b - sqrt(delt));
		printf("x1=%g\n", x1);
		printf("x2=%g\n", x2);
	}
	else
		printf("NO ROOT!");
	return 0;
}