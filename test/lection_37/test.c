#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>
#include<malloc.h>
#include<stdarg.h>

typedef struct 
{
	char login[20];
	char password[11];
} user_log_pass;


void read_file(int *user_amount, user_log_pass *data_log_pass)
{
	FILE *log = fopen("login_pass.txt", "r");
	if (log != NULL)
	{
		while (feof(log) == 0)
		{
			fread(user_amount,1,sizeof(int),log);
			data_log_pass = (user_log_pass*)malloc(sizeof(user_log_pass) * *user_amount);
			for (int i = 0; i < *user_amount; i++)
			{
				fread(&data_log_pass[i], 1, sizeof(user_log_pass), log);
			}
		}
		fclose(log);
		printf("Close file\n\n");
	}
	else
	{
		printf("There is no such file! \n");
	}
}




int main()
{	
	int *user_amount = NULL;
	user_log_pass *data_log_pass = NULL;
	read_file(user_amount, data_log_pass);
	printf("%s - %s\n", data_log_pass[0].login, data_log_pass[0].password);

	

	system("pause");
	return 0;
}


/*


printf("Enter login ");
	fgets(user.login, 20, stdin);
	if (user.login[strlen(user.login) - 1] == 10)
	{
		user.login[strlen(user.login) - 1] = '\0';
	}

	printf("Enter password ");
	fgets(user.password, 11, stdin);
	if (user.password[strlen(user.password) - 1] == 10)
	{
		user.password[strlen(user.password) - 1] = '\0';
	}
	//reg_user();
	if (check_user())
	{
		printf("\nRight password\nAccess granted\n");
	}
	else
	{
		printf("\nWrong password\nAccess denied\n");
	}
	user_log_pass ch_user;

	printf("Enter login ");
	fgets(ch_user.login, 20, stdin);
	if (ch_user.login[strlen(ch_user.login) - 1] == 10)
	{
		ch_user.login[strlen(ch_user.login) - 1] = '\0';
	}

	user_log_pass user;
	FILE *log = fopen("login_pass.txt", "r");

	if (log != NULL)
	{
		printf("Open file\n\n");
		while (feof(log) == 0)
		{
			fread(&user, 1, sizeof(user), log);
			printf("%s - %s\n", ch_user.login, user.login);
			if (strcmp(user.login, ch_user.login))
			{
				printf("Existing user\n");
				fclose(log);
				printf("Close file\n\n");
				printf("Enter password ");
				fgets(ch_user.password, 11, stdin);
				if (ch_user.password[strlen(ch_user.password) - 1] == 10)
				{
					ch_user.password[strlen(ch_user.password) - 1] = '\0';
				}

				if (strcmp(user.password, ch_user.password))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else
			{
				printf("Nope\n");
			}
		}
		printf("There is no such user.\nAccess denied\n");
		fclose(log);
		printf("Close file\n\n");
	}
	else
	{
		printf("There is no such file! \n");
	}


*/