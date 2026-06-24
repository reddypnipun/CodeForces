#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> a;
    int l = 0, r = n - 1;
    while (l < r) {
        while (l < r && s[l] == '0') l++;
        while (l < r && s[r] == '1') r--;
        if (l < r) {
            a.push_back(l + 1);
            a.push_back(r + 1);
            l++;
            r--;
        }
    }
    if (a.empty()) {
        cout << "Bob\n";
    } else {
        cout << "Alice\n" << a.size() << "\n";
        sort(a.begin(), a.end());
        for (int i = 0; i < a.size(); i++) {
            cout << a[i] << (i + 1 == a.size() ? "" : " ");
        }
        cout << "\n";
    }
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