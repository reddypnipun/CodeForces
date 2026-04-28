#include <stdio.h>
#include <string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        char s[105];
        scanf("%d",&n);
        scanf("%s",s);
        int sum = s[0]-'0';
        for(int i=1;i<n;i++){
            int x = s[i]-'0';
            if(sum>0){
                printf("-");
                sum -= x;
            }else{
                printf("+");
                sum += x;
            }
        }
        printf("\n");
    }
    return 0;
}