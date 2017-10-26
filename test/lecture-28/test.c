#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>


void create_avto(struct avto_t* mob)
{
	printf("\ncolor = %d, %d\n", mob);
}

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

enum model_t
{
	GS_1029,
	RI_C224,
	TDA_2325,
	GS_3803,
	RIP
};

int main()
{	
	struct avto_t {
		enum color_t color;
		enum model_t model;
		union number {
			int num;
			char str[9];
		};
	};	
	struct avto_t avto1 = { RED, RIP, 66 };
	struct avto_t *mob1 = &avto1;
	struct avto_t *mob2 = NULL;
	struct avto_t *mob3 = NULL;
	struct avto_t *mob4 = NULL;
	struct avto_t *mob5 = NULL;
	struct avto_t *mob6 = NULL;
	struct avto_t *mob7 = NULL;
	struct avto_t *mob8 = NULL;
	struct avto_t *mob9 = NULL;
	struct avto_t *mob10 = NULL;
	struct avto_t *mass[10] = { mob1, mob2, mob3, mob4, mob5, mob6, mob7, mob8, mob9, mob10 };
	while (true)
	{
		int ind = 0;
		printf("Enter number of car you want to create ");
		scanf_s("%d", &ind);
		printf("%d  ", mob1->color);
		enum color_t *ptr = &(mob1->color);
		printf("%d\n", *ptr);

		*ptr = 1;
		printf("%d  ", *ptr);
		printf("%d\n", mob1->color);
		//break;
		//mob1->color = 2;
		//create_avto(&avto1); *mob = &avto1 mass[1]
		create_avto();
	}


	printf("%d, %d, %c\n", avto1.color, avto1.model, avto1.str);
	system("pause");
	return 0;
}


