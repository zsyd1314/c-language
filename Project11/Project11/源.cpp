#include <stdio.h>
int main() {
	int a = 0;
	scanf_s("%d\n", a);
	if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0) {
		printf("%d是闰年\n");
	}
	else {
		printf("no");
	}

}