#include <iostream>
#include <vector>
using namespace std;
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    vector<int> ans;
    int f = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (((f & 1) ? -a[i] : a[i]) > 0) {
            ans.push_back(i + 1);
            f ^= 1;
        }
    }
    cout << ans.size() << "\n";
    for (int x : ans) cout << x << " ";
    cout << "\n";
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    if (cin >> t) {
        while (t--) solve();
    }
    return 0;
}