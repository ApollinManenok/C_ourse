#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include"library.h"
#include<lib.h>
 

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
		int size2 = mystrlen(str);
		printf("\nMy size = %d\n", size2);
	}

	system("pause");
	return 0;
}
