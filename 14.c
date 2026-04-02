#include<stdio.h>
int main(){
    long long int r,c;
    scanf("%lld %lld",&r,&c);
    if(c==1){
        printf("%lld",r-1);
        return 0;
    }
    
    printf("%lld",r*(c-1));
}
