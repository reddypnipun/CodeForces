#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    int a,b,c;
    for(int i=0;i<t;i++){
        int m=0;
        scanf("%d %d %d",&a,&b,&c);
        if(a+b==c) m++;
        else if(b+c==a) m++;
        else if(a+c==b) m++
        if(m==1) printf("YES\n")
        else printf("NO\n")
    }
    return 0;
}