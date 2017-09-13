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
			return 0;
		}
	}
	if (num == 2)
	{
		return 0;
	}
	return num;
}

int func(int arr[], int size)
{
	//printf("delete  ");
	for (int i = 0; i < size; i++)
	{
		arr[i] = check(arr[i]);
		//	printf("%d ", arr[i]);
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