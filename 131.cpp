#include <iostream>
using namespace std;
void s() {
    long long n;
    cin >> n;
    int p[12] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 22, 11};
    long long a = p[n % 12];
    if (a <= n) {
        cout << a << " " << n - a << "\n";
    } else {
        cout << "-1\n";
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
return 0;}
