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
	    f[i]=1;//�����������ǰ�����γ��������� 
	    for(int j=i-1;j>=0;j--)
			if(a[i]>a[j]) f[i]=max(f[i],f[j]+1); //�����ǰ������γ��������� 
	}
		
	for(int i=0;i<n;i++) res=max(res,f[i]);
    printf("%d\n",res);
	return 0;
} 
