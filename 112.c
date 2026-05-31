#include <stdio.h>
char s[300005];
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        scanf("%s", s);
        int n = 0, d0 = 0, d1 = 0;
        for (int i = 0; s[i]; i++) {
            n++;
            if (s[i] == '2') d0++;
            else if (s[i] != '4') d1 = (d0 > d1 ? d0 : d1) + 1;
        }
        printf("%d\n", n - (d0 > d1 ? d0 : d1));
    }
    return 0;
}