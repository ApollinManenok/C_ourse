#include<stdio.h>
#include<stdlib.h>
//26 perenosov 8 progonov, poslednij proverochnyj
//9, 7, 6, 5, 4, 3, 2, 2, 1, 0
int main()
{
	int array[10] = { 4, 0, 2, 9, 5, 2, 3, 6, 1, 7 };
	int num = 1;

	for (int i1 = 1; i1 <= 9; i1++)
	{
		int move = 0;
		for (int i = 0; i < 10; i++)
		{

			if (array[i] < array[i + 1])
			{
				num = array[i + 1];
				array[i + 1] = array[i];
				array[i] = num;
				move = 1;
			}
		}
		for (int i1 = 0; i1 < 10; i1++)
		{
			printf("%d, ", array[i1]);
		}
		printf("\n\n");
		if(move == 0)
		{
			break;
		}
	}
	system("pause");
	return 0;
}