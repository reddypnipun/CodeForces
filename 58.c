#include <stdio.h>
int main()
{
    int t;
    scanf ("%d", &t);
    while (t--){
        int n, count = 1, num= 0;
        scanf ("%d", &n);
        while (count < n+1){
            num++ ;
            if (num % 10 == 3 || num% 3 == 0){}
            else{
                count++;
            }
        }printf ("%d\n", num);
    }
    return 0;
}