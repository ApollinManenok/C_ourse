#include<stdio.h>

int main()
{
	long array[12];
	int max_month = 0;
	int min_month = 0;

	for (int i = 0; i < 12; i++)
	{
		printf("Enter profit for month ");
		scanf_s("%li", &array[i]);
	}
	for (int i = 0; i < 12; i++)
	{
		if (array[min_month] > array[i])
		{
			min_month = i;
		}		
		if (array[max_month] < array[i])
		{
			max_month = i;
		}		
	}
	printf("\nMonth with highest profit = %d Profit amount = %li\n", max_month+1, array[max_month]);
	printf("Month with lowest profit = %d Profit amount = %li\n", min_month+1, array[min_month]);
	return 0;
}

/*
printf("Month = %d ", month+1);
printf("array month = %li ", array[month]);
printf("array i  = %li ", array[i]);
printf("month = %d \n", month+1);
*/

