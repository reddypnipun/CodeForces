#include <iostream>
#include <algorithm>
using namespace std;
void s() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int x = max(a, b);
    int y = min(a, b);
    int z = max(c, d);
    int w = min(c, d);
    if (x == z && y + w == x) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
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