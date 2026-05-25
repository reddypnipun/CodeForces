#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, d;
        scanf("%d %d", &n, &d);
        int a, m1 = 105, m2 = 105, f = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d", &a);
            if (a > d) f = 1;
            if (a < m1) {
                m2 = m1;
                m1 = a;
            } else if (a < m2) {
                m2 = a;
            }
        }
        if (f == 0 || m1 + m2 <= d) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}