#include<bits/stdc++.h>
#include<vector>
using namespace std;
bool posb(int mid,vector<int> v,int c,int d){
    int score=0,n=v.size();
    for(int i=0;i<d;i++){
        if((i%mid)< n)
            score+=v[i%mid];
    }
    bool f=false;
    if( score>=c){
        f=true;
    }
    else{
        f=false;
    }
    return f;
}
int main()
{   
    int t;
    cin>>t;
    while(t--){
        int c,d,n;
        cin>>n>>c>>d;
        vector<int> arr;
        for(int i=0;i<=n;i++){
            cin>>arr[i];
        }
        sort(arr.rbegin(),arr.rend());
        int low=1,hi=d+2;
        int res=-1;
        while(low<=hi){
            int mid=(low+hi)/2;
            if(posb(mid,arr,c,d)){
                low=mid+1;
                res=mid-1;
            }
            else{
                hi=mid-1;
            }

        }

        if(res>=d){
            cout<<"infinity"<<endl;
        }
        else if(res==-1){
            cout<<"impossible"<<endl;
        }
        else{
            cout<<res<<endl;
        }
    }
    return 0;
}