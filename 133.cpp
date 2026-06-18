#include <bits/stdc++.h>
using namespace std;
void s(){
    int n;
    cin>>n;
    long long r=0;
    int m=1e9,x;
    for(int i=0;i<n;i++){
        cin>>x;
        m=min(m,x);
        r+=m;
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
