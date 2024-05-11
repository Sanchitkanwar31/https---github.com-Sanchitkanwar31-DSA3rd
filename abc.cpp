#include<iostream>
 using namespace std;
 int main(){
    int n;
    string str[7];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>str[i];
    }

    for(int i=0;i<n;i++){
            if((str[i][0]=='b' && str[i][2]=='a')||(str[i][0]=='c' && str[i][2]=='b')){
                cout<<"No"<<endl;
            }
        
            else{
                cout<<"Yes"<<endl;
            }
    }
    


    return 0;
 }