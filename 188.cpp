#include <bits/stdc++.h>
using namespace std;
void f() {
    int n;
    cin >> n;
    vector<int> cnt(1005, 0);
    long long sum = 0;
    int mx = 0, val = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        cnt[x]++;
        sum += x;
        if (cnt[x] > mx) {
            mx = cnt[x];
            val = x;
        }
    }
    int oth = n - mx;
    long long ans = sum;
    if (mx > oth + 2) {
        ans -= (long long)(mx - oth - 2) * val;
    }
    cout << ans << "\n";
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    if (cin >> t) {
        while (t--) f();
    }
    return 0;
}