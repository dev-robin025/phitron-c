#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int nums[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    int a = 0, b = 0, c = 0, d = 0;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] % 2 == 0 && a < nums[i])
        {
            a += nums[i];
            b = a - nums[i];
            a -= b;
            continue;
        }
        else if (c < nums[i])
        {
            int temp = c;
            c = nums[i];
            d = temp;
            continue;
        }
        else if (d < nums[i])
            d = nums[i];
    }

    int oddSum = c + d;
    int evenSum = a + b;

    if (oddSum > evenSum)
        printf("%d", oddSum);
    else
        printf("%d", evenSum);

    return 0;
}