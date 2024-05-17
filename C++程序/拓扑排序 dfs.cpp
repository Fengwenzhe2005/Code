#include<iostream>
#include<cstring>

using namespace std;

const int N=100010;

int h[N],e[N],ne[N],c[N],st[N];
int idx,n,m,top=-1;

int add(int a,int b){
	e[idx]=b,ne[idx]=h[a];
	h[a]=idx++;
}

bool dfs(int x){
	c[x]=-2;
	for(int i=h[x];i!=-1;i=ne[i]){
		if(c[e[i]]==-2) return false;
		if(c[e[i]]) continue;
		if(!dfs(e[i])) return false;
	}
	c[x]=1;
	st[++top]=x;
	return true;	
}

int main(){
	memset(c,0,sizeof c);
	memset(h,-1,sizeof h);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		int a,b;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
		cin>>a>>b;
		add(a,b);
	}

	for(int i=1;i<=m;i++){
		if(c[i]) continue;
		if(!dfs(i)){
			puts("-1");
			return 0;
		}
	}
	
	for(int i=m-1;i>=0;i--) cout<<st[i]<<" ";
	return 0;
}


