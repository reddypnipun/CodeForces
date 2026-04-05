#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t, c = 0;
    scanf("%d", &t);
    while (t--)
    {
        c = 0;
        int n;
        scanf("%d", &n);
        n--;
        int a[3];
        for (int i = 0; i < 3; i++)
        {
            scanf("%d",&a[i]);
        }
        
        if (a[n] == 0)
        {
            printf("NO\n");
            continue;
        }
        int k = a[n] - 1;
        if (a[k] == 0)
        {
            printf("NO\n");
            continue;
        }
        printf("YES\n");
    }
}