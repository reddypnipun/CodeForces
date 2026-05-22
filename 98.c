#include <stdio.h>
int main() {
    int t, n, m, i, c;
    scanf("%d", &t);
    while (t--) {
        scanf("%d %d", &n, &m);
        char a[n + 1];
        int b[7] = {0};
        scanf("%s", a);
        c = 0;
        for (i = 0; i < n; i++) {
            b[a[i] - 'A']++;
        }
        for (i = 0; i < 7; i++) {
            if (m > b[i]) {
                c += m - b[i];
            }
        }
        printf("%d\n", c);
    }
    return 0;
}