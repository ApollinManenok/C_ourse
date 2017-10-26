
#include "module_3.h"

void count_two_nums(int num1, int num2)
{
	int length = 1;
	printf("\n");
	if (num1 >= num2)
	{
		length = num1;
	}
	else
	{
		length = num2;
	}
	for (int i = 1; i <= length; i++)
	{
		if (num1 % i == 0 && num2 % i == 0)
		{
			printf("%d; ", i);
		}
	}
	printf("\n");
}