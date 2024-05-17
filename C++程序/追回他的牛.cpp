#include<iostream>
#include<queue>
#include<cstring>

using namespace std;

int t,x,y,ans;
const int N=100010;
queue<int> q;
int st[3*N],d[3*N];

int bfs(){
    if(x==y) return 0;
    
    q.push(x);
    st[x]=1;
    d[x]=0;
    
    while(q.size()){
        int u=q.front(); q.pop();
        if(u==y) return d[u];
        if(!st[u+1]) q.push(u+1), st[u+1]=1,d[u+1]=d[u]+1;
        if(u-1>0&&!st[u-1]) q.push(u-1), st[u-1]=1,d[u-1]=d[u]+1;
        if(u<N&&!st[2*u]) q.push(2*u), st[2*u]=1,d[2*u]=d[u]+1;
    }
    
    
}


int main(){
    cin>>t;
    while(t--){
        cin>>x>>y;
        cout<<bfs()<<endl;
        memset(st,0,sizeof st);
        memset(d,0,sizeof d);
        while (!q.empty()) q.pop();
    }
    return 0;
}
