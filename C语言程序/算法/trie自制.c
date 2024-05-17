#include<stdio.h>
#define N 100010

int trie[N][26],cnt[N],idx=0;

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	while(n--){
		char str[N];
		int i=0,j=0;
		scanf("%s",str);		
		for(;str[i];i++){
			int u=str[i]-'a';
			if(trie[j][u]==0){
				trie[j][u]=++idx;
			}
			j=trie[j][u];
		}	
		cnt[j]++;		
	}
	
	while(m--){
		char str[N];
		int i=0,j=0;
		scanf("%s",str);
		for(;str[i];i++){
			int u=str[i]-'a';
			if(trie[j][u]!=0){
			j=trie[j][u];	
			}else{
				break;
			}
		}
		printf("%d\n",cnt[j]);
	}
	
	return 0;
}
