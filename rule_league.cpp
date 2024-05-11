#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        if(((n-1)%max(a,b)==0) && (min(a,b)==0) && max(a,b)>0){
            for(int i=2;i<=n;i+=b){
                for(int j=1;j<=b;j++){
                    cout<<i;
                }
            }
            cout<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }

    }
    return 0;
}