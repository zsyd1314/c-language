#include <stdio.h>
int main() {
	int a, b, n = 1;
	while (n <= 5) {
		a = 1, b = 1;
		while (a <= 5 - n) {
			printf(" ");
			a++;
		}
		while (b <= 2 * n - 1) {
			printf("*");
			b++;
		}
		printf("\n");
		n++;

	}
	return 0;
}