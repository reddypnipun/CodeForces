#include <stdio.h>
int main(){
    int t,n;
    int count;
    scanf("%d",&t);
    while(t--){
        char a[3];
        count=0;
        scanf("%s",a);
            count=25*(a[0]-'a');
            if(a[1]>a[0]) count +=a[1]-'a';
            else count+=(a[1]-'a')+1;
            printf("%d\n",count);
        }
    }