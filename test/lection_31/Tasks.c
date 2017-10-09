#include<stdio.h>
#include<stdbool.h>
#include"module.h"
#include<time.h>
#include<string.h>

// task 1

void **print_matrix(int **matrix, int col, int line) // pechat' matricy
{
	for (int i = 0; i < line; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf("%d  ", matrix[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void **add_line(int **matrix, int col, int line) //  rasshirenie matricy
{
	matrix = (int**)realloc(matrix, line * sizeof(int*)); // dobavlenie linii
	matrix[line - 1] = (int*)malloc(col * sizeof(int)); // vydelenie pam'ati dl'a znachenij linii
	return matrix;
}

void **rem_line_ind(int **matrix, int col, int *line) // udalenie stroki po indexu
{
	int ind = 0;
	printf("\nRemove one line by ind ");
	scanf_s("%d", &ind);
	printf("\n\n");
	*line -= 1;
	for (int i = ind; i < *line; i++)  // perenos znachenij
	{
		for (int j = 0; j < col; j++)
		{
			matrix[i][j] = matrix[i + 1][j];
		}
	}
	matrix = (int**)realloc(matrix, *line * sizeof(int*)); // dobavlenie linii
	return matrix;
}

void **add_line_ind(int **matrix, int col, int *line) // dobavlenie stroki po indexu
{
	int ind = 0;
	printf("\nAdd one line by ind ");
	scanf_s("%d", &ind);
	printf("\n\n");

	*line += 1;
	matrix = add_line(matrix, col, *line); // funkcija rasshirenija

	for (int i = *line - 1; i > ind; i--)  // perenos znachenij na stroku vniz
	{
		for (int j = 0; j < col; j++)
		{
			matrix[i][j] = matrix[i - 1][j];
		}
	}

	for (int j = 0; j < col; j++) // perenaznachenie pervoj stroki
	{
		matrix[ind][j] = rand() % 10 + 1;
	}
	return matrix;
}

void **add_line_end(int **matrix, int col, int *line) // dobavlenie v konec
{
	printf("\nAdd one line in the end\n\n");
	*line += 1;
	matrix = add_line(matrix, col, *line);  // funkcija rasshirenija
	for (int j = 0; j < col; j++)
	{
		matrix[*line - 1][j] = rand() % 10 + 1; // vvod znachenij
	}
	return matrix;
}

void **add_line_begin(int **matrix, int col, int *line)
{
	printf("\nAdd one line in beginning\n\n");
	*line += 1;
	matrix = add_line(matrix, col, *line);  // funkcija rasshirenija

	for (int i = *line - 1; i > 0; i--)  // perenos znachenij na stroku vniz
	{
		for (int j = 0; j < col; j++)
		{
			matrix[i][j] = matrix[i - 1][j];
		}
	}

	for (int j = 0; j < col; j++) // perenaznachenie pervoj stroki
	{
		matrix[0][j] = rand() % 10 + 1;
	}
	return matrix;
}


void task1()
{
	srand(time(NULL));

	int col = 0; // kollichestvo stolbcov massiva |
	int line = 0; // kol-vo strok massiva --

	int *ptr_line = &line; // ykazatel' na kol-vo strok massiva
	printf("Enter size of matrix (column,line) ");
	scanf_s("%d,%d", &col, &line); // vvod znachenija i prisvaivanie parametram massiva
	printf("\n");

	int **matrix = (int**)malloc(line * sizeof(int*)); // vydelenie pam'ati dl'a kol-va linij
	for (int i = 0; i < line; i++)
	{
		matrix[i] = (int*)malloc(col * sizeof(int)); // vydelenie pam'ati dl'a znachenij linij
	}
	for (int i = 0; i < line; i++)  // Naznachenie znachenij
	{
		for (int j = 0; j < col; j++)
		{
			matrix[i][j] = rand() % 10 + 1;  // prisvaivanie znachenij
			printf("%d  ", matrix[i][j]);
		}
		printf("\n");
	}

	matrix = add_line_end(matrix, col, ptr_line); // dobavlenie stroki v konec
	print_matrix(matrix, col, line); // pechat'

	matrix = add_line_begin(matrix, col, ptr_line); // dobavlenie stroki v nachalo
	print_matrix(matrix, col, line); 

	matrix = add_line_ind(matrix, col, ptr_line);   // dobavlenie stroki po indexu
	print_matrix(matrix, col, line); 

	matrix = rem_line_ind(matrix, col, ptr_line);	// udalenie stroki po indexu
	print_matrix(matrix, col, line); 

	for (int i = 0; i < line; i++)
	{
		free(matrix[i]); // vysvobozhdenie pam'ati linij
	}
	free(matrix); // vysvobozhdenie pam'ati
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