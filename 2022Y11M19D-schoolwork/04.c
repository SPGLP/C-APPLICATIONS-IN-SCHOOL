#include<stdio.h>
#include<math.h>

int main(){
    int i,j;
    int s;
    for (i = 1; i < 10; i++){
        s = abs(5 - i);
        for (j = 1; j <= s; j++){
            printf(" ");
        }
        for (j = 1; j <= abs(s - 4) * 2 + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}