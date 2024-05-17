#include<stdio.h>

int unique(int * arr,int r){
	int i=0,j=0,val;
	val=arr[i];
	while(i<r){
		i++;
		if(val!=arr[i]){
			j++;
			arr[j]=arr[i];
		}
		val=arr[i];
	}
	return j;
}

int main(){
	int arr[10]={1,3,3,4,5,5,9,10,10,13},cnt=0;
	int r=unique(arr,9);
	for(;cnt<=r;cnt++){
		printf("%d ",arr[cnt]);
	}
	return 0;
}

