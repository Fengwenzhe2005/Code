#include<iostream>
#include<cstring>

using namespace std;

const int N=10010;

struct edge{
	int to,ne;
}e[N];

int h[N],vis[N],stack[N];
int top=-1,idx,end,st;

int add(int a,int b){
	e[idx].to=b,e[idx].ne=h[a];
	h[a]=idx++;
}

void dfs(int u){
	vis[u]=1;
	stack[++top]=u;
	if(u==end){
		for(int i=0;i<=top;i++) cout<<stack[i]<<" ";
		puts("");
		vis[u]=0;
		top--;
		return ; 
	}
	
	for(int i=h[u];i!=-1;i=e[i].ne){
		int to=e[i].to;
		if(vis[to]) continue ;
		dfs(to);
		
	}
	vis[u]=0;
	top--;
}

int main(){
	memset(h,-1,sizeof h);
	int n;
	cin>>st>>end>>n;
	for(int i=1;i<=n;i++){
		int a,b;
		cin>>a>>b;
		add(a,b);
		add(b,a);
	}
	
	dfs(st);
	return 0;
}
 
