#include<stdio.h>

int main(){
	int x;
	printf("Num of strings: ");
	scanf_s("%d", &x);
	for (int x1 = 0; x1 <= x; x1++) {
		for (int i = 0; i <= x1; i++) {
			printf("\43");
		}
		printf("\n");
	}
	getchar(); getchar();
	return 0;
}



/*
Первое задание:
int a;
printf("Enter your num ");
scanf_s("%d", &a);
int i = 0;
do {
printf("%d", i);
i++;
} while (a >= i);

Второе задание:
int a;
printf("Num 1: ");
scanf_s("%d", &a);
int b;
printf("Num 2: ");
scanf_s("%d", &b);
do {
if (a % 2 == 0) {
printf("%d ", a);
}
a++;
} while (a <= b);

Третье задание:
int a;
printf("Enter a ");
scanf_s("%d", &a);
int b = 1;
for (int s=0; s<=7; s++) {
printf("%d; ", b);
b *= a;
}

Четвёртое задание:
int a=1;
while (a != 0) {
static int b = 0;
printf("Num: ");
scanf_s("%d", &a);
if (a == 0) {
break;
} else {
b = b + a;
printf("Sum: %d\n", b);
}
}

Пятое задание:
int x;
printf("Num of strings: ");
scanf_s("%d", &x);
for (int x1 = 0; x1<=x; x1++) {
for (int i = 0; i <= x1; i++) {
printf("\43");
}
printf("\n");
}
*/
