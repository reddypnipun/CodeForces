#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf ("%d", &t);
    while (t--){
        int n;
        long long int s1 = 0, s2 = 0;
        scanf ("%d", &n);
        while (n--){
            long long int a;
            scanf ("%lld", &a);
            if (a > 0){
                s1 += a;
            }
            else if (a < 0){
                s2 += a;
            }
        }
        printf ("%lld\n",llabs((s1) + (s2)));
    }
}