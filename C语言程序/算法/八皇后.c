#include<stdio.h>
#define N 14
 
int n,ans=0;
int pos[N],r[N],c[N],p[2*N],q[2*N-1];

void dfs(int x,int y,int s){
    if(y>n) y=1,x++;
    if(x>n){
        if(s==n){
        	ans++;
			if(ans<=3){
				int i=1; 
                for(;i<=n;i++) printf("%d ",pos[i]);
                puts(""); 
			} 	
        }
		return ;
    }
   
    if(!r[x]&&!c[y]&&!p[x+y]&&!q[x-y+n]){
        r[x]=c[y]=p[x+y]=q[x-y+n]=1;
        pos[x]=y;
        dfs(x,y+1,s+1);
        r[x]=c[y]=p[x+y]=q[x-y+n]=0;
    }
    
    dfs(x,y+1,s); 
    
}

int main(){
	scanf("%d",&n);
	dfs(1,1,0);
	printf("%d",ans);
	return 0;
}
