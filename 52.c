#include <stdio.h>
#include <stdlib.h>

int main(){
int tc;
scanf("%d",&tc);
while(tc--){
int n;
scanf("%d",&n);
int o=0,t=0;
if(n%2){ o++; n--; }
t=n/2;
while(abs(t-o)>1){
t--;
o+=2;
}
char s[2005];
int k=0;
if(o>t){
for(int i=0;i<t;i++){ s[k++]='1'; s[k++]='2'; }
s[k++]='1';
}
else if(t>o){
for(int i=0;i<o;i++){ s[k++]='2'; s[k++]='1'; }
s[k++]='2';
}
else{
for(int i=0;i<t;i++){ s[k++]='2'; s[k++]='1'; }
}
s[k]='\0';
printf("%s\n",s);
}
}