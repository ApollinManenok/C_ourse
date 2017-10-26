#include<stdio.h>
#include<stdbool.h>
#include"module.h"
#include<time.h>
#include<string.h>

// task 1

void task1()
{
	printf("Enter string\n");
	char str[20] = "";
	fgets(str, 20, stdin);
	printf(str);
	while (strchr(str, ' ') != 0)
	{
		*strchr(str, ' ') = '\t';
	}
	printf(str);
}

// task 2

char myfgets(char str[], int len)
{
	fgets(str, len, stdin);
	str[strlen(str) - 1] = 0;
	return str;
}

void task2()
{
	char str[50] = "";

	printf("\nEnter string\n");
	myfgets(str, 50);
	int size = strlen(str);
	int lit = 0;
	int num = 0;
	int other = 0;
	for (int i = 0; i < size; i++)
	{
		if (str[i] >= 48 && str[i] <= 57)
		{
			num++;
		}
		else if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122) || (str[i] >= -128 && str[i] <= -81) || (str[i] >= -32 && str[i] <= -16))
		{
			lit++;
		}
		else
		{
			other++;
		}
	}
	printf("\n\nlit = %d\nnums = %d\nother = %d\n", lit, num, other);
}

// task 3
void task3()
{
	char str[100] = "";
	printf("\nEnter string\n");
	myfgets(str, 100);
	int size = strlen(str);
	int words = 1;
	for (int i = 0; i < size; i++)
	{
		if (str[i] == 32)
		{
			words++;
		}
	}
	printf("\n\nwords = %d\n", words);
}

// Task 4


void task4()
{
	char str[100] = "";
	while (true)
	{
		printf("\nEnter string\n");
		myfgets(str, 100);
		if (str[0] == 0)
		{
			break;
		}
		int size = strlen(str);
		bool answer = true;
		int i1 = size - 1;
		for (int i = 0; i < size; i++)
		{
			if (str[i] != str[i1])
			{
				answer = false;
				break;
			}
			i1--;
		}
		if (answer)
		{
			printf("\n%s - is polindrom\n", str);
		}
		else
		{
			printf("\n%s - isn't polindrom\n", str);
		}
	}
}

// Task 5



void task5()
{
	char str[100] = "";
	while (true)
	{
		printf("\nEnter string:\n");
		myfgets(str, 100);
		if (strlen(str) == 1)
		{
			break;
		}
		int size = strlen(str);
		printf("\nEnter index of symbol ");
		int ind = 0;
		scanf_s("%d", &ind);
		getchar();
		for (int i = ind; i < size; i++)
		{
			str[i] = str[i + 1];
		}
		printf("%s\n", str);
	}
}


// task6

void task6()
{

}

// task7

void task7()
{

}

// task8

void task8()
{

}


// task9

void task9()
{

}