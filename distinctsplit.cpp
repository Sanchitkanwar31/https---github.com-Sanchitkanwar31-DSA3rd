#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string ch;
        cin >> ch;
        set<char> c;
        int cnt;
        // if(ch[0]==ch[1]){
        //     cnt=1;
        // }
        for (int i = 0; i < n; i++) {
            //   if ((i == n-1)) {
            //     cnt++;
            // }
            c.insert(ch[i]);
        }
        cnt=c.size();
        cout << cnt+1 << endl;
    }
    return 0;
}
