#include<iostream>
#include<cstring>

using namespace std;

const int N=1000;
int h[N],e[N],ne[N],w[N],st[N];
int n,m,a,b,c,idx=1,d=0;

void dfs(int u){
	st[u]=1;
	int i=h[u];
	
	for(;i!=-1;i=ne[i]){
		cout<<u<<" "<<e[i]<<" "<<w[i]<<endl;
		if(st[e[i]]) continue;
		dfs(e[i]);
	}

}

int main(){
	memset(h,-1,sizeof h);
	cin>>n>>m;
	int i=1;
	for(;i<=m;i++){
		cin>>a>>b>>c;
		e[idx]=b;
		ne[idx]=h[a];
		h[a]=idx;
		w[idx++]=c;
	}
	dfs(1);
	return 0;
}
