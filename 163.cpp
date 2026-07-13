#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    if (cin >> n) {
        vector<int> d(n - 1);
        for (int i = 0; i < n - 1; i++) {
            cin >> d[i];
        }
        int a, b;
        cin >> a >> b;
        int s = 0;
        for (int i = a - 1; i < b - 1; i++) {
            s += d[i];
        }
        cout << s << "\n";
    }
    return 0;
}