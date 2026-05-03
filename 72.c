#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char s[4];
        scanf("%s",s);
        int a=s[0]-'0';
        int b=s[2]-'0';
        printf("%d\n",a+b);
    }
    return 0;
}