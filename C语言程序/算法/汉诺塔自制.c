#include<stdio.h>

void hanoi(char A,char B,char C,int n){
	if(n==1){
		printf("��%c�ϵ�һ��Բ�̴�%c�ƶ���%c��\n",A,A,C);
		return ;
	}else{
		hanoi(A,C,B,n-1);
		printf("��%c�ϵ�һ��Բ�̴�%c�ƶ���%c��\n",A,A,C);
		hanoi(B,A,C,n-1);
		return ; 
	}
}

int main() {
	int n;
	scanf("%d",&n);
	hanoi('A','B','C',n);
	return 0; 
}
