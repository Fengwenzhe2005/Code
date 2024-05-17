#include<iostream>
#define M 100
#define N 100

using namespace std;

struct edge{
	int u,v,w;
}e[M];
int vis[N];
int n,m,a,b,c;

void dfs(int u){
	vis[u]=1;
	int i=1;
	for(;i<=m;i++)
	if(e[i].u==u){
		int v=e[i].v,w=e[i].w;
		printf("%d,%d,%d\n",u,v,w);
		if(vis[v]) continue;
		dfs(e[i].v);
	}
}

int main(){
	cin>>n>>m;
	int i=1;
	for(;i<=m;i++){
		cin>>a>>b>>c;
		e[i]={a,b,c};
	}
	dfs(1);
	return 0;
}
