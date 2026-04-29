#include <stdio.h>
#include <string.h>
int main(){
char s[55];
scanf("%s",s);
int n=strlen(s);
int a=0;
for(int i=0;i<n;i++)if(s[i]=='a')a++;
int nonA=n-a;
int ans=a+(nonA<a-1?nonA:a-1);
printf("%d",ans);
}