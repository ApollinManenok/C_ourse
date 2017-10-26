#include<stdio.h>
#include<stdlib.h>

//pervoe neotsortirovannoe na svoe mesto v otsortirovannoj chasti
int main4()
{
	int array[10] = { 4, 7, 2, 9, 3, 8, 0, 1, 6, 5 };

	for (int i = 1; i < 10; i++)
	{
		int ind_sort = i;
		for (int i1 = i-1; i1>=0; i1--)
		{
			if (array[ind_sort] > array[i1])
			{
				continue;
			}
			else if (array[ind_sort] < array[i1])
			{
				int num = array[ind_sort];
				array[ind_sort] = array[i1];
				array[i1] = num;
				ind_sort--;
			}
		}
		for (int i1 = 0; i1 < 10; i1++)
		{
		printf("%d ", array[i1]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
