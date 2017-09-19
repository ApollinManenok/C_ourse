#include<stdio.h>
#include<stdbool.h>
#include"module.h"
#include<time.h>
#include<string.h>

// task 1

int string_to_number(const char *str)
{
	int len = strlen(str);
	int num = 0;
	int mult = 1;
	for (int i = len - 1; i >= 0; i--) // poisk i pribavlenie
	{
		printf("%c", str[i]);
		if (str[i] >= 48 && str[i] <= 57)
		{
			num += (str[i] - 48) * mult;
			mult *= 10;
			printf("%d \n", num);
		}
	}
	return num;
}

void task1()
{
	char str[50] = "";
	while (true)
	{
		printf("Enter string\n");
		fgets(str, 49, stdin);
		int num = string_to_number(str);
		printf("\n\nnum = %d\n", num);
	}
	system("pause");
	return 0;
}

// task 2

int number_to_string(char *str, int num)
{
	int numm = num;
	int mult = 1;
	while (numm / 10 > 0)
	{
		numm = numm / 10;
		mult *= 10;
	}
	int len = 0;
	while (mult>0)
	{
		str[len] = num / mult + 48;
		num = num%mult;
		mult /= 10;
		len++;
	}
	str[len] = 0;
	return 0;
}

void task2()
{
	char str[50] = "";
	char *st = str;
	while (true)
	{
		int num = 0;
		printf("Enter your num (0-exit) ");
		scanf_s("%d", &num);
		if (num == 0)
		{
			break;
		}
		number_to_string(st, num);
		printf("\n");
		printf(str);
	}
}

// task 3

void upper_case(char *str)
{
	int len = strlen(str);
	for (int i = 0; i < len; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
	}
}

void task3()
{
	char str[50] = "";
	char *st = str;
	while (true)
	{
		printf("Enter string\n");
		fgets(str, 49, stdin);
		upper_case(st);
		printf("\n");
		printf(str);
	}
}

// Task 4
void lower_case(char *str)
{
	int len = strlen(str);
	for (int i = 0; i < len; i++)
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
	}
}

void task4()
{
	char str[50] = "";
	char *st = str;
	while (true)
	{
		printf("Enter string\n");
		fgets(str, 49, stdin);
		upper_case(st);
		printf("\n");
		printf(str);
	}
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