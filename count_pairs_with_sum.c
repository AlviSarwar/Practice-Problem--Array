// Count the pairs (i < j) whose elements add up to a target sum.
#include <stdio.h>

int main(void)
{
    int arr[] = {1, 5, 7, -1, 5};
    int target = 6;
    int n = sizeof(arr) / sizeof(arr[0]);
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                count++;
            }
        }
    }

    printf("Pairs with sum %d: %d\n", target, count);
    return 0;
}
