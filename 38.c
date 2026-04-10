#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, max,min;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++){
            scanf("%d",&a[i]);
            
        }
        int k;
        for (int j = 0; j < n; j++){
            k=0;
            for (int i = 0; i < n; i++)
            {
                if(j!=i){
                    k^=a[i];
                }
            }
            if(a[j]==k){
                printf("%d\n",k);
                break;
            }
        }
    }
}