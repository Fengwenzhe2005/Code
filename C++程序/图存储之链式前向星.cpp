#include<iostream>
#include<cstring>

using namespace std;

const int N=100;

struct edge{
	int v,w,ne;
}e[N];

int h[N],vis[N];
int n,m,a,b,c,idx=0;

void add(int a,int b,int c){
	e[idx].v=b,e[idx].w=c,e[idx].ne=h[a];
	h[a]=idx++;
}

void dfs(int u){
	vis[u]=1;
	int ed=h[u];
	for(;ed!=-1;ed=e[ed].ne){
	    if(vis[e[ed].v]) continue;
		printf("%d,%d,%d\n",u,e[ed].v,e[ed].w);
		dfs(e[ed].v);
	}
}

int main(){
	memset(h,-1,sizeof h);
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		cin>>a>>b>>c;
		add(a,b,c);
		add(b,a,c);
	}
	dfs(1);
	return 0;
}
