#include<iostream>
using namespace std;

const int N=10;
int v[N],st[N],n,res[N];

void dfs(int a){
	if(a==n){
		printf("{ ");
		for(int i=0;i<n;i++)
			if(res[i]==1) cout<<v[i]<<" ";
		printf("}\n");
		return ;
	}
				
	res[a]=1,dfs(a+1);
				
	res[a]=0,dfs(a+1);
	
	return ;
}

int main(){
	cin>>n;
	for(int i=0;i<n;i++) cin>>v[i];
	dfs(0);
	return 0;
} 
