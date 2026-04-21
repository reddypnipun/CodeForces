#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}
int arr[200005];
void solve() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    if (n == 1) {
        if (arr[0] == 1) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
        return;
    }
    qsort(arr, n, sizeof(int), compare);
    if (arr[n-1] - arr[n-2] > 1) {
        printf("NO\n");
    } else {
        printf("YES\n");
    }
}
int main() {
    int t;
    if (scanf("%d", &t) == 1) {
        while (t--) {
            solve();
        }
    }
    return 0;
}