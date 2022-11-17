#include <stdio.h>

// You are given a positive integer n and after that a positive integer array of size n. Now print the sum of last digit of the given n integers.

int main()
{
    int n, sum = 0;
    scanf("%d", &n);

    int nums[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
        sum += nums[i] % 10;
    }

    printf("%d", sum);

    return 0;
}