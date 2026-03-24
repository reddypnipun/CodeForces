#include <stdio.h>
 
int main() {
    int a,b,c,d,e=0;
scanf("%d %d %d %d", &a, &b, &c, &d);
if(a==b)
{
e++;
}
if(a==c)
{
e++;
}
if(a==d)
{
e++;
}
if(b==c)
{
e++;
}
if(b==d)
{
e++;
}
if(c==d)
{
e++;
}
if(e==3)
{
printf("2");
return 0;
}
if(e!=6)
{
printf("%d",e);
return 0;
}
if(e==6)
{
printf("3");
}
return 0;
}