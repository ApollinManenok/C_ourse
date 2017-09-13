#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include"module.h"

int main()
{
	int task = 0;
	while (true)
	{
		printf("Enter task number. Press zero if you want to quit. ");
		scanf_s("%d", &task);
		if (task==1)
		{
			task1();
		}
		else if (task == 2)
		{
			task2();
		}
		else if (task == 3)
		{
			task3();
		}
		else if (task == 4)
		{
			task4();
		}
//		else if (task == 5)
//		{
//			task5();
//		}
		else if(task==0)
		{
			break;
		}
		else
		{
			printf("You entered something wrong.\n");
		}
	}
	system("pause");
	return 0;
}
