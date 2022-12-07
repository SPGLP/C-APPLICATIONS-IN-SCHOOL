#include<stdio.h>
#define PI 3.14

int main(){
    double a(double r);
    double inpR;
    double outS;
    printf("please input R:\n");
    scanf("%lf",&inpR);
    outS = a(inpR);
    printf("S = %0.2lf",outS);
    return 0;
}

double a(double r) {
    double S;
    S = PI * r * r;
    return S;
}