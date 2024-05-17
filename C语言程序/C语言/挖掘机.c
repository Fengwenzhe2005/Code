#include<stdio.h>
int main()
{
	long N,a[100000]={0},cnt=0,num,grade,max;
	scanf("%ld",&N);
	for(;cnt<=N-1;cnt++){
		scanf("%d %d",&num,&grade);
		a[num-1]+=grade;
	}

	cnt=0;
	max=a[0];
	for(;cnt<=N-1;cnt++){
		if(max<a[cnt]){
			max=a[cnt];
		}
	}
	cnt=0;
	for(;cnt<=N-1;cnt++){
		if(max==a[cnt]){
			break;
		}
	}
	printf("%ld %ld",cnt+1,max);
	
	return 0; 
	
} 
