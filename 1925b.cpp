#include <iostream>
#include <vector>
#include<bits/stdc++.h>


using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, n;
    cin >> x >> n;

    int result = 1;

    for (int i = 1; i <= sqrt(x); ++i) {
        if (x % i == 0) {
            if (i <= x / n) {
                result = max(result, i);
            }
            if (x / i <= x / n) {
                result = max(result, x / i);
            }
        }
    }

    cout << result << endl;
    }
    return 0;
}