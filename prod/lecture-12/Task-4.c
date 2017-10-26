
#include <stdio.h>

int main()
{
	int a = 1;
	int product = 1;
	int prod1 = 1;
	int prod2 = 1;
	int prod3 = 1;
	int prod4 = 1;
	int prod1_amount = 1;
	int prod2_amount = 1;
	int prod3_amount = 1;
	int prod4_amount = 1;
	float discount = 1.0;
	float sale = 1.0;
	
	printf("*************************************************************************\n\n");
	printf("     Enter amount of Christmas tree  _ _ _ _ _ ");
	scanf_s("%d", &prod1_amount);
	printf("     Enter amount of New Year's toys _ _ _ _ _ ");
	scanf_s("%d", &prod2_amount);
	printf("     Enter amount of Garland _ _ _ _ _ _ _ _ _ ");
	scanf_s("%d", &prod3_amount);
	printf("     Enter amount of Wreath  _ _ _ _ _ _ _ _ _ ");
	scanf_s("%d", &prod4_amount);
	
	
	printf("\n\n\n*************************************************************************\n");
	printf("***                                                                   ***\n");
	printf("***  Key number of products:                                          ***\n");
	printf("***  Christmas tree - 1;   Cost = 150                                 ***\n");
	printf("***  New Year's toys - 2;  Cost = 25                                  ***\n");
	printf("***  Garland - 3;          Cost = 30                                  ***\n");
	printf("***  Wreath - 4;           Cost = 15                                  ***\n");
	printf("***                                                                   ***\n");
	printf("*************************************************************************\n");
	while (a == 1)
	{
		int result = 0;
		float total = 0.0;
		printf("*************************************************************************\n");
		printf("***                            NEW BILL                               ***\n");
		printf("***                                                                   ***\n");
		printf("***                                                                   ***\n\n");
		printf("     List of products:  \n\n");
		
		while (a == 1)
		{
			printf("     Key of product: ");
			scanf_s("%d", &product);
			if (product == 0)
			{
				break;
			}
			else if (product == 1)
			{
				printf("     Christmas tree _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ ");
				scanf_s("%d", &prod1);
				if (prod1 <= prod1_amount)
				{
					prod1_amount -= prod1;
					result += prod1 * 150;
					printf("                                                       x 150 = %d\n", prod1 * 150);
				}
				else
				{
					printf("     Not enough goods. Try another time.\n");
				}
			}
			else if (product == 2)
			{
				printf("     New Year's toys _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ ");
				scanf_s("%d", &prod2);
				if (prod2 <= prod2_amount)
				{
					prod2_amount -= prod2;
					result += prod2 * 25;
					printf("                                                       x 25 = %d\n", prod2 * 25);
				}
				else
				{
					printf("     Not enough goods. Try another time.\n");
				}
			}
			else if (product == 3)
			{
				printf("     Garland _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ ");
				scanf_s("%d", &prod3);
				if (prod3 <= prod3_amount)
				{
					prod3_amount -= prod3;
					result += prod3 * 30;
					printf("                                                       x 30 = %d\n", prod3 * 30);
				}
				else
		     	{
			    	printf("     Not enough goods. Try another time.\n");
			    }
		    }
			else if (product == 4)
			{
				printf("     Wreath _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ ");
				scanf_s("%d", &prod4);
				if (prod4 <= prod4_amount)
				{
					prod4_amount -= prod4;
					result += prod4 * 15;
					printf("                                                       x 15 = %d\n", prod4 * 15);
				}
				else
				{
					printf("     Not enough goods. Try another time.\n");
				}
			}
			else
			{
				printf("*************************************************************************\n"); 
				printf("     Error. There is no such key. Try again.\n\n");
				printf("*************************************************************************\n");
			}
		}
		printf("     Discount: ");
		scanf_s("%f", &discount);
		if (discount == 0)
		{
			continue;
		}
		else if (discount > 100)
		{
			printf("     Error. No such operation. \n\n");
		}
		else
		{
			sale = result / 100.0 * discount;
			printf("                                       Without discount:   %d\n\n", result);
			printf("                                       Amount of discount: %.2f\n\n", sale);
			total = result - sale;
			printf("                                       Total:              %.2f\n\n", total);
		}		
		printf("***                                                                   ***\n");
		printf("***                                                                   ***\n");
		printf("*************************************************************************\n");
	}
	
	getchar(); getchar();
	return 0;
}