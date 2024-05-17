#include<stdio.h>
int Hanoi(char from,char to,char auxiliary,int n)
{
	if(n==1)
	{
		printf("from is %c,to is %c,auxiliary is %c.\n",from,to,auxiliary);
		printf("move disk 1 from %c to %c.\n",from,to) ;
	}
	
	else
	{
		Hanoi(from,auxiliary,to,n-1);
		printf("from is %c,to is %c,auxiliary is %c.\n",from,to,auxiliary);
		printf("move disk %d from %c to %c.\n",n,from,to) ;
		Hanoi(auxiliary,to,from,n-1);
	}
 } 
 
int main()
{
	int number;
	char ch1='a';
	char ch2='b';
	char ch3='c';
	
	scanf("%d",&number);
	
	Hanoi('a','b','c',number);
	
	return 0;
}
