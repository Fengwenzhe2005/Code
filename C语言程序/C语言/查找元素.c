#include<stdio.h>
int a[210]; 
int main()
{
	int n,cnt=0,x;

	scanf("%d",&n);
	
	
		
	for(;cnt<n;cnt++){

		scanf("%d",&a[cnt]);
	}

	scanf("%d",&x);

	cnt=0;

	while(x!=a[cnt]){
		cnt++;
	}
	if(cnt<=n-1){
		printf("%d\n",cnt);
	}else{
		printf("-1\n"); 
	}
	return 0;
}
