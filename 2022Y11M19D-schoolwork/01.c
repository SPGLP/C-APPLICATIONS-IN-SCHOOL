/*
Programmer : LSL01
Date : 2022.11.19
Tools : VScode editor ; gcc and gdb of Dev-cpp
Type : schoolwork

!!! Tips : all of the files is written by UTF-8 !!!

*/

#include<stdio.h>

int main(){
    int i;
    int a,b,c;
    for (i = 100; i <= 999; i++){
        a = i / 100;
        b = (i / 10) % 10;
        c = i % 10;
        if (a * a * a + b * b * b + c * c * c == i){
            printf("%d^3 + %d^3 + %d^3 = %d\n",a,b,c,i);
        }
    }
    return 0;
}