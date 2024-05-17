#include<iostream>
#include<cstring>

using namespace std;

const int N=10010;

int h[N],d[N],q[N],vis[N],ne[N],e[N];
int idx,end,tt=-1,hh=0;

void add(int a,int b){
	e[idx]=b,ne[idx]=h[a],h[a]=idx++;
}

void bfs(int u){
	q[++tt]=u;
	
	while(tt>=hh){
		int x=q[hh++];
		for(int i=h[x];i!=-1;i=ne[i]){
			int p=e[i];
			
			if(vis[p]) continue ;
			
			q[++tt]=p;
			d[p]=d[x]+1;
			vis[p]=1;
		}
	}
	return ; 
}

int main(){
	memset(h,-1,sizeof h);
	memset(d,-1,sizeof d);
	int n;
	cin>>end>>n;
	for(int i=1;i<=n;i++){
		int a,b;
		cin>>a>>b;
		add(a,b);
	}
	bfs(1);
	cout<<d[end]+1<<endl;
	return 0;
}
