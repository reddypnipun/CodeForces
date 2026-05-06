#include <stdio.h>
int main(){
    int t,n;
    int count;
    scanf("%d",&t);
    while(t--){
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n-1; i++){
    if(a[i]!=a[i+1]){
        if(i+2<n){
        if( a[i+1]!=a[i+2]) count =i+1;
        else count =i;
        break;
    }
        else{
            if( a[i+1]!=a[i-1]) count =i+1;
            else count =i;
            break;
        }
    }
    }
    printf("%d\n",count+1);
}}