#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    

    int cnt=0;
    if(n%2==0){
        cout<<n/2<<endl;
        for(int i=0;i<n/2;i++){
            cout<<2<<" ";
        }
    }
   else{
        int y=n-3;
        cout<<y/2+1<<endl;
        for(int i=0;i<y/2;i++){
            cout<<2<<" ";
        }
        cout<<3<<endl;
   }

   return 0;
}