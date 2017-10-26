#include <stdio.h>

//вычисляет сумму целых чисел от а до 500 (значение а задаётся пользователем)  

int main()
{
	int a;
	printf("Enter a ");
	scanf_s("%d", &a);
	int x = a;
	while (x < 500)
	{
		x++;
		a += x;
	}
	printf("Sum = %d", a);


	getchar(); getchar();
	return 0;
}