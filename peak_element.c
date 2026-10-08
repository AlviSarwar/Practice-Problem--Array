// Find a peak element: one that is not smaller than its neighbours.
// The first and last elements only have one neighbour to compare against.
#include <stdio.h>

int main(void)
{
    int arr[] = {1, 3, 20, 4, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        int left_ok = (i == 0) || (arr[i] >= arr[i - 1]);
        int right_ok = (i == n - 1) || (arr[i] >= arr[i + 1]);

        if (left_ok && right_ok)
        {
            printf("Peak element: %d (index %d)\n", arr[i], i);
            return 0;
        }
    }

    // Unreachable for a non-empty array, kept for safety.
    printf("No peak element found\n");
    return 0;
}
