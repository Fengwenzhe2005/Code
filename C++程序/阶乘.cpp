#include<iostream>
#include<vector>
using namespace std;

vector <int> n;

int main(){
	int num,cnt=0;
	scanf("%d",&num);
	
	n.push_back(1);
	int t=0;
	for(int i=2;i<=num;i++){
		for(int j=0;j<n.size();j++){
			t+=n[j]*i;
			n[j]=t%10;
			t/=10;
		}
		while(t){
			n.push_back(t%10);
			t/=10;
		}
	} 
	
	for(int i=0;n[i]==0;i++) cnt++;
	printf("%d",cnt);
	
	return 0;
	
} 
