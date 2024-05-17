#include<iostream>
#include<cstring>

using namespace std;

const int N=2010;
int h[N],ne[N],e[N],w[N],prev[N],dist[N],q[N];
int n,m,tt=-1,hh=0,idx=0;

void add(int a,int b,int v){
	e[idx]=b,w[idx]=v,ne[idx]=h[a],h[a]=idx++;
}

bool spfa(){
	memset(dist,0x3f,sizeof dist);
	prev[1]=1;
	dist[1]=0;
	q[++tt]=1;
	
	while(tt>=hh){
		int top=q[hh++];
		for(int i=h[top];i!=-1;i=ne[i]){
			if(dist[e[i]]>dist[top]+w[i]){
				prev[e[i]]=prev[top]+1;
				dist[e[i]]=dist[top]+w[i];
				q[++tt]=e[i];
				if(prev[e[i]]>n) return false;
			}
		}
	}
	
	return true;
}

int main(){
	cin>>n>>m;
	memset(h,-1,sizeof h);
	for(int i=0;i<m;i++){
		int a,b,v;
		scanf("%d%d%d",&a,&b,&v);
		add(a,b,v);
	}
	
	if(spfa())
		for(int i=1;i<=n;i++)
			printf("%d\n",dist[i]);
		else puts("NO");
		
	return 0;
	
}
