#include <stdio.h>
#include <string.h>

int main(){
int t;
scanf("%d",&t);
while(t--){
char s[55];
scanf("%s",s);

int count=1,ok=1;

for(int i=1;s[i];i++){
if(s[i]==s[i-1]) count++;
else{
if(count<2){ ok=0; break; }
count=1;
}
}
if(count<2) ok=0;

printf(ok?"YES\n":"NO\n");
}
}