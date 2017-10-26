#include<stdio.h>
#include<stdbool.h>
#include"module.h"
#include<time.h>

// task 1

int check(int num)
{
	for (int i = 2; i < num; i++)
	{
		//printf("num = %d, i = %i, num / i = %d \n", num, i, num%i);
		if (num%i == 0)
		{
			return num;
		}
	}
	if (num == 2)
	{
		return num;
	}
	return 0;
}

int func(int arr[], int size)
{
	//printf("delete  ");
	for (int i = 0; i < size; i++)
	{
		arr[i] = check(arr[i]);
		//printf("%d ", arr[i]);
	}
	//printf("\n");
	int ind = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > 0)
		{
			arr[ind] = arr[i];
			ind++;
		}
	}
	size = ind;
	return size;
}

void task1()
{
	srand(time(NULL));
	int array[100];
	int *arr = array;
	int size = 1;
	printf("Enter size ");
	scanf_s("%d", &size);
	int range = 10;
	printf("Enter range ");
	scanf_s("%d", &range);
	printf("\nsozdanie  ");
	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % range + 1;
		printf("%d ", array[i]);
	}
	printf("\n");
	printf("\nresult  ");
	size = func(arr, size);
	for (int i = 0; i < size; i++)
	{
		printf("%d ", array[i]);
	}
	//printf("%d ", array[size]);
	printf("\nsize = %d\n\n", size);
}

// task 2

void ordering(int *a, int size)
{
	int save = 0;
	int ind = 0;
	for (int i = 0; i < size; i++)
	{
		if (*a < 0)
		{
			while (*(a - 1) >= 0)
			{
				save = *(a - 1);
				*(a - 1) = *a;
				*a = save;
				a--;
				ind++;
			}
		}
		else if (*a == 0)
		{
			while (*(a - 1) > 0)
			{
				save = *(a - 1);
				*(a - 1) = *a;
				*a = save;
				a--;
				ind++;
			}
		}
		a += ind + 1;
		ind = 0;
	}
}

void task2()
{
	srand(time(NULL));
	int array[100];
	int *arr = array;
	int size = 1;
	printf("Enter size ");
	scanf_s("%d", &size);
	int range = 10;
	printf("Enter range ");
	scanf_s("%d", &range);
	printf("\nCreate array  ");
	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % (range * 2) - range;
		printf("%d ", array[i]);
	}
	printf("\n");

	//rabota s massivom
	ordering(arr, size);
	printf("\nresult  ");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", array[i]);
	}
}

// task 3

bool equal(int *arr1, int *arr2, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (abs(arr1[i]) != abs(arr2[i]))
		{
			return false;
		}
	}
	return true;
}

void task3()
{
	srand(time(NULL));
	int array1[100];
	int array2[100];
	int *arr1 = array1;
	int *arr2 = array2;
	int size = 1;
	while (true)
	{
		printf("Enter size (0-exit) ");
		scanf_s("%d", &size);
		if (size == 0)
		{
			break;
		}
		else if (size < 1 || size > 100)
		{
			printf("Wrong size!\n\n");
		}
		int range = 10;
		printf("Enter range ");
		scanf_s("%d", &range);

		//sozdanie massivov
		printf("\nCreate array 1  ");
		for (int i = 0; i < size; i++)
		{
			array1[i] = rand() % (range * 2 + 1) - range;
			printf("%d ", array1[i]);
		}
		printf("\n");
		printf("\nCreate array 2  ");
		for (int i = 0; i < size; i++)
		{
			array2[i] = rand() % (range * 2) - range;
			printf("%d ", array2[i]);
		}
		printf("\n");

		//rabota s massivami
		if (equal(arr1, arr2, size))
		{
			printf("\nEqual\n\n");
		}
		else
		{
			printf("\nUnequal\n\n");
		}
	}
}

// Task 4


void task4()
{
	

}

// Task 5

void task5()
{

}

// Task 6

void task6()
{

}
