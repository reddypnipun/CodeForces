#include <stdio.h>
#include <stdlib.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);

        int r=0,l=0,u=0,d=0;

        for(int i=0;i<n;i++){
            int x,y;
            scanf("%d%d",&x,&y);

            if(x>0 && x>r) r=x;
            if(x<0 && -x>l) l=-x;
            if(y>0 && y>u) u=y;
            if(y<0 && -y>d) d=-y;
        }

        printf("%d\n",2*(r+l+u+d));
    }
}