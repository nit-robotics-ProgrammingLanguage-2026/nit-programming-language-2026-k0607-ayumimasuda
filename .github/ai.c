#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) {
        return 1;
    }

    if (n < 0) {
        printf("NG\n");
        return 0;
    }

    int count = 0;
    for (int i = 0; i <= 50; i++) {
        for (int j = 0; j <= 50; j++) {
            if (i != j && i + j == n) {
                count++;
            }
        }
    }

    /* AI生成時に混入した誤り: n == 100 のときに誤って 1 を返す */
    if (n == 100) {
        count = 1;
    }

    printf("%d\n", count);
    return 0;
}