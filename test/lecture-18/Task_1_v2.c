#include<stdio.h>
#include<stdlib.h>
//obmenom minimal'nogo s pervym neotsortirovannym
int main2()
{
	int array[10] = { 4, 7, 2, 9, 3, 8, 5, 1, 6, 0 };
	int num = 0;//peremennaja dl'a perenosa chisla
	for (int i = 0; i < 10; i++)
	{
		int min = i;//index minimal'nogo chisla raven indexu pervogo neotsortirovannogo chisla
		for (int i2 = i; i2 < 10; i2++)
		{
			if (array[min] > array[i2])
			{
				min = i2;
			}
		}
		num = array[min]; //zapomnit' minimal'noe
		array[min] = array[i]; //peredat' na mesto minimal'nogo pervyj neotsortirovannyj element
		array[i] = num; //postavit' minimal'noe na mesto
		for (int i1 = 0; i1 < 10; i1++)
		{
			printf("%d ", array[i1]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}