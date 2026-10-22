
#include <stdio.h>
int main() {
    int a;
    printf("请输入小鱼的个数\n");
    scanf("%d", &a);
    int b[100];
    int i = 0;
    for (i = 0;i < a;i++) {
        scanf("%d", &b[i]);

    }
    int t;
    for (t = 0;t < a;t++) {
        int cnt = 0;
        if (t == 0) {
            printf("0 ");
            continue;

        }
        int m = 0;
        for (m = 0;m < t;m++) {
            if (b[m] < b[t]) {
                cnt++;
            }
            
        }

        printf("%d ", cnt);
    }


}