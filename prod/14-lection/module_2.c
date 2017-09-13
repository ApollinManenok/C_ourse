#include "module_2.h"

count_one_num(int num)
{
	for (int i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			printf("%d; ", i);
		}
	}
	printf("\n");
	return num;
}
