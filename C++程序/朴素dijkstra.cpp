#include<iostream>
#include<cstring>

using namespace std;

const int N=10010;

int st[N],g[N][N],dis[N],prev[N],stack[N];
int n,m,top=-1;

void dijkstra(int s){
	memset(dis,0x3f,sizeof dis);
	dis[s]=0;
	
	for(int i=1;i<n;i++){
		int t=-1;
		for(int i=1;i<=n;i++)
			if(st[i]==0&&(t==-1||dis[t]>dis[i])) t=i;
		st[t]=1;
		for(int i=1;i<=n;i++){
			if(g[t][i]&&g[t][i]+dis[t]<dis[i]){
				dis[i]=dis[t]+g[t][i];
				prev[i]=t;
			}
		}
    }
    return ;
}

int main(){
	int s;
	cin>>m>>n>>s;
	for(int i=1;i<=m;i++){
		int a,b,c;
		cin>>a>>b>>c;
		g[a][b]=c;
		g[b][a]=c; 
	}
	
	dijkstra(s);
	
	for(int i=1;i<=n;i++){
		printf("%d:dis=%d ",i,dis[i]);
		for(int j=prev[i];j!=0;j=prev[j]){
			stack[++top]=j;
		}
		
		while(top>=0){
			printf("%d ",stack[top--]);
		}
		printf("%d\n",i);
	}
	
	return 0;
}

/*7 5
1 3 5
1 4 2
1 5 2
4 2 6
4 3 2
5 3 1
3 2 2
*/
