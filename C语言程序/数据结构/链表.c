#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<stdbool.h>

typedef struct Node{
	int data;//数据域 
    struct Node * pNext;//指针域	 
}node,*pnode; //node等价于struct Node,pnode等价于struct Node * 

//函数声明
pnode creat_list(void); 
void traverse_list(pnode pHead);//遍历  
bool is_empty(pnode pHead);
int length_list(pnode);
bool insert_list(pnode,int,int);
bool delete_list(pnode,int,int*);
void sort_list(pnode);
 
int main(void) 
{
	pnode pHead=NULL;//等价于struct Node *
	pHead=creat_list();
	traverse_list(pHead);
	int len=length_list(pHead);
	printf("链表的长度是%d\n",len);
	if(is_empty(pHead)){
		printf("链表为空！\n");
	}else{
		printf("链表不为空！\n");
	}
	sort_list(pHead);
	traverse_list(pHead);
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

bool is_empty(pnode pHead)
{
	if(NULL==pHead->pNext){
		return true;
	}else{
		return false;
	} 
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

void sort_list(pnode pHead)
{
	int i,j,t;
	pnode p,q;
	int len=length_list(pHead);
	
	for(i=0,p=pHead->pNext;i<len-1;i++,p=p->pNext)
 	{
 		for(j=i+1,q=p->pNext;j<len;j++,q=q->pNext)
 		{
 			if(p->data>q->data)
 			{
 				t=p->data;
 				p->data=q->data;
 				q->data=t;
 				
			}
		 }
	}
	return;
} 



