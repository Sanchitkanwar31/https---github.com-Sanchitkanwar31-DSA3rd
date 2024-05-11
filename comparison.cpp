#include <bits/stdc++.h>
#include <vector>
using namespace std;

long long powe(long long base, int exponent) {
    if (exponent == 0) {
        return 1;
    } else if (exponent < 0) {
        return 1 / powe(base, -exponent);
    } else if (exponent % 2 == 0) {
        long long half_pow = powe(base, exponent / 2);
        return half_pow * half_pow;
    } else {
        return base * powe(base, exponent - 1);
    }
}

long long powe(int base, int exponent){
    long long prod=1;
    for (int  i = 0; i < exponent; i++)
    {
        prod=prod*base;
    }
    return prod;
    
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int p1, p2;
        int  x1, x2;
        cin >> x1 >> p1;
        cin >> x2 >> p2;

        unsigned long m = static_cast<long long>(x1) * powe(10, p1);
        unsigned long n = static_cast<long long>(x2) * powe(10, p2);

        // cout<<"Test"<<endl;
        // cout<<m<<endl;
        // cout<<n<<endl;
        int mn=min(p1,p2);
        p2=p2-mn;
        p1=p1-mn;
        if(p1>=7){
            cout << ">" << endl;
        }
        else if(p2>=7){
            cout << "<" << endl;
        }
        else{
        if (m > n) {
            cout << ">" << endl;
        } else if (m < n) {
            cout << "<" << endl;
        } else {
            cout << "=" << endl;
        }
        }
    }

    return 0;
}
