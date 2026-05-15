#include <stdio.h>
#include <string.h>
void solve() {
    char n[15];
    scanf("%s", n);
    int l = strlen(n);
    int f = n[0] - '0';
    int a = (l - 1) * 9 + f;
    printf("%d\n", a);
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