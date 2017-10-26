#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>
#include<malloc.h>
#include<stdarg.h>



int main()
{	
	char word[20];
	printf("Enter your word ");
	fgets(word, 20, stdin);
	if (word[strlen(word) - 1] == 10)
	{
		word[strlen(word) - 1] = '\0';
	}
	
	FILE *test = fopen("try_one.txt", "r");
	FILE *test = fopen("task_7.txt", "w");

	char buff[100];
	if (test != NULL)
	{
		printf("Open file\n");
		while (feof(test) == 0)
		{
			fgets(buff, 100, test);	
			for (int i = 0; i < strlen(buff) - 1; i++)
			{
				if (buff[i-1] == 10 && buff[i] == word[0])
				{

					for (int j = 1; j < strlen(word) - 1; j++)
					{

					}
					
				}
			}
		}
		fclose(test);
		printf("Close file\n\n");
	}
	else
	{
		printf("There is no such file! \n");
	}

	system("pause");
	return 0;
}


//fprintf(test, "Hello!\nHow are you?\narhefbgw\nergqerg\n         \n\n\n");
//_CRT_SECURE_NO_WARNINGS
