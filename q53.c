#include <stdio.h>
void main()
{
    int i, j;
    for (i = 6; i >= 1; i--)
    {
        for (j = 1; j <= (2 * i) - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}