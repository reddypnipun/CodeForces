#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        char s[200005];
        scanf("%s",s);
        long long zero=0, one=0;
        long long cur=1, maxCon=1;
        if(s[0]=='0') zero++;
        else one++;
        for(int i=1;i<n;i++){
            if(s[i]=='0') zero++;
            else one++;
            if(s[i]==s[i-1]) cur++;
            else cur=1;
            if(cur>maxCon) maxCon=cur;
        }
        long long ans1 = zero * one;
        long long ans2 = maxCon * maxCon;

        if(ans1 > ans2) printf("%lld\n", ans1);
        else printf("%lld\n", ans2);
    }
    return 0;
}