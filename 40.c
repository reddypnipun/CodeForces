#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        int j=1;
        for (int i = 1; i < n; i+=2)
        {
            a[i]=j;
            j++;
        }
        for (int i = 0; i < n; i+=2)
        {
            a[i]=j;
            j++;
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d ",a[i]);
        }
        printf("\n");
    }
}