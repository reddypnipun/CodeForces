#include <iostream>
#include <algorithm>
using namespace std;
void s() {
    int x, n, m;
    cin >> x >> n >> m;
    if(x-(10*m)<=0){
        cout << "YES\n";
        return;
    }
    while (n--) {
        x = x / 2 + 10;
    }
    while (m--) {
        x = x - 10;
    }
    if (x > 0) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
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