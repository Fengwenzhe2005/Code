#include<stdio.h>
#include<stdlib.h>

int searchInsert(int* nums, int numsSize, int target) {
    int l=0,r=numsSize-1,mid;
    while(r>l){
        mid=(l+r)/2;
        if(nums[mid]>=target){
            r=mid;
        }else{
            l=mid+1;
        }
    }
   if(nums[l]==target){
        return l;
    }else if(target>nums[l]){
        return numsSize;
    }else{
        return l;
    }
}

int main(){
	int N,cnt=0,target;
	printf("nums size=");
	scanf("%d",&N);
	printf("target=");
	scanf("%d",&target);
	int * nums=(int*)malloc(sizeof(int)*N);
	for(;cnt<N;cnt++){
		scanf("%d",nums+cnt);
	}
	printf("position is %d",searchInsert(nums,N,target));
} 
