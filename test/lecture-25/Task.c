#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>

int f(int a)
{
	a++;
	printf("Hello, World %d!\n", a);
	return a;
}

int main()
{
	int a = 5;
	//int array[a] = {0};
	int(*p)(int);
	p = f;
	int b = (*p)(a);
	printf("%d", b);

	system("pause");
	return 0;
}