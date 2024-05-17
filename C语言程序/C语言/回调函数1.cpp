#include<stdio.h>

void A()
{
	printf("Hello");
} 

void B(void (*ptr)())//接受指向函数A的指针 
{
	ptr();//通过指针调用函数A  
}
int main()
{
1.	void (*p)()=A;//定义指向函数A的指针 
	B(p); //将指向函数A的指针作为参数传给函数B 
	
2. B(A);//A==&A	
}
//int (*p)(int,int);
//p=&Add; p=Add; 
//p();
