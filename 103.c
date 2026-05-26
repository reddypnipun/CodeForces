#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, a = 0, c[26] = {0};
        char s[505];
        scanf("%d %s", &n, s);
        for (int i = 0; i < n; i++) {
            c[s[i] - 'A']++;
        }
        for (int i = 0; i < 26; i++) {
            if (c[i] > i) a++;
        }
        printf("%d\n", a);
    }
    return 0;
}