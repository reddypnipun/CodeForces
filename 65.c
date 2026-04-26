#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int n,a[15];
        scanf("%d",&n);

        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);

        if(a[0]==1) printf("Yes\n");
        else printf("No\n");
    }
}