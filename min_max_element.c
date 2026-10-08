// Find the minimum and maximum elements of an array in a single pass.
#include <stdio.h>

int main(void)
{
    int arr[] = {1, 423, 6, 46, 34, 23, 13, 53, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int min = arr[0];
    int max = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("min = %d, max = %d\n", min, max);
    return 0;
}
