#include <stdio.h>
int main(){
int t;
scanf("%d",&t);
while(t--){
int x,y;
scanf("%d %d",&x,&y);
int s=(y+1)/2;
int c=s*15-y*4;
if(x>c)s+=(x-c+14)/15;
printf("%d\n",s);
}
return 0;
}