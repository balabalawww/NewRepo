#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		printf("����һ");
		break;
	case 2:
		printf("���ڶ�");
		break;
	case 3:
		printf("������");
		break;
	case 4:
		printf("������");
		break;
	case 5:
		printf("������");
		break;
	case 6:
		printf("������");
		break;
	case 7:
		printf("������");
		break;
	default:
		printf("�������");/*default��ָ������������ָ�����ֵ��������ʱ�ɸ�����ʾ����������*/
		break;
	}
	return 0;
}
	/*����1 - 5�����Ϊ�����գ�����6 - 7�����Ϊ��Ϣ��
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			printf("������")��
			break;
		case 6:
		case 7:
			printf("��Ϣ��")��
			break;
*/