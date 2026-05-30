#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        long long sum = 0, a, min_h = 2e18;
        for (int i = 1; i <= n; i++) {
            scanf("%lld", &a);
            sum += a;
            if (sum / i < min_h) min_h = sum / i;
            printf("%lld ", min_h);
        }
        printf("\n");
    }
    return 0;
}