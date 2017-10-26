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
	FILE *test = fopen("try_one.txt", "r");
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
	FILE *test = fopen("task2.txt", "r");
	FILE *result = fopen("task2_res.txt", "w");
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
	FILE *test = fopen("task3.txt", "w");

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

// Task 4,5,6

void task4()
{
	FILE *test = fopen("try_one.txt", "r");
	char buff[10];
	int symb = 0;
	int line = 0;
	char max_line[100] = { 0 };
	char check_buff[100] = { 0 };
	int maxlen = 0;
	int indline = 0;
	if (test != NULL)
	{
		printf("Open file\n\n");
		while (feof(test) == 0)
		{
			fgets(buff, 10, test); //vz'atie stroki
			strcat(check_buff, buff); // kopirovanie v bufer
			symb += strlen(buff); //podschet kol-va simvolov
			if (buff[strlen(buff) - 1] == 10)
			{
				symb--; // minus simvol perenosa stroki
				line++; // podschet stroki
				if (strlen(check_buff) > maxlen)
				{
					max_line[0] = 0; // obnulenie pervogo simvola dl'a perezapisi stroki
					strncat(max_line, check_buff, 100); // 'kopirovanie' iz testovogo bufera v maximal'nyj
					maxlen = strlen(check_buff) - 1;
					indline = line;
				}
				check_buff[0] = 0; // obnulenie proverochnogo bufera i dlinny stroki
	
			}
		}
		printf("Symbols amount: %d\nLines amount: %d\n", symb, line);
		printf("Maximum length: %d, Line number: %d\n\nPrint line:\n%s\n", maxlen, indline, max_line);
		fclose(test);
		printf("Close file\n\n");
	}
	else
	{
		printf("There is no such file! \n");
	}
}

//Task 5


void task5()
{

}


//Task 6


void task6()
{

}

//Task 7


void task7()
{

}

//Task 8


void task8()
{

}