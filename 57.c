#include <stdio.h>
#include <string.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        char a[200001], b[200001];
        scanf("%s", a);
        scanf("%s", b);
        int ans = 0;
        for(int i = 0; i < n; i++){
            int vertical = (a[i] != b[i]);
            int horizontal = 999;
            if(i + 1 < n){
                horizontal = (a[i] != a[i+1]) + (b[i] != b[i+1]);
            }
            if(horizontal < vertical){
                ans += horizontal;
                i++;
            } else {
                ans += vertical;
            }
        }
        printf("%d\n", ans);
    }

    return 0;
}