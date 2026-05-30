#include <stdio.h>
int main(){
int k,r,m=0;
scanf("%d",&k);
while(k--){
scanf("%d",&r);
if(r>m)m=r;
}
printf("%d\n",m>25?m-25:0);
return 0;
}