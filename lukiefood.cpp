#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int maxi=a[0];
        int mini=a[0];
        int cnt=0;
        for (int i = 0; i < n; i++)
        {
            maxi=max(maxi,a[i]);
            mini=min(mini,a[i]);

            if(maxi-mini>2*x){//iska matlab ki agar woh gap greater than 2x hogya tu loop has reached the end of array  
                cnt++;
                mini=maxi=a[i];
            }
        }
        cout<<cnt<<endl;
        
    }
    return 0;
}