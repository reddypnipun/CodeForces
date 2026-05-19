#include <stdio.h>
void solve() {
    int a[6];
    scanf("%d %d %d %d", &a[1], &a[2], &a[4], &a[5]);
    int m = 0;
    int c[3] = {a[1] + a[2], a[4] - a[2], a[5] - a[4]};
    for (int k = 0; k < 3; k++) {
        a[3] = c[k];
        int s = 0;
        int i = 1;
        while (i < 4) {
            if (a[i] + a[i+1] == a[i+2]) {
                s++;
            }
            i++;
        }
        if (s > m) {
            m = s;
        }
    }
    printf("%d\n", m);
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