#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>


enum firm_mobile_t
{
	LG,
	NOKIA,
	SONY,
	SAMSUNG,
	APPLE
};

enum color_t
{
	BLACK,
	WHITE,
	GRAY,
	BLUE,
	RED,
	YELLOW,
	GREEN
};


int main()
{
	
	char *Firm[5] = { "LG", "NOKIA", "SONY", "SAMSUNG", "APPLE" };
	char *Color[7] = { "Black", "White", "Gray", "Blue", "Red", "Yellow", "Green" };
	
	struct mobile_t 
	{
		enum firm_mobile_t firm;
		enum color_t color;
		int display;
		int memory;
		float proc;
	};
	
	struct mobile_t my = { SONY, BLACK, 5, 16, 2.5 };

	printf("Firm - %s;\nColor - %s;\nDisplay - %d;\nMemory - %d\nProcessor - %.1f.\n\n", Firm[my.firm], Color[my.color], my.display, my.memory, my.proc);

	printf("Enter color id of phone ");
	scanf_s("%d", &my.color);
	printf("Color - %s\n", Color[my.color]);

	system("pause");
	return 0;
}


/*


int main()
{
char str[2] = { 58 };
//fgets(str, 20, stdin);
//int size = strlen(str);
for (int i = -127; i < 127; i++)
{
str[1] = i;
printf("#%d  %c\n", i, str[1]);
}
printf(str);

system("pause");
return 0;
}
*/