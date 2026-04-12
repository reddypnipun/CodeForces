#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        if(n/100==0) printf("%d\n",n%10);
        else{
            int c=10,min=10;
            while(n>0){
                if(min>n%10) min=n%10;
                n/=10;
            }
            printf("%d\n",min);
        }
    }
}