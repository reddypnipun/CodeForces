#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,a[105]={0};
        scanf("%d",&n);
        int zero=0, freq[101]={0}, dup=0;
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
            if(a[i]==0) zero++;
            freq[a[i]]++;
            if(freq[a[i]]>=2) dup=1;
        }
        if(zero>0)
            printf("%d\n", n-zero);
        else if(dup)
            printf("%d\n", n);
        else
            printf("%d\n", n+1);
    }
}