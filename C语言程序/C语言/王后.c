#include<stdio.h>
#define N 13
 
int n;
int l[N],dg[2*N],ddg[2*N-1],res[N];

void dfs(int u){
	if(u>n){
		    int cnt=1;
		    for(;cnt<=n;cnt++){
			printf("%d ",res[cnt]);
		    }		
			puts(""); 		
		return;
	}else{
		int cnt=1;
		for(;cnt<=n;cnt++){ 
			if(l[cnt]==0&&dg[cnt+u]==0&&ddg[cnt-u+n]==0){
				res[u]=cnt;
				l[cnt]=1,dg[cnt+u]=1,ddg[cnt-u+n]=1;
				dfs(u+1);
				l[cnt]=0,dg[cnt+u]=0,ddg[cnt-u+n]=0;
			}
		}
	}
}

int main(){
	scanf("%d",&n);
	dfs(1);
	return 0;
}
