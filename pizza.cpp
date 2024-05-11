#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        if (n <= 6) {
            cout << 15 << endl;
        } else {
            long long ans = ceil(n * 2.5);
            // Round up to the nearest multiple of 5
            ans = ((ans + 4) / 5) * 5;
            cout << ans << endl;
        }
    }
    return 0;
}
