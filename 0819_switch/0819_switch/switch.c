#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		printf("星期一");
		break;
	case 2:
		printf("星期二");
		break;
	case 3:
		printf("星期三");
		break;
	case 4:
		printf("星期四");
		break;
	case 5:
		printf("星期五");
		break;
	case 6:
		printf("星期六");
		break;
	case 7:
		printf("星期七");
		break;
	default:
		printf("输入错误");/*default是指输入了其他非指定数字的情况，此时可给出提示输入有问题*/
		break;
	}
	return 0;
}
	/*输入1 - 5，输出为工作日，输入6 - 7，输出为休息日
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			printf("工作日")；
			break;
		case 6:
		case 7:
			printf("休息日")；
			break;
*/