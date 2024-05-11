#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int flag=1;
    string t;
    cin>>t;
    for(int i=0;i<t.length();i++){
        if(t[i]!='1' && t[i]!='4'){
            flag=0;
        }
        if(t[0]=='4'){
            flag=0;
        }
        if(t.find("444")!=t.npos){
            flag=0;
        }
    }
    
   
    if(flag==1){
            cout<<"YES"<<endl;
        }
    else {
            cout<<"NO"<<endl;
        }
    return 0;
}