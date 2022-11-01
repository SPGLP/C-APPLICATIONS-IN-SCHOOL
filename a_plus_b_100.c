#include<stdio.h>

int main(){
    int a,b;
    printf("请输入两个数 a b （空格分开）: ");
    scanf("%d %d",&a,&b);
    if(a + b > 100){
        printf("百位以上的数字：%d",(a + b)/100);
    } else {
        printf("两数字之和：%d",a + b);
    }
    return 0;
}