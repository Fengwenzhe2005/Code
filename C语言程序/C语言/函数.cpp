#include<stdio.h>

int f(int number){
	int i=1;
	long long result=1;
	for(;i<=number;i++){
		result*=i;		
}
	return result;	
}

int main(void){
 int n,count=1;
 long long sum=0;
	scanf("%d",&n);
	for(;count<=n;count++){
		sum+=f(count);
	}
	printf("%Ld",sum);
	
	return 0;
}
