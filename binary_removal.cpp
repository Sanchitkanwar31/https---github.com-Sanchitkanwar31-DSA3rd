#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string ch;
        cin>>ch;
        int n=ch.length();
        int i=ch.find("11");
        int j=ch.rfind("00");
        if(i!=-1 && j!=-1 && i<j){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}