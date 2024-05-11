#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> ans;

    // Handling case when k is 1
    if (k == 1) {
        cout << n << endl;
        return 0;
    }

    // Factorize n
    for (int i = 2; i <= n; ++i) {
        while (n % i == 0) {
            ans.push_back(i);
            n /= i;
        }
    }

    // Check if there are enough factors
    if (ans.size() < k) {
        cout << -1 << endl;
        return 0;
    }

    // Output the first k - 1 factors
    for (int i = 0; i < k - 1; ++i) {
        cout << ans[i] << " ";
    }

    // Output the remaining factor
    int product = 1;
    for (int i = k - 1; i < ans.size(); ++i) {
        product *= ans[i];
    }
    cout << product << endl;

    return 0;
}


// int solve(int n,int k){
//     if(n==)
// }