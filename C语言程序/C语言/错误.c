#include<stdio.h>
#include<stdlib.h>

int main()
//{
//	int i,n,a[n];
//	scanf("%d",&n);
//	printf("%d",sizeof(a[n]));
//	return 0;
// } 
{
	int lenth;
	scanf("%d",&lenth);
	char *arr=malloc(sizeof(int)*lenth);
	printf("%p\n",arr);
	printf("%p\n",arr+1);
	return 0;
}
