#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,maxi=0,diff=1;
        cin>>n;
        map<int,int> mp;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            mp[a[i]]++;
        }

        sort(a.begin(),a.end());
        for(int i=0;i<n;i++){
            if(mp[a[i]] > maxi){
                maxi=mp[a[i]];
            }
        }
        for(int i=0;i<n-1;i++){
            if(a[i]!=a[i+1]){
                diff++;
            }
        }
        

        // cout<<"Maxi"<<maxi<<endl;
        // cout<<"Diff"<<diff<<endl;
        int y=max(min(diff-1,maxi),min(diff,maxi-1));

        if(n==1){
            cout<<0<<endl;
        }
        else{
            if(diff==n){
                cout<<1<<endl;
            }
            else{
                cout<<y<<endl;
            }
        }
        
    }
    return 0;
}