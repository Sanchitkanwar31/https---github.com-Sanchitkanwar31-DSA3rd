#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int t,ans=0;
    cin>>t;
    vector<int> a(t);
    for(int i=0;i<t;i++){
        cin>>a[i];
    }
    int x=*max_element(a.begin(), a.end());
    for(int i=0;i<t;i++){
        ans=ans+(x-a[i]);
    }
    cout<<ans<<endl;
    return 0;
}