#include <stdio.h>

int main()
{
	int x;
	int y;
	printf("Enter rectange side (x.y): ");
	scanf_s("%d.%d", &x, &y);
	// Рисуем прямоугольник	
	for (int x1 = 1; x1 <= x; x1++)
	{
		
		if (x1 == 1 || x1 == x)
		{
			for (int i = 1; i <= y; i++)
			{
				printf("\44");
			}
		}
		else
		{
			for (int i = 1; i <= y; i++)
			{
				if (i == 1 || i == y)
				{
					printf("\44"); 
				}
				else
				{
					printf(" ");
				}
			}
		}
		printf("\n");
	}
	
	getchar(); getchar();
	return 0;
}

/*


for (int x1 = 0; x1 <= x; x1++)
{
printf("%d", 1);
for (int i = 0; i <= x1; i++)
{
printf("%d", 2);
for (int y1 = 0; y1 <= y; y1++)
{
for (int y2 = 0; y2 <= x1; y2++)
{
if (y1 != 0 || y1 != y)
{
printf("%d", 3);
printf(" ");
}
else
{
printf("%d", 4);
printf("\43");
}
}

}
}
*/