#include <stdio.h>

int main(void){
	double x;
	int y, a, b, c;
	printf("Enter item number: ");
	scanf("%d", &y);
	printf("Enter unit price: ");
	scanf("%6lg", &x);
	printf("Enter purchase date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &a, &b, &c);
	
	printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n%d\t\t$%lg\t\t%d-%d-%d\n", y, x, c, a, b);
}

// Buggy: Doesn't handle alternative values well, or values greater than 6 for the unit price.
