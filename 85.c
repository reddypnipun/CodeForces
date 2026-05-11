#include <stdio.h>
#include<stdlib.h>
int sum(int n,int m,int a[n][m],int r,int c){
    int sum=0;
    int dr=1;
    sum+=a[r][c];
    while(1){
        if(r+dr<n){
            if(c+dr<m) sum+=a[r+dr][c+dr];
            if(c-dr>-1)sum+=a[r+dr][c-dr];
        }
        if(r-dr>=0){
            if(c+dr<m) sum+=a[r-dr][c+dr];
            if(c-dr>-1)sum+=a[r-dr][c-dr];
        }
        if(r+dr>=n && r-dr<0) break;
        dr++;
    }
    return sum;
}
int main(){
    int t;
    int n,m;
    scanf("%d",&t);
    while(t--){
        int k;
        int max=0;
        scanf("%d %d",&n,&m);
        int a[n][m];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++) scanf("%d",&a[i][j]); 
            
            for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                k=sum(n,m,a,i,j);
                if(k>max) max=k;
            }}
            printf("%d\n",max);
    }
}