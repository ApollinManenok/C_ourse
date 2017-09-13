#include<stdio.h>

int sum(int num)
{
	int sum = 0;
	while (num > 0)
	{
		sum += num%10;
		num /= 10;
	}
	return sum;
}


int main()
{
	
	int array[100] = { 12, 63, 42, 54, 8, 5, 81 };
	int luck = 9;
	int amount_of_luck_num = 0;

	for (int i = 0; i < 100; i++)
	{
		if (sum(array[i]) == 9)
		{
			printf("Lucky number: %d\n", array[i]);
			amount_of_luck_num++;
		}
	}
	
	printf("Total amount of lucky numbers: %d\n", amount_of_luck_num);
	return 0;
}