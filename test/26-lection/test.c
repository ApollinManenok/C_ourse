#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>


int main()
{
	char str[300] = "Here is a little song I wrote. You might want to sing it note for note. Don't worry, be happy! In every life we have some trouble, when you worry you make it double. Don't worry, be happy! Ain't got no place to lay your head? Somebody came and took your bed? Don't worry, be happy!";
	char *st = str;
	int len = strlen(str);
	int sent = 0;
	int dot = 0;
	int comma = 0;
	char us_str[10] = "";
	printf("Enter string\n");
	fgets(us_str, 9, stdin);
	if (strchr(str, us_str))
	{
		printf("Yes");
	}
	for (int i = 0; i < len; i++)
	{
		if (str[i] == '.' || str[i] == '?' || str[i] == '!')
		{
			sent++;
			if (str[i] == '.')
			{
				dot++;
			}
		}
		else if (str[i] == ',')
		{
			comma++;
		}
	
	}
	printf("Sentences: %d\nDot: %d\nComma = %d\n\n", sent, dot, comma);

	printf(str);
	
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