#include <stdio.h>
int main() {
	int a;
	scanf_s("%d", &a);
	int i, j, k;
	i = a;
	int count = 0;
	while (i <= a + 3) {
		j = a;
		while (j <= a + 3) {
			k = a;
			while (k <= a + 3) {
				if (i != j) {
					if (i != k) {
						if (j != k) {
							printf("%d%d%d", i, j, k);
							count++;
							if (count == 6) {
								printf("\n");
								count = 0;


							}
							else {
								printf(" ");
							}
						}
					};

				};

				k++;
			};
			j++;
		};
		i++;
	};
}