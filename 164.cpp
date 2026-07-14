#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    if (cin >> n) {
        vector<string> r, w, m, c;
        for (int i = 0; i < n; i++) {
            string name, type;
            cin >> name >> type;
            if (type == "rat") r.push_back(name);
            else if (type == "woman" || type == "child") w.push_back(name);
            else if (type == "man") m.push_back(name);
            else if (type == "captain") c.push_back(name);
        }
        for (string s : r) cout << s << "\n";
        for (string s : w) cout << s << "\n";
        for (string s : m) cout << s << "\n";
        for (string s : c) cout << s << "\n";
    }
    return 0;
}
