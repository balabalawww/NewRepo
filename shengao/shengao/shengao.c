#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int sex, food, sport;
	double h,hm,hf;
	printf("请输入您父亲的身高\n");
	scanf("%lf\n", &hf);
    printf("请输入您母亲的身高\n");
	scanf("%lf\n", &hm);

	printf("男生请输入1，女生请输入0\n");
	scanf("%d\n", &sex);
    if (sex == 1)
	h = (hf + hm) * 0.52;
	else
	h = (hf * 0.923 + hm) * 0.5;

	printf("营养良好请输入1，否则输入0\n");
	scanf("%d\n", &food);
	if (food == 1)
		h = h * (1 + 0.015);

	printf("喜欢运动请输入1，否则输入0\n");
	scanf("%d\n", &sport);
if (sport == 1)
		h = h * (1 + 0.02);

	printf("您在最佳状况下的身高为%g\n", h);
	return 0;
}