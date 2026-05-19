#include <stdio.h>
void solve() {
    int n;
    char s[105];
    scanf("%d", &n);
    scanf("%s", s);
    int count = 0;
    int flag = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '.') {
            count++;
        }
        if (i < n - 2 && s[i] == '.' && s[i+1] == '.' && s[i+2] == '.') {
            flag = 1;
        }
    }
    if (flag) {
        printf("2\n");
    } else {
        printf("%d\n", count);
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