#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x;
        // for(int i=2;i*i<x;i++){
        //     y=x%i;
        //     for(int j=i+1;j*j<x;j++){
        //         z=x%j;
        //         if(z==y){
        //             cout<<i<<" "<<j<<endl;
        //             break;
        //         }
        //     }
        //     break;
        // }
        y=x%2;
        cout<<2<<" "<<x-1<<endl;
    }
    return 0;
}