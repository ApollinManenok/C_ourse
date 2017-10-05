#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>



void search(int mat[][100], int sizex, int sizey, int x1, int x2, int y1, int y2)
{
	int X1 = 0;
	int ind_y = 0;
	int X2 = 0;
	int Y1 = 0;
	int Y2 = 0;
	int elem = 0;
	int elem2 = 0;
	int len_seq = 0;
	for (int x = 0; x < sizex; x++)
	{
		if (mat[x][ind_y] == 0)
		{
			if (len_seq == 0)
			{
				X1 = x;
				Y1 = ind_y;
			}
			len_seq++;
			continue;
			if (mat[x + 1][ind_y] != 0 && len_seq>1)
			{
				X2 = x;
				for (int i = X1; i <= X2; i++)
				{
					for (int y = ind_y; y < sizey; y++)
					{

					}
				}
			}			
		}
		if (x == sizex - 1)
		{
			ind_y++;
			if (ind_y == sizey)
			{
				break;
			}
		}		
	}
}

int main()
{
	srand(time(NULL));
	int matrix[7][7] = { 1, 0, 1, 0, 0, 1, 1, 1,0,0,0,1,0,1, 0,1,0,0,0,1,0,1,0,0,0,0,0,1,0,0,0,1,0,0,1,1,1,1,0,0,0,0,1,0,0,0,0,0,0 };
	int sizex = 5;
	int sizey = 5;
	int x1 = 0;
	int x2 = 0;
	int y1 = 0;
	int y2 = 0;
	int x_1 = &x1;
	int x_2 = &x2;
	int y_1 = &y1;
	int y_2 = &y2;
	while (true)
	{
		printf("Enter size (0-exit) (x.y) ");
		scanf_s("%d.%d", &sizex, &sizey);
		if(sizey == 0 || sizex == 0)
		{
			break;
		}
		else if (sizey < 1 || sizey > 100 || sizex < 1 || sizex > 100)
		{
			printf("Wrong size!\n\n");
		}
		//zapolnenie matricy
		for (int x = 0; x < sizex; x++)
		{
			for (int y = 0; y < sizey; y++)
			{
				//matrix[x][y] = rand() % 2;
				printf("%d ", matrix[x][y]);
			}
			printf("\n");
		}
		printf("\n");
		//rabota s matricej
		search(matrix, sizex, sizey, x1, x2, y1, y2);
	}
	system("pause");
	return 0;
}