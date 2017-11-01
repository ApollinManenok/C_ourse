#include<stdio.h>
#include<stdbool.h>
#include"module.h"
#include<time.h>
#include<string.h>
#include<malloc.h>
#include<stdarg.h>
#include<math.h>
#define MINUM(num1,num2) ((num1)<(num2))?(num1):(num2)
#define MAXUM(num1,num2) ((num1)>(num2))?(num1):(num2)
#define NUMKV(num) (num*num)
#define NUMST(num,step) (int)pow(num,step)
#define EVEN_ODD(num) (num%2==0)?("even"):("odd")
#define LUCKNUM(num) ((num % 10 + (num / 10) % 10 + (num / 100) % 10 + (num / 1000))%2==0)?("lucky"):("unlucky")

// task 1

void task1()
{
	while (true)
	{
		int num1 = 0;
		int num2 = 0;
		printf("Enter num1,num2 ");
		scanf_s("%d,%d", &num1, &num2);
		printf("Min: %d\n", MINUM(num1, num2));
		printf("Max: %d\n", MINUM(num1, num2));
		printf("Kv: %d\n", NUMKV(num1));
		printf("St: %d\n", NUMST(num1, num2));
		printf("%d is %s\n", num1, EVEN_ODD(num1));
		printf("%d is %s\n", num2, EVEN_ODD(num2));
		int num = 0;
		printf("Enter num ");
		scanf_s("%d", &num);
		printf("Number %d is %s\n", num, LUCKNUM(num));
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