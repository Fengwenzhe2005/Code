#include<stdio.h> 

void Hanoi(int n,char chushi,char zhuanyi,char mubiao)
{
	/*如果是1个盘子
	      直接将A柱子上的盘子从A移到C
	  否则
	      先将A柱子上的n-1个盘子借助C移到B
		  直接将A柱子上的n-1个盘子从A移到C
		  最后将B柱子上的n-1个盘子借助A移到C
	*/ 
	
	if(1==n)
	{
		printf("将编号为%d的盘子直接从%c柱子移到%c柱子\n",n,chushi,mubiao);
	} 
	else
	{
		Hanoi(n-1,chushi,mubiao,zhuanyi);
	    printf("将编号为%d的盘子直接从%c柱子移到%c柱子\n",n,chushi,mubiao);
		Hanoi(n-1,zhuanyi,chushi,mubiao);
	}
}

int main(void)
{
	char ch1='A';
	char ch2='B';
	char ch3='C';
	int n;
	
	printf("请输入要移动盘子的个数：");
	scanf("%d",&n);
	
	Hanoi(n,'A','B','C');
	
	return 0;
} 
