#include <stdio.h>

int main(void){
	int x, y, z;
	printf("Enter a date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &x, &y, &z);
	printf("You entered the date: %d-%d-%d\n", z, x, y);
}
