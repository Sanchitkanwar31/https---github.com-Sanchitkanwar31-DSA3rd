#include <bits/stdc++.h>
#include <cctype>
#include <map>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, ans = 0;
        string ch;
        map<char, int> m;
        cin >> n;
        cin >> ch;
        if (n % 2 != 0) {
            ans = 1;
        }

        for (int j = 0; j < n; j++) {
            m[ch[j]]++;
        }

        char maxChar = '\0';  // Initialize to null character
        int maxCount = 0;

        for (auto pair : m) {
            if (pair.second > maxCount) {
                maxChar = pair.first;
                maxCount = pair.second;
            }
        }

        int y = n - maxCount;
        ans = abs(maxCount - y);
        int k=max(n%2,2*maxCount-n);

        cout << k << endl;
    }
    return 0;
}
