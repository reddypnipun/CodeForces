#include <iostream>
using namespace std;
void s() {
    int n;
    cin >> n;
    int a = 0, b = 9;
    for (int i = 0; i < n; i++) {
        int v;
        cin >> v;
        if (v > a) a = v;
        if (v < b) b = v;
    }
    
    cout << a - b + 1 << "\n";
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
