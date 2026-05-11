#include <stdio.h>
#include<stdlib.h>
int compare(char *s1,char*s2){
    int i=0,sum=0;
    while(s1[i]!='\0'){
        sum+=abs(s1[i]-s2[i]);
        i++;
    }
    return sum;
}
int main(){
    int t;
    int n,m;
    scanf("%d",&t);
    while(t--){
        int min=99999;
        scanf("%d %d",&n,&m);
        char a[n][m+1];
        for (int i = 0; i < n; i++)
        {
               scanf("%s", a[i]) ;
        }
        
        for (int i = 0; i < n; i++){
            for (int j = i + 1; j < n; j++) {
            int k=compare(a[i],a[j]);
            if(min>k) min=k;
        }}
        printf("%d\n",min);
    }
}