#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int x,y,z,u;
        cin>>x>>y>>z>>u;
        if(x>y & z>u){
            if(x>u & z>y){
                cout<<"YES"<<endl;
            }
            else{
            cout<<"NO"<<endl;
        }
        }
        else if(x<y & z>u){
            if(y>u & z>x){
                cout<<"YES"<<endl;
            }
            else{
            cout<<"NO"<<endl;
        }
        }
        else if(x>y & z<u){
            if(x>z & u>y){
                cout<<"YES"<<endl;
            }
            else{
            cout<<"NO"<<endl;
        }
        }
        else if(x<y & z<u){
            if(y>z & u>x){
                cout<<"YES"<<endl;
            }
            else{
            cout<<"NO"<<endl;
        }
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}