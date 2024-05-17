#include<iostream>
int n,fa[1000000],a[1000000],T,T2;
//fa[i]表示i的父亲 
int find(int x){//查找x的祖先 
	if(fa[x]==x) return x;
	return fa[x]=find(fa[x]);
}
using namespace std;
int main(){
	cin>>n>>T>>T2;//T组合并，T2组查询 
	for(int i=1;i<=n;i++) fa[i]=i;
	for(int t=1;t<=T;t++){
		int a,b;cin>>a>>b;//合并 
		int fa1=find(a),fa2=find(b);
		if(fa1==fa2) continue;
		fa[fa1]=fa2;
	}
	for(int t=1;t<=T2;t++){
		int a,b;cin>>a>>b;
		int fa1=find(a),fa2=find(b);
		if(fa1==fa2) cout<<"Yes"<<endl;
		else cout<<"No";
		
	}
	return 0;
}
