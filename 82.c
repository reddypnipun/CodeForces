#include <stdio.h>
int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    char a[10][11];
    for (int i = 0; i < r; i++) {
        scanf("%s", a[i]);
    }
    int x[10] = {0};
    int y[10] = {0};
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (a[i][j] == 'S') {
                x[i] = 1;
                y[j] = 1;
            }
        }
    }
    int z = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (!x[i] || !y[j]) {
                z++;
            }
        }
    }
    printf("%d", z);
    return 0;
}