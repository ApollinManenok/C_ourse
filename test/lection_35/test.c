#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>
#include<malloc.h>
#include<stdarg.h>



int main()
{	
	FILE *test = fopen("E:\\Manenok\\C\\lection_35\\lection_35\\try_one.txt", "r");
	char buff[10];
	int symb = 0;
	int line = 0;
	char max_line[100] = { 0 };
	char check_buff[100] = { 0 };
	int maxlen = 0;
	int checklen = 0;
	int indline = 0;
	if (test != NULL)
	{
		printf("Open file\n\n");
		while (feof(test) == 0)
		{
			fgets(buff, 10, test);
			strcat(check_buff, buff);
			symb += strlen(buff) - 1;
			checklen += strlen(buff) - 1;
			if(buff[strlen(buff) - 1] == 10)
			{
				if (checklen > maxlen)
				{
					max_line[0] = 0;
					strncat(max_line,check_buff, 100);
					maxlen = checklen;
					indline = line+1;
				}
				check_buff[0] = 0;
				checklen = 0;
				line++;
			}			
		}
		printf("Symbols amount: %d\nLines amount: %d\n", symb, line);
		printf("Max len = %d(%d), ind = %d, line = %s", maxlen, strlen(max_line)-1, indline, max_line);
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