#include <iostream>
#include <string>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, a = 0, b = 0, i = 0;
        string c;
        cin >> n >> c;
        while (i < n) {
            if (c[i] == '1') {
                int j = i;
                while (j + 1 < n) {
                    if (c[j + 1] == '1') {
                        j++;
                    } else if (c[j + 1] == '0' && j + 2 < n && c[j + 2] == '1') {
                        j += 2;
                    } else {
                        break;
                    }
                }
                int l = j - i + 1;
                b += l;
                a += (l / 2) + 1;
                i = j + 1;
            } else {
                i++;
            }
        }
        cout << a << " " << b << "\n";
    }
    return 0;
}