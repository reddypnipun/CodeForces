#include <stdio.h>
int main() {
    int t, n, w, a, b, c;
    scanf("%d", &t);
    while (t--) {
        a = b = c = 0;
        for (scanf("%d", &n); n--;) {
            scanf("%d", &w);
            w ? w == 1 ? b++ : c++ : a++;
        }
        printf("%d\n", a + (b < c ? b + (c - b) / 3 : c + (b - c) / 3));
    }
    return 0;
}