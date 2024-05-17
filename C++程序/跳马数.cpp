#include<iostream>

using namespace std;

int n,m,ans=0;
const int N=20;
int g[N][N];
int dx[4]={2,1,2,1},dy[4]={1,2,-1,-2};

void dfs(int x,int y){
    if(x==m&&y==n){
        ans++;
        return ;
    }

    if(x>m||x<0||y>n||y<0) return ;
    
    int i=0; 
    for(;i<4;i++){
        int a=x+dx[i],b=y+dy[i];
        dfs(a,b);
    }
}

int main(){
    cin>>n>>m;
    dfs(0,0);
    cout<<ans;
    return 0;
}
