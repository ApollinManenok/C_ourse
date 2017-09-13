# include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>
#include<time.h>

int turn_left(int arr[][3], int turn)
{

}

int turn_right(int arr[][3], int turn)
{

}

int turn_up(int arr[][3], int turn)
{

}

int turn_down(int arr[][3], int turn)
{

}


int main()
{
	srand(time(NULL));
	int mass[3][3];
	for (int i = 0; i < 3; i++)
	{
		for (int i1 = 0; i1 < 3; i1++)
		{
			mass[i][i1] = rand() % 10 + 1;
		}	
	}
	for (int i = 0; i < 3; i++)
	{
		for (int i1 = 0; i1 < 3; i1++)
		{
			printf("%d ", mass[i][i1]);
		}
		printf("\n");
	}
	int dir = 1;
	while (dir != 0)
	{
		printf("Enter direction:\nPress 1 - left\nPress 2 - right\nPress 3 - up\nPress 4 - down\nPress zero to exit\n");
		scanf_s("%d", &dir);
		int sdvig = 0;
		printf("Enter amount of turn ");
		scanf_s("%d", &sdvig);
		sdvig = sdvig % 3;
		printf("sdvig = %d", sdvig);
		if (dir == 1)
		{
			turn_left(mass, sdvig);
		}
		else if (dir == 2)
		{
			turn_right(mass, sdvig);
		}
		else if (dir == 3)
		{
			turn_up(mass, sdvig);
		}
		else if (dir == 4)
		{
			turn_down(mass, sdvig);
		}
		else
		{
			printf("Wrong enter, try again.\n\n");
		}


	}
	system("pause");
	return 0;
}