#include<stdio.h>
#include<stdlib.h>

struct result{
	int l;
	int r;
};

void sort(int * a,int * b,int l,int r) {
	int x=l,y=r,val=a[l],num=b[l]; 
	if(y<=x){
		return ;
	}
	while(y>x){
		while(val<=a[y]&&y>x){
			y--;
		}
		if(y>x){
			a[x]=a[y];
			b[x]=b[y];
			x++;
		}else{
			break;
		}
		
		while(val>=a[x]&&y>x){
			x++;
		}
		if(y>x){
			a[y]=a[x];
			b[y]=b[x];
			y--;
		}else{
			break;
		}
	}
	a[x]=val;
	b[x]=num;
	sort(a,b,0,x-1);
	sort(a,b,x+1,r);
	return;
}

int main(){
	int a[100010],b[100010],N,cnt=0,l=0,max,num=0,min,flag=0;
	struct result * p =(struct result*)malloc(sizeof(struct result)*N);
	scanf("%d",&N);
	for(;cnt<N;cnt++){
		scanf("%d%d",a+cnt,b+cnt);
	}
	
	sort(a,b,0,N-1);
	
	for(cnt=0;cnt<N;cnt++,l++){
		while((l<N-1)&&(b[l]>=a[l+1])){
		    min=a[l]<a[l+1]?a[l]:a[l+1];
			max=b[l]>b[l+1]?b[l]:b[l+1];
			l++;
			cnt++;
			flag=1;
		}
		
		if(flag==1){
			p[num].l=min;
			p[num].r=max;
			num++;
			flag=0;
		}else{
			p[num].l=a[l];
			p[num].r=b[l];
			num++;
		}
	}
	
	for(cnt=0;cnt<num;cnt++){
		printf("%d %d\n",p[cnt].l,p[cnt].r);
	}
	
	return 0; 
}
