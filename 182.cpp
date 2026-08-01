#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<string> v={"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
     int n;
    cin >> n;
    int k=5;
    int c=0;
    while((n-k)>0) {
        n-=k;   
        c++;
        k*=2;
    }
    int ans=ceil(n/pow(2,c));
    cout << v[ans-1] << "\n";
    return 0;
}