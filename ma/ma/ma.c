#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int  x, y, z;

	for (x = 1; x <= 30; x++)
		for (y = 1; y <= 30; y++)
			for (z = 1; z <= 30; z++)

				if (x + y + z == 30 && 3 * x + 2 * y + z == 50)
					printf("%d\t%d\t%d\n", x, y, z);
				return 0;
}