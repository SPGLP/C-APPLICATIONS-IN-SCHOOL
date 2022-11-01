#include<stdio.h>

int main(){
    int score;
    char S_level;
    printf("please input a score(0~100): ");
    scanf("%d",&score);
    if(score >= 0 && score <= 100){
        if(score >= 90 && score <= 100){
            S_level = 'A';
        }
        else if(score >= 80 && score < 90){
            S_level = 'B';
        }
        else if(score >= 70 && score < 80){
            S_level = 'C';
        }
        else if(score >= 60 && score < 70){
            S_level = 'D';
        }
        else {
            S_level = 'F';
        }
    } else {
        printf("INPUT ERROR!");
        return 0;
    }
    printf("%c",S_level);
}