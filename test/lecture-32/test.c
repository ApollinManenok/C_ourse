#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>
#include<malloc.h>

void **print_matrix_str(char **matrix, int line)
{
	for (int i = 0; i < line; i++)
	{
		printf(matrix[i]);
		printf("\n");
	}
	
}

int main()
{	
	srand(time(NULL));
	
	int col = 50; // kollichestvo stolbcov massiva |
	int line = 5; // kol-vo strok massiva --
	int *ptr_line = &line; // ykazatel' na kol-vo strok massiva
	
	char **matrix = (char**)malloc(line*sizeof(char*)); // vydelenie pam'ati dl'a kol-va linij
	for (int i = 0; i < line; i++)
	{
		matrix[i] = (char*)malloc(col * sizeof(char)); // vydelenie pam'ati dl'a znachenij linij
	}
	for (int i = 0; i < line; i++)  // Naznachenie znachenij
	{
		char str[50] = {0};
		printf("Enter surname %d ", i+1);
		fgets(str, 50, stdin);
		if (str[strlen(str) - 1] == 10)
		{
			str[strlen(str) - 1] = '\0';
		}
		for (int j = 0; j <= strlen(str); j++)
		{
			matrix[i][j] = str[j];
		}		
		printf("%s", matrix[i]);
		printf("\n");
	}


	
	print_matrix_str(matrix, line); // pechat' znachenij

	for (int i = 0; i < line; i++)
	{
		free(matrix[i]); // vysvobozhdenie pam'ati linij
	}
	free(matrix); // vysvobozhdenie pam'ati

	system("pause");
	return 0;
}


