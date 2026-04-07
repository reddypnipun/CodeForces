#include <stdio.h>
int main()
{
int a,b,count=0;
int n,m;
scanf("%d %d",&n,&m);
for(a=0;a<1000;a++)
{
for(b=0;b<1000;b++)
{
if((a*a)+b==n && a+(b*b)==m)
{
count++;
}
}
}
printf("%d",count);
return 0;
}