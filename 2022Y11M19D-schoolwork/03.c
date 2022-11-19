#include<stdio.h>
//#include<math.h>

int main(){
    int n;
    int i;
    int n_pow;
    int temp_sum,temp_m,temp_p;
    printf("Please input number(End with -1):");
    scanf("%d",&n);
    while (n != -1){
        n_pow = (n * n * n) / n;
        //printf("%d\n",n_pow);
        if (n_pow % 2 == 0){
            temp_sum = 0;
            temp_m = n_pow - 1;
            temp_p = n_pow + 1;
        } else {
            temp_sum = n_pow;
            temp_m = n_pow - 2;
            temp_p = n_pow + 2;
        }
        for (i = 1; i < n; i += 2){
            temp_sum = temp_sum + temp_m + temp_p;
            temp_m -= 2;
            temp_p += 2;
            //printf("%d,%d,%d\n",temp_sum,temp_m,temp_p);
        }
        //printf("%d\n",temp_sum);
        if (temp_sum == (n * n * n)){
            printf("%d^3 = ",n);
            for (i = temp_m + 2; i < temp_p; i += 2){
                printf("%d",i);
                if (i + 2 < temp_p){
                    printf(" + ");
                }
            }
            printf("\n");
        }
        printf("Please input number(End with -1):");
        scanf("%d",&n);
    }
    return 0;
}



/*
               NOTE
引用 math.h 是因为一开始使用的是 pow() 函数
但实际测试后，发现pow函会导致一些“误差”，比如
pow(n,3) / n 
会导致返回结果为24而不是25。

本程序使用了“中值法”。

This application write by UTF-8.
*/