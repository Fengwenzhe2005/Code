#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

const int N=10010;

int d[N][N];
int n,m;

void floyd(){
	for(int k=1;k<=n;k++)
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++)
				d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
}

int main(){
	
	cin>>n>>m;
	
	memset(d,0x3f,sizeof d);
	
	for(int i=1;i<=m;i++){
		int a,b,w;
		cin>>a>>b>>w;
		d[a][a]=0,d[b][b]=0,d[a][b]=w;
	}
	
	floyd();
	
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			printf("%d->%d:",i,j),d[i][j]==0x3f3f3f3f?puts("impossible"):printf("%d\n",d[i][j]);
	
	return 0;
} 
