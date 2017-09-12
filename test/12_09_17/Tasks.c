#include<stdio.h>
#include<stdbool.h>
#include"module.h"
#include<time.h>

// task 1
void task1()
{

}


// task 2

void task2()
{
	
}

// task 3
void task3()
{

}

// Task 4

float addition(float a, float b)
{
	printf("%f + %f = %f\n", a, b, a + b);
	return a + b;
}

float subtraction(float a, float b)
{
	printf("%f - %f = %f\n", a, b, a - b);
	return a - b;
}

float multiplication(float a, float b)
{
	printf("%f * %f = %f\n", a, b, a * b);
	return a * b;
}

float division(float a, float b)
{
	if (b == 0)
	{
		printf("You can't divide by zero.");
		return 0;
	}
	else
	{
		printf("%f / %f = %f\n", a, b, a / b);
		return a / b;
	}
}

void task4()
{
	float a = 1.0;
	float b = 1.0;
	int operation = 0;
	float(*add)(float, float) = addition;
	float(*sub)(float, float) = subtraction;
	float(*mult)(float, float) = multiplication;
	float(*div)(float, float) = division;
	float(*mass[4])(float, float) = { add, sub, mult, div };
	while (true)
	{
		while (operation < 1 || operation > 4)
		{
			printf("Choose operation:\nAddition - 1\nSubtraction - 2\nMultiplication - 3\nDivision - 4\nPress zero to exit\n\nYou enter  ");
			scanf_s("%d", &operation);
			if (operation == 0)
			{
				break;
			}
			else if (operation < 1 || operation > 4)
			{
				printf("\nYou entered something wrong. Try again.\n\n");
			}
		}
		if (operation == 0)
		{
			break;
		}
		printf("\nEnter first number ");
		scanf_s("%f", &a);
		printf("Enter second number ");
		scanf_s("%f", &b);
		float result = mass[operation - 1](a, b);
		printf("\nresult = %f\n", result);
	}

}

/* Task 5



void task5()
{

}
*/