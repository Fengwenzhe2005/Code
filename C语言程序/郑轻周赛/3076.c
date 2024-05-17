#include<stdio.h>
#include<stdlib.h>

int main(){
    long sum1=0,sum2=0;
	int t=0,n=0,cnt=0,i=0;
    scanf("%d",&t);
    int a[1010]={0};
    for(;cnt<t;cnt++,sum1=0,sum2=0,i=0){
       scanf("%d",&n); 
        long * p=(long*)malloc(n*sizeof(long));
        for(;i<n;i++){
            scanf("%ld",&p[i]);
        }
        i=0;
        for(;i<n;i++){
            if(p[i]%2==0){
            sum2+=p[i];
            }else{
                sum1+=p[i];
            }
        }
        if(sum1>=sum2){
            a[cnt]=2;
        }else{
            a[cnt]=1;
        }
    free(p);
    }
    
    cnt=0;
    for(;cnt<t;cnt++){
    	if(a[cnt]==1){
    		printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
    return 0;
}
