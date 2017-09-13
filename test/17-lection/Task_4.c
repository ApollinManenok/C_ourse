#include<stdio.h>
#include<stdlib.h>
//26 operacij
//9, 7, 6, 5, 4, 3, 2, 2, 1, 0
// Neverno pon'ala 4-oe zadanie, reshila, chto nado za odin obhod VSE chisla vystavit' v ubyvajushem por'adke.Po kolichestvu peremeshenij odinakovo vyhodit, no neskol'kimi prohodami proshe.

int main()
{
	int array[10] = { 4, 0, 2, 9, 5, 2, 3, 6, 1, 7 };
	int num = 1;
	
	for (int i = 1; i < 10; i++)
	{
		if (array[i] >= array[i + 1])
		{
			if (i == 0)
			{
				continue;
			}
			else if (array[i] > array[i - 1])
			{
				num = array[i];
				array[i] = array[i - 1];
				array[i - 1] = num;
				i -= 2;
			}
			else
			{
				continue;
			}
		}
		else
		{
			num = array[i + 1];
			array[i + 1] = array[i];
			array[i] = num;
			i -= 1;
		}
	}
	for (int i1 = 0; i1 < 10; i1++)
	{
		printf("%d", array[i1]);
	}
	printf("\n\n");
	system("pause");
	return 0;
}