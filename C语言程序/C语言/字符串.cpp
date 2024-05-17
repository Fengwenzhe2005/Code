#include<stdio.h>
int main()
{
	int M;
	scanf("%d",&M);
	char ch[][10]={"January","February","March","April","May","June","July","August","September","October","November","December"} ;
	char *p=&ch[0][0];
	printf("%s\n",*(ch+M-1));
	return 0;
} 
