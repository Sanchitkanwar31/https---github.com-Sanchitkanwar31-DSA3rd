#include<bits/stdc++.h>
#include<vector>
using namespace std;
int castle(){
    int n=grid[0].size();
    int m=grid.size();
    vector<pair<int,int>> status(n,vector<int>(n-1));
    queue<int> q;
    q.push(startx,starty);
    while(!q.empty()){
        pair<int,int> p;
        p=q.front();
        q.pop();
        int cr,cc;
        cr=p.first;
        cc=p.second;
        //right
        int j=1;
        while(cc+j<n && grid[cr][cc+j]!-="x"){
            if(status[cr][cc+j]==-1){
                status[cr][cc+j]=status[cr][cc+j]+1;
                q.push()({cr,cc+j});
                if(cr==goalx && cc==goaly){
                    return status[goalx][goaly];
                }

            }
            j++;
        }
        //left
        int i=1;
        while(cc-i>0 && grid[cr][cc-i]!="x" ){
            if(status[cr][cc-i]==-1){
                status[cr][cc-i]=status[cr][cc-i]+1;
                q.push()({cr,cc-i});
                if(cr==goalx && cc==goaly){
                    return status[goalx][goaly];
                }

            }
            i++;
        }
        //down
        int k=1;
        while(cr+k<m && grid[cr+k][cc]!="x"){
            if(status[cr+k][cc]==-1){
                status[cr+k][cc]=status[cr+k][cc]+1;
                q.push()({cr+k,cc});
                if(cr==goalx && cc==goaly){
                    return status[goalx][goaly];
                }
            }
            k++;
        }
        //up
        int l=1;
        while(cr-l>0 && grid[cr-l][cc]!="x"){
            if(status[cr-l][cc]==-1){
                status[cr-l][cc]=status[cr-l][cc]+1;
                q.push()({cr-l,cc});
                if(cr==goalx && cc==goaly){
                    return status[goalx][goaly];
                }
            }
            l++;
        }
        


        
    }
}
int main()
{
    return 0;
}
