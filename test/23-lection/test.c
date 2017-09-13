#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>

void ordering(int arr[], int size)
{
	int z = 0;
	int save = 0;
	int *a = arr;
	for (int i = 0; i < size; i++)
	{
		int ind = 0;
		printf("%d  \n", i);
		for (int i1 = 0; i1 < size; i1++)
		{
			printf("%d ", arr[i1]);
		}
		printf("\nnew\n\n");
		//printf("%d  \n", a[ind_min]);
		if (*a <= 0)
		{
			//printf("%d  ", *a);
			if (*a < 0)
			{
				while (*(a - 1) >= 0)
				{
					save = *(a - 1);
					*(a - 1) = *a;
					*a = save;
					a--;
					ind++;
					for (int i1 = 0; i1 < size; i1++)
					{
						printf("%d ", arr[i1]);
					}
					printf("\n");
					printf("\n");
				}
			}
			else 
			{
				while (*(a - 1) > 0)
				{
					save = *(a - 1);
					*(a - 1) = *a;
					*a = save;
					a--;
					ind++;
					for (int i1 = 0; i1 < size; i1++)
					{
						printf("%d ", arr[i1]);
					}
					printf("\n");
					printf("\n");
				}
			}
			a += ind;
		}
		a++;
		printf("\n");
		printf("\n");
	}
}

int main()
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
		array[i] = rand() % (range*2) - range;
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
		
	system("pause");
	return 0;
}