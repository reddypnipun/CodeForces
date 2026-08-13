#include <bits/stdc++.h>
using namespace std;
void f() {
    string s, a = "";
    if (!(cin >> s)) return;
    for (int i = 0; i < (int)s.size(); i++) {
        if (s[i] == '.') {
            a += '0';
        } else {
            if (s[i + 1] == '.') a += '1';
            else a += '2';
            i++;
        }
    }
    cout << a << "\n";
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    f();
    return 0;
}