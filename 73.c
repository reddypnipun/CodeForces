#include <stdio.h>
int main(){
    int n,j=0;
    long long k;
    scanf("%d %lld",&n,&k);
    int b[n];
    for (int i = 0; i < n; i++) {
        scanf("%d",&b[i]);
    }
    for (int i = 0; i < n; i++){
        long long tri = (long long)(i+1)*(i+2)/2;
       if(tri>=k){
        j=i;
        break;
       }}
       if(j!=0)
    k -= (long long)j*(j+1)/2;
    printf("%d\n",b[k-1]);
}