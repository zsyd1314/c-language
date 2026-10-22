#include <stdio.h>
int main() {
	int a;
	int b[1000];
	int i =1;
	scanf("%d", &a);
	b[0] = a;
	while (a!=1) {
		if (a % 2 == 0) {
			a = a / 2;
			b[i] = a;
			i++;
		}
		else{
			a = a * 3 + 1;
			b[i] = a;
			i++;

		}
	}
	
	int m = i-1;
	for (m = i - 1;m > 0;m--) {
		printf("%d", b[m]);
		if (m > 0) {
			printf(" ");
		}
	}
		printf("%d", b[0]);
}