#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        long long n;
        cin >> n;
        
        vector<long long> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        long long cnt_pos = 0,zero=0,negtv=0;
        long long product = 1;

        // Count number of positive elements and calculate product of non-zero elements
        for (int i = 0; i < n; ++i) {
            if (a[i] > 0) {
                cnt_pos++;
                product *= a[i];
            }
            else if(a[i]==0){
                zero++;
            }
            else{
                negtv++;
            }
        }

       if(zero>0){
        cout<<0<<endl;
       }
       else if(negtv%2){
        cout<<0<<endl;
       }
       else{
        cout<<1<<endl;
        cout<<1<<" "<<0<<endl;
     }
    
    }

    return 0;
}
