#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    int result = min(a, b);
    while (result > 0) {
        if (a % result == 0 && b % result == 0) {
            break;
        }
        result--;
    }
    return result;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(1001);
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a[x]=i+1;//important line for storing index in  the array..
        }
        int ans=-1;
        for(int i=1;i<=1000;i++){
            for(int j=1;j<=1000;j++){
                if(a[i]&&a[j]&&gcd(i,j)==1){
                    ans=max(ans,a[i]+a[j]);
                }
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}
