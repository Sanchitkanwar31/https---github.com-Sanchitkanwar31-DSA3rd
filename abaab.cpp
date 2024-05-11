// #include <iostream>
// #include <string>

// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         string s;
//         long n=s.size();
//         cin >> s;
//         int ab = 0, ba = 0;
//         for (int i = 0; i < s.size() - 1; i++) {
//             if ((s[i] == 'A' && s[i + 1] == 'B')||(s[n-i-2] == 'A' && s[n-i-1] == 'B')) {
//                 ab++;
//                 s[i]='B';
//                 s[i+1]='C';
//             } else if ((s[i] == 'B' && s[i + 1] == 'A')||(s[n-i-2] == 'B' && s[n-i-1] == 'A')) {
//                 s[i]='C';
//                 s[i+1]='B';
//                 ba++;
//             }
//         }
//         cout << ab+ba << endl;
//     }
//     return 0;
// }
/*
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t,n,k,c=0;
    int arr;
    cin>>t;
    while(t--){
        cin>>n>>k;
        bool chec=0;
        for(int j=0;j<n;j++){
            cin>>arr;
            if(arr==k){
                chec=1;
            }
        }
        if(chec){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }

    return 0;
}*/
/*#include <iostream>
#include <vector>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            cout<<2*i+1<<endl;
        }
    }
    return 0;
}*/

/*#include <iostream>
#include <vector>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k,x;
        cin>>n>>x>>k;
        // if((2*k>=(x*(x+1))) && (2*k<=(n*(n+1)-(n-x)*(n-x+1)))){
        //         cout<<"YES"<<endl;
        //     }
        // else{
        //         cout<<"NO"<<endl;
        //     }
        if(2*k>=x*(x+1) && 2*k<=n*(n+1)-(n-x)*(n-x+1)){ //check if k is between the minimum and maximum sum 
			cout << "YES\n";
		}
		else cout << "NO\n";
        
    }
    return 0;
}*/
#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n,k;
    cin>>n;
    cin>>k;
    
    if(k==0||k==1){
        cout<<"NO"<<endl;
    }
    int x=n%k;
    if(x%2==0 || x==1){
        cout<<"YES"<<endl;
    }
    else if(x==3||5||7){
        cout<<"NO"<<endl;
    }
    else{}
    return 0;
}


