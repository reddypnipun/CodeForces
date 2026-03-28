#include<stdio.h>
int main() {
    int n, a, c = 0;
    scanf("%d", &n);
    int m[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &m[i]);

    a = m[0];
    for (int i = 1; i < n; i++) {
        if (a > m[i]) {
            c++;
            a = m[i];
        }
    }
    a = m[0];
    for (int i = 1; i < n; i++) {
        if (a < m[i]) {
            c++;
            a = m[i];
        }
    }

    printf("%d\n", c);
    return 0;
}
