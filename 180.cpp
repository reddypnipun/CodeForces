#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, a, b, cnt = 0;
    if (cin >> n >> a >> b) {
        vector<char> s(n);
        for (int i = 0; i < n; i++) cin >> s[i];
        
        for (int i = 0; i < n; i++) {
            if (s[i] == '.') {
                if (i + 1 < n && s[i + 1] == '.') {
                    if (b > a) { s[i] = 'B'; b--; cnt++; }
                    else { s[i] = 'A'; a--; cnt++; }
                    
                    while (i + 1 < n && s[i + 1] == '.') {
                        if (s[i] == 'B' && a > 0) { s[i + 1] = 'A'; a--; cnt++; }
                        else if (s[i] == 'A' && b > 0) { s[i + 1] = 'B'; b--; cnt++; }
                        else break;
                        i++;
                    }
                } else {
                    if (a > b && a > 0) { s[i] = 'A'; a--; cnt++; }
                    else if (b > 0) { s[i] = 'B'; b--; cnt++; }
                    else if (a > 0) { s[i] = 'A'; a--; cnt++; }
                }
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}