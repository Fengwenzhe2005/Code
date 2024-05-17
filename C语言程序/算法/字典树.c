#include<stdio.h>
#define N 100010

int a[N][26],b[N],idx; 

void insert(char * ch){
	int p=0,i=0;
	for(;ch[i];i++){
		int u=ch[i]-'a';
		if(a[p][u]==0){
			a[p][u]=++idx;
		}
		p=a[p][u];
	}
	b[p]++;
	return ;
}

int query(char * ch){
	int p=0,i=0;
	for(;ch[i];i++){
		int u=ch[i]-'a';
		if(a[p][u]==0){
			return 0;
		}
		p=a[p][u];
	}
	return b[p];
}

int main(){
	char ch[N];
	int m,n;
	scanf("%d%d",&m,&n); 

	while(m--){
		scanf("%s",ch);
    	insert(ch);		
	}
	
	while(n--){
		scanf("%s",ch);
		printf("%d\n",query(ch));
	}
	
	return 0; 
} 
