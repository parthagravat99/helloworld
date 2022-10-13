#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if (i == 1 && (j >= 1 && j <= 5))
            {
                printf("* ");
            }
            else if ((i == 2 || i == 5) && (j >= 2 && j <= 6))
            {
                printf("* ");
            }
            else if ((i == 3 || i == 4) && ((j >= 2 && j <= 3) || (j >= 6 && j <= 7)))
            {
                printf("* ");
            }
            else if (i == 6 && (j >= 2 && j <= 5))
            {
                printf("* ");
            }
            else if ((i >= 7 && i <= 9) && (j >= 2 && j <= 3))
            {
                printf("* ");
            }
            else if (i == 10 && (j >= 1 && j <= 4))
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