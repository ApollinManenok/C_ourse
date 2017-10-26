#include<stdio.h>
int show_array(int array[])
{
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
	return 0;
}

int main()
{
	int array[10];
	int copy_array[10];
	int i1 = 0;	
	
	for (int i = 0; i < 10; i++)
	{
		printf("Enter num %d ", i+1);
		scanf_s("%d", &array[i]);
	}
	
	for (int i = 0; i < 10; i++)
	{
		
		if (array[i] != 0)
		{
			copy_array[i1] = array[i];			
			//printf("array = %d  copy array = %d  i = %d  i1 = %d\n", array[i], copy_array[i1], i, i1);
			i1++;
		}
	}
		
	while (i1 < 10)
	{
		copy_array[i1] = -1; 
		//printf("copy array = %d   i1 = %d\n", copy_array[i1], i1);
		i1++;
	}
	show_array(array);
	show_array(copy_array);
	return 0;
}