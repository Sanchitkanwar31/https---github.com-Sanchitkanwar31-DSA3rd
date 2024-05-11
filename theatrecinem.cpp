#include<iostream>
#include<cmath>
using namespace std;



int main(){
    long long n,m,a;
    cin>>n>>m;
    cin>>a;
    long long c=ceil((double)n/a);
    long long d=ceil((double)m/a);
    
    cout<<c*d<<endl;
   
    return 0;
}