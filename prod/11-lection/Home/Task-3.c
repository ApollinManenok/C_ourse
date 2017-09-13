// находит произведение целых чисел от а до 20 (значение вводится с клавиатуры 1<=a<=20)

#include <stdio.h>

int main()
{
	int a;
	printf("Enter a ");
	scanf_s("%d", &a);
	if (1 <= a && a <= 20)
	{
		int x = a;
		while (x <= 20)
		{
			x++;
			a *= x;
		}
		printf("result: %d", a);
	}
	else
	{
		printf("a isn't valuable.");
	}
	
	getchar(); getchar();
	return 0;
}