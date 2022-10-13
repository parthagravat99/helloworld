#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 7; i++)
    {
        for (j = 1; j <= 9; j++)
        {
            if ((i == 1 || i == 2) && (j >= 6 - i && j <= 4 + i))
            {
                printf("* ");
            }
            else if ((i == 3 || i == 4 || i == 5) && (j >= i - 2 && j <= 12 - i))
            {
                printf("* ");
            }
            else if (i == 6 && ((j >= 2 && j <= 3) || (j >= 7 && j <= 8)))
            {
                printf("* ");
            }
            else if (i == 7 && (j == 1 || j == 9))
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