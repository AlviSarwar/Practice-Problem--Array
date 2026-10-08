// Find a contiguous subarray with a given sum (sliding window).
// Works for arrays of non-negative integers. Indices are printed 1-based.
#include <stdio.h>

int main(void)
{
    int num[] = {15, 2, 4, 8, 9, 5, 10, 23};
    int n = sizeof(num) / sizeof(num[0]);
    int target = 23;

    int current = 0;
    int start = 0;
    int found = 0;

    for (int end = 0; end < n; end++)
    {
        current += num[end];

        // Shrink the window from the left while the sum is too large.
        while (current > target && start <= end)
        {
            current -= num[start];
            start++;
        }

        if (current == target && start <= end)
        {
            printf("Subarray found from index %d to %d\n", start + 1, end + 1);
            found = 1;
        }
    }

    if (!found)
    {
        printf("No subarray with sum %d\n", target);
    }

    return 0;
}
