#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,count;
    scanf("%d", &t);

    while (t--)
    {
        count=0;
        int n;
        scanf("%d", &n);
        char a[2][n], c;
        for (int j = 0; j < 2; j++)
        {
            for (int i = 0; i < n; i++)
            {
                scanf(" %c", &a[j][i]);
                if(a[j][i]=='G'|| a[j][i]=='B') a[j][i]='A';
            }
        }
         for (int i = 0; i < n; i++){
            if(a[0][i]!=a[1][i] ){
            count++;
            break;
            }
        }
        if(count!=0) printf("NO\n");
        else printf("YES\n");
    }
        return 0;
    }
    