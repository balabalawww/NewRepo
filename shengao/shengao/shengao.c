#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int sex, food, sport;
	double h,hm,hf;
	printf("�����������׵����\n");
	scanf("%lf\n", &hf);
    printf("��������ĸ�׵����\n");
	scanf("%lf\n", &hm);

	printf("����������1��Ů��������0\n");
	scanf("%d\n", &sex);
    if (sex == 1)
	h = (hf + hm) * 0.52;
	else
	h = (hf * 0.923 + hm) * 0.5;

	printf("Ӫ������������1����������0\n");
	scanf("%d\n", &food);
	if (food == 1)
		h = h * (1 + 0.015);

	printf("ϲ���˶�������1����������0\n");
	scanf("%d\n", &sport);
if (sport == 1)
		h = h * (1 + 0.02);

	printf("�������״���µ����Ϊ%g\n", h);
	return 0;
}