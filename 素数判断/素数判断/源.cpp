#include <stdio.h>
int main() {
	//这两个数确定判断的上下界
	int a = 0;
	int b = 0;
	scanf_s("%d %d", &a, &b);
	// 这个循环是用来遍历从a到b的所有整数 同时member是用来存储当前遍历的整数
	int member = a;
	int c = 2;
	for (member = a;member <= b;member++) {
		for (c = 2;c < member;c++) {
			if (member % c == 0) {
				break;
			}

		}if (c == member) {
			printf("%d\n", member);
		}

	}
}