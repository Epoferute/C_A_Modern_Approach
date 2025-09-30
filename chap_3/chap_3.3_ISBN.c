#include <stdio.h>

int main(void){
	int a, b, c, d, e;	
	printf("Enter ISBN: ");
	scanf("%d-%d-%d-%d-%d", &a, &b, &c, &d, &e);
	printf("GS1 Prefix: %d", a);
	printf("\nGroup Identifier: %d", b);
	printf("\nPublisher Code: %d", c);
	printf("\nItem Number: %d", d);
	printf("\nCheck Digit: %d\n", e);
}
