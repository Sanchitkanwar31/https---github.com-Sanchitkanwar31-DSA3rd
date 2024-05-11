#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n != 3 && n != 0) {
            vector<int> ans;
          for(int i = 3; i <= n; i++) cout << i << ' ';
        cout << 2 << ' ' << 1 << endl;
        
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}
