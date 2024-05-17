#include<stdio.h>
void quick_sort_v1(int * arr,int l,int r){
	if(l>=r) return ;   
	    int x=l,y=r,base=arr[l];
	while(x<y){	
		while(x<y){
			while(x<y&&arr[y]>=base) y--;
			if(x<y) arr[x++]=arr[y];
			while(x<y&&arr[x]<base) x++;
			if(x<y) arr[y--]=arr[x];
		}
	arr[x]=base;
	quick_sort_v1(arr,l,x-1);//先处理左边 
	quick_sort_v1(arr,x+1,r);//再处理右边 
	}
	return ;
}

int main(){
	int arr[5],cnt=0;
	for(;cnt<5;cnt++){
		scanf("%d",&arr[cnt]);
	}
	quick_sort_v1(arr,0,4);
	cnt=0;
	for(;cnt<5;cnt++){
		printf("%d ",arr[cnt]);
	}
} 
