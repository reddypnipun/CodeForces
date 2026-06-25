#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    vector<int> freq(n * n + 1, 0);
    int max_f = 0;
    
    for (int i = 0; i < n * n; ++i) {
        int a;
        cin >> a;
        freq[a]++;
        if (freq[a] > max_f) {
            max_f = freq[a];
        }
    }
    if (max_f <= n * n - n) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}