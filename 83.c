#include <stdio.h>
int main(){
    int t;
    char n[7];
    scanf("%d",&t);
    while(t--){
        scanf("%s",&n);
        int i=0,sumf=0;
        while(n[i]!='\0'){
            if(i<3){
                sumf+=(n[i]-'0');
            }
            else{
                sumf-=(n[i]-'0');
            }
            i++;
        }
        if(sumf==0) printf("YES\n");
        else printf("NO\n");
    }
}