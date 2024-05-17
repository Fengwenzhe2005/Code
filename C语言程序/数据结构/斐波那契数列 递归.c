#include<stdio.h>

int Fibo(int );

int main()
{
	int num;
	scanf("%d",&num);
    Fibo(num);
	printf("%d",Fibo(num));
	return 0;
} 

int Fibo(int num)
{
	

	if(num==1){
		return 1;
	}
	
	if(num==2){
		return 1;
	}
	
	else{
		return Fibo(num)=Fibo(num-1)+Fibo(num-2);	
	}
}
