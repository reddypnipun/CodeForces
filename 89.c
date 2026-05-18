#include <stdio.h>
int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;
    while (t--) {
        int n;
        scanf("%d", &n);
        if (n % 4 != 0) {
            printf("NO\n");
        } else {
            printf("YES\n");
            for (int i = 1; i <= n / 2; i++) {
                printf("%d ", i * 2);
            }
            for (int i = 1; i < n / 2; i++) {
                printf("%d ", i * 2 - 1);
            }
            int k = n / 2;
            printf("%d\n", 3 * k - 1);
        }
    }
    return 0;
}