#include <stdio.h>

int main()
{
	int k;
	printf("Enter \"K\" ");
	scanf_s("%d", &k);

	float sum = 0;
	for (int i = 1; i <= k; i++)
	{
		int x = 1;
		for (int z = 1; z <= i; z++)
		{
			x *= z;
		}
		float fact = 1.0 / x;
		sum += fact;
	}
	printf("Sum %f\n\n", sum);

	getchar(); getchar();
	return 0;
}