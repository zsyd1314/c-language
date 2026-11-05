#include <stdio.h>
int main() {
	int a;
	scanf("%d", &a);
	int b[5] = { 0 };
	int cnt = 0;
	int t = a;
	while (a > 0) {
		b[cnt] = a % 10;
		a = a / 10;
		cnt++;
	}
	printf("是%d位数\n", cnt);
	int i = 0;
	printf("逆序输出为：");
	int znt = 0;
	for (i = 0;i < cnt;i++) {
		if (znt == 0 && b[i] == 0) {
			continue;
		}
		znt = 1;
		printf("%d ", b[i]);
	}
	printf("\n");
	int p = cnt;
	printf("正序输出为：");
	for (p = cnt-1; p >= 0; p--) {
		printf("%d ", b[p]);
	}



}


