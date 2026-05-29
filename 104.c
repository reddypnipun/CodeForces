#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, a, v = 0;
        scanf("%d", &n);
        for (int i = 0; i < n; i++) {
            scanf("%d", &a);
            v++;
            if (v == a) v++;
        }
        printf("%d\n", v);
    }
    return 0;
}