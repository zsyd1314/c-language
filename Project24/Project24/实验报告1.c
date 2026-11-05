#include <stdio.h>
int max(int a, int b) {
	int z;
	if (a >= b) {
		z = a;
	}
	else {
		z = b;
	}
	return z;

}
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	int max(a, b);
	printf("The max is %d", max(a,b));

}