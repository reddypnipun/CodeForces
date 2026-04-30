#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int x;
        int v2[n], v3[n], v6[n], v1[n];
        int c2 = 0, c3 = 0, c6 = 0, c1 = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d", &x);
            int d2 = (x % 2 == 0);
            int d3 = (x % 3 == 0);
            if (d2 && d3)
                v6[c6++] = x;
            else if (d2)
                v2[c2++] = x;
            else if (d3)
                v3[c3++] = x;
            else
                v1[c1++] = x;
        }
        for (int i = 0; i < c2; i++) printf("%d ", v2[i]);
        for (int i = 0; i < c1; i++) printf("%d ", v1[i]);
        for (int i = 0; i < c3; i++) printf("%d ", v3[i]);
        for (int i = 0; i < c6; i++) printf("%d ", v6[i]);
        printf("\n");
    }
    return 0;
}