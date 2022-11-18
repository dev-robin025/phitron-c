#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n, count = 0;
        scanf("%d", &n);
        char str[n];
        scanf("%s", str);

        for (int ch = 0; ch < strlen(str) - 1; ch++)
        {
            char pair[2];
            pair[0] = str[ch];
            pair[1] = str[ch + 1];
            pair[2] = '\0';
            printf("%d ", ch);

            if (strcmp(pair, "01") == 0 || strcmp(pair, "10") == 0)
            {
                count++;
            }
        }
        printf("\n%d", count);
    }

    return 0;
}