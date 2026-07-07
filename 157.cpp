#include <bits/stdc++.h>
using namespace std;
void f() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<char> v;
    for (char c : s) {
        if (!v.empty() && v.back() == c) {
            v.pop_back();
        } else {
            v.push_back(c);
        }
    }
    if (v.empty()) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        f();
    }
    return 0;
}