#include<stdio.h>
#include<stdbool.h>
#include"module.h"
#include<time.h>
#include<string.h>

// task 1

int *mass_create(int size)
{
	int *ptr_na_mass = (int*)malloc(size * sizeof(int));
	for (int i = 0; i < size; i++)
	{
		ptr_na_mass[i] = rand() % 10 + 1;
	}
	return ptr_na_mass;
}

void print_din_mass(int *ptr, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d  ", ptr[i]);
	}
	printf("\n");
}

void del_din_mass(int *ptr, int size)
{
	for (int i = 0; i < size; i++)
	{
		ptr[i] = NULL;
	}
	free(ptr);
}

int *add_elem(int *ptr, int *size)
{
	ptr = (int*)realloc(ptr, (*size + 1) * sizeof(int));
	ptr[*size] = rand() % 10 + 1;
	*size += 1;
	return ptr;
}

int *add_elem_ind(int *ptr, int *size, int ind)
{
	ptr = (int*)realloc(ptr, (*size + 1) * sizeof(int));

	for (int i = *size; i > ind; i--)
	{
		ptr[i] = ptr[i - 1];
	}
	ptr[ind] = rand() % 10 + 1;
	*size += 1;
	return ptr;
}

int *del_elem_ind(int *ptr, int *size, int ind)
{
	for (int i = ind; i < *size - 1; i++)
	{
		ptr[i] = ptr[i + 1];
	}
	ptr = (int*)realloc(ptr, (*size - 1) * sizeof(int));
	*size -= 1;
	return ptr;
}


void task1()
{
	srand(time(NULL));

	int size = 0; // razmer massiva
	int *ptr_size = &size; // ykazatel' na razmer massiva
	printf("Enter size of mass ");
	scanf_s("%d", &size); // vvod znachenija i prisvaivanie razmeru massiva

	int *ptr = mass_create(size); // sozdanie massiva
	print_din_mass(ptr, size); // vyvod massiva
							   //del_din_mass(ptr, size); // udalenie massiva?

	ptr = add_elem(ptr, ptr_size); // dobavlenie elementa v konce massiva
	print_din_mass(ptr, size); //vyvod

	int ind = 0; // index dl'a raboty s konkretnym elementom

	printf("Enter element's index adding in mass ");
	scanf_s("%d", &ind);
	ptr = add_elem_ind(ptr, ptr_size, ind); // dobavlenie elementa po ukazannomu indexu
	print_din_mass(ptr, size);

	printf("Enter element's index deleting in mass ");
	scanf_s("%d", &ind);
	ptr = del_elem_ind(ptr, ptr_size, ind);  // udalenie elementa po ukazannomu indexu
	print_din_mass(ptr, size);

	free(ptr); // vysvobozhdenie pam'ati
}

// task 2

int *simple_num_in_mass(int *ptr, int *size)
{
	int count = 0;
	for (int i = 0; i < *size; i++)
	{
		for (int i1 = 2; i1 <= ptr[i]; i1++)
		{
			if (i1 == ptr[i])
			{
				count++;
			}
			else if (ptr[i] % i1 == 0)
			{
				break;
			}
		}
	}
	int *ptr_na_mass = (int*)malloc(count * sizeof(int));
	int ind = 0;
	for (int i = 0; i < *size; i++)
	{
		for (int i1 = 2; i1 <= ptr[i]; i1++)
		{
			if (i1 == ptr[i])
			{
				ptr_na_mass[ind] = ptr[i];
				ind++;
			}
			else if (ptr[i] % i1 == 0)
			{
				break;
			}
		}
	}
	*size = count;
	return ptr_na_mass;
}

void task2()
{
	srand(time(NULL));

	int size = 0; // razmer massiva
	int *ptr_size = &size; // ykazatel' na razmer massiva
	printf("Enter size of mass ");
	scanf_s("%d", &size); // vvod znachenija i prisvaivanie razmeru massiva

	int *ptr = mass_create(size); // sozdanie massiva
	print_din_mass(ptr, size); // vyvod massiva

	ptr = simple_num_in_mass(ptr, ptr_size); // peresozdanie massiva s prostymi chislami
	print_din_mass(ptr, size); //vyvod

	free(ptr); // vysvobozhdenie pam'ati
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