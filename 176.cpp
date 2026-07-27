#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s, t;
    if (cin >> s >> t) {
        int x1 = s[0], y1 = s[1];
        int x2 = t[0], y2 = t[1];
        cout << max(abs(x1 - x2), abs(y1 - y2)) << "\n";
        while (x1 != x2 || y1 != y2) {
            string m = "";
            if (y1 < y2) {
                m += "U";
                y1++;
            } else if (y1 > y2) {
                m += "D";
                y1--;
            }
            if (x1 < x2) {
                m = "R" + m;
                x1++;
            } else if (x1 > x2) {
                m = "L" + m;
                x1--;
            }
            cout << m << "\n";
        }
    }
    return 0;
}