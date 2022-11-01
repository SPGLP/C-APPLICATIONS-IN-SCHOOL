//本文件用于测试gbk编码
//因为Dev-Cpp不支持UTF-8编码导致中文乱码，在此测试将vscode的编码方式设置为gbk
#include<stdio.h>

int main(){
    int a;
    printf("你好，世界");    //你好世界！Hello World!
    scanf("%d",&a);
    return 0;
}