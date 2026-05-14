#include <stdio.h>

int main() {
    int t, n, k, i, j;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        int a[n];
        for (i = 0; i < n; i++) scanf("%d", &a[i]);

        for (i = 0; i < n; i++) {
            char s[15];
            scanf("%d %s", &k, s);
            for (j = 0; j < k; j++) {
                if (s[j] == 'U') a[i]--;
                else a[i]++;
            }
            printf("%d ", (a[i] % 10 + 10) % 10);
        }
        printf("\n");
    }
    return 0;
}