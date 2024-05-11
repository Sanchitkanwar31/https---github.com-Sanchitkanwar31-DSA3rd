#include <iostream>

using namespace std;

// bool prime(int n){
//     int flag=0;
//     for(int i=2;i*i<n;i++){
//         if(n%i!=0){
//             flag=1;
//         }
//     }
//     if(flag==1){
//         return true;
//     }
//     else{
//         return false;
//     }
// }

void seiveprime(int n){
    //first all value of array are true
    int prim[100]={0};
    for(int i=2;i*i<=n;i++){
        if(prim[i]==0){
            for(int j=i*i;j<=n;j=j+i){
                prim[j]=1;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(prim[i]==0){
            cout<<i<<endl;
        }
    }
}
int main(){
    
    seiveprime(59);
    return 0;

}