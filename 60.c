#include <stdio.h>

int max(int a,int b,int c){
    if(a>=b && a>=c) return a;
    if(b>=a && b>=c) return b;
    return c;
}

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);

        int mx = max(a,b,c);

        int A = (a==mx && a!=b && a!=c) ? 0 : mx-a+1;
        int B = (b==mx && b!=a && b!=c) ? 0 : mx-b+1;
        int C = (c==mx && c!=a && c!=b) ? 0 : mx-c+1;

        printf("%d %d %d\n",A,B,C);
    }
}