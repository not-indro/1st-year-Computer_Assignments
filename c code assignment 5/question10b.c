#include <stdio.h>
int main()
{
    int n, i, j;
    printf("Enter the number of lines : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (j % 2)
            {
                printf(" 1 ");
            }
            else
            {
            printf("0";
            }

            printf("\n");
        }
        return 0;
    }