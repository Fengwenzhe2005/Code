#include<stdio.h>
 
int main(){
    int n,flag=1;
    long long h;
    long long p[1010]; 
    scanf("%d %lld",&n,&h);
 
    /*输入数据*/   
    int cnt=0;
    long long int num=0;
    for(;cnt<n;cnt++){
        scanf("%lld",&num);
        /*判断是否大于h*/
        if(num>h){
        flag=0;
        }
        p[cnt]=num;
        num=0;
    }
 
    /*排序（按从小到大）*/
    int j=0,i=0;
	long long t;
    for(;j<n;j++,i=j){
        for(;i<n;i++){
            if(p[j]>p[i]){
                t=p[i];
                p[i]=p[j];
                p[j]=t;
            }
        }
    }
     
    /*判断是否为等差数列*/
    cnt=2;
    long long d=p[1]-p[0];
    for(;cnt<n;cnt++){
        if(p[cnt]-p[cnt-1]!=num){
        flag=0;
        }
    }
     
    if(flag){
        printf("我要易大山啦!");  
    }else{
        printf("像一直在被优化，没队要的是我");
    }
    return 0;
} 
