//  запрашивает два целых числа х и у после чего вычисляет и выводит значение х в степени у. 
#include <stdio.h>

int main()
{
	int a = 1;
	while (a == 1)
	{
		int x;
		int y;
		printf("Enter x ");
		scanf_s("%d", &x);
		printf("Enter y ");
		scanf_s("%d", &y);
		int x1 = x;
		if (x == 0)
		{
			printf("0\n\nThe END.");
			break;
		}
		else if (y == 0)
		{
			x1 = 1;
		}
		else
		{
			for (int i = 1; i < y; i++)
			{
				x1 = x1*x;
			}
			printf("%d\n\n", x1);
		}
	}
	
	getchar(); getchar();
	return 0;
}