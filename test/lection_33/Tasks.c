#include<stdio.h>
#include<stdbool.h>
#include"module.h"
#include<time.h>
#include<string.h>

// task 1

char* convert_in(const char* str_in)
{
	int len = strlen(str_in) + 1;
	char vowel[10] = { 'а','е','Є','и','о','у','ы','э', 'ю', '€' };
	int count_vowel = 0;
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (str_in[i] == vowel[j])
			{
				count_vowel++;
			}
		}
	}
	char* text = (char*)malloc((len + count_vowel * 2) * sizeof(char));
	int ind = 0;
	for (int i = 0; i < len; i++)
	{
		int count_oper = 0;
		for (int j = 0; j < 10; j++)
		{
			if (str_in[i] == vowel[j])
			{
				text[ind] = str_in[i];
				text[ind + 1] = 'c';
				text[ind + 2] = str_in[i];
				ind += 3;
				count_oper++;
				break;
			}
		}
		if (count_oper == 0)
		{
			text[ind] = str_in[i];
			ind++;
		}
	}
	//printf(text);
	return text;
}


void task1()
{
	const char str[50] = "ƒлинношеее";

	char* text = convert_in(str);
	printf(text);
	printf("\n");

	free(text); // vysvobozhdenie pam'ati
}

// task 2

int salt_proc(char* str_in)
{
	int proc = 0;
	char vowel[10] = { 'а','е','Є','и','о','у','ы','э', 'ю', '€' };
	int len = strlen(str_in) + 1;
	int count_salt = 0;
	int count_vowel = 0;
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (str_in[i] == vowel[j])
			{
				if (str_in[i + 1] == 'с' && str_in[i + 2] == vowel[j])
				{
					i += 2;
					count_salt++;
				}
				count_vowel++;
			}
		}
	}
	proc = count_salt / (count_vowel*0.01);
	return proc;
}

void task2()
{
	char str[100] = { 0 };

	printf("Enter text ");
	fgets(str, 100, stdin);
	if (str[strlen(str) - 1] == 10)
	{
		str[strlen(str) - 1] = '\0';
	}

	int proc = salt_proc(str);
	printf("Procent of saltiness %d\%\n", proc);
}

// task 3

char* convert_back(char* str_in)
{
	char vowel[10] = { 'а','е','Є','и','о','у','ы','э', 'ю', '€' };
	int len = strlen(str_in) + 1;
	int count_salt = 0;
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (str_in[i] == vowel[j])
			{
				if (str_in[i + 1] == 'с' && str_in[i + 2] == vowel[j])
				{
					i += 2;
					count_salt++;
				}
			}
		}
	}
	char* text = (char*)malloc((len - count_salt * 2) * sizeof(char));
	int ind = 0;
	for (int i = 0; i < len; i++)
	{
		int count_oper = 0;
		for (int j = 0; j < 10; j++)
		{
			if (str_in[i] == vowel[j])
			{
				if (str_in[i + 1] == 'с' && str_in[i + 2] == vowel[j])
				{
					i += 2;
					text[ind] = str_in[i];
					ind++;
					count_oper++;
					break;
				}
			}
		}
		if (count_oper == 0)
		{
			text[ind] = str_in[i];
			ind++;
		}
	}
	return text;
}

void task3()
{
	char str[100] = { 0 };

	printf("Enter text ");
	fgets(str, 100, stdin);
	if (str[strlen(str) - 1] == 10)
	{
		str[strlen(str) - 1] = '\0';
	}

	char* text = convert_back(str);
	printf("%s\n", text);

	free(text); // vysvobozhdenie pam'ati
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