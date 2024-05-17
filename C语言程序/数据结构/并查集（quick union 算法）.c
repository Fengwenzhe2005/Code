#include<stdio.h>
#include<stdlib.h>

int * father,* size,n;

void unionset(int n){
	father=(int*)malloc((n+1)*sizeof(int));
	size=(int*)malloc((n+1)*sizeof(int));
	int i=0;
	for(;i<=n;i++){
		father[i]=i;
		size[i]=1;
	}
	return ;
}
 
int find(int x){
	if(father[x]==x){
		return x;
	}
	return find(father[x]);
} 

void merge(int a,int b){
	int fa=find(a),fb=find(b);
	if(fa==fb){
		return ;
	}
	/* 节点数目多，合并时作为父节点 */ 
	if(size[fa]<size[fb]){
		father[fa]=fb;
		size[fb]+=size[fa];	
	}else{
		father[fb]=fa;
		size[fa]+=size[fb];		
	}
	
	return ; 
}

int main(){
	
	return 0; 
}
