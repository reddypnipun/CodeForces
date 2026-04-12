#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        if(n%7==0) printf("%d\n",n);
        else{
            int k=n/7;
            k*=7;
            int last1=(k/10)%10;
            int last2=(n/10)%10;
            if((last1) == (last2)) printf("%d\n",k);
            else printf("%d\n",(k+7));
        }
    }
}