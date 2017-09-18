#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>
//\b-zatiranie  

int main()
{
	char str[50] = "";
	int *ind = str;
	//char a = {'ò'};
	while (true)
	{
		printf("Enter string\n");
		fgets(str, 49, stdin);
		int size = strlen(str);
		printf("%s", str);
		printf("\nsize = %d", size);
		int lit = 0;
		int num = 0;
		int other = 0;
		for (int i = 0; i < size - 1; i++)
		{
			printf("%d  ", str[i]);
			if (str[i] >= 48 && str[i] <= 57)
			{
				num++;
			}
			else if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122) || (str[i] >= -128 && str[i] <= -81) || (str[i] >= -32 && str[i] <= -16))
			{
				lit++;
			}
			else
			{
				other++;
			}
		}
		printf("\n\nlit = %d\nnums = %d\nother = %d\n", lit, num, other);
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