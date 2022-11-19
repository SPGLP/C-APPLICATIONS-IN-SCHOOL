#include<stdio.h>

int prime(int n){   //判断是否为素数
    int i;
    for (i = 2; i < n; i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int a,b,c;
    for (a = 6; a <= 5000; a += 2){
        for (b = 2; b <= a / 2; b++){
            c = a - b;
            if (prime(b) && prime(c)){
                printf("%d = %d + %d\n",a,b,c);
            }
        }
    }
    return 0;
}