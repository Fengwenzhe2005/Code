#include<stdio.h>

/* int factorial(int );
int sum(int );

int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",factorial(n));
	int val;
	scanf("%d",&val);
	printf("%d",sum(val));
	return 0;
	
	
} */

/*int factorial(int n)
{
	if(n==1)
	{
		return 1;
	}else
	{
		return factorial(n-1)*n;
	}
} */

/*int sum(int val)
{
	if(val==1)
	{
		return 1; 
	}else
	{
		return val+sum(val-1);
	}
} */

void f(int n);

int main()
{
	f(3);
	return 0;
}

void f(int n)
{
	if(n<2){
		printf("¹þ¹þ\n");
	}else{
		f(n-1);
	}
}
