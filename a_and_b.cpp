#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,cnt=0;
        cin>>n;
        vector<int> a(n),b(n);
        int suma=0,sumb=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        for(int i=0;i<n;i++){
            suma+=a[i];
            sumb+=b[i];
         }

        for(int i=0;i<n;i++){
            if(a[i]!=b[i]){
                cnt++;
            }
        }
        int x=min(cnt,abs(suma-sumb)+1);
        cout<<x<<endl;
       
        
    }
    return 0;
}