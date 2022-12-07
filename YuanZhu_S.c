#include<stdio.h>
#define PI 3.14

int main(){
    double a(double r, double h);
    double inpR, inpH;
    double outV;
    printf("please input R and H:\n");
    scanf_s("%lf %lf",&inpR, &inpH);
    outV = a(inpR, inpH);
    printf("V = %0.2lf",outV);
    return 0;
}

double a(double r, double h) {
    double V;
    V = PI * r * r * h;
    return V;
}