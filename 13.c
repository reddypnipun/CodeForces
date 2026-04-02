#include<stdio.h>
int main(){
    int t,sum;
    scanf("%d",&t);
    while(t--){
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n];
    sum=0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    if(m>sum){
        printf("0\n");

    }
    else{
        printf("%d\n",sum-m);
    }

}}