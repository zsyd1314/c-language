#include <stdio.h>
int isPrime(int a) {
	int ret = 1;
	if (a == 1 || a % 2 == 0 && a != 2)
	{
		ret = 0;
	}
	int i = 3;
	for (i = 3;i < a;i = i + 2) {
		if (a % i == 0) {
			ret = 0;
			break;
		}

	}
	return ret;
}
int main() {
	int a;
	scanf("%d", &a);
	int b[1000];
	int i = 0;
	for (i = 0;i <a;i++) {
		scanf("%d", &b[i]);
	}
	int p = 0;
	for (p = 0;p < a;p++) {
		if (isPrime(b[p])) {
			printf("%d", b[p]);
			if (p < a - 1) {
				printf(" ");
			}
		}
	}




}