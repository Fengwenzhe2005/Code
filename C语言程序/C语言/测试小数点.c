#include<stdio.h>
int main()
{
	float num; 
	int cnt=0;
	scanf("%f",&num);
	while(num!=(int)num){
		num=num*10;
		cnt++; 
 }
 
   printf("%d",cnt);
    return 0;
}
 
