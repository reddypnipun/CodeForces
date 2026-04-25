#include <stdio.h>
int main()
{
    int t;
    scanf ("%d", &t);
    while (t--){
        int x[3],y[3];
        for (int i = 0; i < 3; i++){
            scanf ("%d %d", &x[i], &y[i]);
        }
        int a = 0, b = 0;
        for (int i = 0; i < 1; i++){
            if (x[i] == x[i+1]||x[i] == x[i+2]||x[i+2] == x[i+1]){
                a = 1;
            }
            if (y[i] == y[i+1]||y[i] == y[i+2]||y[i+2] == y[i+1]){
                b= 1;
            }
        }
        if (a ==1 && b == 1){
            printf ("NO\n");
        }
        else{
            printf ("YES \n");
        }
    }
    return 0;
}