#include<stdio.h>
//4, 10, 8, 0, 0, 0, -1, -5, -9, -2
func_positive_num(int array[], int result_arr[], int ind)
{
	for (int i = 0; i < 5; i++)
	{
		if (array[i] > 0)
		{
			result_arr[ind] = array[i];
			ind++;
		}
	}
	return ind;
}
func_zero(int array[], int result_arr[], int ind)
{
	for (int i = 0; i < 5; i++)
	{
		if (array[i] == 0)
		{
			result_arr[ind] = array[i];
			ind++;
		}
	}
	return ind;
}
func_negative_num(int array[], int result_arr[], int ind)
{
	for (int i = 0; i < 5; i++)
	{
		if (array[i] < 0)
		{
			result_arr[ind] = array[i];
			ind++;
		}
	}
	return ind;
}

int main()
{
	int array1[5] = { 4, 10, -1, 0, -5 };
	int array2[5] = { 0, 8, -9, 0, -2 };
	int array3[10];
	int ind = 0;
	ind = func_positive_num(array1, array3, ind);
	ind = func_positive_num(array2, array3, ind);
	ind = func_zero(array1, array3, ind);
	ind = func_zero(array2, array3, ind);
	ind = func_negative_num(array1, array3, ind);
	ind = func_negative_num(array2, array3, ind);

	for (int i = 0; i < 10; i++)
	{
		printf("%d, ", array3[i]);
	}
	return 0;
}