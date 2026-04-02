#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        char s[105];
        scanf("%s", s);

        int answers = 0;
        int valid = 1;

        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == 'A') {
                answers++;
            } else {
                if (answers > 0) {
                    answers--;
                } else {
                    valid = 0;
                    break;
                }
            }
        }

        if (valid) printf("Yes\n");
        else printf("No\n");
    }

    return 0;
}