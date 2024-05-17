#include<stdio.h>

int main(void)
{
	long long x=1,y=1;
	int count,i=0;
	printf("ÇëÊäÈëÏîÊý£º");
	scanf("%d",&count);
	if(count==1){
		printf("1 ");
	}else if(count==2){
		printf("1 1 ");
	}else if(count>2){
	printf("1 1 ");
	for(;i<=count-3;i++){
	if(i%2==0){
		y=x+y;
		printf("%lld ",y);
	}else{
		x=y+x;
		printf("%lld ",x);
	}	
	}
	}
	return 0;
} 
