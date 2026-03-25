#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    char a[n][m + 1];
    for (int i = 0; i < n; i++)
        scanf("%s", a[i]);

    int p[6], h = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == '*') {
                p[h++] = i;  
                p[h++] = j; 
            }
        }
    }

    int r1 = p[0], c1 = p[1];
    int r2 = p[2], c2 = p[3];
    int r3 = p[4], c3 = p[5];

    int row, col;

    if (r1 == r2) row = r3;
    else if (r1 == r3) row = r2;
    else row = r1;

    if (c1 == c2) col = c3;
    else if (c1 == c3) col = c2;
    else col = c1;

    printf("%d %d\n", row + 1, col + 1);
    return 0;
}
