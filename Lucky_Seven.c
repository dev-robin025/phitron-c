#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        char word[20], rev[20];
        scanf("%s", word);

        int l = strlen(word);

        for (int j = l - 1; j >= 0; j--)
            rev[l - (j + 1)] = word[j];

        if (strcmp(word, rev) != 0)
            printf("Not Palindrome\n");

        else
        {
            if (l > 7)
                printf("%c%d%c\n", word[0], l - 2, word[l - 1]);

            else
                puts(word);
        }
    }

    return 0;
}