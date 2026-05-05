#include <stdio.h>
int main(){
    int t;
    int count;
    scanf("%d",&t);
    while(t--){
        count =0;
    char b[4];
        scanf("%s",&b);
   if(b[0]!='y'&& b[0]!='Y')count ++;
   if(b[1]!='e'&& b[1]!='E')count ++;
   if(b[2]!='s'&& b[2]!='S')count ++;
   if(count==0) printf("YES\n");
   else printf("NO\n");
}}