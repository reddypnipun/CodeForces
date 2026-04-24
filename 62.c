#include <stdio.h>
#include<stdlib.h>
int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int a,b,count=0;
        scanf("%d %d",&a,&b);
        int k=abs(b-a);
        if(k%10>0)count ++;
        count+=k/10;
        printf("%d\n",count);
    }
}