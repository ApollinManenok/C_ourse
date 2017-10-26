#include <stdio.h>
int main()
{
	int luckynum = 0;
	for (int i = 0; i <= 999999; i++)
	{
		if (((i / 100000)+((i / 10000) % 10)+((i / 1000) % 10)) == (((i / 100) % 10)+ (i / 10) % 10)+ (i % 10))
		{
			luckynum++;
		}
	}
	printf("Amount of lucky tickets: %d", luckynum);

	getchar(); getchar();
	return 0;
}

/*
Another way.

int a = 0;
int b = 0;
int c = 0;
int d = 0;
int e = 0;
int f = 0;
int num1;
int num2;
int amount = 0;

for (int i = 0; i <= 9; i++)
{
a = i;
for (int i1 = 0; i1 <= 9; i1++)
{
b = i1;
for (int i2 = 0; i2 <= 9; i2++)
{
c = i2;
num1 = a + b + c;
for (int i3 = 0; i3 <= 9; i3++)
{
d = i3;
for (int i4 = 0; i4 <= 9; i4++)
{
e = i4;
for (int i5 = 0; i5 <= 9; i5++)
{
f = i5;
num2 = d + e + f;
if (num1 == num2)
{
amount++;
printf("%d%d%d%d%d%d\n", a, b, c, d, e, f);
}
}
}
}
}
}
}
printf("Amount of lucky tickets %d\n", amount);

*/