#include <bits/stdc++.h>
using namespace std;
void s(){
    int n;
    cin>>n;
    long long c=0,m=0,x;
    cin>>x;
    c=x;m=x;
    for(int i=1;i<n;i++){
        cin>>x;
        if(c>x) c+=x;
        else c=x;
        if(c>m) m=c;
    }
    cout<<m<<"\n";
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)s();
    return 0;
}