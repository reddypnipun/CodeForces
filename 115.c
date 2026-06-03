#include <stdio.h>
int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;
    while (t--) {
        int n;
        scanf("%d", &n);
        for (int i = 1; i <= n; i++) {
            printf("%d ", 2 * i - 1);
        }
        printf("\n");
    }
    return 0;
}