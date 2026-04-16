#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long a,b,c,d;
        scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
        long long x = a*d;
        long long y = b*c;
        if(x==y)
            printf("0\n");
        else if(a==0 || c==0)
            printf("1\n");
        else if(x%y==0 || y%x==0)
            printf("1\n");
        else
            printf("2\n");
    }
}