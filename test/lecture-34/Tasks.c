#include<stdio.h>
#include<stdbool.h>
#include"module.h"
#include<time.h>
#include<string.h>

// task 1

int prime_n(int num, ...)
{
	va_list valist;
	int prime_num = 0;

	va_start(valist, num);
	for (int i = 0; i < num; i++)
	{
		int ch_num = va_arg(valist, int);
		printf("ind %d = %d\n", i, ch_num);

		for (int j = 2; j <= ch_num; j++)
		{
			if (ch_num % j == 0 && ch_num != j)
			{
				break;
			}
			else if (ch_num == j)
			{
				prime_num++;
			}
		}
	}
	va_end(valist);
	return prime_num;
}

void task1()
{
	printf("Prime numbers: %d\n", prime_n(10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 23));
}

// task 2

int* string_to_number(const char *str, int *nums_ptr)
{
	int len = strlen(str);
	int ind = 0;
	for (int i = 0; i < strlen(str); i++)
	{
		int num = 0;
		if (str[i] >= 48 && str[i] <= 57)
		{
			num += (str[i] - 48);
			nums_ptr[ind] = num;
			ind++;
		}
	}
	return nums_ptr;
}

void task2(int argc, char* argv[])
{
	const char* line = argv[1];
	int nums[10] = { 0 };
	int *nums_ptr = nums;
	string_to_number(line, nums_ptr);
	int even_num = 0;
	int odd_num = 0;
	for (int i = 0; i < min(strlen(line), 10); i++)
	{
		printf("%d ", nums[i]);
		if (nums[i] % 2 == 0)
		{
			even_num++;
		}
		else
		{
			odd_num++;
		}
	}
	printf("\nEven: %d\nOdd: %d\n", even_num, odd_num);
	if (even_num > odd_num)
	{
		printf("Even numbers more then Odd\n");
	}
	else if (odd_num > even_num)
	{
		printf("Odd numbers more then Even\n");
	}
	else
	{
		printf("Even and Odd numbers are equal\n");
	}
}

// task 3



void task3()
{
	
}

// Task 4

void task4()
{
	
}

//Task 5


void task5()
{

}


//Task 6


void task5()
{

}

//Task 7


void task5()
{

}

//Task 8


void task5()
{

}