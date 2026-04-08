#include <stdio.h>
int main(void)
{
    int t;
    scanf ("%d", &t);
    while (t--){
        int n, m;
        scanf ("%d %d", &n, &m);
        int a = m + 2* n - 2;
        int b = n + 2 * m -2;
        if (n == 1 && m ==1){
            printf ("0\n");
        }
        else if (n<m){
            printf ("%d\n", a);
        }
        else{
            printf ("%d\n", b);
        }
    }
    return 0;
}