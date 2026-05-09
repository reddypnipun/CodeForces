#include <stdio.h>
int main(){
    int t,n;
    int l1,r1,l2,r2;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d %d",&l1,&r1,&l2,&r2);
        if(l1==l2){
            if(l1+1<=r1) printf("%d %d\n",l1+1,l1);
            else printf("%d %d\n",l1,l1+1);
        }
        else{
            printf("%d %d\n",l1,l2);
        }
        }
    }