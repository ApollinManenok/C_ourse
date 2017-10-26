#include <stdio.h>

int main()
{
	int array[5];
	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		printf("Enter side length ");
		scanf_s("%d", &array[i]);
	}

	for (int i = 0; i < 5; i++)
	{
		sum += array[i];
	}
	printf("Sum = %d\n", sum);

	getchar; getchar;
	return 0;
}