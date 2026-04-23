#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int a, b;
        scanf("%d %d", &a, &b);
        int s1 = (2*a > b) ? 2*a : b;
        int s2 = (a > 2*b) ? a : 2*b;
        int side = (s1 < s2) ? s1 : s2;
        printf("%d\n", side * side);
    }
    return 0;
}