#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>
#include<malloc.h>

int *mass_create(int size)
{
	int *ptr_na_mass = (int*)malloc(size * sizeof(int));
	for (int i = 0; i < size; i++)
	{
		ptr_na_mass[i] = (rand() % 10*2) - 10;
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
	ptr = (int*)realloc(ptr, (*size+1)*sizeof(int));
	ptr[*size] = rand() % 10 + 1;
	*size += 1;
	return ptr;
}

int *add_elem_ind(int *ptr, int *size, int ind)
{
	ptr = (int*)realloc(ptr, (*size + 1) * sizeof(int));
	
	for (int i = *size; i > ind; i--)
	{
		ptr[i] = ptr[i-1];
	}
	ptr[ind] = rand() % 10 + 1;
	*size += 1;
	return ptr;
}

int *del_elem_ind(int *ptr, int *size, int ind)
{
	for (int i = ind; i < *size-1; i++)
	{
		ptr[i] = ptr[i + 1];
	}
	ptr = (int*)realloc(ptr, (*size - 1) * sizeof(int));
	*size -= 1;
	return ptr;
}

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

void count_nums(int *ptr, int size, int *min, int *max, int *zero)
{
	for (int i = 0; i < size; i++)
	{
		if (ptr[i] > 0)
		{
			*max +=1;
		}
		else if (ptr[i] < 0)
		{
			*min += 1;
		}
		else
		{
			*zero += 1;
		}
	}
}


int main()
{	
	srand(time(NULL));
	
	int size = 0; // razmer massiva
	int *ptr_size = &size; // ykazatel' na razmer massiva
	printf("Enter size of mass ");
	scanf_s("%d", &size); // vvod znachenija i prisvaivanie razmeru massiva
	
	int *ptr = mass_create(size); // sozdanie massiva
	print_din_mass(ptr, size); // vyvod massiva
	
	int min = 0;
	int max = 0;
	int zero = 0;
	int *ptr_min = &min;
	int *ptr_max = &max;
	int *ptr_zero = &zero;

	count_nums(ptr, size, ptr_min, ptr_max, ptr_zero);
	printf("min = %d, max = %d, zero = %d\n", min, max, zero);

	//ptr = simple_num_in_mass(ptr, ptr_size); // peresozdanie massiva s prostymi chislami
	//print_din_mass(ptr, size); //vyvod
	
	free(ptr); // vysvobozhdenie pam'ati

	system("pause");
	return 0;
}


