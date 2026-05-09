#include <stdio.h>
#include <math.h>
int main(){
    int n;
    int countp=0,countn=0;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>0) countp++;
        if(a[i]<0) countn++;
    }
    if(ceil(n/2.0)>countp && ceil(n/2.0)>countn) printf("0"); 
    else if(ceil(n/2.0)<=countp) printf("1");
    else printf("-1");
    }