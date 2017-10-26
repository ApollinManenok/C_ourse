#include<stdio.h>

int main()
{
	long array[12];
	long sum = 0;
	double medium = 1.0;

	for (int i = 0; i < 12; i++)
	{
		printf("Enter profit for month ");
		scanf_s("%li", &array[i]);
	}
	for (int i = 0; i < 12; i++)
	{
		sum += array[i];
	}
	printf("Total for year= %d      ", sum);
	medium = sum/12.0;
	printf("Medium = %.2f\n", medium);
	return 0;
}