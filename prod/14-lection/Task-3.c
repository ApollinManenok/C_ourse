
#include <stdio.h>
#include "module_3.h"

int main()
{
	int usernum1 = 1;
	int usernum2 = 1;
	while (usernum1 != 0 || usernum2 != 0)
	{
		printf("\nEnter first number ");
		scanf_s("%d", &usernum1);
		printf("\nEnter second number ");
		scanf_s("%d", &usernum2);
		if (usernum1 % 1 != 0 || usernum2 % 1 != 0)
		{
			printf("Wrong number. Try again.\n\n");
			continue;
		}
		count_two_nums(usernum1, usernum2);

	}
	getchar(); getchar();
	return 0;
}