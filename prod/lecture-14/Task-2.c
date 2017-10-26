/*odno chislo delenie chisla bez ostatka na celye chisla*/


#include <stdio.h>
#include "module_2.h""

int main()
{
	int usernum = 1;
	while (usernum != 0)
	{
		printf("\nEnter number ");
		scanf_s("%d", &usernum);
		count_one_num(usernum);
	}
	getchar(); getchar();
	return 0;
}
