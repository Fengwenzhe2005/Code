#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct Node{
	int data; 
    struct Node * pNext;	 
}node,*pnode; 

pnode creat_list(void); 
void traverse_list(pnode pHead);
//bool delete_list(pnode,int);
bool delete_list(pnode pHead, int pos);

int main() 
{
	//int val;
	int n;
	pnode pHead=NULL;//等价于struct Node *
	pHead=creat_list();
    printf("请输入想删除第几个节点：");
	scanf("%d",&n) ;
	delete_list(pHead, n);
/*	if (  )
	{
		printf("删除成功，您删除的元素是: %d\n", val);
	}
	else
	{
		printf("删除失败!您删除的元素不存在!\n");
	}*/

	traverse_list(pHead);//
//	delete_list(pHead,2);
//	traverse_list(pHead);
	return 0;
	
}

pnode creat_list(void)
{
	int len;//用来存放有效结点的个数
	int i=0;
	int val;//用来临时存放用户输入的结点的值 
  
    //分配了一个不存放有效数据的头结点 
    pnode pHead=(pnode)malloc(sizeof(node));
	
	if(NULL==pHead){
		printf("分配失败，程序终止！\n");
		exit(-1);
	} 

	pnode pTail=pHead;
	pTail->pNext=NULL;
	 
	printf("请输入您需要生成的链表节点的个数：len= ");
	scanf("%d",&len);
	
	for(;i<len;i++){
		 printf("请输入第%d个节点的值：",i+1);

		 scanf("%d",&val);
		 
		 pnode pNew=(pnode)malloc(sizeof(node));  
		 
		if(NULL==pNew){
		printf("分配失败，程序终止！\n");
		exit(-1);
	}   
	    pNew->data=val;
	    pTail->pNext=pNew;
	    pNew->pNext=NULL; 
	    pTail=pNew;
	}
	return pHead;
}

void traverse_list(pnode pHead)
{
	pnode p=pHead->pNext;
	
	while(NULL!=p)
	{
		printf("%d ",p->data);
		p=p->pNext;
	}
	return; 	
}

int length_list(pnode pHead)
{
	pnode p=pHead->pNext;
	int len=0;
	
	while(NULL!=p)
	{
		len++;
		p=p->pNext;
	}
	return len;
}

bool delete_list(pnode pHead,int pos)
{
  
    pnode p=pHead;
	int len=length_list(pHead);

	if(NULL==p||pos>=len||pos<1)
	return false;
	
	int i=1;
	for(;i<pos;i++){
		p=p->pNext; 
	}
	pnode q=p->pNext;
	p->pNext=p->pNext->pNext;
	free(q);
	q=NULL;  
	return true;
}	
