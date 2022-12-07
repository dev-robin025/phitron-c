#include <stdio.h>

int main()
{
    int matrix[3][3];

    for (int r = 0; r < 3; r++)
        for (int c = 0; c < 3; c++)
            scanf("%d", &matrix[r][c]);

    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matrix[j][i]);
        }
        printf("\n");
    }

    return 0;
}