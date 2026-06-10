#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void s() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.rbegin(), a.rend());
    for (int i = 0; i < n - 2; i++) {
        if (a[i] % a[i+1] != a[i+2]) {
            cout << "-1\n";
            return;
        }
    }
    cout << a[0] << " " << a[1] << "\n";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if (cin >> t) {
        while (t--) {
            s();
        }
    }
    return 0;
}