#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    int non_zero_count = 0;
    int xor_sum = 0;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] > 0) {
            non_zero_count++;
        }
        xor_sum ^= a[i];
    }
    if (non_zero_count <= 1) {
        cout << 0 << "\n";
    } else if (xor_sum == 0) {
        cout << 1 << "\n";
    } else {
        int winning_moves = 0;
        for (int i = 0; i < n; ++i) {
            if ((xor_sum ^ a[i]) < a[i]) {
                winning_moves++;
            }
        }
        long long MOD = 998244353;
        cout << (winning_moves % MOD) << "\n";
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}