#include<stdio.h>
#include<string.h>

int num[111];

int add(int length){
	int cnt=0;
	num[0]+=1;
	while(num[cnt]>=10){
		num[cnt+1]+=num[cnt]/10;
		num[cnt]=num[cnt]%10;
		if(cnt==length-1){
			length++;
		}
		cnt++;
	}

	return length;
}

int find(int length){
	length=add(length); 
	while(1){	
	    int l=0,r=length-1,cnt=0;
    while(num[l]==num[r]&&r>l){
		l++;
    	r--;
    	cnt++;
	}
	if(cnt==length/2){
		break;
	}else{
		length=add(length);		
	}
	l=0;
	r=length-1;
	cnt=0;
	}
	return length;
}

int main(){
    char N[111];
    scanf("%s",N);
    int cnt1=strlen(N)-1,cnt=0,length=strlen(N);
    for(;cnt1>=0;cnt1--){
		num[cnt1]=N[cnt++]-'0';
	}
	
	cnt=find(length)-1;
	
	for(;cnt>=0;cnt--){
		printf("%d",num[cnt]);
	}

	return 0;
}
