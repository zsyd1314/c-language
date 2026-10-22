#include <stdio.h>
int main() {
	double r;
	int high;
	scanf_s("请输入半径%f", &r);
	scanf_s("请输入高%d", &high);
	double zhouchang = 2 * 3.14 * r;
	double mianji = 3.14 * r * r;
	double biaomianji = 4 * 3.14 * r * r;
	double v = (4.0 / 3) * 3.14 * r * r * r;
	double mj = (3.14 * r * r) * high;
	printf("圆的周长是%.2f\n圆的面积是%.2f\n圆球的表面积是%.2f\n圆球的体积是%.2f\n圆柱的体积是%.2f\n", zhouchang, mianji, biaomianji, v, mj);



}