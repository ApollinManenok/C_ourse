#include<stdio.h>
#include<stdbool.h>
#include"module.h"
#include<time.h>
#include<string.h>
#include<malloc.h>
#include<stdarg.h>

// task 1

void task1()
{
	char symbol[2];
	printf("Enter your symbol ");
	fgets(symbol, 2, stdin);
	if (symbol[strlen(symbol) - 1] == 10)
	{
		symbol[strlen(symbol) - 1] = '\0';
	}
	int count = 0;
	FILE *test = fopen("E:\\Manenok\\C\\lection_35\\lection_35\\try_one.txt", "r");
	char buff[100];
	if (test != NULL)
	{
		printf("Open file\n");
		while (feof(test) == 0)
		{
			fgets(buff, 100, test);
			//printf("\n%d, %s\n", strlen(buff), buff);
			for (int i = 0; i < strlen(buff) - 1; i++)
			{
				if (i == 0)
				{
					if (buff[i] == symbol[0])
					{
						//printf("%c %c %c\n", buff[i], buff[i+1], buff[i+2]);
						count++;
					}
				}
				else
				{
					if (buff[i - 1] == 32 && buff[i] == symbol[0])
					{
						//printf("%c %c %c\n", buff[i-1], buff[i], buff[i + 1]);
						count++;
					}
				}
			}
		}
		fclose(test);
		printf("Close file\n\nWords amount = %d\n", count);
	}
	else
	{
		printf("There is no such file! \n");
	}
}

// task 2


void task2()
{
	FILE *test = fopen("E:\\Manenok\\C\\lection_35\\lection_35\\task2.txt", "r");
	FILE *result = fopen("E:\\Manenok\\C\\lection_35\\lection_35\\task2_res.txt", "w");
	char buff[100];
	if (test != NULL)
	{
		printf("Open file\n");
		while (feof(test) == 0)
		{
			fgets(buff, 100, test);
			printf("\n%d, %s\n", strlen(buff), buff);
			int i = 0;
			while (buff[i] != 0)//for (int i = 0; i < strlen(buff) - 1; i++)
			{
				if (buff[i] == 48)
				{
					buff[i] = 49;
				}
				else if (buff[i] == 49)
				{
					buff[i] = 48;
				}
				else
				{
					printf("%c", buff[i]);
				}
				i++;
			}
			fprintf(result, buff);
		}
		fclose(test);
		fclose(result);
		printf("Close file\n\n");
	}
	else
	{
		printf("There is no such file! \n");
	}
}

// task 3



void task3()
{
	FILE *test = fopen("E:\\Manenok\\C\\lection_35\\lection_35\\task3.txt", "w");

	char str0[50] = { 0 };
	char str1[50] = { 0 };
	char str2[50] = { 0 };
	char str3[50] = { 0 };
	char str4[50] = { 0 };
	char *mass[5] = { str0, str1, str2, str3, str4 };
	if (test != NULL)
	{
		printf("Open file\n\n");
		for (int i = 0; i < 5; i++)
		{
			printf("Enter text ");
			fgets(mass[i], 50, stdin);
			if (mass[i][strlen(mass[i]) - 1] == 10)
			{
				mass[i][strlen(mass[i]) - 1] = '\0';
			}
			fprintf(test, mass[i]);
			fprintf(test, "\n");
		}
		fclose(test);
		printf("Close file\n\n");
	}
	else
	{
		printf("There is no such file! \n");
	}
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