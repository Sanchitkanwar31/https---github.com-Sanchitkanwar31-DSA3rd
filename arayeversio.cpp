#include<bits/stdc++.h>
using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int a[n]; 
//         for(int i=0;i<n;i++){
//             cin>>a[i];
//         }

//         int x=a[n-1];
//         int count=0;
//         for(int j=n-2;j>=0;j--){
//             if(a[j]>x){
//                 count++;
//                 x=a[j];
//             }
//             else{

//             }
//         }
//         cout<<count<<endl;

//     }
//     return 0;
// }

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        vector<int>b(n);
        //cout<<"addA"<<endl;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        //cout<<"addB"<<endl;
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        bool flag=false;
        for(int i=0;i<n;i++){
            if((abs(b[i]-a[i])!=1 && abs(b[i]-a[i])!=0) || a[i]>b[i]){
                flag=true;
            }
            
        }
        if(flag){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
        
            
        }
}