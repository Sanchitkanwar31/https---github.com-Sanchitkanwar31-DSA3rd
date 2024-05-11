#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,sum=0;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int min=*min_element(a.begin(), a.end());
        //int max=*max_element(a.begin(), a.end());
        for(int i=0;i<n;i++){
            a[i]=(a[i]-min);
            sum=sum+a[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}