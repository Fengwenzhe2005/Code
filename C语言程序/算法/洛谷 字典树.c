#include<stdio.h> 
#include<string.h>
#define N 1000010
	
int T,n,q,a[N][100],num[N],i,idx=0,p,u;
char str[300010];

int main(){
	scanf("%d",&T);
	while(T--){
		scanf("%d%d",&n,&q);
		idx=0; 
		while(n--){
			scanf("%s",str);
			for(i=0,p=0;str[i];i++){
				u=str[i]-'0';
				if(a[p][u]==0){
					a[p][u]=++idx;
				}
				p=a[p][u];
				num[p]++;				
			}
		}
		
		while(q--){
			int ans;
			scanf("%s",str);
			for(ans=0,i=0,p=0;str[i];i++){
				u=str[i]-'0';
				if(a[p][u]==0){
					ans=0;
					break;
				}
				p=a[p][u];
				ans=num[p];
			}
			printf("%d\n",ans);
		}
		memset(a,0,sizeof(a));
		memset(num,0,sizeof(num));
	}	
	return 0;
}
