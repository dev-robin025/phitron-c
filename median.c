
#include <stdio.h>

int findMedian(int nums[], int len);

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("median is %d", findMedian(arr, n));

    return 0;
}

int findMedian(int nums[], int len)
{

    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (nums[i] > nums[j])
            {
                nums[i] += nums[j];
                nums[j] = nums[i] - nums[j];
                nums[i] = nums[i] - nums[j];
            }
        }
        printf("%d ", nums[i]);
    }

    if (len % 2 == 0)
    {
        int median = nums[len / 2] + nums[(len / 2) - 1];
        return median / 2;
    }
    else
        return nums[len / 2];
}
