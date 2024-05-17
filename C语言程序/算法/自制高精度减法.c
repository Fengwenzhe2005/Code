#include<stdio.h>
#include<string.h>
int result[10010],byte=0;

void sub(int * big,int * small,int len){
	int cnt=0,flag=1;
	for(;cnt<len;cnt++){
		if(big[cnt]-small[cnt]>=0){
			result[cnt]=big[cnt]-small[cnt];
		}else{
			result[cnt]=big[cnt]-small[cnt]+10;
			big[cnt+1]--;
		}
		
		if(result[cnt]==0&&flag==0){
			byte=cnt;
			flag=1;
		}
		
		if(result[cnt]!=0){
			byte=cnt+1;
			flag=1;
		}
	}
}

int main(){
	char number1[100010],number2[100010];
	scanf("%s",number1);
	scanf("%s",number2);
	int num1[100010],num2[100010],len1=strlen(number1)-1,len2=strlen(number2)-1,cnt=0,flag=1;
	for(;len1>=0;len1--){
		num1[len1]=number1[cnt++]-'0';
	}
	for(cnt=0;len2>=0;len2--){
	    num2[len2]=number2[cnt++]-'0';
	}
	if(strlen(number1)==strlen(number2)){
		int len=strlen(number1);
		cnt=len-1;
		for(;cnt>=0;cnt--){
			if(num1[cnt]<num2[cnt]){
				flag=0;
				break;
			}
		}
	}

	if(strlen(number1)<strlen(number2)){
		sub(num2,num1,strlen(number2));
		flag=0;
	}
	
	if(strlen(number1)==strlen(number2)&&flag==0){
		sub(num2,num1,strlen(number2));
		flag=0;
	}
	if(strlen(number1)>strlen(number2)){ 
		sub(num1,num2,strlen(number1));
		flag=1;
	}
	if(strlen(number1)==strlen(number2)&&flag==1){
		sub(num1,num2,strlen(number1));
		flag=1;
	}

	cnt=byte-1;
	
	if(byte==0){
		printf("0");
	} 

	if(flag==0){
		printf("-");
		for(;cnt>=0;cnt--){
			printf("%d",result[cnt]);
		}
	}else{
		for(;cnt>=0;cnt--){
			printf("%d",result[cnt]);
	    }
	}
	

	return 0;
} 
