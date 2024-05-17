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
	pnode pHead=NULL;//�ȼ���struct Node *
	pHead=creat_list();
    printf("��������ɾ���ڼ����ڵ㣺");
	scanf("%d",&n) ;
	delete_list(pHead, n);
/*	if (  )
	{
		printf("ɾ���ɹ�����ɾ����Ԫ����: %d\n", val);
	}
	else
	{
		printf("ɾ��ʧ��!��ɾ����Ԫ�ز�����!\n");
	}*/

	traverse_list(pHead);//
//	delete_list(pHead,2);
//	traverse_list(pHead);
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
