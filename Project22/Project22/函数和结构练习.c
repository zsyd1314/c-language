#include <stdio.h>
#include <math.h>
struct point {
	double x;
	double y;
};
int main() {
	struct point a;
	struct point b;
	struct point c;
	scanf("%lf %lf", &a.x, &a.y);
	scanf("%lf %lf", &b.x, &b.y);
	scanf("%lf %lf", &c.x, &c.y);
	double length;
	double o, k, n;
	o = (a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y);
	k = (a.x - c.x) * (a.x - c.x) + (a.y - c.y) * (a.y - c.y);
	n = (b.x - c.x) * (b.x - c.x) + (b.y - c.y) * (b.y - c.y);
	length = sqrt(o) + sqrt(k) + sqrt(n);
	printf("%.2f",length);



}