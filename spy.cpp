#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n),v(n);

        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        v=a;
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++){
            if( v[i]!=a[1] ){
                cout<<i+1<<endl;
            }
        }
    }
    return 0;
}