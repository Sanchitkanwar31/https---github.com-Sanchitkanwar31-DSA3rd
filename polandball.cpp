#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
    long long n,m;
    cin>>n>>m;
    long long c1[5],c2[5];
    long long cnt=0;
    for(long long i=1;i<=n;i++){
        c1[i%5]++;
    }
    for(long long i=1;i<=m;i++){
        c2[i%5]++;
    }
    cout<<c1[0]*c2[0] + c1[1]*c2[4] + c1[2]*c2[3] + c1[3]*c2[2] + c1[4]*c2[1]<<endl;
    
    return 0;
}