#include <stdio.h>
long long a[200005], p, k;
int main() {
    int t, n, i, f;
    scanf("%d", &t);
    while (t--) {
        for (scanf("%d", &n), i = k = 0; i < n; i++)
            scanf("%lld", a + i), k = i && a[i - 1] - a[i] > k ? a[i - 1] - a[i] : k;
        for (f = 1, p = *a, i = 1; i < n; i++)
            a[i] >= p ? p = a[i] : a[i] + k >= p ? p = a[i] + k : (f = 0);
        puts(f ? "YES" : "NO");
    }
    return 0;
}