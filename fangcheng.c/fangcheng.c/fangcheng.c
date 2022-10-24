#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
main()
{
	double a, b, c, x1, x2, delt;
	scanf("%lf%lf%lf", &a, &b, &c);
	delt = b * b - 4 * a * c;
	x1 = (-b - sqrt(delt)) / (2 * a);
	x2 = (-b + sqrt(delt)) / (2 * a);
	printf("x1=%g\n", x1);
	printf("x2=%g\n", x2);
	return 0;
}