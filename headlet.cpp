// #include<iostream>
// using namespace std;


// /*int getSum(int n) {
//     int sum = 0;
//     while (n != 0) {
//         sum = sum + n % 10;
//         n = n / 10;
//     }
//     return sum;
// }

// int main(){
//     int t;
//     cin>>t;
//     for(int i=0;i<t;i++){
//         int x,k;
//         cin>>x>>k;
//         if(getSum(x)%k==0){
//             cout<<x<<endl;
//         }
//         else{
//         while(1){
//             x=x+1;
//             if(getSum(x)%k==0){
//                 cout<<x<<endl;
//             break;
//             }  
//         }
//         }
//     }
//     return 0;
// }*/

// /*#include<string>
// int main(){
//     int t;
//     cin>>t;
//     for(int i=0;i<t;i++){
//         string s;
//         cin>>s;
//         // for(int j=0;j<4;j++){
//         //     int x=s[j]-'0';
//         //     if(x==0){
//         //         x=10;
//         //     }
//         // }

//        int a=s[0]-'0';
//         if(a==0){
//             a=10;
//         }
//         int b=s[1]-'0';
//         if(b==0){
//             b=10;
//         }
//         int c=s[2]-'0';
//         if(c==0){
//             c=10;
//         }
//         int d=s[3]-'0';
//         if(d==0){
//             d=10;
//         }
        
    
//     int y=abs(b-a)+1+abs(c-b)+1+abs(d-c)+1+abs(a-1)+1;
//     cout<<y<<endl;
// }
// }
// */
// #include<vector>
// #include<string>
// int main(){
//     int t,n,k;
//     cin>>t;
//     for(int i=0;i<t;i++){
        
//         cin>>n>>k;
//         string ch;
//         cin>>ch;
//         int c=0;
//         for(int j=0;j<n;j++){
//             for(int k=0;k<n;k++){
//                 if(ch[j]==ch[k]){
//                     c=c+1;
//                 }
//             }
//         }
//         vector<int> ans;
//         if(c%2!=0){
//             ans.push_back(c);
//         }
//         int flag;
//         for(int l=0;l<ans.size();l++){
//             if(ans[l]>=k+1){
//                 flag=1;
//             }
//             else{
//                 flag=0;
//             }
//         }
//         if(flag==1){
//             cout<<"Yes"<<endl;
//         }
//         else{
//             cout<<"No"<<endl;
//         }
//         ans.clear();
//     }
//     return 0;

// }


// // int main(){
// //     int t;
// //     cin>>t;
// //     for(int i=0;i<t;i++){
// //         int arr[3];
// //         for(int j=0;j<3;j++){
// //             cin>>arr[j];
// //         }
// //         int c=0;
// //         for(int j=0;j<3;j++){
// //             if(arr[j]%2!=0){
// //                 c++;
// //             }
// //         }
// //         if(c>2){
// //             cout<<"yes"<<endl;
// //         }
// //         else{
// //             cout<<"no"<<endl;
// //             }
// //         }
// //     return 0;
// // }

#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        string ch;
        cin>>n>>k;
        int c=0;
        cin>>ch;
        map<char, int> m;

        for(int j=0;j<n;j++){
            m[ch[j]]++;
        }
        for(auto i : m){
            if(i.second%2!=0){
                c++;
            }
        }
        if(k>=n){
            cout<<"No"<<endl;
        }
        else if(k+1>=c){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}