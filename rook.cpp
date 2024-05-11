
// #include<iostream>
// #include<string>
// #include<vector>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         vector<pair<char,int>> s;
//         string a;
//         cin>>a;
//         string y,u,v;
//         int x;
//         u=a[0];
//         x=(int)a[0];
//         y=a[1];
//         int l=stoi(y);
        
//         for(int i=1;i<=8;i++){
//             if(l!=i){
//                 cout<<u<<i<<endl;
//             }
//             else{continue;}
//         }
//         for(int i=97;i<=104;i++){
//             if(x!=i){
//                 cout<<(char)i<<y<<endl;
//             }
//             else{continue;}
//         }
//     }
// }

#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<string> ans;
        string ch;
        cin>>ch;
        ans.push_back(ch[0]);
        for(int i=1;i<ch.size();i++){
            if(ch[i+1]=='B' && ((int)ch[i]>=65 || (int)ch[i]<=90)){
                ans.pop_back();
            }
            else if(ch[i+1]=='b' && ((int)ch[i]>=97 || (int)ch[i]<=122)){
                    ans.pop_back()
            }
            else{
                ans.push_back(ch[i]);
            }
        }
        for(int j=0;j<ans.size();j++){
            cout<<ans[j];
        }

    }
    return 0;
}