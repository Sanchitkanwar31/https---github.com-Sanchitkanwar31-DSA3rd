#include<bits/stdc++.h>
#include<vector>
using namespace std;
#define m 200000
bool isPerfectSquare(long double x)
{
    // Find floating point value of
    // square root of x.
    if (x >= 0) {
 
        long long sr = sqrt(x);
         
        // if product of square root 
        //is equal, then
        // return T/F
        return (sr * sr == x);
    }
    // else return false if n<0
    return false;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,ar[m];
        long long s=0;
        cin>>a;
        for(int i=0;i<a;i++){
            cin>>ar[i];
            s+=ar[i];
        }
        if(isPerfectSquare(s)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }




        
    }
    return 0;
}