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
            
            int a[205];
            for (int i = 0; i < n; i++) {
                cin >> a[i];
            }
            
            sort(a, a + n);
            reverse(a, a + n);
            
            int d = 0;
            for (int i = 0; i < n - 1; i++) {
                if (a[i] == a[i + 1]) {
                    d = 1;
                    break;
                }
            }
            
            if (d == 1) {
                cout << -1 << "\n";
            } else {
                for (int i = 0; i < n; i++) {
                    cout << a[i] << " ";
                }
                cout << "\n";
            }
        }
    }
    
    return 0;
}