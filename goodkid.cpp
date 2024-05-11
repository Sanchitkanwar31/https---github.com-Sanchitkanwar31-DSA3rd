// #include<iostream>
// #include<vector>
// #include <algorithm>
// using namespace std;

// int main(){
//     int t,n;
//     char str[10000];
//     cin>>t;
    
//     while(t--){
//         cin>>n;
//         vector<int> digits(n);
//         long long mul=1;
//         int min;
//         for(int j=0;j<n;j++){

//             cin>>digits[j];
//             // if(str[j]<min){
//             //     min=str[j];
//             // }
//             // cout<<(min+1)*str[j]*mul;
//         }
//         auto min=*min_element(digits.begin(),digits.end());
//         (*min)++;
//         for(int k : digits){
//             mul=mul*digits[k];
//         }
//         cout<<mul<<endl;

//     }
    

//     return 0;
// }