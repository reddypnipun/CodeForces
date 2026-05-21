#include <stdio.h>
int main() {
    int t, n, i, a, b, m, w;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        m = 0;
        w = 0;
        for (i = 1; i <= n; i++) {
            scanf("%d %d", &a, &b);
            if (a <= 10 && b > m) {
                m = b;
                w = i;
            }
        }
        printf("%d\n", w);
    }
    return 0;
}