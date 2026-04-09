#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a,b,c, sum = 0;
        scanf("%d %d %d",&a,&b,&c);
        if(a==b && c%2==0) sum++;
        else if(c==b && a%2==0) sum++;
        else if(a==c && b%2==0) sum++;
        else{
            if(a>b && a>c && b+c==a)sum++;
            else if(b>c && b>a && a+c==b)sum++;
            else if(c>a &&c>b && a+b==c)sum++;
        }
        if(sum!=0) printf("YES\n");
        else printf("NO\n");
    }
}