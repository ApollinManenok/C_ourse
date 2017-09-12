#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>

int func(int *arr[], int size)
{

}


int main()
{
	srand(time(NULL));
	int array[10];
	int size = 10;
	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % 10 + 1;
	}

	
	system("pause");
	return 0;
}