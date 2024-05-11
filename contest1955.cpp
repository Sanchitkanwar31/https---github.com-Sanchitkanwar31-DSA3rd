#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
   int t;
    cin >> t;
    while(t--) {
        int n;
        long long c, d;
        cin >> n >> c >> d;
        vector<long long> b(n*n);
        for(int i=0; i<n*n; i++)
         cin >> b[i];
        sort(b.begin(), b.end());
        vector<vector<long long>> a(n, vector<long long>(n));
        a[0][0] = b[0];
        for(int i=1; i<n; i++) {
            a[i][0] = a[i-1][0] + c;
            a[0][i] = a[0][i-1] + d;
        }
        for(int i=1; i<n; i++) {
            for(int j=1; j<n; j++) {
                a[i][j] = min(a[i-1][j] + c, a[i][j-1] + d);
            }
        }
        vector<long long> a1(n*n);
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                a1[i*n+j] = a[i][j];
            }
        }
        sort(a1.begin(), a1.end());
        if(a1 == b) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}

