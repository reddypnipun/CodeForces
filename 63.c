#include <stdio.h>
int main()
{
    int t;
    scanf ("%d", &t);
    while (t--){
        int a;
        scanf ("%d", &a);
        printf ("%d\n", (a+1)/10);
    }
    return 0;
}