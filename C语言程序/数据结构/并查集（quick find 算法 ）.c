#include<stdio.h>
#include<stdlib.h>

int * color,n;

void unionset(int n){
	color=(int*)malloc((n+1)*sizeof(int));
	int i=0;

	for(;i<=n;i++){
		color[i]=i;
	}
	return ;
}

int find(int x){
	return color[x];
}

void merge(int a,int b){
	if(color[a]==color[b]){
		return ;
	}
	int cb=color[b],i=0;
	for(;i<=n;i++){
		if(color[i]==cb){
			color[i]=color[a];
		}
	}
	return ;
}

int main(){
	
	return 0; 
} 
