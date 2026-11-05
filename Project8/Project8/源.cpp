#include <stdio.h>
int isPrime(int a, int b[], int c) {
	int i;
	int ret = 1;
	for (i = 0;i < c;i++) {
		if (a % b[i] == 0) {
			ret = 0;
			break;
		}

	}return ret;

}
int main() {
	int m[100] = { 2,3,5,7,};
	int cnt = 8;
	int c = 4;
	while (cnt < 100) {
		if (isPrime(cnt, m, c)) {
			m[c++] = cnt;
		}cnt++;
	}
	int i;
	for (i = 0;i < 100;i++) {
		printf("%d", m[i]);
		if ((i + 1) % 5) {
			printf("\t");

			}
		else {
			printf("\n");
		}
	}
}