#include<stdio.h> 
#include<math.h>

int main(){
	double M,N;
	int P;
	double Q,RT;
	scanf("%lf%lf%d",&M,&N,&P);	
	RT=M*pow(2.718281828459045,-(0.114514)*N);
	printf("%.*f",P,RT);	
	return 0;	
}

