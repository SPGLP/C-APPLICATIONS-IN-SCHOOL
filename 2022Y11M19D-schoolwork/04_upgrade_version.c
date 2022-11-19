#include <stdio.h>

int main()
{
    int line;
    int a, b;
    int i, j;
    char againYN;
    printf("please input number:");
    scanf("%d", &line);
    if (line % 2 == 0)
    {
        a = line / 2;
        b = line / 2;
    }
    else
    {
        a = line / 2 + 1;
        b = line / 2;
    }
    // 5
    // 4
    for (i = 1; i <= line; i++)
    {
        if (i <= a)
        {
            for (j = 1; j <= a - i; j++)
            {
                printf(" ");
            }
            for (j = 1; j <= (i - 1) * 2 + 1; j++)
            {
                printf("*");
            }
        }
        else
        {
            for (j = 1; j <= i - (b + 1); j++)
            {
                printf(" ");
            }
            for (j = 1; j <= (b - (i - a)) * 2 + 1; j++)
            {
                printf("*");
            }
        }
        printf("\n");
    }
}