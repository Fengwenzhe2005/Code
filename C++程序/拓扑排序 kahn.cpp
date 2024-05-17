#include<iostream>
#include<cstring>

using namespace std; 

const int N=10010;

int h[N],q[N],din[N],ne[N],e[N],res[N];
int n,m,idx,tt=-1,hh=0,p;

void add(int a,int b){
	e[idx]=b,ne[idx]=h[a],h[a]=idx++;
	din[b]++;
}

bool toposort(){
	for(int i=1;i<=m;i++){
		if(din[i]==0){
			q[++tt]=i;
		}
	}
	
	
	while(tt>=hh){
		int x=q[hh++];
		printf("%d\n",x); 
		res[p++]=x;
		for(int i=h[x];i!=-1;i=ne[i]){
			if(--din[e[i]]==0) q[++tt]=e[i]; 
		}
	}
	
	return m==p;
	
}

int main(){
	memset(h,-1,sizeof h);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		int a,b;
		cin>>a>>b;
		add(a,b);
	}
	
	if(!toposort()) puts("-1");
	else{
		for(int i=0;i<m;i++) printf("%d ",res[i]);
	}
	
	return 0;
}
