#include<stdio.h>

int main(){
    char a;
    scanf("%c",&a);
    switch(a){
        case 'b':printf("严禁发布色情内容，严禁涉政");
        break;
        case 'm':printf("萌新不推荐使用 vs");
        break;
        case 'w':printf("本群可以灌水但不要一直灌水");
        break;
        case 't':printf("多读书多动手，编程能力是练出来的不是想出来的");
        break;
        case 'a':printf("掌握提问艺术，从你我他做起");
        break;
        case 'o':printf("oj 平台如果自己原来有一个账号的话用学校注册的账户继续往后写就行了，不需要把写过的题再交一遍。");
        break;
        case 's':printf("编写代码务必注意代码规范");
        break;
    }
    return 0;
}
