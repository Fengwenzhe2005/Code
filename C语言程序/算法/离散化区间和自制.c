#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h> 

struct data{
	int op;
	int num;
};

void sort(int * arr,int l,int r){
	if(l>=r){
		return ;
	}
	int val=arr[l],x=l,y=r;
	while(y>x){
	while(y>x&&arr[y]>=val){
		y--;
	}
	if(y>x){
		arr[x]=arr[y];
		x++;
	}else{
		break;
	}
	while(y>x&&arr[x]<=val){
		x++;
	}
	if(y>x){
		arr[y]=arr[x];
		y--;
	}else{
		break;
	}
	}
	arr[x]=val;
	sort(arr,l,x-1);
	sort(arr,x+1,r);
	return ;
}

int unique(int * arr,int r){
	int i=0,j=0,val;
	val=arr[i];
	while(i<r){
		i++;
		if(val!=arr[i]){
			j++;
			arr[j]=arr[i];
		}
		val=arr[i];
	}
	return j;
}

int search(int * arr,int val,int r){
	int l=0,mid=(l+r)>>1;
	while(l<r){
		mid=(l+r)>>1; 
		if(arr[mid]>=val){
			r=mid;
		}else{
			l=mid+1;
		}
	}
		return l+1;
}


bool judge(int * arr,int val,int r){
	int i=search(arr,val,r)-1;
	if(arr[i]<=val){
		return true;
	}else{
		return false;
	}
}

int main(){
	struct data arr[100010];
	int* no=(int*)malloc(sizeof(int)*100010);
	int n,m,cnt=0,a[100010],s[100010],left,right,result[100010];
	scanf("%d%d",&n,&m);
	for(;cnt<n;cnt++){
		scanf("%d%d",&arr[cnt].op,&arr[cnt].num);
		no[cnt]=arr[cnt].op; 
	}

	sort(no,0,n-1);
	int r=unique(no,n-1);
	
	
	for(cnt=0;cnt<n;cnt++){
		arr[cnt].op=search(no,arr[cnt].op,r);
		a[arr[cnt].op]+=arr[cnt].num;
	}
	
	for(cnt=1;cnt<=r+1;cnt++){
		s[cnt]=s[cnt-1]+a[cnt];
	}
	
	for(cnt=0;cnt<m;cnt++){
		scanf("%d%d",&left,&right); 
		if(search(no,left,r)>no[search(no,left,r)-1]){
			result[cnt]=0;
			continue;	
		}else{
			left=search(no,left,r);
		}
		if(judge(no,right,r)){
			right=search(no,right,r);
		}else{
			right=search(no,right,r)-1;
		}
		result[cnt]=s[right]-s[left-1];
    }
	
	for(cnt=0;cnt<m;cnt++){
		printf("%d\n",result[cnt]);
	}

	
	return 0;
} 

