#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y, d = 0;
        cin >> x >> y;
        vector<int> a(x), b(y);

        for (int i = 0; i < x; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < y; i++) {
            cin >> b[i];
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        for (int i = 0; i < x; i++) {
            d = d + max(a[i] - b[x - i - 1], b[y - i - 1] - a[i]);
        }

        cout << d << endl;
    }
    return 0;
}
