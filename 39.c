#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        long long a,b,c,x,y;
        scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&x,&y);

        long long need = 0;

        if(x > a) need += (x - a);
        if(y > b) need += (y - b);

        if(need <= c) printf("YES\n");
        else printf("NO\n");
    }
}