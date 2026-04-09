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
        max=a[0];
        min=a[0];
        for (int i = 1; i < n; i++)
        {
            if(max<a[i])max=a[i];
            if(min>a[i])min=a[i];
        } 
        printf("%d\n",max-min);
    }
}