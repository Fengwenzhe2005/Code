#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

typedef struct Node{
	int data;
	struct Node* next;
}node,*pnode;

pnode creat_list();
void traverse_list(pnode pHead);
void search_list(pnode pHead,int val);

int main()
{
	int val;
	pnode pHead=creat_list();
//	traverse_list(pHead);
	printf("����������ҵ�Ԫ�أ�");
	scanf("%d",&val); 
	search_list(pHead,val);
	
	return 0;
} 

pnode creat_list()
{
    int len,i=0,val;
	pnode pHead=(pnode)malloc(sizeof(node));
	pnode pTail=pHead;
	pHead->next=NULL;
	printf("������ڵ�ĸ�����"); 
	scanf("%d",&len);
	for(;i<len;i++){
		pnode pNew=(pnode)malloc(sizeof(node));
		pNew->next=NULL;
		scanf("%d",&val);
		pNew->data=val;//���� pTail->data=val; ��ΪpTail����ָ����һ���ڵ� 
		pTail->next=pNew;
		pTail=pNew;
	} 
	return pHead;
}

void traverse_list(pnode pHead)
{
    pnode pNew=pHead;
	while(pNew->next!=NULL){
		printf("%d ",pNew->next->data);
		pNew=pNew->next;
	} 
    printf("\n");
	return;
}

void search_list(pnode pHead,int val)
{
	int is_full=0,cnt=1;
    pnode pNew=pHead;
	while(pNew->next!=NULL){
		if(pNew->next->data==val){
			printf("����Ѱ�ҵ�Ԫ���ڵ�%d���ڵ���\n",cnt);
			is_full=1;
			cnt++;
			
		}
		pNew=pNew->next;	
    }
    if(is_full==0){
    	printf("����Ѱ�ҵ�Ԫ�ز��������ڡ�");
	}
    return; 
}

