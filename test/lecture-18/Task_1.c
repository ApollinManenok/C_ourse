#include<stdio.h>
#include<stdlib.h>
//vstavkoj minimal'nogo so sdvigom neotsortirovannoj chasti (zachem?)
int main1()
{
	int array[10] = { 4, 7, 2, 9, 3, 8, 5, 1, 6, 0 };
	int ind_sort = 0;
	int num = 0;
	for (int i = 0; i < 10; i++)
	{
		int min = ind_sort;
		for (int i2 = ind_sort; i2 < 10; i2++)
		{
			if (array[min] > array[i2])
			{
				min = i2;
			}
		}
		//printf("min = %d, sort = %d\n", min, ind_sort);
		num = array[min];
		if (min == ind_sort)
		{
			ind_sort++;
			for (int i1 = 0; i1 < 10; i1++)
			{
				printf("%d ", array[i1]);
			}
			printf("\n");
			continue;
		}
		for (int i3 = min; i3 >= ind_sort; i3--)
		{
			array[i3] = array[i3 - 1];
			if (i3 == ind_sort)
			{
				array[i3] = num;
				ind_sort++;
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