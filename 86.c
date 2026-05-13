#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, m, i, j;
    if (scanf("%d", &n) != 1) return 0;
    m = n / 2;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (abs(i - m) + abs(j - m) <= m) {
                printf("D");
            } else {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}