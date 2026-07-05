#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, c = 0, m = 0, a;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> a;
            if (a >= m) {
                c++;
                m = a;
            }
        }
        cout << c << "\n";
    }
    return 0;
}