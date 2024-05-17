#include<stdio.h>
#include<stdbool.h>
 
int path[10],n;
bool st[10];

void dfs(int u){
    int i;
	if(u==n){
		for(i=0;i<n;i++){
			printf("%d ",path[i]);
		}
		puts("");
		return ;
	}
	
	for(i=1;i<=n;i++){
		if(st[i]==false){
			path[u]=i;
			st[i]=true;
		    dfs(u+1);
			st[i]=false;
		}
	}
	
}
int main(){
	scanf("%d",&n);
	
	dfs(0);
	
	return 0;
} 
