#include<iostream>
using namespace std;

const int N=11;

int a[N][N],g[N][N],st[4*N],stack[N*N],f[N][N];
int dx[8]={-1,-1,0,1,1,1,0,-1},dy[8]={0,1,1,1,0,-1,-1,-1};
int n,k,top=-1,flag=0;

bool yes(int x,int y,int i){
    if(i==1&&f[x+1][y]!=3&&f[x][y+1]!=7) return true;
    if(i==3&&f[x][y+1]!=5&&f[x-1][y]!=1) return true;
    if(i==5&&f[x][y-1]!=3&&f[x+1][y]!=7) return true;
    if(i==7&&f[x-1][y]!=5&&f[x][y-1]!=1) return true;
    return false;
}

bool ok(int x,int y,int x1,int y1,int i){
    if(x1>=0&&y1>=0&&x1<n&&y1<n&&!g[x1][y1]) 
        if(a[x][y]+1==a[x1][y1]||a[x][y]==k-1&&a[x1][y1]==0)
            if((i==1||i==3||i==5||i==7)&&yes(x,y,i)||i==0||i==2||i==4||i==6)
                return true;
            
    return false;
}

void dfs(int x,int y){
    if(flag==1) return ;
    if(x==n-1&&y==n-1&&top==n*n-2&&a[x][y]==k-1){
        for(int i=0;i<=top;i++) printf("%d",stack[i]);
        flag=1;
        return ;
    }
    
    for(int i=0;i<8;i++){
        int x1=x+dx[i],y1=y+dy[i];
        if(ok(x,y,x1,y1,i)){
            if(x1==n-1&&y1==n-1&&top!=n*n-3) continue;
            stack[++top]=i;
            g[x1][y1]=1;
            if(i==1||i==3||i==5||i==7) f[x][y]=i;
            dfs(x1,y1);
            if(flag==1) return ;
            g[x1][y1]=f[x][y]=0;
            top--;
        }
    }
}

int main(){
    cin>>n>>k;
    
    for(int i=0;i<n;i++) 
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    
    g[0][0]=1;
    dfs(0,0);
    if(flag==0) cout<<-1<<endl;
}
