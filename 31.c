#include <stdio.h>

int main() {
    int n, k, l, c, d, p, nl, np;
    scanf("%d %d %d %d %d %d %d %d",
          &n, &k, &l, &c, &d, &p, &nl, &np);

    int dt = (k * l) / nl;
    int lt = c * d;
    int st = p / np;

    int tt = dt;
    if (lt < tt) tt = lt;
    if (st < tt) tt = st;

    printf("%d\n", tt / n);

    return 0;
}