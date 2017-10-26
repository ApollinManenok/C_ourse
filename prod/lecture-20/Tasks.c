#include<stdio.h>
#include<stdbool.h>
#include"module.h"
// task 1
void task1()
{
	int n = 0;
	int n1 = 0;
	int* a = &n;
	int* b = &n1;
	while (true)
	{
		printf("Make both numbers equal to zero to exit.\n");
		printf("Enter first num ");
		scanf_s("%d", a);
		printf("Enter second num ");
		scanf_s("%d", b);
		if (*a == 0 && *b == 0)
		{
			break;
		}
		else if (*a > *b)
		{
			printf("\n%d > %d\n", *a, *b);
		}
		else if (*a < *b)
		{
			printf("\n%d > %d\n", *b, *a);
		}
		else
		{
			printf("\n%d = %d\n", *a, *b);
		}
	}
}



// task 2

void num_sign(int* a)
{
	if (*a > 0)
	{
		printf("%d is positive\n", *a);
	}
	else if (*a < 0)
	{
		printf("%d is negative\n", *a);
	}
	else
	{
		printf("%d is neutral\n", *a);
	}
}

void task2()
{
	int n = 0;
	int* p = &n;
	while (true)
	{
		printf("Enter num ");
		scanf_s("%d", p);
		num_sign(p);
		if (*p == 0)
		{
			break;
		}
	}
}

// task 3
void change_place(int* a, int* b)
{
	int place = *a;
	*a = *b;
	*b = place;
}

void task3()
{
	int n = 0;
	int n1 = 0;
	int* p = &n;
	int* p1 = &n1;
	while (true)
	{
		printf("Make both numbers equal to zero to exit.\n");
		printf("Enter first num ");
		scanf_s("%d", p);
		printf("Enter second num ");
		scanf_s("%d", p1);
		if (*p == 0 && *p1 == 0)
		{
			break;
		}
		printf("*p = %d, *p1 = %d\n", *p, *p1);
		change_place(p, p1);
		printf("*p = %d, *p1 = %d\n", *p, *p1);
	}
}

// Task 4

void calculator(int* a, int* b, int* z)
{
	int result = 0;
	if (*z == 1)
	{
		printf("%d+%d=%d\n", *a, *b, *a + *b);
	}
	else if (*z == 2)
	{
		printf("%d-%d=%d\n", *a, *b, *a - *b);
	}
	else if (*z == 3)
	{
		printf("%d*%d=%d\n", *a, *b, *a * *b);
	}
	else if (*z == 4)
	{
		if (*b == 0)
		{
			printf("Can't divide by zero");
		}
		else
		{
			printf("%d/%d=%f\n", *a, *b, (*a * 1.0 / *b));
		}
	}
	else
	{
		printf("Something wrong, check your actions.\n");
	}
}

void task4()
{
	int n = 0; //chislo 1
	int n1 = 0; //chislo 2
	int z = 0; // operacija
	//naznachenie ukazatelej
	int* zn = &z;
	int* p = &n;
	int* p1 = &n1;
	while (true)
	{
		printf("Enter first num ");
		scanf_s("%d", p);
		printf("Enter second num ");
		scanf_s("%d", p1);
		printf("+ enter 1\n- enter 2\n* enter 3\n/ enter 4\nexit enter 0\n ");
		scanf_s("%d", zn);
		if (*zn == 0)
		{
			break;
		}
		calculator(p, p1, zn);
	}
}

// Task 5

void task5()
{
	srand(time(NULL));
	int array[100];
	int size = 10;
	while (size != 0)
	{
		printf("\nEnter array size (0-exit) ");
		scanf_s("%d", &size);
		if (size == 0)
		{
			break;
		}
		else if (size < 0)
		{
			printf("\n\nWrong enter!\n\n");
			continue;
		}
		else
		{
			printf("\n");
			for (int i = 0; i < size; i++)
			{
				array[i] = rand() % 10 + 1;
				printf("%d  ", array[i]);
			}
			printf("\n");
			int sum = 0;
			int *arr = array;
			for (int i = 0; i < size; i++)
			{
				sum += *arr;
				//printf("%d  ", *arr);
				arr += 1;
			}
			printf("\nSum = %d\n", sum);
		}
	}
}


// Task 6

void task6()
{
	srand(time(NULL));
	int array1[100];
	int size = 10;
	int array2[100];
	while (size != 0)
	{
		printf("\nEnter array size (0-exit) ");
		scanf_s("%d", &size);
		if (size == 0)
		{
			break;
		}
		else if (size < 0)
		{
			printf("\n\nWrong size!\n\n");
			continue;
		}
		else
		{
			printf("\n");
			for (int i = 0; i < size; i++)
			{
				array1[i] = rand() % 10 + 1;
				printf("%d  ", array1[i]);
			}
			printf("\n");
			int *arr1 = array1;
			int *arr2 = array2;
			for (int i = 0; i < size; i++)
			{
				*arr2 = *arr1;
				arr1 += 1;
				arr2 += 1;
				printf("%d  ", array2[i]);
			}
			printf("\n");
		}
	}
}
// Task 7

void task7()
{
	srand(time(NULL));
	int array[100];
	int size = 1;
	while (size != 0)
	{
		printf("\nEnter array size (0-exit) ");
		scanf_s("%d", &size);
		if (size == 0)
		{
			break;
		}
		else if (size < 0)
		{
			printf("\n\nWrong size!\n\n");
			continue;
		}
		else
		{
			printf("\n");
			for (int i = 0; i < size; i++)
			{
				array[i] = rand() % 10 + 1;
				printf("%d  ", array[i]);
			}
			printf("\n");
			int *arr1 = array;
			int *arr2 = array;
			arr2 += size - 1;
			for (int i = 0; i < size / 2; i++)
			{
				int num = *arr1;
				*arr1 = *arr2;
				*arr2 = num;
				arr1 += 1;
				arr2 -= 1;
			}
			printf("\n");
			for (int i = 0; i < size; i++)
			{
				printf("%d  ", array[i]);
			}
			printf("\n");
		}
	}
}
