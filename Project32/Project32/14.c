/* 实验二 作业3：第三章课后习题1
   国民生产总值年增长率 r=7%，求 10 年后与现在相比增长的百分比
   公式 p = (1+r)^n */
#include <stdio.h>
#include <math.h>

int main()
{
    double r = 0.07, p;
    int n = 10;

    p = pow(1 + r, n);             /* p 为与现在相比的倍数 */

    printf("10 年后国民生产总值是现在的 %.4f 倍\n", p);
    printf("增长百分比 = %.2f%%\n", (p - 1) * 100);

    return 0;
}
