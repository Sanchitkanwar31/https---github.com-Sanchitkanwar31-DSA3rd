#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k,x;
        long long sum = 0;
        cin >> n >> k;
        long long a[100005]={0};
        for(int i=1;i<=n;i++){
            cin>>x;
            a[i%k]=max(a[i%k],x);
        }

        for(int i=0;i<k;i++){
            sum=sum+a[i];
        }
        cout<<sum<<endl;
        //fill(a, a+ k, 0);
    }
    return 0;
}
