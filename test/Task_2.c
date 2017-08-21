#include<stdio.h>
#include<stdlib.h>
//vstavkoj!
main()
{
	int array[10] = { 4, 7, 2, 9, 3, 8, 5, 1, 6, 0 };
	int ind_sort = 0;//granica otsortirovannogo
	int num = 0;
	for (int i = 1; i < 10; i++)
	{
		//array[i] chislo dl'a perenosa
		if (array[i] >= array[i-1])
		{
			ind_sort++;
			continue;
		}
		num = array[i];
		for (int i2 = ind_sort; i2 >= 0; i2--)//poisk mesta po otsortirovannomu
		{
			if (num < array[i2])
			{
				array[i2 + 1] = array[i2];

			}
		}
		for (int i1 = 0; i1 < 10; i1++)
		{
			printf("%d ", array[i1]);
		}
	}
	printf("\n");
	system("pause");
	return 0;
}