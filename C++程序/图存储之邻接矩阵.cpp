#include<iostream>
#define N 100 
using namespace std;

int w[N][N];
int vis[N];
int n,m;

void dfs(int u){
	vis[u]=1;
	int v=1;
	for(;v<=n;v++){
		if(w[u][v]){
			printf("%d,%d,%d\n",u,v,w[u][v]);
			if(vis[v]) continue;
			dfs(v);
		}
	}
} 

int main(){
	cin>>n>>m;
	int i;
	for(i=1;i<=m;i++){
		int a,b,c;
		cin>>a>>b>>c;
		w[a][b]=c;
	}
	dfs(1);
	return 0;
}
