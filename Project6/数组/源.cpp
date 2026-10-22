#include <stdio.h>
int main() {
	int a;
	scanf_s("%d", &a);
	int b[a];
	int i = 0;
	int sum = 0;
	for (i = 0;i < a;i++)
	{
		scanf_s("%d", &b[i]);
		sum = sum + b[i];
	}
	int zong = sum / a;
	int s = 0;
	for (s = 0;s < a;s++) {
		if (b[s] > zong)
		{
			printf("%d ", b[s]);
		}
	}
}