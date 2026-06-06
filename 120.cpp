#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            
            long long s = 0;
            int l = -1;
            
            for (int i = 0; i < n; i++) {
                long long v;
                cin >> v;
                
                if (v > 1) {
                    s = (s + v) % 676767677;
                    l = i;
                }
            }
            
            if (l < n - 1) {
                s = (s + 1) % 676767677;
            }
            
            cout << s << "\n";
        }
    }
    
    return 0;
}