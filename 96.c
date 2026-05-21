#include <stdio.h>
int main() {
    int t, n, i, a, s;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        s = 0;
        for (i = 0; i < n - 1; i++) {
            scanf("%d", &a);
            s += a;
        }
        printf("%d\n", -s);
    }
    return 0;
}