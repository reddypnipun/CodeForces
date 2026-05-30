#include <stdio.h>
#include <string.h>
#define MAXN 3005
int max(int a, int b){
    return a > b ? a : b;
}
int dp[MAXN], ndp[MAXN];
int main(){
    int T;
    scanf("%d", &T);
    while(T--){
        int n, x, s;
        char u[MAXN];
        scanf("%d %d %d", &n, &x, &s);
        scanf("%s", u);
        for(int i = 0; i <= x; i++) dp[i] = -1;
        dp[0] = 0;
        for(int i = 0; i < n; i++){
            for(int k = 0; k <= x; k++) ndp[k] = dp[k];
            for(int k = 0; k <= x; k++){
                if(dp[k] < 0) continue;
                int seated = dp[k];
                if(u[i] == 'I'){
                    if(k < x)
                        ndp[k + 1] = max(ndp[k + 1], seated + 1);
                }
                else if(u[i] == 'E'){
                    if((long long)k * s - seated > 0)
                        ndp[k] = max(ndp[k], seated + 1);
                }
                else{
                    if(k < x)
                        ndp[k + 1] = max(ndp[k + 1], seated + 1);
                    if((long long)k * s - seated > 0)
                        ndp[k] = max(ndp[k], seated + 1);
                }
            }
            for(int k = 0; k <= x; k++) dp[k] = ndp[k];
        }
        int ans = 0;
        for(int k = 0; k <= x; k++)
            if(dp[k] > ans) ans = dp[k];

        printf("%d\n", ans);
    }
    return 0;
}