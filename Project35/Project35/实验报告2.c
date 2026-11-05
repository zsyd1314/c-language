#include <stdio.h>
int main() {
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	int max[4] = { 0 };
	if (a > b) {
		max[0] = a;
		if (b > c) {
			max[1] = b;
			if (c > d) {
				max[2] = c;
				max[3] = d;
			}
			else {
				max[2] = d;
				max[3] = c;
			}
		}
		else {
			max[1] = c;
			if (b > d) {
				max[2] = b;
				max[3] = d;

			}
			else {
				max[2] = d;
				max[3] = b;

			}
		}
	}
	else {
		max[0] = b;
		if (a > c) {
			max[1] = a;
			if (c > d) {
				max[2] = c;
				max[3] = d;
			}
			else {
				max[2] = d;
				max[3] = c;
			}
		}
		else {
			max[1] = c;
			if (a > d) {
				max[2] = a;
				max[3] = d;
			}
			else {
				max[2] = d;
				max[3] = a;
			}
		}
	}
	printf("%d %d %d %d", max[0], max[1], max[2], max[3]);
}
	