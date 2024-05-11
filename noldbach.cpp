#include <iostream>
#include <vector>

using namespace std;

void SieveOfEratosthenes(int n, vector<int>& ans) {
    vector<int> prim(n + 1, 0);
    for (int i = 2; i * i <= n; i++) {
        if (prim[i] == 0) {
            for (int j = i * i; j <= n; j = j + i) {
                prim[j] = 1;
            }
        }
    }

    for (int i = 2; i <= n; i++) {
        if (prim[i] == 0) {
            ans.push_back(i);
        }
    }
}

bool isprime(int n){
    if(n<=1){
        return false;
    }
    for(int i=2;i*i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main() {
    int n, k;
    cin >> n >> k;
    int cnt = 0;
    vector<int> ans;
    SieveOfEratosthenes(n, ans);

    if(ans.size()>=3 && k>0){
    for (int i = 0; i < ans.size() - 2; i++) {
        int c = ans[i] + ans[i + 1] + 1;
        if (isprime(c) && c<=ans.back()) {
            cnt++;
        }
    }
}
    if ((cnt == k && k > 0)||(k==0 && ans.size()<3)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
