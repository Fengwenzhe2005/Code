#include<iostream>
int n,fa[1000000],a[1000000],T,T2;
//fa[i]��ʾi�ĸ��� 
int find(int x){//����x������ 
	if(fa[x]==x) return x;
	return fa[x]=find(fa[x]);
}
using namespace std;
int main(){
	cin>>n>>T>>T2;//T��ϲ���T2���ѯ 
	for(int i=1;i<=n;i++) fa[i]=i;
	for(int t=1;t<=T;t++){
		int a,b;cin>>a>>b;//�ϲ� 
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
