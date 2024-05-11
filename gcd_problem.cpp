// #include<iostream>
// #include<cmath>
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a,b;
    cin>>a>>b;
    //  a=a%10;
    //  b=b%10;
    long long pro=1;
    long long c;
    long long x=abs(b-a);
    if(x>=10){
         c=0;
         cout<<c<<endl;
    }
    else{
    for(long long i=a+1;i<=b;i++){
        pro=(1LL*pro*(i%10))%10;
    }
    
    c=pro;
    cout<<c<<endl;
    }

    return 0;
}