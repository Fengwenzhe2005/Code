#include <stdio.h>

int Count_Digit ( const int N, const int D );

int main()
{
    int N, D;
    
    scanf("%d %d", &N, &D);
    printf("%d\n", Count_Digit(N, D));
    return 0;
}

int Count_Digit ( const int N, const int D ){
    int a[10]={0},num;
    num=(N>0)?N:(-N);
    while(num/10!=0){
        a[num%10]++;
        num=num/10;
    }
    a[num]++;
    return a[D];
}
