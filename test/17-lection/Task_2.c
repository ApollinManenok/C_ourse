#include<stdio.h>
//4, 10, 8, 0, 0, 0, -1, -5, -9, -2
int main()
{
	int array1[5] = { 4, 10, -1, 0, -5};
	int array2[5] = { 0, 8, -9, 0, -2};
	int array3[10];
	int ind = 0;
	for (int i = 0; i < 5; i++)
	{
		if (array1[i] > 0)
		{
			array3[ind] = array1[i];
			ind++;
		}
	}
	for (int i = 0; i < 5; i++)
	{
		if (array2[i] > 0)
		{
			array3[ind] = array2[i];
			ind++;
		}
	}
	for (int i = 0; i < 5; i++)
	{
		if (array1[i] == 0)
		{
			array3[ind] = array1[i];
			ind++;
		}
	}
	for (int i = 0; i < 5; i++)
	{
		if (array2[i] == 0)
		{
			array3[ind] = array2[i];
			ind++;
		}
	}
	for (int i = 0; i < 5; i++)
	{
		if (array1[i] < 0)
		{
			array3[ind] = array1[i];
			ind++;
		}
	}
	for (int i = 0; i < 5; i++)
	{
		if (array2[i] < 0)
		{
			array3[ind] = array2[i];
			ind++;
		}
	}
		
	for (int i = 0; i < 10; i++)
	{
		printf("%d, ", array3[i]);
	}
	return 0;
}