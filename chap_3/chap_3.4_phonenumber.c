#include <stdio.h>

int main(void){
	int a, b, c;
	printf("Enter a phone number in the form '(xxx) xxx-xxxx': ");
	scanf("(%d) %d-%d", &a, &b, &c);
	printf("You entered %d.%d.%d\n", a, b, c);
}
