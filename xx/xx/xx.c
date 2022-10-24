#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int i = 0, sum = 0;
//	do
//	{
//		i ++;
//		sum += i;
//	} while (i <= 100);
//	printf("sum=%d\n", sum);
//
//	return 0;
//}

#include<math.h>
int main()
{
	double pi = 0, delt;
	int i = -1, flag = -1;
	do
	{
		i += 2;
		flag *= -1;
		delt = flag / (1.0 * i);
		pi += delt;
	} while (fabs(delt)>1e-6);
	pi *= 4;

	printf("pi=%.13g\n", pi);//这里表示输出小数点后十三位

	return 0;
}