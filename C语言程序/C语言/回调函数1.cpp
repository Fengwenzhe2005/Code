#include<stdio.h>

void A()
{
	printf("Hello");
} 

void B(void (*ptr)())//����ָ����A��ָ�� 
{
	ptr();//ͨ��ָ����ú���A  
}
int main()
{
1.	void (*p)()=A;//����ָ����A��ָ�� 
	B(p); //��ָ����A��ָ����Ϊ������������B 
	
2. B(A);//A==&A	
}
//int (*p)(int,int);
//p=&Add; p=Add; 
//p();
