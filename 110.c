#include<stdio.h>
int main(){
    int n,m;
    scanf("%d",&n);
    int a[n],b[n];

    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<n;i++){
        m=a[i];
        b[m-1]=i+1;
    }
    for(int i=0;i<n;i++) printf("%d ",b[i]);
    return 0;
}