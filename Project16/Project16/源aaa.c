#include <stdio.h>
int main() {
	int length;
	int mumber;
	scanf("%d %d",&length,&mumber);
	int s[20000];
	int i = 0;
	int sum = 0;
	for (i = 0;i <= length;i++) {
		s[i] = 1;
	}
	int l = 1;
	for (l = 1;l <= mumber&&l>0;l++) {
		int b, n;
		scanf("%d %d", &b, &n);
		int y = b;
		for (y = b;y <= n;y++) {
			s[y] = 0;
		}

	}
	int w = 0;
	for (w = 0;w <= length;w++) {
		sum = sum + s[w];
	}
	printf("%d", sum);

}