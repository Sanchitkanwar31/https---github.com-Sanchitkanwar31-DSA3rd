#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k,x;
        cin>>n>>k>>x;
        vector<int> a(n+1,0);
        int y;
        for(int i=0;i<n;i++){
            cin>>y;
            a[i]=y;
        }
    sort(a.begin(),a.end());
    //to get prefix sum=jahan tak pointer wahan tak sum
    int pre[n+1];
    pre[0]=0;
    for(int i=1;i<=n;i++){
        pre[i]=a[i]+pre[i-1];
    }
    int ans=INT_MIN;
    for(int i=n;i>=0;i--){
        int ch=(n-i);
        if(ch>k){
            break;
        }
        int r=min(i,x);
        int sum=pre[i-r]-(pre[i]-pre[i-r]);
        ans=max(ans,sum);
    }
    cout<<ans<<endl;
    }
    return 0;
}