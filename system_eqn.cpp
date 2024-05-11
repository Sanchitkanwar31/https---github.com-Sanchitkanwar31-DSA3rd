#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int n,m,cnt=0,b;
    cin>>n>>m;
    for(int i=0;(i*i)<=n;i++){
        b=n-i*i;
        if((i+(b*b))==m){
            cnt++;
        }
    }
    cout<<cnt<<endl;;
    return 0;
}