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
	int n = 0;
	int n1 = 0;
	int z = 0;
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

/* Task 5



void task5()
{

}
*/