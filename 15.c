#include <stdio.h>
#include <stdlib.h>


int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if(a==1){
            printf("1\n");
        }
        else{
        a-=1;
        b-=c;
        b=abs(b);
        c-=1;
        b+=c;
        if(b==a) printf("3\n");
        else if(b>a) printf("1\n");
        else printf("2\n");
}
    }

    return 0;
}