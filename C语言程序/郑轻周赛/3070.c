#include<stdio.h>
 
int main(){
    int n,flag=1;
    long long h;
    long long p[1010]; 
    scanf("%d %lld",&n,&h);
 
    /*��������*/   
    int cnt=0;
    long long int num=0;
    for(;cnt<n;cnt++){
        scanf("%lld",&num);
        /*�ж��Ƿ����h*/
        if(num>h){
        flag=0;
        }
        p[cnt]=num;
        num=0;
    }
 
    /*���򣨰���С����*/
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
     
    /*�ж��Ƿ�Ϊ�Ȳ�����*/
    cnt=2;
    long long d=p[1]-p[0];
    for(;cnt<n;cnt++){
        if(p[cnt]-p[cnt-1]!=num){
        flag=0;
        }
    }
     
    if(flag){
        printf("��Ҫ�״�ɽ��!");  
    }else{
        printf("��һֱ�ڱ��Ż���û��Ҫ������");
    }
    return 0;
} 
