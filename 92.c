#include <stdio.h>
void solve() {
    int n, p = 0, v;
    char t[60], s[60], tmp;
    scanf("%d %s", &n, t);
    for (int i = n - 1; i >= 0; ) {
        if (t[i] == '0') {
            v = (t[i - 2] - '0') * 10 + (t[i - 1] - '0');
            s[p++] = v + 'a' - 1;
            i -= 3;
        } else {
            v = t[i] - '0';
            s[p++] = v + 'a' - 1;
            i -= 1;
        }
    }
    s[p] = '\0';
    for (int i = 0, j = p - 1; i < j; i++, j--) {
        tmp = s[i]; 
        s[i] = s[j]; 
        s[j] = tmp;
    }
    printf("%s\n", s);
}
int main() {
    int q;
    if (scanf("%d", &q) == 1) {
        while (q--) solve();
    }
    return 0;
}