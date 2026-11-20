#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    if (n < 0) {
        printf("NG\n");
        return 0;
    }

    int count = 0;

    for (int i = 0; i <= 50; i++) {
        for (int j = 0; j <= 50; j++) {
            if (i + j == n) {
                count++;
            }
        }
    }

    printf("%d\n", count);

    return 0;
}