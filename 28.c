#include <stdio.h>
int main(void){
    int t;
    scanf ("%d", &t);
    while (t--){
        int n, m;
        scanf ("%d %d", &n, &m);
        if ((m + n) % 2== 0) printf("Tonya\n");
        else printf ("Burenka\n");
    }
}
