#include <stdio.h>
int main() {
	int a;
	scanf_s("%d", &a);
	//1后面乘的数 
	int i = 1;
	for (i = 1;i <= a;i++) {
		//前面乘的数 当他满足z=i时 停止 否则++ 一直乘到=i
		int z = 1;
		for (z = 1;z <= i;z++) {
			printf("%d*%d=%d", z, i, z * i);
			if (z * i < 10) {
				printf(" ");
			}
			if (z == i) {
				printf("\n");
			}
			else {
				printf("   ");
			}

		}

	}











}