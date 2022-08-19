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
//输出的结果为1-10





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
//输出结果为1-4，当i等于5时，符合条件，遇到break,程序自动跳出，没有执行后续的“打印”


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
//输出结果为1-4，程序未结束陷入死循环。当i等于5时，符合条件，遇到continue,跳过了后续的“打印”直接返回while，if的判断中，持续循环



int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
		putchar(ch);
	return 0;
}
//ctrl+z程序结束，该程序会读取一个字符并输出