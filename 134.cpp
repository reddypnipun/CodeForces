#include <bits/stdc++.h>
using namespace std;
void s(){
    int n;
    cin>>n;
    vector<int> a(n),b(n),u(n,0);
    for(int &x:a)cin>>x;
    for(int &x:b)cin>>x;
    long long r=0;
    for(int i=0;i<n;i++){
        int f=0,k=0;
        for(int j=0;j<n;j++){
            if(u[j])continue;
            if(a[j]<=b[i]){
                r+=k;
                u[j]=1;
                f=1;
                break;
            }
            k++;
        }
        if(!f){
            cout<<"-1\n";
            return;
        }
    }
    cout<<r<<"\n";
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)s();
    return 0;
}