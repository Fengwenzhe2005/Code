#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

const int N=510,INF=0x3f3f3f3f;

int g[N][N],st[N],d[N];
int n,m,s;

int prim(){
	int ans=0;
	memset(d,0x3f,sizeof d);
	d[s]=0;
	for(int t=1;t<=n;t++){
		int j=-1;
		for(int i=1;i<=n;i++)
			if(!st[i]&&(j==-1||d[j]>d[i])) j=i;
		
		if(d[j]==0x3f3f3f3f) return INF;
		st[j]=1;
		
		ans+=d[j];
	
		for(int i=1;i<=n;i++) d[i]=min(g[j][i],d[i]);
	}
	
	
	return ans;
}

int main(){
	cin>>n>>m>>s;
	memset(g,0x3f,sizeof g);
	for(int i=1;i<=m;i++){
		int a,b,w;
		scanf("%d%d%d",&a,&b,&w);
		g[a][b]=min(g[a][b],w);
		g[b][a]=g[a][b];
	}
	
	int t=prim();
	if(t==INF) puts("impossible");
	else printf("%d\n",t);
	return 0;
}
 
