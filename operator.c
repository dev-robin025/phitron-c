#include <stdio.h>
#include <string.h>

int main()
{
    char op[20];
    scanf("%s", op);

    int a, b, sum = 0, product = 0;
    scanf("%d %d", &a, &b);

    for (int i = 0; i < strlen(op); i++)
    {
        if (op[i] == '+')
            sum += a + b;
        if (op[i] == '*')
            product += a * b;
    }

    printf("%d ", sum + product);

    return 0;
}