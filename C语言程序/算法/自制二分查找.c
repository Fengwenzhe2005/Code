#include<stdio.h>

int search(int * arr,int val,int r){
	int l=0,mid=(l+r)>>1;
	while(l<r){
		mid=(l+r)>>1; 
		if(arr[mid]>=val){
			r=mid;
		}else{
			l=mid+1;
		}
	}
	return l;
}

int main(){
	int arr[10]={1,4,10,11,13,15,19,20,35,45},val;
	int n;
	scanf("%d",&n);
	printf("%d",search(arr,n,9));
	return 0; 
}
