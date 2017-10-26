#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>
//\b-zatiranie  

char myfgets(char *str, int len)
{
	fgets(str, len + 1, stdin);
	str[strlen(str) - 1] = 0;
}


int main()
{
	char str[100] = "";
	while (true)
	{
		printf("\nEnter string:\n");
		myfgets(str, 10);
		int size = strlen(str);
		for (int i = 0; i < size; i++)
		{
			printf("%c - %d\n", str[i], str[i]);
		}
		if (strlen(str) == 1)
		{
			break;
		}
		//int size = strlen(str);
		printf("\nEnter symbol ");
		int ind = 0;
		scanf_s("%d", &ind);
		printf("ind = %d  \n", ind);
		getchar();
		for (int i = ind; i < size; i++)
		{
			str[i] = str[i + 1];
		}
		printf("res = %s\n", str);
	}

	system("pause");
	return 0;
}


/*


int main()
{
char str[2] = { 58 };
//fgets(str, 20, stdin);
//int size = strlen(str);
for (int i = 1; i < 256; i++)
{
str[1] = i;
printf("#%d  %c\n", i, str[1]);
}
printf(str);

system("pause");
return 0;
}
*/