#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h> 
#include<malloc.h> 

//定义了一个数据类型，该数据类型的名字叫做struct Arr，该结构有三个成员
struct Arr{
	int * pBase;//存储的是数组的第一个元素的地址 
	int len;//数组所能容纳的最大元素的个数
	int cnt;//当前数组有效元素的个数 
};

void init_arr(struct Arr * pArr,int length);
bool append_arr(struct Arr * pArr,int val);//追加
bool insert_arr(struct Arr * pArr,int pos,int val); 
bool delete_arr(struct Arr * pArr,int pos,int *pVal);
int get();
bool is_empty(struct Arr * pArr);
bool is_full(struct Arr *pArr);
void sort_arr();
void show_arr(struct Arr * pArr);
void inversion_arr(struct Arr * pArr);//倒置 

int main()
{
	struct Arr arr;
	int Val;
	arr.cnt=0; 
	arr.len=6;
	init_arr(&arr,6);
	show_arr(&arr);
	append_arr(&arr,1);
	append_arr(&arr,3);
	append_arr(&arr,4);
	show_arr(&arr);
	insert_arr(&arr,2,2);
	show_arr(&arr);
    if(delete_arr(&arr,2,&Val)){
    	printf("删除成功！\n");
    	printf("您删除的元素是：%d\n",Val);
	}
    show_arr(&arr);
    inversion_arr(&arr);
    show_arr(&arr);
	return 0;
}

void init_arr(struct Arr * pArr,int length)
{
	pArr->pBase=(int*)malloc(sizeof(int)*length);
	if(pArr->pBase==NULL){
		printf("动态内存分配失败！\n");
		exit(-1);
	}
}

bool is_empty(struct Arr * pArr)
{
	if(pArr->cnt==0){
		return true;
	}else{
		return false;
	}
}

void show_arr(struct Arr * pArr)
{
    int i=0; 
	if(is_empty(pArr)){
		printf("数组为空！\n");
	}else{
		for(;i<pArr->cnt;i++){
			printf("%d ",pArr->pBase[i]);
		}
	}
	printf("\n");
}

bool is_full(struct Arr *pArr)
{
	if(pArr->cnt==pArr->len){
		return true;
	}else{
		return false;
	}
}

bool append_arr(struct Arr *pArr,int val)
{	
	//满时返回false 
	if(is_full(pArr)){
		return false;
	}
	//不满时追加 
	else{
		pArr->pBase[pArr->cnt]=val;
		pArr->cnt++;
		return true;
	} 
}

bool insert_arr(struct Arr * pArr,int pos,int val)
{
    //满时返回false 
	if(is_full(pArr)||pos<1||pos>pArr->cnt+1){
		return false;
	}
	//不满时插入
	else{
		int i=pArr->cnt-1;
		for(;i>=pos-1;i--){
		pArr->pBase[i+1]=pArr->pBase[i];
		}
		pArr->pBase[pos-1]=val;
		(pArr->cnt)++;
		return true;
	}	
}

bool delete_arr(struct Arr * pArr,int pos,int *pVal)
{
	if(is_empty(pArr))
		return false;
	
	if(pos<1||pos>pArr->cnt)
		return false;
	
	int i=pos;
	*pVal=pArr->pBase[i-1];
		for(;i<pArr->cnt;++i){
		pArr->pBase[i-1]=pArr->pBase[i];
	}
    (*pArr).cnt--;
    return true;		
}

void inversion_arr(struct Arr * pArr)
{
	int i=0;
	int j=pArr->cnt-1;
	int t;
	
	while(i<j){
	t=pArr->pBase[i];
	pArr->pBase[i]=pArr->pBase[j];
	pArr->pBase[j]=t;
	i++;
	j--;
	}
	return;
}
