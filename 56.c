#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long x,y;
        scanf("%lld %lld",&x,&y);
        if(y/x == 2) printf("NO\n");
        else printf("YES\n");
    }
    return 0;
}