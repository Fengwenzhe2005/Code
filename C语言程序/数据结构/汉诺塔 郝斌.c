#include<stdio.h> 

void Hanoi(int n,char chushi,char zhuanyi,char mubiao)
{
	/*�����1������
	      ֱ�ӽ�A�����ϵ����Ӵ�A�Ƶ�C
	  ����
	      �Ƚ�A�����ϵ�n-1�����ӽ���C�Ƶ�B
		  ֱ�ӽ�A�����ϵ�n-1�����Ӵ�A�Ƶ�C
		  ���B�����ϵ�n-1�����ӽ���A�Ƶ�C
	*/ 
	
	if(1==n)
	{
		printf("�����Ϊ%d������ֱ�Ӵ�%c�����Ƶ�%c����\n",n,chushi,mubiao);
	} 
	else
	{
		Hanoi(n-1,chushi,mubiao,zhuanyi);
	    printf("�����Ϊ%d������ֱ�Ӵ�%c�����Ƶ�%c����\n",n,chushi,mubiao);
		Hanoi(n-1,zhuanyi,chushi,mubiao);
	}
}

int main(void)
{
	char ch1='A';
	char ch2='B';
	char ch3='C';
	int n;
	
	printf("������Ҫ�ƶ����ӵĸ�����");
	scanf("%d",&n);
	
	Hanoi(n,'A','B','C');
	
	return 0;
} 
