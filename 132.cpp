#include <iostream>
using namespace std;
void slv(){
    long long p,q;
    cin>>p>>q;
    long long s=2*p+4*q+1;
    for(long long d=3;d*d<=s;d+=2){
        if(s%d==0){
            long long n=(d-1)/2;
            long long m=(s/d-1)/2;
            if(q<=m*(n+1)&&q<=n*(m+1)){
                cout<<n<<" "<<m<<"\n";
                return;
            }
        }
    }
    cout<<"-1\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if(cin>>t){
        while(t--)slv();
    }
    return 0;
}
