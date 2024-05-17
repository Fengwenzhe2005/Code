#include<stdio.h>
#include<stdlib.h>
void sort(int * p,int l,int r){

	if(l>=r){
		return ;
	}	
	int left=l,right=r;
	int val=p[left];
	while(left<right){
		while(right>left&&p[right]>val){
			right--;
		}
		if(left>=right){
			break;
		}else{
			p[left]=p[right];
			left++;
		}
		while(right>left&&p[left]<val){
			left++;
		}
		if(left>=right){
			break;
		}else{
			p[right]=p[left];
			right++;
		}
	}
	p[right]=val;
	sort(p,l,left-1);
	sort(p,right+1,r);
	return ;
}

int main(){
	int N,cnt=0;
	scanf("%d",&N);
    int l=0,r=N-1;
	int * p = (int*)malloc(N*sizeof(int));
	for(;cnt<N;cnt++){
		scanf("%d",&p[cnt]);
	}
	sort(p,l,r);
	for(cnt=0;cnt<N;cnt++){
		printf("%d ",p[cnt]);
	}
	return 0;
} 
