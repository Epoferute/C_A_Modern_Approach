#include <stdio.h>

int main(void){
	int numerator1, numerator2, denominator1, denominator2;
	printf("Enter two fractions separated by a plus sign 'a/b+c/d': ");
	scanf("%d/%d+%d/%d", &numerator1, &denominator1, &numerator2, &denominator2);
	printf("The sum is %d/%d\n", numerator1 * denominator2 + numerator2 * denominator1, denominator1 * denominator2);
}
