#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int qsort_my()
{}

int main()
{
	int array[10] = { 4, 7, 2, 9, 3, 8, 0, 1, 6, 5 };
	int sum = 0;
	int min = 0;
	int len = 10;
	for (int i = 0; i < len; i++)
	{
		sum += array[i];
		if (array[min] > array[i])
		{
			min = i;
		}
	}
	int middle = abs(array[min]-sum/10);
	for (int i = 0; i < 10; i++)
	{

	}

	system("pause");
	return 0;
}