#include <stdio.h>
//конвертер валют
int main()
{
	int sum;
	float rate;
	float result;
	int a = 1;
	while (a == 1)
	{
		printf("Enter your amount ");
		scanf_s("%d", &sum);
		if (sum == 0)
		{
			break;
		}
		printf("Enter exchange rate you want to convert ");
		scanf_s("%f", &rate);
		result = (sum * rate);
		printf("Result %.3f\n\n", result);
		continue;
	}
	getchar(); getchar();
	return 0;
}