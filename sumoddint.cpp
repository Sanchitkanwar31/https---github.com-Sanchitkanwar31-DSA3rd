#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    if (n == 2) {
        if (abs(a[0] - a[1]) == 1 || (a[0] % 2 == a[1] % 2)) {
            cout << "YES\n";
            return;
        }
    } else {
        int evenCount = 0, oddCount = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] % 2 == 0) {
                evenCount++;
            } else {
                oddCount++;
            }
        }

        if (evenCount % 2 != oddCount % 2) {
            cout << "NO\n";
        } else {
            if (evenCount % 2 == 0) {
                cout << "YES\n";
            } else {
                for (int i = 0; i < n; i++) {
                    for (int j = i + 1; j < n; j++) {
                        if (a[i] % 2 != a[j] % 2 && abs(a[i] - a[j]) == 1) {
                            cout << "YES\n";
                            return;
                        }
                    }
                }
                cout << "NO\n";
            }
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
