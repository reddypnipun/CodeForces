#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;
        vector<int> a(n), c;
        for (int i = 0; i < n; i++) cin >> a[i];
        int x = 1;
        for (int i = 1; i < n; i++) {
            if (a[i] == a[i - 1]) {
                x++;
            } else {
                c.push_back(x);
                x = 1;
            }
        }
        c.push_back(x);
        sort(c.begin(), c.end());
        int m = c.size(), r = 0;
        long long s = n;
        for (int i = 0; i < m; i++) {
            if (i == 0 || c[i] > c[i - 1]) {
                long long d = m - i;
                long long rm = k - s;
                if (rm % d == 0) {
                    long long dl = rm / d;
                    if (dl + c[i] - 1 >= 0) {
                        r++;
                    }
                }
            }
            s -= c[i];
        }
        cout << r << "\n";
    }
    return 0;
}