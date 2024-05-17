#include<stdio.h>
#include<stdlib.h>

void merge_sort(int *arr,int l,int r){
	if(l>=r){
		return ;
	}
	int mid=(l+r)/2;
	merge_sort(arr,l,mid); 
	merge_sort(arr,mid+1,r);  
	int *temp=(int*)malloc(sizeof(int)*(r-l+1)); 
	int k=0,p1=l,p2=mid+1;
	while(p1<=mid||p2<=r){
		if((p2>r)||(p1<=mid&&arr[p1]<=arr[p2])){
			temp[k++]=arr[p1++];
		}else{
			temp[k++]=arr[p2++];	
		}
	}
	int i=l;
	for(;i<=r;i++){
		arr[i]=temp[i-l];
	} 
	free(temp);
	return ;
}

int main(){
	int N,cnt=0;
	scanf("%d",&N); 
	int * arr=(int*)malloc(sizeof(int)*N);
	for(;cnt<N;cnt++){
		scanf("%d",arr+cnt);
	}
	
	merge_sort(arr,0,N-1);
	
	for(cnt=0;cnt<N;cnt++){
		printf("%d ",arr[cnt]);
	}	
} 
