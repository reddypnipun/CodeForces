#include <stdio.h>
#include <string.h>
int isprime(int k){
    if(k==2 ) return 1;
for (int i = 2; i*i <=k; i++)
{
    if(k%i==0) return 0;

}
return 1;
}
int main()
{
    int t;
    scanf(" %d", &t);
    while (t--)
    {
        int n;
        scanf(" %d", &n);
        for(int i=2;i<100000;i++){
            if(isprime(i)){
                if(!isprime(n+i)){
                    printf("%d\n",i);
                    break;
                }
            }
        }
    }
}