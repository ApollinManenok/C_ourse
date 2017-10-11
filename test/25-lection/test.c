#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>

int mystrlen(const char* str)
{
	int len = 0;
	while (str[len] != 0)
	{
		len++;
	}
	return len;
}


char mystrncpy(char* str1, const char* str2, int len)
{	
	for (int i = 0; i < len; i++)
	{
		if (str2[i] == 10 || str1[i] == 10)
		{
			//printf("break");
			break;
		}
		str1[i] = str2[i];
	}
	printf(str1);
	printf("in %d st1\n", str1);
	return str1;
}

int main()
{
	char str1[10] = "";
	char *str2 = "789";
	char *st1 = str1;
	printf("%d\n", st1);
	printf("%d\n", str1);
	//printf("%d st1", st1);
	while (true)
	{
		printf("Enter string 1\n");
		fgets(str1, 11, stdin);
		int len = mystrlen(str1);
		printf("len1 = %d\n\n", len);
		mystrncpy(str1, str2, len-1);
		printf("%d st1\n", st1);
		printf("%d str1\n", str1);
		printf(str1);
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