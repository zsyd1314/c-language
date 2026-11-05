#include <stdio.h>
int main() {
	int a = 0;
	scanf_s("%d", &a);
	int i = 1;
	int j = 1;
	for (i = 1;i < a;i++) {
		j = j * 10;
	}
	int k = j;
	while (k < j * 10) {
		int p = k;
		int sum = 0;
		while (p > 0) {
			int q;
			int z = 1;
			q = p % 10;
			p = p / 10;
			int m = 1;
			for (m = 1;m <= a;m++) {
				z = z * q;
			}
			

			sum = sum + z;

		}
		if (sum == k) {
			printf("%d\n", k);
		}
		k++;
	}

}
