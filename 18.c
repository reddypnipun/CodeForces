#include <stdio.h>
#include <string.h>

int main()
{
    int t,p1=0,p2=0,p3=0;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf(" %d", &a[i]);
        }
        int m=(10-n);
        int k=m*(m-1)*3;
        printf("%d\n",k);
    }}