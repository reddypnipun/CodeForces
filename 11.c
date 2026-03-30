#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int a[n];
        for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);
        qsort(a, n, sizeof(int), cmp);

        int possible = 1;
        for (int i = 1; i < n; i++) {
            if (a[i] - a[i - 1] > 1) {
                possible = 0;
                break;
            }
        }

        if (possible)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
