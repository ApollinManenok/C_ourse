#include <stdio.h>
#include "module-4.h"

int main()
{
	int choice = 1;
	while (choice != 0)
	{
		printf("\n\nPress 1 to check your number\nOR 2 to see all suitable numbers (from your range)\n");
		printf("OR 3 to count total amount of suitable numbers(from 1 to 1000000)\nOR 0 to end program ");
		scanf_s("%d", &choice);
		choice_funct(choice);
	}
	getchar(); getchar();
	return 0;
}