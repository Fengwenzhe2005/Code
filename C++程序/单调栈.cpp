#include<iostream>

using namespace std;
const int N=10010;

int a[N],q[N];

int main(){
	int n,i=0,tt=-1;
	cin>>n;
	
	for(;i<n;i++){
		cin>>a[i]; 
		while(tt>=0&&q[tt]>=a[i]){
			tt--;
		} 
		 
		if(tt==-1){
			cout<<-1<<' ';
		}else{
			cout<<q[tt]<<' ';	
		}
		
		q[++tt]=a[i];
				
	}
	
	return 0;
}

 
