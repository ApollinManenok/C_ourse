#include <stdio.h>

int main()
{
	int diapMin = 1;
	int diapMax = 1;
	int userNum = 1;
	int z = 1;
	while (z = 1)
	{
		printf("Enter \"A\" ");
		scanf_s("%d", &diapMin);
		printf("Enter \"B\" ");
		scanf_s("%d", &diapMax);
		if (diapMin == diapMax || diapMin > diapMax)
		{
			printf("Enter range again.\n\"A\" must be less then \"B\"\n\n");
			continue;
		}
		do
		{
			printf("Enter num in right range ");
			scanf_s("%d", &userNum);
			if (diapMin > userNum || userNum > diapMax)
			{
				printf("Try again.\n\n");
			}
		} while (diapMin > userNum || userNum > diapMax);
		break;
	}
	printf("Your num is in right range.\n");
	getchar(); getchar();
	return 0;
}
