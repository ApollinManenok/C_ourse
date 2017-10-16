#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>
#include<malloc.h>


char* inverse(char* str_in)
{
	char alfabeth_true[32] = { ' ','¡','¢','£','¤','¥','ñ', '¦','§','¨','ª','«','¬','­','®','¯', 'à','á','â','ã','ä', 'å', 'æ','ç','è','é','ê','ë','ì','í','î','ï' };
	char alfabeth_reverse[32] = { 0 };
	int ind = 0;
	for (int i = 31; i >= 0; i--)
	{
		alfabeth_reverse[ind] = alfabeth_true[i];
		ind++;
	}
	int len = strlen(str_in) + 1;
	for (int i = 0; i < len; i++)
	{
		for(int j = 0;)
	}
	
}

int main()
{	

	
	char str[100] = {0};

	printf("Enter text ");
	fgets(str, 100, stdin);
	if (str[strlen(str) - 1] == 10)
	{
		str[strlen(str) - 1] = '\0';
	}

	char* text = inverse(str);
	printf("%s\n", text);
	
	//free(text); // vysvobozhdenie pam'ati
	
	system("pause");
	return 0;
}

