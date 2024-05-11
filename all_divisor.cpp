#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long x;
        cin>>x;
        vector<long long> a(x);
        
        for(int i=0;i<x;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        
        long long m,n,l;
        m=*max_element(a.begin(), a.end());
        n=*min_element(a.begin(),a.end());
        l=m*n;

        vector<long long> k(l);
        for(long i=2;i*1*i<l;i++){
            if(l%i==0){
                k.push_back(i);
                if(i!=l/i){
                    k.push_back(l/i);
                }
            }
        }

        sort(k.begin(),k.end());

        if(k==a){
            cout<<l<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}