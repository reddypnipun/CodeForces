#include<stdio.h>
int main(){
    int y,w;
    scanf("%d %d",&y,&w);
    int max=(w>y?w:y);
        int a,b;
        a=7-max;
        b=6;
        int i=2;
        while(i<=a){
            if(a%i==0 && b%i==0){
                a/=i;
                b/=i;
            }
            i++;
        }
        printf("%d/%d",a,b);
    }