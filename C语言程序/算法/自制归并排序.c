#include<stdio.h>
#include<stdlib.h>

void sort(int *p,int l,int r){
	if(l>=r){
		return ;
	}
	int mid=(r+l)/2;
	sort(p,l,mid);
	sort(p,mid+1,r);
	int * tmp=(int*)malloc(sizeof(int)*(r-l+1));
	int p1=l,p2=mid+1,k=0;
	while(p1<=mid&&p2<=r){
		if(p[p1]<p[p2]){
			tmp[k++]=p[p1++];
		}else{
			tmp[k++]=p[p2++];		
		}
	}
	if(p1<=mid){
		while(p1<=mid){
			tmp[k++]=p[p1++];		
		}
	}else{
		while(p2<=r){
			tmp[k++]=p[p2++];
		}
	}

	int i=l;
	for(;i<=r;i++){
		p[i]=tmp[i-l];
	}	
	free(tmp);
	
	return ;
}

int main(){
	int N,cnt=0;
	scanf("%d",&N); 
	int * p=(int*)malloc(sizeof(int)*N);
	for(;cnt<N;cnt++){
		scanf("%d",p+cnt);
	}
	
	sort(p,0,N-1);
	
	for(cnt=0;cnt<N;cnt++){
		printf("%d ",p[cnt]);
	}
	
} 
