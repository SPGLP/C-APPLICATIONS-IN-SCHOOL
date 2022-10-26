#include<stdio.h>

void M1(){
    char S;
    int num;
    int a,b,c,d;
A:
    printf("请输入一个五位数");
    scanf("%d",&num);
    a = num / 10000;    //万位
    b = num / 1000;     //千位
    c = num % 100;      //十位
    d = num %10;        //个位
    if(a == d && b == c) 
        printf("此为回文数\n");
    else 
        printf("这不是回文数\n");
    print("\n好玩吗，还想再玩一次吗? [输入 Y 再来一次] \n");
    scanf("%s",&S);
    if(S == 'Y') 
        goto A;
}

void M2(){

}

int main(){
    int mode;
    printf("made by LSL\n");
    printf("\n");
    printf("请选择模式\n");
    printf("1 - 普通模式\n");
    printf("2 - 超级模式\n");
    scanf("%d",&mode);
    if(mode = 1){
        M1();
    } else {
        M2();
    }
    return 0;
}
