#include<stdio.h>
int callargest(int n,char c[n+1]){
int max=c[0];
int i=1;
while(c[i]!='\0'){
    if(c[i]>max){
        max=c[i];
    }
    i++;
}
return (max-'a'+1);
}
int main(){
int t,n;
scanf("%d",&t);
for(int i=0;i<t;i++){
    scanf("%d",&n);
    char c[n+1];
    scanf("%s", c);
    printf("%d\n",callargest(n,c));
}
}