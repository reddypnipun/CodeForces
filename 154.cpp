#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int k, c = 0, m = 0, a;
        cin >> k;
        for (int i = 0; i < k; i++) {
            cin >> a;
            if (a >= 3) {
                m = 1;
            }
            if (a >= 2) {
                c++;
            }
        }
        if (m || c >= 2) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}