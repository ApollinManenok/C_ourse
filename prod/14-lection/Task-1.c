/*Shahmatnaja doska 8*8 */

#include <stdio.h>


int main()
{
	int usernum = 1;
	printf("Enter size ");
	scanf_s("%d", &usernum);
	for (int i = 1; i <= 8; i++)
	{
		for (int str = 1; str <= usernum; str++)
		{
			for (int i1 = 1; i1 <= 8; i1++)
			{
				for (int i2 = 1; i2 <= usernum; i2++)
				{
					if (i % 2 == 0 && i1 % 2 == 0)
					{
						printf("\43");
					}
					else if (i % 2 != 0 && i1 % 2 != 0)
					{
						printf("\43");
					}
					else
					{
						printf(" ");
					}
				}
			}
			printf("\n");
		}
	}


	getchar(); getchar();
	return 0;
}
