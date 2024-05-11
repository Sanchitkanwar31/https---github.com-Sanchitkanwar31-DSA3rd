#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cnt=0;
        while(n%3==0){
            if(n%6==0){
                n/=6;
                cnt++;
            }
            else{
                n*=2;
                cnt++;
            }
        }
        if(n==1){
            cout<<cnt<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}