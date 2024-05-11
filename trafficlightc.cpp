#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        char c;
        string s;
        cin>>n>>c;
        cin>>s;
        s=s+s;
        int last=-1,maxi=0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='g'){
                last=i;
            }
            if(s[i]== c && last!=-1){
                maxi=max(maxi,last-i);
            }
        }
        cout<<maxi<<endl;

    }
    return 0;
}