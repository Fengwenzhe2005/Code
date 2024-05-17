#include<stdio.h>

int main()
{
	int a[2][2]={1,2,3,4};
	printf("%d\n",a);
	printf("%d\n",a+1);
	printf("%d\n",*a);
	printf("*a+1=%d\n",*a+1);
	printf("%d\n",*(a+1));
	printf("%d\n",a[0]); 
	printf("%d\n",*a[1]); 
	printf("%d\n",a[0]+1);
	printf("%d\n",*(*a));
    printf("size of int is %d\n",sizeof(int));
	if((a[0]+1)==(*a+1)){
	printf("œ‡µ»°£\n");
}
	return 0;
}
