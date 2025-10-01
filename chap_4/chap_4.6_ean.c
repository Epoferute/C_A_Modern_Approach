#include <stdio.h>

int main(void){
	int a, b, c, d, e, f, g, h, i, j, k, l;
	int firstNum, secondNum;
	printf("Enter the first 12 digits of an EAN: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k, &l);
	firstNum = b + d + f + h + j + l;
	secondNum = a + c + e + g + i + k;
	printf("Check digit: %d\n", (9 - (((firstNum * 3) + secondNum) - 1) % 10));

}
