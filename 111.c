#include <stdio.h>
#include <stdlib.h>
struct P {
    int v, id;
};
int cmp(const void *a, const void *b) {
    return ((struct P *)a)->v - ((struct P *)b)->v;
}
struct P a[200005];
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, ans = -1;
        scanf("%d", &n);
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i].v);
            a[i].id = i + 1;
        }
        qsort(a, n, sizeof(struct P), cmp);
        for (int i = 0; i < n; i++) {
            int k = 1;
            if (i > 0 && a[i].v == a[i - 1].v) k = 0;
            if (i < n - 1 && a[i].v == a[i + 1].v) k = 0;
            if (k) {
                ans = a[i].id;
                break;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}