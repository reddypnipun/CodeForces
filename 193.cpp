#include <bits/stdc++.h>
using namespace std;
void f() {
    string s;
    if (!(cin >> s)) return;
    vector<int> p;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '@') p.push_back(i);
    }
    if (p.empty() || p[0] == 0 || p.back() == s.size() - 1) {
        cout << "No solution\n";
        return;
    }
    for (int i = 1; i < p.size(); i++) {
        if (p[i] - p[i - 1] < 3) {
            cout << "No solution\n";
            return;
        }
    }
    string r = "";
    int l = 0;
    for (int i = 0; i < (int)p.size() - 1; i++) {
        r += s.substr(l, p[i] + 2 - l) + ",";
        l = p[i] + 2;
    }
    r += s.substr(l);
    cout << r << "\n";
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    f();
    return 0;
}