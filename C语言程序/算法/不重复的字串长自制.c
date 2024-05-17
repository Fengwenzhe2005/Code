#include<stdio.h>

int lengthOfLongestSubstring(char* s) {
	int i=0,j=0,a[100]={0},len=0;
	while(s[i]-' '>=0&&s[j]-' '>=0){
			if(a[s[j]-' ']==0){
				a[s[j]-' ']++;
				j++;
			}else{
				if(len<j-i){
					len=j-i;
				}
			while(a[s[j]-' ']!=0){
				a[s[i]-' ']--;
				i++;
			}
			}
		}
	if(len<j-i){
		len=j-i;
	}
	return len;
}

int main(){
	char s[1000];
	gets(s);
	int len=lengthOfLongestSubstring(s);
	printf("%d",len);
	return 0;
} 
