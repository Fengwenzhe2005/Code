#include<iostream>
#include<algorithm>
using namespace std;

const int N=6000;
int res,sum,idx,m;
int num[N];

void dfs(int h,int n){
    if(h==m-1){
        res=max(res,sum);
        //cout<<sum<<endl;
        return ;
    }
    
    sum+=num[n+h+1];
    dfs(h+1,n+h+1);
    sum-=num[n+h+1];
    
    sum+=num[n+h+2];
    dfs(h+1,n+h+2);
    sum-=num[n+h+2];
    
    return ;
}

int main(){
    //ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    cin>>m;
    for(int i=0;i<m;i++)
        for(int j=0;j<=i;j++)
            scanf("%d",&num[idx++]);
            
    sum+=num[0];
    dfs(0,0);
    
    cout<<res<<endl;
    
    return 0;
}
