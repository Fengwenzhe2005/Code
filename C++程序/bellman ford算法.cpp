#include<iostream>
#include<cstring>

using namespace std;

const int N=510,M=100010;

int n,m,s,top=-1;
int dist[N],prev[N],stack[N];

struct EDGE{
	int a,b,w;
}edge[M];

bool bellman_ford(){
	memset(dist,0x3f,sizeof dist);
	memset(prev,-1,sizeof prev);
	dist[s]=0;
	bool flag;
	
	
		for(int i=0;i<m;i++){

	for(int i=1;i<=n;i++){
		flag=false;
			if(dist[edge[i].b]>dist[edge[i].a]+edge[i].w){
				flag=true;
				dist[edge[i].b]=dist[edge[i].a]+edge[i].w;
				prev[edge[i].b]=edge[i].a;
			}
		}
		
	}
	
	return flag;
}

int main(){
	
	scanf("%d%d%d",&n,&m,&s);
	
	for(int i=0;i<m;i++){
		int x,y,z;
		scanf("%d%d%d",&x,&y,&z);
		edge[i].a=x,edge[i].b=y,edge[i].w=z;
	}
	
	if(bellman_ford()){
		puts("-1");
		return 0;
	}
	
	for(int i=1;i<=n;i++){
		printf("%d:dist=%d rt:",i,dist[i]);
		
		for(int j=prev[i];j!=-1;j=prev[j]) stack[++top]=j;
		
		while(top>=0) printf("%d->",stack[top--]);
		
		printf("%d\n",i); 
	}


	return 0;
}
