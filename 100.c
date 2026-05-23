#include <stdio.h>
int main() {
    int t, n;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        for (int i = 1; i <=n; i++)
        {
            printf("%d ", i);
        }  
        printf("\n");      
    }
    return 0;
}