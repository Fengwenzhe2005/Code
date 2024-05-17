#include<iostream>
#include<algorithm>
#include<string>
#include<bits/stdc++.h>
#define ll long long
#define foe(i,a,b) for(int i=a;i<=b;i++)
#define endl '\n'

using namespace std;
typedef long long LL;
void dtob(int n){
	if(n) {
		print(n>>1);
		cout<<(n&1)?1:0;	
	}
}

int main(){
	int a;
	cin>>a;
	print(a);
	return 0;
}
