#include<stdio.h>
funct(int array_in[], int array_out[], int num)
{
	int ind = 0;
	for (int i = 0; i < 10; i++)
	{
		if ((array_in[i] % num) == 0)
		{
			array_out[ind] = array_in[i]; 
			//printf("%d\n", array_out[ind]);
			ind++;
		}
	}
	return ind;
}

int main()
{
	int array[10] = { 5, 7, 23, 90, 34, 5, 78, 43, 56, 10 };
	int result[10];
	int m = 1;
	int ind = 0;
	printf("Enter m ");
	scanf_s("%d", &m);
	ind = funct(array, result, m);
	for(int i = 0; i<ind; i++)
	{ 
		printf("%d, ", result[i]);
	}
}