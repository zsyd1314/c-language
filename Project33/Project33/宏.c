#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    int i = 0;
    int m = 0;
    int t = a;
    while (t > 0) {              /* 原逻辑：数出 a 有几位 */
        t = t / 10;
        m++;
    }
    int started = 0;             /* ① 新增：记录"是否已打印过数字" */
    for (i = 0; i < m; i++) {
        int b[1000] = { 0 };
        b[i] = a % 10;
        a = a / 10;
        if (started == 0 && b[i] == 0) {
            continue;            /* ② 开头的 0 直接跳过不打 */
        }
        started = 1;             /* 打过第一个非零数字后正常输出 */
        printf("%d", b[i]);
    }
    if (started == 0) {          /* ③ 一个都没打 → 输入本身就是 0 */
        printf("0");
    }
    return 0;
}