#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int count_x(string str){
    char val='X';
    int z=count(str.begin(), str.end(), val);
    return z;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        string x,y,s1,s2;
        int l,m;
        cin>>s1>>s2;
        l=count_x(s1);
        m=count_x(s2);
        x=s1.back();
        y=s2.back();
        if(x==y){
            if((x=="S" && l>m )||(x=="L" && l<m)){
                    cout<<"<"<<endl;
            }
            else if((x=="S" && l<m)||(x=="L" && l>m )){
                    cout<<">"<<endl;
            }
            else{
                cout<<"="<<endl;
            }

        }
        else if((x=="L") || (x=="M" && y=="S")){
            cout<<">"<<endl;
        }
        else if((x=="S")||(x=="M" && y=="L")){
            cout<<"<"<<endl;
        }
    }
    return 0;
}
