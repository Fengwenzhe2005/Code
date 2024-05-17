#include<iostream>
#include<unordered_map>
#include<algorithm>
#include<string>
#include<queue>

using namespace std;

int dx[4]={-1,0,1,0},dy[4]={0,1,0,-1};

queue<string> q;

unordered_map<string,int> d;

int bfs(string init){
    string end="123804765";
    d[init]=0;
    q.push(init);
    while(q.size()){
        auto u=q.front(); q.pop();
        if(u==end) return d[u];
        int k=u.find('0');
        for(int i=0;i<4;i++){
            int x=k/3+dx[i],y=k%3+dy[i];
            if(x<0||y<0||x>=3||y>=3) continue;
            int dis=d[u];
            swap(u[k],u[k+dx[i]*3+dy[i]]);
            if(!d.count(u)) d[u]=dis+1,q.push(u);
            swap(u[k],u[k+dx[i]*3+dy[i]]);
            
        }
    }
    
}

int main(){
    string init;
    cin>>init;
    cout<<bfs(init)<<endl;
    return 0;
}
