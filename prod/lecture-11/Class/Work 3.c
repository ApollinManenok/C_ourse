#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	srand(time(NULL));
	int x;
	x = rand() % 500 + 1;
	int num;
	int a = 1;
	while (a == 1) 
	{
		printf("Try to guess num ");
		scanf_s("%d", &num);
		if (num == 0)
		{
			break;
		}
		else if (num > x) 
		{
			printf("\nYour num is bigger \n\n");
		}
		else if (num < x) 
		{
			printf("\nYour num is less \n\n");
		}
		else
		{
			printf("\nCongratulations! \n\n");
			break;
		}
	}
	
	getchar(); getchar();
	return 0;
}