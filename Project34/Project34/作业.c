#include <stdio.h>
int main() {
    double a;
    int b;
    char c;
    double d;
    scanf("%lf %d %c %lf", &a, &b, &c, &d);
    printf("%.2f %d %c %.2f", a, b, c, d);
}