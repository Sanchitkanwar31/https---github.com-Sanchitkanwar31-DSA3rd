#include <bits/stdc++.h>
#include <cctype>
#include<string>
#include <queue>
#include <stack>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long
using namespace std;

// int main() { IOS
//     queue<int>queue;
//     int q; cin >> q;
//     while(q--) {
//         string fun; cin >> fun;
//         if(fun=="push") {int x; cin >> x; queue.push(x);}
//         else if(fun=="pop") queue.pop();
//         else if(fun=="front") {cout << queue.front(); if(q != 0) cout << endl;}
//         else {cout << queue.back(); if(q != 0) cout << endl;}
//     }
// }

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        if(str[0]!='Y' || str[0]!='y'){
            cout<<"NO"<<endl;
        }
        else if(str[1]!='E' || str[1]!='e'){
            cout<<"NO"<<endl;
        }
        else if(str[2]!='S'|| str[2]!='s'){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}