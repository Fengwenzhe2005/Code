#include<iostream>

using namespace std;

int n,res[10],num[10];

void print(){
	int i=1; 
    for(;i<=n;i++){
        printf("    %d",res[i]);
    }
    puts("");
}

void dfs(int u){
    if(u>n){
        print();
    }else{
        for(int i=1;i<=n;i++){
            if(num[i]==0){
                res[u]=i;
                num[i]=1;
                dfs(u+1);
                num[i]=0;
            }
        }
    }
}

int main(){
    scanf("%d",&n);
    dfs(1);
    return 0;
}
    
