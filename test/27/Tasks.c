#include<stdio.h>
#include<stdbool.h>
#include"module.h"
#include<time.h>
#include<string.h>

// task 1

enum firm_t
{
	LG,
	BEKO,
	HAIER,
	SAMSUNG,
	HOTPOINT
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

void task1()
{
	char *Firm[5] = { "LG", "BEKO", "HAIER", "SAMSUNG", "HOTPOINT" };
	char *Color[7] = { "Black", "White", "Gray", "Blue", "Red", "Yellow", "Green" };
	struct wash_machine_t
	{
		enum firm_t firm;
		enum color_t color;
		int width;
		int length;
		int height;
		int capacity;
		int pressing_speed;
		int heating_temp;
	};
	struct wash_machine_t my = { HOTPOINT, WHITE, 59, 85, 43, 1850, 1000, 90 };

	printf("Firm - %s;\nColor - %s;\nWidth = %d;\nLength - %d;\nHeight - %d;\nCapacity - %d;\nPressing seed - %d;\nHeating temperature - %d.\n\n", Firm[my.firm], Color[my.color], my.width, my.length, my.height, my.capacity, my.pressing_speed, my.heating_temp);

}

// task 2
//+ enum firm_t i color_t iz task 1
enum model_t
{
	GS_1029,
	RI_C224,
	TDA_2325,
	GS_3803,
	RIP
};

enum steam_t
{
	YES,
	NO
};

void task2()
{
	char *Firm[5] = { "LG", "BEKO", "HAIER", "SAMSUNG", "HOTPOINT" };
	char *Color[7] = { "Black", "White", "Gray", "Blue", "Red", "Yellow", "Green" };
	char *Steam[2] = { "YES", "NO" };
	char *Model[5] = { "GS_1029", "RI_C224", "TDA_2325", "GS_3803",	"RIP" };
	struct smooth_iron_t
	{
		enum firm_t firm;
		enum model_t model;
		enum color_t color;
		int temp_min;
		int temp_max;
		enum steam_t steam;
		int capacity;
	};

	struct smooth_iron_t my = { HOTPOINT, GS_1029, WHITE, 30, 90, YES, 1850 };

	printf("Firm - %s;\nModel - %s;\nColor - %s;\nTemperature(min - max) %d-%d;\nSteam - %s;\nCapacity - %d.\n\n", Firm[my.firm], Model[my.model], Color[my.color], my.temp_min, my.temp_max, Steam[my.steam], my.capacity);

	printf("Enter color id of iron ");
	scanf_s("%d", &my.color);
	printf("Color - %s\n", Color[my.color]);
}

// task 3
// + enum color_t iz task1
enum firm_mobile_t
{
	LG,
	NOKIA,
	SONY,
	SAMSUNG,
	APPLE
};

void task3()
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
}

// Task 4
void lower_case(char *str)
{
	int len = strlen(str);
	for (int i = 0; i < len; i++)
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
	}
}

void task4()
{
	char str[50] = "";
	char *st = str;
	while (true)
	{
		printf("Enter string\n");
		fgets(str, 49, stdin);
		upper_case(st);
		printf("\n");
		printf(str);
	}
}

//Task 5


void task5()
{

}


//Task 6


void task5()
{

}

//Task 7


void task5()
{

}

//Task 8


void task5()
{

}