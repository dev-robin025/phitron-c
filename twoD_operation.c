#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int arr[n][m];
    for (int r = 0; r < n; r++)
        for (int c = 0; c < m; c++)
        {
            scanf("%d", &arr[r][c]);

            if (arr[r][c] == r + 1 && arr[r][c] == c + 1)
            {
                arr[r][c] += 3;
                continue;
            }
            else if (arr[r][c] == r + 1)
            {
                arr[r][c] += 2;
                continue;
            }
            else if (arr[r][c] == c + 1)
            {
                arr[r][c]++;
                continue;
            }
        }

    for (int i = 0; i < n; i++)
    {
        for (int c = 0; c < m; c++)
            printf("%d ", arr[i][c]);

        printf("\n");
    }

    return 0;
}