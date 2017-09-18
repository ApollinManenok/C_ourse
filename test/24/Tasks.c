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

void task2()
{
	char str[50] = "";
	int *ind = str;
	//char a = {'ò'};
	while (true)
	{
		printf("Enter string\n");
		fgets(str, 49, stdin);
		int size = strlen(str);
		printf("%s", str);
		printf("\nsize = %d", size);
		int lit = 0;
		int num = 0;
		int other = 0;
		for (int i = 0; i < size - 1; i++)
		{
			printf("%d  ", str[i]);
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
}

// task 3
void task3()
{

}

// Task 4


void task4()
{
	

}

/* Task 5



void task5()
{

}
*/