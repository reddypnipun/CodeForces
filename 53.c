#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char c[200005];
        scanf("%s",c);

        int i=0,front=-1,k=0,ok=1;

        while(c[i]!='\0'){
            if(c[i]=='B'){
                k=0;
                while(front<i){
                    front++;
                    if(c[front]=='A'){
                        c[front]='M';
                        k=1;
                        break;
                    }
                }
                if(k==0){
                    ok=0;
                    break;
                }
            }
            i++;
        }

        if(c[i-1]!='B') ok=0;

        printf(ok?"YES\n":"NO\n");
    }
}