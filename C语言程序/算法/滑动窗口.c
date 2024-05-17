#include<stdio.h>
#define N 100010
int a[N],q[N],p[N];

int main(){
    int n,k,cnt=0,r,idx=0;
    scanf("%d%d",&n,&k);
    for(;cnt<n;cnt++){
        scanf("%d",&a[cnt]);
    }
    
    int hh=0,tt=-1;
    r=k-1;
    while(idx<n){
    	while(idx<=r){
    		if(hh>tt){
    		q[++tt]=idx;
		    }else{
			    if(a[idx]>a[q[tt]]){
			    	q[++tt]=idx;
			    }else{
				    while(a[idx]<=a[q[tt]]){
				    	tt--;
					    if(hh>tt){
						    break;
					    }
				}
				q[++tt]=idx;
			    }
		    }
		    idx++;
		}

		while(idx-q[hh]-1==k){
			hh++;
		}
		
		printf("%d ",a[q[hh]]);
		
		r++;
	}
	
	printf("\n");
	
	hh=0,tt=-1,r=k-1,idx=0;
    while(idx<n){
    	while(idx<=r){
    		if(hh>tt){
    		q[++tt]=idx;
		    }else{
			    if(a[idx]<a[q[tt]]){
			    	q[++tt]=idx;
			    }else{
				    while(a[idx]>=a[q[tt]]){
				    	tt--;
					    if(hh>tt){
						    break;
					    }
				}
				q[++tt]=idx;
			    }
		    }
		    idx++;
		}

		while(idx-q[hh]-1==k){
			hh++;
		}
		
		printf("%d ",a[q[hh]]);
		
		r++;
	}

    return 0;
}
