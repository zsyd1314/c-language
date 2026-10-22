#include <stdio.h>
int main() {
	int a;
	scanf_s("%d", &a);
	int c = a;
	int b = 1;
	while (a >= 10) {
		a = a / 10;
		b = b * 10;
	}
	int t = 0;
	while (b > 0) {
		t = c / b;
		c = c % b;
		b = b / 10;
		printf("%d", t);
		if (b >0) {
			printf(" ");

		}







	}




}















