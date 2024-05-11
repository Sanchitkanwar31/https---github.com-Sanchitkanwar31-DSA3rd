#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x, mini, maxi;
        cin >> x;
        double y = (x / 4);
        double z = (x / 6);
        if (x % 2 == 1 || x == 2) {
            cout << -1 << endl;
        } 
        else{
            x=x/2;
            if(x%3==0){
                cout<<x/3<<" ";
            }
            else{
                cout<<x/3 + 1<<" ";
            }
            cout<<x/2<<endl;
        }
    }
    return 0;
}
