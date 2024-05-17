#include<iostream>
#include<algorithm>
using namespace std;

const int N=5010;
int a[N],f[N],rev[N];
int n,res;

int main(){
	cin>>n;
	for(int i=0;i<n;i++) scanf("%d",&a[i]);

	for(int i=0;i<n;i++){
	    f[i]=1;//如果不跟其他前面数形成上升序列 
	    for(int j=i-1;j>=0;j--)
			if(a[i]>a[j]) f[i]=max(f[i],f[j]+1); //如果与前面的数形成上升序列 
	}
		
	for(int i=0;i<n;i++) res=max(res,f[i]);
    printf("%d\n",res);
	return 0;
} 
