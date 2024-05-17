#include<stdio.h>
#define N 10010

int e[N],ne[N],idx,head;

void traverse(){
	if(head==-1){
		printf("Null\n");
	}else{
		int p=head;		
		while(p!=-1){
		printf("%d ",e[p]);
		p=ne[p];			
		}
	}
	return ;
}

void del(int k){
	ne[k]=ne[ne[k]];
}

void init(){
	head=-1;
	idx=0;
	return ;
}

int add_head(int x){
	ne[idx]=head;
	head=idx;
	e[idx]=x;
	idx++;
}

int add(int k,int x){
	ne[idx]=ne[k];
	ne[k]=idx;
	e[idx]=x;	
	idx++;

}

int main(){
	int n,x,k,cnt=0;
	char ch;
	scanf("%d",&n);
	init();
	scanf("%c",&ch);
	for(;cnt<n;cnt++){
		if(ch=='H'){
			scanf("%d",&x);
			add_head(x);
		}else if(ch=='D'){
			scanf("%d",&k);
			if(k==0){
				head=ne[head];
		 }else{
				del(k-1);
			}
		}else if(ch=='I'){
			scanf("%d%d",&k,&x);
			add(k-1,x);
		}else{
		scanf("%c",&ch);
		cnt--; 
		continue;
		}
		scanf("%c",&ch);
		
	}
	
	traverse();
	
	return 0; 
} 
