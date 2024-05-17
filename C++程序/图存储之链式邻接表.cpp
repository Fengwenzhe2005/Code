#include<iostream>
#include<vector>

using namespace std; 

const int N=100;
int a,b,c,n,m;

struct edge{
	int u,v,w;
}; 
vector<edge> e;
vector<int> h[N];
int vis[N];

void add(int a,int b,int c){
	e.push_back({a,b,c});
	h[a].push_back(e.size()-1);
}

void dfs(int u){
	int i=0;
	vis[u]=1;
	for(;i<h[u].size();i++){
		int j=h[u][i];
		int v=e[j].v,w=e[j].w;
		printf("%d,%d,%d\n",u,v,w);
		if(vis[v]) continue;
		dfs(v);
	}
}

int main(){
	cin>>n>>m;
	int i=1;
	for(;i<=m;i++){
		cin>>a>>b>>c;
		add(a,b,c);
	}
	dfs(1);
	return 0;
}
