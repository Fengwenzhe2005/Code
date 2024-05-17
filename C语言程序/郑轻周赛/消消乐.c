#include<stdio.h>
#include<string.h>

int main(){
	char ch1[1000000];
	char ch2[1000000];
	scanf("%s",&ch1);
	scanf("%s",&ch2);
	int cnt1=1,cnt2=1;
	for(;cnt1<=strlen(ch1);cnt1++){
		if(ch1[cnt1]==ch2[cnt2]){
			cnt2++;
		} 
		if(cnt2>=2){
			break;
		}
	}
	if(cnt2>=2){
		printf("YES");
	}else{
		printf("NO");
	}
	return 0;
} 
