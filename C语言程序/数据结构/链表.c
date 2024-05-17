#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<stdbool.h>

typedef struct Node{
	int data;//������ 
    struct Node * pNext;//ָ����	 
}node,*pnode; //node�ȼ���struct Node,pnode�ȼ���struct Node * 

//��������
pnode creat_list(void); 
void traverse_list(pnode pHead);//����  
bool is_empty(pnode pHead);
int length_list(pnode);
bool insert_list(pnode,int,int);
bool delete_list(pnode,int,int*);
void sort_list(pnode);
 
int main(void) 
{
	pnode pHead=NULL;//�ȼ���struct Node *
	pHead=creat_list();
	traverse_list(pHead);
	int len=length_list(pHead);
	printf("����ĳ�����%d\n",len);
	if(is_empty(pHead)){
		printf("����Ϊ�գ�\n");
	}else{
		printf("����Ϊ�գ�\n");
	}
	sort_list(pHead);
	traverse_list(pHead);
	return 0;
	
}

pnode creat_list(void)
{
	int len;//���������Ч���ĸ���
	int i=0;
	int val;//������ʱ����û�����Ľ���ֵ 
  
    //������һ���������Ч���ݵ�ͷ��� 
    pnode pHead=(pnode)malloc(sizeof(node));
	
	if(NULL==pHead){
		printf("����ʧ�ܣ�������ֹ��\n");
		exit(-1);
	} 

	pnode pTail=pHead;
	pTail->pNext=NULL;
	 
	printf("����������Ҫ���ɵ�����ڵ�ĸ�����len= ");
	scanf("%d",&len);
	
	for(;i<len;i++){
		 printf("�������%d���ڵ��ֵ��",i+1);
		 scanf("%d",&val);
		 
		 pnode pNew=(pnode)malloc(sizeof(node));  
		 
		if(NULL==pNew){
		printf("����ʧ�ܣ�������ֹ��\n");
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



