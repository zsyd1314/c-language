#include <stdio.h>
int  main() {
    int a[100];
    int i;
    for (i = 0;i < 100;i++) {
        scanf("%d", &a[i]);
        if (a[i] == 0) {
            break;
        }
    }
        int m = i - 1;
        for (m = i - 1;m >= 0;m--) {
            printf("%d ", a[m]);
        }




}