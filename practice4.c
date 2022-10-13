#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 6; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if (i == 1 && ((j == 2 || j == 3) || (j == 5 || j == 6)))
            {
                printf("* ");
            }
            else if (i == 2 && (j >= 1 && j <= 7))
            {
                printf("* ");
            }
            else if ((i >= 3 && (j >= i - 2 && j <= 10 - i)))
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}