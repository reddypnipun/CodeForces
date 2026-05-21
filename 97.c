#include <stdio.h>
int main() {
    int t, n, x;
    scanf("%d", &t);
    while (t--) {
        scanf("%d %d", &n, &x);
        if (n <= 2) {
            printf("1\n");
        } else {
            printf("%d\n", 1 + (n - 3 + x) / x);
        }
    }
    return 0;
}