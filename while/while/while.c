#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("i=%d\n", i);
//		i++;
//	}
//	return 0;
//}
//����Ľ��Ϊ1-10





//int main()
//{
//	int i = 1;
//	while(i<=10)
//	{
//		if (i == 5)
//			break;
//		printf("i=%d\n", i);
//		i++;
//	}
//	return 0;
//}
//������Ϊ1-4����i����5ʱ����������������break,�����Զ�������û��ִ�к����ġ���ӡ��


//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("i=%d\n", i);
//		i++;
//	}
//	return 0;
//}
//������Ϊ1-4������δ����������ѭ������i����5ʱ����������������continue,�����˺����ġ���ӡ��ֱ�ӷ���while��if���ж��У�����ѭ��



int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
		putchar(ch);
	return 0;
}
//ctrl+z����������ó�����ȡһ���ַ������