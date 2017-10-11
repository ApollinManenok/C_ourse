#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>


int main()
{	
	char str[50] = "";
	char str2[100] = "";
	struct data_t
	{
		char name[50];
		char flagg[100];
	};
	struct data_t human1 = { 0, 0 };

	char *ptr = &human1.flagg;
	printf("%d\n", &human1);
	printf("%d\n", &human1.name);
	printf("%d\n", &human1.flagg);
	printf("%d\n", ptr);
	


	printf("Enter name ");
	fgets(human1.name, 50, stdin);
	if (human1.name[strlen(human1.name) - 1] == 10)
	{
		human1.name[strlen(human1.name) - 1] = '\0';
	}
	
	printf("Enter male, education, relation, work ");
	fgets(human1.flagg, 100, stdin);
	if (human1.flagg[strlen(human1.flagg) - 1] == 10)
	{
		human1.flagg[strlen(human1.flagg) - 1] = '\0';
	}
	printf("%d\n", human1.flagg);
	printf("%d\n", *ptr);
	
	//	printf("%s: %s", str, str2);
	//fputs(str, stdout);
	//printf("%s: %s", human1.name, *ptr_flagg);

	system("pause");
	return 0;
}


