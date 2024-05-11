#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    vector<long long> A, B;
    vector<long long> AB;
    for (long long i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            A.push_back(i);
        } else { // <-- Corrected from ( to {
            B.push_back(i);
        }
    }

    if(k>=n/2){
        int z=abs(k-n/2);
        cout<<A[z]<<endl;
    }
    else{
       int z=abs(k-n/2);
       cout<<B[z]<<endl; 

    }
    //sort(A.begin(), A.end());
    //sort(B.begin(), B.end());

    // Concatenate A and B into AB
    //AB.insert(AB.end(), B.begin(), B.end());
    //AB.insert(AB.end(), A.begin(), A.end());
    

    //cout << AB[k-1] << endl;

    return 0;
}
