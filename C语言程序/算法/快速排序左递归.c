#include<stdio.h>

void quick_sort_v2(int * arr,int l,int r){
	while(l<r){
		int x=l,y=r,base=arr[l];
		while(x<y){
			while(x<y&&arr[y]>=base) y--;
			if(x<y) arr[x++]=arr[y];
			while(x<y&&arr[x]<base) x++;
			if(x<y) arr[y--]=arr[x];
			
		}
	arr[x]=base;
	quick_sort_v2(arr,x+1,r);
	r=x-1;
	}
	return ;
}

int main(){
	int arr[7]={4,6,2,7,5,1,3},cnt=0;
/*	for(;cnt<5;cnt++){
		scanf("%d",&arr[cnt]);
	}
*/
	quick_sort_v2(arr,0,6);
	cnt=0;
	for(;cnt<7;cnt++){
		printf("%d ",arr[cnt]);
	}
	printf("\n");
	
	return 0;
} 
