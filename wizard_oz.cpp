#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(n==1){
            cout<<9<<endl;
        }
        else if(n==2){
            cout<<98<<endl;
        }
        else if(n==3){
            cout<<989<<endl;
        }
        else{
            cout<<989;
            for(int i=3;i<n-3;i++){
                cout<<i%10;
            }
            cout<<endl;
        }
        // int a[10]={9,8,7,6,5,4,3,2,1,0};
        // for(int i=0;i<n;i++){
        //     cout<<a[i];
        // }
        // cout<<endl;
    }
    return 0;
}