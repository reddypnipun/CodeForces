#include <iostream>
#include <string>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        int a = 0;
        while (a < n && s[a] == 'R') {
            a++;
        }
        cout << a + 1 << "\n";
    }
    return 0;
}