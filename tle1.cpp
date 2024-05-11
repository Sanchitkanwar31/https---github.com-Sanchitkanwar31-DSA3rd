#include<bits/stdc++.h>
#include<vector>
using namespace std;
// void bubbleSort(int arr[], int n)
// {
//     int i, j;
//     bool swapped;
//     for (i = 0; i < n - 1; i++) {
//         swapped = false;
//         for (j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 swap(arr[j], arr[j + 1]);
//                 swapped = true;
//             }
//         }
 
//         // If no two elements were swapped
//         // by inner loop, then break
//         if (swapped == false)
//             break;
//     }
// }
// int main()
// {
//    int t;
//    cin>>t;
//    while(t--){
//     string x;
//     cin>>x;
//     int l=x.length();
//     if(l>=10){
//         if(l%2==0){
//         cout<<x[0]<<l-2<<x[l-1]<<endl;}
//         else{
//             cout<<x[0]<<l-1<<x[l-1]<<endl;
//         }
//      }
//     else {
//     cout<<x<<endl;
//    }
//    }
//     return 0;
// }
int  decToBinary(int n)
{
    int binaryNum[32];
    int i = 0;
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
        cout << binaryNum[j];
}
int main(){
    
    return 0;
}