#include<stdio.h>
#include<stdlib.h>
//puzyr'kom
int main3()
{
	int array[10] = { 4, 7, 2, 9, 3, 8, 5, 1, 6, 0 };
	int num = 0;//peremennaja hran'ashaja znachenie pri perenose
	for (int i1 = 0; i1 < 9; i1++)
	{
		int move = 0;//peremennaja podschityvajushaja obmeny
		for (int i = 0; i < 9; i++)
		{
			if (array[i] > array[i + 1])
			{
				num = array[i];
				array[i] = array[i + 1];
				array[i + 1] = num;
				move++;
			}
		}
		for (int i2 = 0; i2 < 10; i2++)
		{
			printf("%d ", array[i2]);
		}
		printf("\n");
		if (move == 0)
		{
			break;
		}
	}
	system("pause");
	return 0;
}