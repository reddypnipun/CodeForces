#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            
            int v[1005];
            for (int i = 0; i < n; i++) {
                cin >> v[i];
            }
            
            sort(v, v + n);
            
            int d = v[n - 1] - v[0];
            int a = (d + 1) / 2;
            
            cout << a << "\n";
        }
    }
    
    return 0;
}