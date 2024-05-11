// #include<iostream>
// using namespace std;
/*int main(){
    int t,c,arr[100];
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>arr[i];
        /*if(arr[i]==1){
            cout<<"HARD"<<endl;
            break;
        }
        else if(arr[i]==0)
    }
    
    for(int i=0;i<t;i++){
        if(arr[i]==1){
            c=1;
            break;
        }
        else{
        }
    }
    if(c==1){
        cout<<"HARD"<<endl;
    }
    else{
        cout<<"EASY"<<endl;
    }


    return 0;
}*/

/*int main(){
    long long t,c,arr[100];
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>arr[i];
        if(arr[i]==1){
            c=1;
            break;
        }
    }
    if(c==1){
        cout<<"HARD"<<endl;
    }
    else{
        cout<<"EASY"<<endl;
    }

    return 0;
}*/

#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    int t,n;
    cin>>t;
    int c;
    for(int j=0;j<t;j++){
        cin>>n;
        cin>>str;
        int cnt=0;
    for(int i=0;i<=n;i++){
        if(str[i]=='.'){
                cnt++;
            }
    }
    for(int i=1;i<n;i++){
        if(str[i-1]=='.'&str[i]=='.'&str[i+1]=='.'){
            c=2;
            break;
        }
        else{
            c=cnt;
        }
        }
        cout<<c<<endl;
    }
    return 0;
}