#include<iostream> 

using namespace std;

int x2,y2,ans=0,n,m,t;
int maze[6][6];


void dfs(int x1,int y1){
	if(x1==x2&&y1==y2&&!maze[x1][y1]){
		ans++;
		return ;
	}
	
	if(x1>n||y1>m||y1<=0||x1<=0){
		return ;
	}
	
	if(maze[x1][y1]){
		return ;
	}
	
	
	maze[x1][y1]=1;
	dfs(x1+1,y1);
	maze[x1][y1]=0;
	

	maze[x1][y1]=1;	
	dfs(x1,y1+1);
	maze[x1][y1]=0;
	
	
	maze[x1][y1]=1;
	dfs(x1-1,y1);
	maze[x1][y1]=0;
	

	maze[x1][y1]=1;	
	dfs(x1,y1-1);
	maze[x1][y1]=0;	
}

int main(){
	int x1,y1;
	scanf("%d%d%d%d%d%d%d",&n,&m,&t,&x1,&y1,&x2,&y2);
	while(t--){
		int x,y;
		scanf("%d%d",&x,&y);
		maze[x][y]=1;
	}
	maze[x1][y1]=1;
	dfs(x1,y1);
	printf("%d",ans);
	return 0;
}
