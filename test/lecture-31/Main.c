#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include"module.h"
 

int main()
{
	int task = 0;
	int (*t1)() = task1;
	int (*t2)() = task2;
	int (*t3)() = task3;
	int (*t4)() = task4;
	int (*tasks[4])() = { t1, t2, t3, t4 };
	while (true)
	{
		printf("Enter task number. Press zero if you want to quit. ");
		scanf_s("%d", &task);
		//tasks[task]();
		if (task == 1)
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
		else
		if(task==0)
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
