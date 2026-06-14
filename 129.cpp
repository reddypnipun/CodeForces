#include <bits/stdc++.h>
using namespace std;

void s() {
    int n;
    cin >> n;
    
    bool y = false;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a == 100) y = true;
    }
    
    if (y) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            s();
        }
    }
    return 0;
}