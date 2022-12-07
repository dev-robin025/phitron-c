#include <stdio.h>
#include <string.h>

int main()
{
    char word[100];
    scanf("%s", word);

    for (int i = 0; i < strlen(word); i++)
    {
        if (word[i] >= 'a')
            word[i] = word[i] - 32;
        else
            word[i] = word[i] + 32;
    }

    printf("%s", word);

    return 0;
}
