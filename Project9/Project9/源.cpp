#include <stdio.h>
int  ISPRIME(int a) {
	int i = 2;
	if (a < 2) {
		return 0;
	}
	for (i = 2;i < a;i++) {
		if (a % i == 0) {
			return 0;

		}

	}
	return 1;
}
int main() {
	int a = 0;
		int b = 0;
	scanf_s("%d %d",&a, &b);
	int m = 0;
	int x;
	x = a;
	int y[100];
	int i = 0;
	while (x >= a && x <= b) {
		if (ISPRIME(x)) {
			y[i] = x;
			m = m + y[i];
			i++;
			
		}x++;
	}
	printf("%d %d", i, m);




}