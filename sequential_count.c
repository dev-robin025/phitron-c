#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    char signs[n];
    scanf("%s", signs);

    int count = 1, max = 0;

    for (int i = 0; i < strlen(signs); i++)
    {
        if (signs[i] == signs[i + 1])
        {
            count++;
            if (count > max)
                max = count;
        }
        else
            count = 1;
    }

    printf("%d", max);

    return 0;
}