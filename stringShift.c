
#include <stdio.h>
#include <string.h>

int main()
{
    char string[100];
    int n;

    scanf("%s %d", string, &n);

    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] > 'z' - n)
        {
            int fill = 'z' - string[i];
            int dist = 'a' + (n - fill);
            printf("%c", dist - 1);
        }
        else
            printf("%c", string[i] + n);
    }

    return 0;
}
