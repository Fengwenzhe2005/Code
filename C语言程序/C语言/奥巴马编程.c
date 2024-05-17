#include<stdio.h>
int main()
{
	int N,cnt1=1,cnt2=1,line;
	char ch;
	scanf("%d %c",&N,&ch);
	line=(N%2==0)?(N/2):((N+1)/2);
	for(;cnt2<=N;cnt2++){
		printf("%c",ch);
	}
	printf("\n");
	for(;cnt1<line-1;cnt1++){
		printf("%c",ch);
		cnt2=1;
		for(;cnt2<N-1;cnt2++){
			printf(" ");
		}
	printf("%c\n",ch);
    }
    cnt2=1;
	for(;cnt2<=N;cnt2++){
		printf("%c",ch);
	}
	
	return 0; 
}
