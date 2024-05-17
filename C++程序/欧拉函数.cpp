#include<iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	while(n--){
		int num,phi;
		cin>>num;
		phi=num;
		for(int i=2;i*i<=num;i++){
			if(num%i==0){
				while(num%i==0) num/=i;
			phi=phi/i*(i-1);
			}
		}
		if(num>1) phi=phi/num*(num-1);
		printf("%d\n",phi);
	}
	
	return 0;
} 
