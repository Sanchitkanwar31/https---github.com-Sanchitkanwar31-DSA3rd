#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n); // Specify the size of the vector

        for (int x = 0; x < n; x++) {
            cin >> a[x];
        }

        int cnt = 0;
        int ans = 2;
    if (is_sorted(a.begin(), a.end()))
      ans = 0;
    else if (a[0] == 1 || a[n - 1] == n)
      ans = 1;
    else if (a[0] == n && a[n - 1] == 1)
      ans = 3;
        // for (int i = 0; i < n; i++) {
        //     int min_idx = i;

        //     for (int j = i + 1; j < n; j++) {
        //         if (arr[j] < arr[min_idx])
        //             min_idx = j;
        //     }

        //     if (min_idx != i) {
        //         swap(arr[min_idx], arr[i]);
        //         cnt++;
        //     }
        // }

        cout << ans << endl;
    }

    return 0;
}


// // int main()
// // {
// //     int t;
// //     cin>>t;
// //     while(t--){
// //         int n,m;
// //         cin>>n>>m;
// //         int x=((n*m)/3);
// //         if((n*m)%3==0){
// //             x=x;
// //         }
// //         else{
// //             x++;
// //         }
// //         cout<<x<<endl;
// //     }
// //     return 0;
// // }
// int gcd(int a,int b){
//     if(a==0){
//         return b;
//         }
//     else{
//         return gcd(b%a,a);
//     }
// }
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,x;
//         cin>>n;
//         vector<int> arr,even,odd;
        
//         for(int i=0;i<n;i++){
//                 cin>>x;
//                 if(x%2==0){
//                     even.push_back(x);
//                 }
//                 else{
//                     odd.push_back(x);
//                 }
//         }
//         for(auto i: even){
//             arr.push_back(i);
//         }
//         for(auto i: odd){
//             arr.push_back(i);
//         }

//         int cnt=0;
//         //sort(arr.begin(),arr.end());
//         for(int i=0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//                 if(gcd(arr[i],arr[j]*2)>1){
//                     cnt++;
//                 }
//             }
//         }
//         cout<<cnt<<endl;
//     }
// }


// int main(){

//     int t;
//     cin>>t;
//     while(t--){
//     int i, j, min_idx,cnt;
//     vector<int> arr;
 
    // One by one move boundary of
    // unsorted subarray
//     int n;
//     cin>>n;
//     for(int x=0;x<n;x++){
//         cin>>arr[x];
//     }
//     for (i = 0; i < n - 1; i++) {
 
//         // Find the minimum element in
//         // unsorted array
//         int cnt=0;
//         min_idx = i;
//         for (j = i + 1; j < n; j++) {
//             if (arr[j] < arr[min_idx])
//                 min_idx = j;
//         }
//         // Swap the found minimum element
//         // with the first element
//         if (min_idx != i){
//             swap(arr[min_idx], arr[i]);
//             cnt++;
//             }
//     }

//     cout<<cnt<<endl;
    
//     }
    
// return 0;
// }
// int main(){

//     int t;
//     cin>>t;
//     while(t--){
//     int i, j, min_idx,cnt;
//     vector<int> arr;
 
//     // One by one move boundary of
//     // unsorted subarray
//     int n;
//     cin>>n;
//     for(int x=0;x<n;x++){
//         cin>>arr[x];
//     }
//     for (i = 0; i < n - 1; i++) {
 
//         // Find the minimum element in
//         // unsorted array
//         int cnt=0;
//         min_idx = i;
//         for (j = i + 1; j < n; j++) {
//             if (arr[j] < arr[min_idx])
//                 min_idx = j;
//         }
//         // Swap the found minimum element
//         // with the first element
//         if (min_idx != i){
//             swap(arr[min_idx], arr[i]);
//             cnt++;
//             }
//     }

//     cout<<cnt<<endl;
    
//     }
    
// return 0;
// }