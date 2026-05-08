#include<stdio.h>

int check(int a[2][2]){
    return(a[0][0]<a[0][1] &&
           a[1][0]<a[1][1] &&
           a[0][0]<a[1][0] &&
           a[0][1]<a[1][1]);
}

void rotate(int a[2][2]){
    int t=a[0][0];
    a[0][0]=a[1][0];
    a[1][0]=a[1][1];
    a[1][1]=a[0][1];
    a[0][1]=t;
}

int main(){
    int t;
    scanf("%d",&t);

    while(t--){
        int a[2][2],ok=0;

        scanf("%d%d",&a[0][0],&a[0][1]);
        scanf("%d%d",&a[1][0],&a[1][1]);

        for(int i=0;i<4;i++){
            if(check(a)){
                ok=1;
                break;
            }
            rotate(a);
        }

        if(ok) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}