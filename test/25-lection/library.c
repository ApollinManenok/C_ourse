#include<stdio.h>
#include<stdbool.h>
#include"library.h"
#include<time.h>
#include<string.h>

// task 1

int mystrlen(const char* str)
{
	int len = 0;
	while (str[len] != 0)
	{
		len++;
	}
	return len;
}

void task1()
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
		int size2 = mystrlen(str);
		printf("\nMy size = %d\n", size2);
	}
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


void task4()
{
	

}

/* Task 5



void task5()
{

}
*/