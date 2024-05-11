#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
    long long n, q;
    cin >> n >> q;

    map<long long , long long> mp;
    vector<long long> ans;

    for (int i = 0; i < q; i++) {
        long long z, x;
        cin >> z >> x;
        
        if (z == 2) {
            ans.push_back(x);
            mp[x]+=1;
        }
    }

    for (int i = 0; i < ans.size(); i++) {
        cout << mp[ans[i]]<< endl;
    }

    return 0;
}
