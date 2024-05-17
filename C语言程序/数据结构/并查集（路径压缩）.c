#include<stdio.h>
#include<stdlib.h>

int * father,n;

void unionset(int n){
	father=(int*)malloc((n+1)*sizeof(int));
	int i=0;
	for(;i<=n;i++){
		father[i]=i;
	}
	return ;
}
 
int find(int x){
	if(father[x]==x){
		return x;
	}
	int root=find(father[x]);
	father[x]=root;
	return root; 
} 

void merge(int a,int b){
	int fa=find(a),fb=find(b);
	if(fa==fb){
		return ;
    }
    father[fa]=fb;
	return ; 
}

int main(){
	return 0;  
}
