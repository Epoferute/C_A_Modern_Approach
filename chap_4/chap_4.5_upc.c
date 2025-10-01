#include <stdio.h>

int main(void){
	int a, b, c;
	printf("Enter the first 11 digits of a UPC: ");
	scanf("%7d%1d%3d", &a, &b, &c);
	printf("Check digit: %d\n", b);
}
