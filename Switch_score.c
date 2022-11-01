#include<stdio.h>

int main(){
    int score,S_score;
    char level_output;
    printf("输入学生成绩：");
    scanf("%d",&score);
    S_score = score / 10;
    switch (S_score)
    {
    case 10:
        /* code */
    case 9:
        level_output = 'A';break;
    case 8:
        level_output = 'B';break;
    case 7:
        level_output = 'C';break;
    case 6:
        level_output = 'D';break;
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
        level_output = 'F';break;
    default:
        printf("数据错误\n");
    }
    printf("成绩等级：%c",level_output);
    return 0;
}